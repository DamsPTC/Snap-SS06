// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapTabletDemoTrayInteractionController
// Superclass: NSObject
// Address: 0x112bf6548

@interface SCMapTabletDemoTrayInteractionController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: trayViewController; attributes: T@"UIViewController<SCMapTrayViewController>",R,N,V_trayViewController
// Property: currentPosition; attributes: TQ,R,N,V_currentPosition
// Property: possibleInteractivePositions; attributes: TQ,R,N,V_possibleInteractivePositions
// Property: interactionObservable; attributes: T@"SCObservable",R,N

// -[SCMapTabletDemoTrayInteractionController initWithParentViewController:trayViewController:accessoryViewController:sizingDelegate:configuration:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10920359c

// -[SCMapTabletDemoTrayInteractionController interactionObservable]
// Type encoding: @16@0:8
// Implementation: 0x1092036d0

// -[SCMapTabletDemoTrayInteractionController hideAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1092036f8

// -[SCMapTabletDemoTrayInteractionController show]
// Type encoding: v16@0:8
// Implementation: 0x1092036fc

// -[SCMapTabletDemoTrayInteractionController showWithPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109203700

// -[SCMapTabletDemoTrayInteractionController resizeTrayAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x109203704

// -[SCMapTabletDemoTrayInteractionController setTrayPosition:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x109203708

// -[SCMapTabletDemoTrayInteractionController setTrayPosition:animated:interactionMethod:]
// Type encoding: v36@0:8Q16B24Q28
// Implementation: 0x109203710

// -[SCMapTabletDemoTrayInteractionController trayAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x109203724

// -[SCMapTabletDemoTrayInteractionController trayHeightForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10920372c

// -[SCMapTabletDemoTrayInteractionController _showPopover]
// Type encoding: v16@0:8
// Implementation: 0x109203734

// -[SCMapTabletDemoTrayInteractionController _hidePopover]
// Type encoding: v16@0:8
// Implementation: 0x109203a14

// -[SCMapTabletDemoTrayInteractionController popoverPresentationControllerDidDismissPopover:]
// Type encoding: v24@0:8@16
// Implementation: 0x109203a58

// -[SCMapTabletDemoTrayInteractionController possibleInteractivePositions]
// Type encoding: Q16@0:8
// Implementation: 0x109203b4c

// -[SCMapTabletDemoTrayInteractionController trayViewController]
// Type encoding: @16@0:8
// Implementation: 0x109203b54

// -[SCMapTabletDemoTrayInteractionController currentPosition]
// Type encoding: Q16@0:8
// Implementation: 0x109203b5c

// -[SCMapTabletDemoTrayInteractionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109203b64

@end
