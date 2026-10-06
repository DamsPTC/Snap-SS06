// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSKOverlay
// Superclass: NSObject
// Address: 0x112a39b38

@interface SCSKOverlay

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: params; attributes: T@"SCSKOverlayParams",R,N,V_params
// Property: loaded; attributes: TB,R,N,GisLoaded,V_loaded
// Property: state; attributes: Tq,R,N,V_state

// -[SCSKOverlay initWithOverlayBuilder:params:config:overlayLifecycleEvents:configProvider:appImpressionTracker:screen:backgroundWindow:mainQueuePerformer:]
// Type encoding: @88@0:8@?16@24@32@40@48@56@64@72@80
// Implementation: 0x10547a660

// -[SCSKOverlay stateDescription]
// Type encoding: @16@0:8
// Implementation: 0x10547a834

// -[SCSKOverlay position]
// Type encoding: q16@0:8
// Implementation: 0x10547a860

// -[SCSKOverlay presentOverlayInWindow:visible:loadedBlock:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10547a8d4

// -[SCSKOverlay _configureOverlayAndPresent:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10547aac8

// -[SCSKOverlay _presentOverlay]
// Type encoding: v16@0:8
// Implementation: 0x10547abdc

// -[SCSKOverlay dismissOverlay:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10547ad58

// -[SCSKOverlay storeOverlay:didFailToLoadWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10547aeb4

// -[SCSKOverlay _onLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x10547af6c

// -[SCSKOverlay storeOverlay:willStartPresentation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10547afa4

// -[SCSKOverlay storeOverlay:didFinishPresentation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10547b134

// -[SCSKOverlay storeOverlay:willStartDismissal:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10547b1c4

// -[SCSKOverlay storeOverlay:didFinishDismissal:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10547b254

// -[SCSKOverlay _emitLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10547b35c

// -[SCSKOverlay params]
// Type encoding: @16@0:8
// Implementation: 0x10547b400

// -[SCSKOverlay isLoaded]
// Type encoding: B16@0:8
// Implementation: 0x10547b408

// -[SCSKOverlay state]
// Type encoding: q16@0:8
// Implementation: 0x10547b410

// -[SCSKOverlay .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10547b418

@end
