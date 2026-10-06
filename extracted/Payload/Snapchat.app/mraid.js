/*!
 * Barebones mraid.js shim (MRAID 2.0 + 3.0 compatible surface)
*/

(function (global) {
  "use strict";

  // Don't override a real MRAID implementation
  if (global.mraid && typeof global.mraid.getState === "function") return;

  var VERSION = "3.0"; // still compatible with 2.0; you can set to "2.0" if desired

  var STATES = {
    LOADING: "loading",
    DEFAULT: "default",
    EXPANDED: "expanded",
    RESIZED: "resized"
  };

  // -----------------------------
  // Simple event system
  // -----------------------------
  var listeners = Object.create(null);

  function on(name, cb) {
    if (typeof cb !== "function") return;
    (listeners[name] = listeners[name] || []).push(cb);
  }

  function off(name, cb) {
    var arr = listeners[name];
    if (!arr) return;
    listeners[name] = arr.filter(function (fn) { return fn !== cb; });
  }

  function emit(name /*, ...args */) {
    var arr = listeners[name];
    if (!arr || !arr.length) return;
    var args = Array.prototype.slice.call(arguments, 1);
    arr.slice().forEach(function (fn) {
      try { fn.apply(null, args); } catch (e) {}
    });
  }

  // -----------------------------
  // Optional native bridge
  // -----------------------------
  function postToNative(action, payload) {
    var msg = { type: "mraid", action: action, payload: payload || {} };

    if (global.MRAID_NATIVE && typeof global.MRAID_NATIVE.postMessage === "function") {
      try { global.MRAID_NATIVE.postMessage(msg); return true; } catch (e) {}
    }
    if (global.webkit && global.webkit.messageHandlers && global.webkit.messageHandlers.mraid &&
        typeof global.webkit.messageHandlers.mraid.postMessage === "function") {
      try { global.webkit.messageHandlers.mraid.postMessage(msg); return true; } catch (e) {}
    }
    if (global.AndroidMraid && typeof global.AndroidMraid.postMessage === "function") {
      try { global.AndroidMraid.postMessage(JSON.stringify(msg)); return true; } catch (e) {}
    }
    return false;
  }

  // -----------------------------
  // Internal state
  // -----------------------------
  var _readyFired = false;
  var _state = STATES.LOADING;
  var _viewable = false;

  // Position in MRAID coordinates (DIP/CSS px)
  var _currentPosition = {
    x: 0,
    y: 0,
    width: 0,
    height: 0
  };

  // MRAID 3.0 exposure payload (minimal)
  var _exposure = {
    exposedPercentage: 0,
    visibleRectangle: null,
    occlusionRectangles: []
  };

  function setState(s) {
    if (!s || typeof s !== "string") return;
    if (_state === s) return;
    _state = s;
    emit("stateChange", _state);
  }

  function fireReadyIfNeeded() {
    if (_readyFired) return;
    _readyFired = true;
    emit("ready");
  }

  function setViewable(v) {
    v = !!v;
    if (_viewable === v) return;
    _viewable = v;
    emit("viewableChange", _viewable);
  }

  function setCurrentPosition(rect) {
    if (!rect || typeof rect !== "object") return;
    _currentPosition = {
      x: Number(rect.x) || 0,
      y: Number(rect.y) || 0,
      width: Math.max(0, Number(rect.width) || 0),
      height: Math.max(0, Number(rect.height) || 0)
    };
  }

  function fireSizeChange(w, h) {
    emit("sizeChange", Number(w) || 0, Number(h) || 0);
  }

  function setExposure(exposedPercentage, visibleRect, occlusionRects) {
    var pct = Number(exposedPercentage);
    if (!isFinite(pct)) pct = 0;
    pct = Math.max(0, Math.min(100, pct));

    var vr = null;
    if (visibleRect && typeof visibleRect === "object") {
      vr = {
        x: Number(visibleRect.x) || 0,
        y: Number(visibleRect.y) || 0,
        width: Math.max(0, Number(visibleRect.width) || 0),
        height: Math.max(0, Number(visibleRect.height) || 0)
      };
    }

    var occ = [];
    if (Array.isArray(occlusionRects)) {
      occ = occlusionRects.map(function (r) {
        return {
          x: Number(r.x) || 0,
          y: Number(r.y) || 0,
          width: Math.max(0, Number(r.width) || 0),
          height: Math.max(0, Number(r.height) || 0)
        };
      });
    }

    _exposure = {
      exposedPercentage: pct,
      visibleRectangle: vr,
      occlusionRectangles: occ
    };

    emit("exposureChange", _exposure);
  }

  // -----------------------------
  // Public MRAID surface (minimal)
  // -----------------------------
  var mraid = {
    getVersion: function () { return VERSION; },
    getState: function () { return _state; },

    addEventListener: function (event, listener) { on(event, listener); },
    removeEventListener: function (event, listener) { off(event, listener); },

    // Barebones: return false for all features
    supports: function () { return false; },

    isViewable: function () { return _viewable; },
    getCurrentPosition: function () { return { x: _currentPosition.x, y: _currentPosition.y, width: _currentPosition.width, height: _currentPosition.height }; },

    open: function (url) {
      url = String(url || "");
      if (!postToNative("cta_tapped", { url: url })) {
        try { global.open(url, "_blank"); } catch (e) {}
      }
    },

    close: function () {
      postToNative("close", {});
      if (_state === STATES.EXPANDED || _state === STATES.RESIZED) setState(STATES.DEFAULT);
    },

    expand: function () {
      postToNative("expand", {});
      setState(STATES.EXPANDED);
    },

    // -----------------------------
    // Harness control surface (non-standard)
    // -----------------------------
    __fireReady: function () {
      if (_state === STATES.LOADING) setState(STATES.DEFAULT);
      fireReadyIfNeeded();
    },

    __setState: function (s) { setState(String(s)); },
    __setViewable: function (v) { setViewable(v); },
    __setCurrentPosition: function (rect) { setCurrentPosition(rect); },
    __fireSizeChange: function (w, h) { fireSizeChange(w, h); },

    __setExposure: function (pct, visibleRect, occlusionRects) { setExposure(pct, visibleRect, occlusionRects); },

    // Convenience: emit arbitrary event (debug only)
    __nativeEmit: function (name /*, ...args */) {
      var args = Array.prototype.slice.call(arguments, 1);
      emit.apply(null, [String(name)].concat(args));
    }
  };

  global.mraid = mraid;

  // In browser (no bridge), auto-ready + viewable for convenience.
  var hasBridge =
    (global.MRAID_NATIVE && typeof global.MRAID_NATIVE.postMessage === "function") ||
    (global.webkit && global.webkit.messageHandlers && global.webkit.messageHandlers.mraid &&
      typeof global.webkit.messageHandlers.mraid.postMessage === "function") ||
    (global.AndroidMraid && typeof global.AndroidMraid.postMessage === "function");

  if (!hasBridge) {
    setViewable(true);
    if (document.readyState === "complete" || document.readyState === "interactive") {
      mraid.__fireReady();
    } else {
      document.addEventListener("DOMContentLoaded", function () { mraid.__fireReady(); });
    }
  }
})(typeof window !== "undefined" ? window : this);
