// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToStepProcessor
// Superclass: NSObject
// Address: 0x112a91fb8

@interface SCSendToStepProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToStepProcessor initWithSendFlowScope:sendToScopeLauncher:sendToScopeServices:sendToSelectionItemAdaptor:startupInfoService:appStartExperimentReader:promoteSnapService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105c2bbc0

// -[SCSendToStepProcessor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105c2bef8

// -[SCSendToStepProcessor processStep:uiContainer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c2bf4c

// -[SCSendToStepProcessor didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2bfd8

// -[SCSendToStepProcessor didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105c2c35c

// -[SCSendToStepProcessor _sendToConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c2c56c

// -[SCSendToStepProcessor _observeTriggerEventsWithMetadataHandler:uiContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c2c5c4

// -[SCSendToStepProcessor _onTriggerEvent:metadataHandler:uiContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105c2c794

// -[SCSendToStepProcessor _preloadSendToWithMetadataHandler:uiContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c2c8e4

// -[SCSendToStepProcessor _hasSendToConfigChanged:sendToScope:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105c2cb30

// -[SCSendToStepProcessor _launchSendTo:uiContainer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105c2ceb0

// -[SCSendToStepProcessor _launchSendToScope:uiContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c2d32c

// -[SCSendToStepProcessor _detachUIAndReleaseWithUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2d4d8

// -[SCSendToStepProcessor _didDetachUIWithStepResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2d574

// -[SCSendToStepProcessor _sendFromSendTo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2d658

// -[SCSendToStepProcessor _selectionContainsPromote:]
// Type encoding: B24@0:8@16
// Implementation: 0x105c2d6ac

// -[SCSendToStepProcessor _launchSnapPromoteFromSendFlow]
// Type encoding: v16@0:8
// Implementation: 0x105c2d838

// -[SCSendToStepProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c2db04

@end
