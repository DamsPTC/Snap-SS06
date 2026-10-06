// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyGroupProfileScope
// Superclass: NSObject
// Address: 0x112bdbec8

@interface SCLegacyGroupProfileScope

// Property: uiContainer; attributes: T@"<SCUIContainer>",R,N,V_uiContainer
// Property: isOverlayPresentation; attributes: TB,R,N,V_isOverlayPresentation
// Property: containerViewController; attributes: T@"UIViewController",R,W,N,V_containerViewController
// Property: groupId; attributes: T@"NSString",R,C,N,V_groupId
// Property: sourcePageType; attributes: Tq,R,N,V_sourcePageType
// Property: sourcePageViewName; attributes: Tq,N,V_sourcePageViewName
// Property: delegate; attributes: T@"<SCLegacyGroupProfileScopeDelegate>",W,N,V_delegate
// Property: launchBehavior; attributes: TQ,N,V_launchBehavior
// Property: flashbackId; attributes: T@"NSString",C,N,V_flashbackId

// -[SCLegacyGroupProfileScope initWithContainerViewController:groupId:sourcePageType:delegate:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x108f7ef98

// -[SCLegacyGroupProfileScope initWithUiContainer:groupId:sourcePageType:delegate:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x108f7f0bc

// -[SCLegacyGroupProfileScope uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x108f7f1bc

// -[SCLegacyGroupProfileScope isOverlayPresentation]
// Type encoding: B16@0:8
// Implementation: 0x108f7f1c4

// -[SCLegacyGroupProfileScope containerViewController]
// Type encoding: @16@0:8
// Implementation: 0x108f7f1cc

// -[SCLegacyGroupProfileScope groupId]
// Type encoding: @16@0:8
// Implementation: 0x108f7f1e4

// -[SCLegacyGroupProfileScope sourcePageType]
// Type encoding: q16@0:8
// Implementation: 0x108f7f1ec

// -[SCLegacyGroupProfileScope sourcePageViewName]
// Type encoding: q16@0:8
// Implementation: 0x108f7f1f4

// -[SCLegacyGroupProfileScope setSourcePageViewName:]
// Type encoding: v24@0:8q16
// Implementation: 0x108f7f1fc

// -[SCLegacyGroupProfileScope delegate]
// Type encoding: @16@0:8
// Implementation: 0x108f7f204

// -[SCLegacyGroupProfileScope setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f7f21c

// -[SCLegacyGroupProfileScope launchBehavior]
// Type encoding: Q16@0:8
// Implementation: 0x108f7f228

// -[SCLegacyGroupProfileScope setLaunchBehavior:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108f7f230

// -[SCLegacyGroupProfileScope flashbackId]
// Type encoding: @16@0:8
// Implementation: 0x108f7f238

// -[SCLegacyGroupProfileScope setFlashbackId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f7f240

// -[SCLegacyGroupProfileScope .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f7f248

@end
