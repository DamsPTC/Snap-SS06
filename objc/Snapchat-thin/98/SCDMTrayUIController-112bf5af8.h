// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDMTrayUIController
// Superclass: NSObject
// Address: 0x112bf5af8

@interface SCDMTrayUIController

// Property: trayUIPresenter; attributes: T@"UIViewController",R,N
// Property: isPresenting; attributes: TB,R,N,V_isPresenting
// Property: trayHostFrameSize; attributes: T{CGSize=dd},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: trayViewController; attributes: T@"UIViewController<SCMapTrayViewController>",R,N
// Property: currentPosition; attributes: TQ,R,N
// Property: possibleInteractivePositions; attributes: TQ,R,N
// Property: interactionObservable; attributes: T@"SCObservable",R,N

// -[SCDMTrayUIController initWithParentViewController:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091fede0

// -[SCDMTrayUIController trayUIPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1091fee9c

// -[SCDMTrayUIController show]
// Type encoding: v16@0:8
// Implementation: 0x1091feef8

// -[SCDMTrayUIController showWithPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091ff090

// -[SCDMTrayUIController hideAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091ff094

// -[SCDMTrayUIController interactionObservable]
// Type encoding: @16@0:8
// Implementation: 0x1091ff09c

// -[SCDMTrayUIController dismiss]
// Type encoding: v16@0:8
// Implementation: 0x1091ff0c4

// -[SCDMTrayUIController trayViewController]
// Type encoding: @16@0:8
// Implementation: 0x1091ff0cc

// -[SCDMTrayUIController currentPosition]
// Type encoding: Q16@0:8
// Implementation: 0x1091ff0d4

// -[SCDMTrayUIController possibleInteractivePositions]
// Type encoding: Q16@0:8
// Implementation: 0x1091ff0dc

// -[SCDMTrayUIController setTrayPosition:animated:interactionMethod:]
// Type encoding: v36@0:8Q16B24Q28
// Implementation: 0x1091ff0e4

// -[SCDMTrayUIController setTrayPosition:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1091ff0ec

// -[SCDMTrayUIController trayHeightForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x1091ff0f4

// -[SCDMTrayUIController trayAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x1091ff0fc

// -[SCDMTrayUIController resizeTrayAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091ff104

// -[SCDMTrayUIController trayHostFrameSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1091ff10c

// -[SCDMTrayUIController mapTrayController:didTemporarilyResizeToHeight:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1091ff16c

// -[SCDMTrayUIController mapTrayController:blockForAnchoringToHeight:animated:]
// Type encoding: @?36@0:8@16d24B32
// Implementation: 0x1091ff1b0

// -[SCDMTrayUIController controllerPresentedInTrayWrapper:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091ff28c

// -[SCDMTrayUIController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091ff3c0

// -[SCDMTrayUIController hostViewController]
// Type encoding: @16@0:8
// Implementation: 0x1091ff42c

// -[SCDMTrayUIController _handleBackgroundTap]
// Type encoding: v16@0:8
// Implementation: 0x1091ff550

// -[SCDMTrayUIController _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x1091ff560

// -[SCDMTrayUIController _handleDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1091ff5f8

// -[SCDMTrayUIController _setupObservables]
// Type encoding: v16@0:8
// Implementation: 0x1091ff62c

// -[SCDMTrayUIController _handleTrayInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091ff778

// -[SCDMTrayUIController isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x1091ff8bc

// -[SCDMTrayUIController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091ff8c4

@end
