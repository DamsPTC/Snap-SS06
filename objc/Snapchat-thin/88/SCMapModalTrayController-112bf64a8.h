// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapModalTrayController
// Superclass: NSObject
// Address: 0x112bf64a8

@interface SCMapModalTrayController

// Property: scrimView; attributes: T@"UIView",R,N,V_scrimView
// Property: trayHostFrameSize; attributes: T{CGSize=dd},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: trayViewController; attributes: T@"UIViewController<SCMapTrayViewController>",R,N
// Property: currentPosition; attributes: TQ,R,N
// Property: possibleInteractivePositions; attributes: TQ,R,N
// Property: interactionObservable; attributes: T@"SCObservable",R,N

// -[SCMapModalTrayController initWithHostParentViewController:trayViewController:sizingDelegate:configuration:scrimBackgroundColor:scrimInteractionDelegate:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x109202068

// -[SCMapModalTrayController initWithModalParentViewController:trayViewController:configuration:scrimBackgroundColor:trayViewControllerDelegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10920228c

// -[SCMapModalTrayController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109202504

// -[SCMapModalTrayController show]
// Type encoding: v16@0:8
// Implementation: 0x109202548

// -[SCMapModalTrayController showWithPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1092025f0

// -[SCMapModalTrayController hideAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092026ac

// -[SCMapModalTrayController interactionObservable]
// Type encoding: @16@0:8
// Implementation: 0x1092026b4

// -[SCMapModalTrayController trayViewController]
// Type encoding: @16@0:8
// Implementation: 0x1092026dc

// -[SCMapModalTrayController currentPosition]
// Type encoding: Q16@0:8
// Implementation: 0x1092026e4

// -[SCMapModalTrayController possibleInteractivePositions]
// Type encoding: Q16@0:8
// Implementation: 0x1092026ec

// -[SCMapModalTrayController setTrayPosition:animated:interactionMethod:]
// Type encoding: v36@0:8Q16B24Q28
// Implementation: 0x1092026f4

// -[SCMapModalTrayController setTrayPosition:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1092026fc

// -[SCMapModalTrayController trayHeightForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x109202704

// -[SCMapModalTrayController trayAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x10920270c

// -[SCMapModalTrayController resizeTrayAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x109202714

// -[SCMapModalTrayController _setupObservables]
// Type encoding: v16@0:8
// Implementation: 0x10920271c

// -[SCMapModalTrayController _handleTrayInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x109202868

// -[SCMapModalTrayController _setupScrimInView:additionalBottomInset:backgroundColor:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x1092029ac

// -[SCMapModalTrayController _handleScrimInteraction]
// Type encoding: v16@0:8
// Implementation: 0x109202b0c

// -[SCMapModalTrayController _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x109202b88

// -[SCMapModalTrayController _handleDismiss]
// Type encoding: v16@0:8
// Implementation: 0x109202d10

// -[SCMapModalTrayController _setGestureRecognitionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109202d44

// -[SCMapModalTrayController trayHostFrameSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x109202d74

// -[SCMapModalTrayController trayFullishOffsetFromTopForTrayController:]
// Type encoding: d24@0:8@16
// Implementation: 0x109202df8

// -[SCMapModalTrayController mapTrayController:didTemporarilyResizeToHeight:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x109202e1c

// -[SCMapModalTrayController mapTrayController:blockForAnchoringToHeight:animated:]
// Type encoding: @?36@0:8@16d24B32
// Implementation: 0x109202ea4

// -[SCMapModalTrayController scrimView]
// Type encoding: @16@0:8
// Implementation: 0x109202ff0

// -[SCMapModalTrayController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109202ff8

@end
