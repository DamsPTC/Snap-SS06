// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureLensOverlayController
// Superclass: NSObject
// Address: 0x112ad1f78

@interface SCFeatureLensOverlayController

// Property: exploreActionObservable; attributes: T@"SCObservable",R,N,V_exploreActionSubject
// Property: backgroundTapObservable; attributes: T@"SCObservable",R,N,V_backgroundTapSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureLensOverlayController initWithBackgroundLayoutStrategy:foregroundLayoutStrategy:ctaStyle:backgroundViewProvider:]
// Type encoding: @48@0:8@16@24Q32@40
// Implementation: 0x1061d8880

// -[SCFeatureLensOverlayController configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d8990

// -[SCFeatureLensOverlayController showWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d89e0

// -[SCFeatureLensOverlayController updateActionButtonTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d8a44

// -[SCFeatureLensOverlayController hide]
// Type encoding: v16@0:8
// Implementation: 0x1061d8ab4

// -[SCFeatureLensOverlayController pointInsideActionButton:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1061d8ac0

// -[SCFeatureLensOverlayController _updateOverlayWithShow:overlayViewModel:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1061d8b60

// -[SCFeatureLensOverlayController _updateUiVisibility]
// Type encoding: v16@0:8
// Implementation: 0x1061d8bec

// -[SCFeatureLensOverlayController _updateOverlayViewModelWithActionButtonTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061d8c00

// -[SCFeatureLensOverlayController _showOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1061d8ce4

// -[SCFeatureLensOverlayController _removeOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1061d8e18

// -[SCFeatureLensOverlayController _animateContentVisible:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1061d8ed8

// -[SCFeatureLensOverlayController _animationFinishedWithUIShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061d9404

// -[SCFeatureLensOverlayController backgroundOverlay]
// Type encoding: @16@0:8
// Implementation: 0x1061d9418

// -[SCFeatureLensOverlayController _didTapBackgroundOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1061d94dc

// -[SCFeatureLensOverlayController foregroundOverlay]
// Type encoding: @16@0:8
// Implementation: 0x1061d94ec

// -[SCFeatureLensOverlayController exploreActionObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061d9608

// -[SCFeatureLensOverlayController backgroundTapObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061d9610

// -[SCFeatureLensOverlayController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061d9618

@end
