// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendFlowWorkflow
// Superclass: NSObject
// Address: 0x112a91e28

@interface SCSendFlowWorkflow

// Property: pageStack; attributes: T@"NSArray",C,N,V_pageStack
// Property: isSending; attributes: TB,N,V_isSending
// Property: removedScopes; attributes: T@"NSMutableSet",C,N,V_removedScopes
// Property: processedSteps; attributes: T@"NSMutableSet",C,N,V_processedSteps

// -[SCSendFlowWorkflow initWithSendFlowScope:stepProcessorProvider:mediaSender:circumstanceEngine:spotlightAutoShareService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105c25aa4

// -[SCSendFlowWorkflow begin]
// Type encoding: v16@0:8
// Implementation: 0x105c25be4

// -[SCSendFlowWorkflow _processSendFlowStep:uiContainer:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105c25db8

// -[SCSendFlowWorkflow _processStepResult:step:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105c25fe0

// -[SCSendFlowWorkflow _onPreloadNext:onStep:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105c261b8

// -[SCSendFlowWorkflow _onMoveToNext:onStep:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105c26224

// -[SCSendFlowWorkflow _onMoveBackOnStep:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105c2627c

// -[SCSendFlowWorkflow _onFinishOnStep:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105c262f0

// -[SCSendFlowWorkflow _onReleasedOnStep:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105c264a8

// -[SCSendFlowWorkflow _pageTypeForStep:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105c26538

// -[SCSendFlowWorkflow _stepProcessorForStep:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105c26578

// -[SCSendFlowWorkflow _nextEventWithTriggerType:onStep:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105c265a0

// -[SCSendFlowWorkflow _finalizedSendMedia:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c26618

// -[SCSendFlowWorkflow _finalizedSendMediaSinglePosting:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c26728

// -[SCSendFlowWorkflow _finalizedSendMediaCrossPostingSpotlightToStoriesWithCompletionBlock:crossPostEligibility:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x105c26934

// -[SCSendFlowWorkflow _finalizedSendMediaCrossPostingWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c27174

// -[SCSendFlowWorkflow _buildCrossPostMetadataWithOriginalMetadataData:senderData:isEligibleForCrossPostingSpotlightToStories:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105c27508

// -[SCSendFlowWorkflow _startFinalSending]
// Type encoding: v16@0:8
// Implementation: 0x105c2762c

// -[SCSendFlowWorkflow _prepareSpotlight]
// Type encoding: v16@0:8
// Implementation: 0x105c276ac

// -[SCSendFlowWorkflow _shouldCrossPost]
// Type encoding: B16@0:8
// Implementation: 0x105c2790c

// -[SCSendFlowWorkflow pageStack]
// Type encoding: @16@0:8
// Implementation: 0x105c27a30

// -[SCSendFlowWorkflow setPageStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c27a38

// -[SCSendFlowWorkflow isSending]
// Type encoding: B16@0:8
// Implementation: 0x105c27a40

// -[SCSendFlowWorkflow setIsSending:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c27a48

// -[SCSendFlowWorkflow removedScopes]
// Type encoding: @16@0:8
// Implementation: 0x105c27a50

// -[SCSendFlowWorkflow setRemovedScopes:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c27a58

// -[SCSendFlowWorkflow processedSteps]
// Type encoding: @16@0:8
// Implementation: 0x105c27a60

// -[SCSendFlowWorkflow setProcessedSteps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c27a68

// -[SCSendFlowWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c27a70

@end
