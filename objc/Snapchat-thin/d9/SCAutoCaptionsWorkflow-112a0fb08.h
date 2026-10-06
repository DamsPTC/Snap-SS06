// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAutoCaptionsWorkflow
// Superclass: NSObject
// Address: 0x112a0fb08

@interface SCAutoCaptionsWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAutoCaptionsWorkflow initWithAutoCaptionsScope:aSRServices:featureSettingsServices:autoCaptionsHelperServices:loggingServices:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104fe3904

// -[SCAutoCaptionsWorkflow dismissEditViewController:updatedViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fe3f4c

// -[SCAutoCaptionsWorkflow _handleButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x104fe3fe0

// -[SCAutoCaptionsWorkflow _presentOnboardingPrompt]
// Type encoding: v16@0:8
// Implementation: 0x104fe408c

// -[SCAutoCaptionsWorkflow _handleOnboardingAccept]
// Type encoding: v16@0:8
// Implementation: 0x104fe4364

// -[SCAutoCaptionsWorkflow _handleOnboardingCancel]
// Type encoding: v16@0:8
// Implementation: 0x104fe4460

// -[SCAutoCaptionsWorkflow _begin]
// Type encoding: v16@0:8
// Implementation: 0x104fe44e4

// -[SCAutoCaptionsWorkflow _fetchASROutputWithVideoAssets:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104fe464c

// -[SCAutoCaptionsWorkflow _handleNetworkFetchCompleteWithASROutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe4c54

// -[SCAutoCaptionsWorkflow _handleNetworkFetchSuccessWithFullTranscription:ASRTokenLattice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fe4ff8

// -[SCAutoCaptionsWorkflow _handleErrorState]
// Type encoding: v16@0:8
// Implementation: 0x104fe51c0

// -[SCAutoCaptionsWorkflow _handleEditEvent]
// Type encoding: v16@0:8
// Implementation: 0x104fe5240

// -[SCAutoCaptionsWorkflow _handleDeleteEvent]
// Type encoding: v16@0:8
// Implementation: 0x104fe5314

// -[SCAutoCaptionsWorkflow _resetState]
// Type encoding: v16@0:8
// Implementation: 0x104fe5374

// -[SCAutoCaptionsWorkflow _handleLoadConfigEventWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fe53e0

// -[SCAutoCaptionsWorkflow _mapTokenLattice:fullTranscription:tokensShouldIncludeWhitespace:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x104fe54d8

// -[SCAutoCaptionsWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fe5854

@end
