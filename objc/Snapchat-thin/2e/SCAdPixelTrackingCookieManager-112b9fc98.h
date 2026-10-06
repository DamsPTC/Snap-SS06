// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPixelTrackingCookieManager
// Superclass: NSObject
// Address: 0x112b9fc98

@interface SCAdPixelTrackingCookieManager

// Property: networkManager; attributes: T@"SCAdSerializingNetworkManager",R,N,V_networkManager
// Property: userAgentAdapter; attributes: T@"<SCAdNetworkUserAgentAdapter>",R,W,N,V_userAgentAdapter
// Property: isLoadingCookie; attributes: TB,N,V_isLoadingCookie
// Property: commonMetricsManager; attributes: T@"<SCAdCommonOperationMetricsManaging>",R,W,N,V_commonMetricsManager
// Property: settingsMetricsManager; attributes: T@"<SCAdSettingsOperationMetricsManaging>",R,W,N,V_settingsMetricsManager

// -[SCAdPixelTrackingCookieManager initWithNetworkManager:userAgentAdapter:configAdapter:commonMetricsManager:settingsMetricsManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10848a680

// -[SCAdPixelTrackingCookieManager updatePixelCookieIfNecessaryWithPixelToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848a7f8

// -[SCAdPixelTrackingCookieManager _requestPixelCookieWithPixelToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848a918

// -[SCAdPixelTrackingCookieManager _handleNetworkResponse:error:requestEndpoint:requestStartTimestamp:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x10848ac84

// -[SCAdPixelTrackingCookieManager _handlePixelCookieResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10848afb4

// -[SCAdPixelTrackingCookieManager setClientTTLCookie]
// Type encoding: v16@0:8
// Implementation: 0x10848b198

// -[SCAdPixelTrackingCookieManager networkManager]
// Type encoding: @16@0:8
// Implementation: 0x10848b33c

// -[SCAdPixelTrackingCookieManager userAgentAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10848b344

// -[SCAdPixelTrackingCookieManager isLoadingCookie]
// Type encoding: B16@0:8
// Implementation: 0x10848b35c

// -[SCAdPixelTrackingCookieManager setIsLoadingCookie:]
// Type encoding: v20@0:8B16
// Implementation: 0x10848b364

// -[SCAdPixelTrackingCookieManager commonMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10848b36c

// -[SCAdPixelTrackingCookieManager settingsMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10848b384

// -[SCAdPixelTrackingCookieManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10848b39c

// +[SCAdPixelTrackingCookieManager _isCookieSetWithCookieName:cookieDomain:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10848ad78

// +[SCAdPixelTrackingCookieManager cookieStorage]
// Type encoding: @16@0:8
// Implementation: 0x10848b18c

// +[SCAdPixelTrackingCookieManager isPixelCookieAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10848b328

@end
