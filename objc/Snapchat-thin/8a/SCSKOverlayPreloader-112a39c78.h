// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSKOverlayPreloader
// Superclass: NSObject
// Address: 0x112a39c78

@interface SCSKOverlayPreloader

// Property: overlayLifecycleEvents; attributes: T@"SCObservable",R,N,V_overlayLifecycleEvents
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSKOverlayPreloader initWithConfig:overlayFactory:configProvider:window:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10547be58

// -[SCSKOverlayPreloader preloadOverlay:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547bf9c

// -[SCSKOverlayPreloader _preloadOverlay:observer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10547c194

// -[SCSKOverlayPreloader _preloadedOverlayWithParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547c3d0

// -[SCSKOverlayPreloader _overlayPreloaded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10547c4b0

// -[SCSKOverlayPreloader _onOverlayLoaded:result:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10547c5f4

// -[SCSKOverlayPreloader presentOverlayWithParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x10547c6a0

// -[SCSKOverlayPreloader _presentOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x10547c77c

// -[SCSKOverlayPreloader dismissOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x10547c954

// -[SCSKOverlayPreloader _onOverlayDismissed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10547cafc

// -[SCSKOverlayPreloader overlayLifecycleEvents]
// Type encoding: @16@0:8
// Implementation: 0x10547cb40

// -[SCSKOverlayPreloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10547cb48

@end
