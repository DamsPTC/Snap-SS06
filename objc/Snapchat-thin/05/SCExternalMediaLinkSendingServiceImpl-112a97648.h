// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExternalMediaLinkSendingServiceImpl
// Superclass: NSObject
// Address: 0x112a97648

@interface SCExternalMediaLinkSendingServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExternalMediaLinkSendingServiceImpl initWithSocialSmsSender:socialLinkCreator:offPlatformLinkGenerationService:notificationPool:boltUploader:performerProvider:circumstanceEngine:phoneNumberProvider:inviteService:grapheneLogger:mediaLinkCreator:mediaLinkUpdater:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x105c6b2c8

// -[SCExternalMediaLinkSendingServiceImpl sendMemoriesLinkWithPhoneNumbers:externalLinkSendingMedia:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c6b658

// -[SCExternalMediaLinkSendingServiceImpl createMemoriesLinkWithMediaContent:shareSource:isEditedMemory:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x105c6b848

// -[SCExternalMediaLinkSendingServiceImpl _improvedUploadFlowForEditedMemoriesWithMediaContent:promise:startTime:shareSource:backendPromiseCompletion:]
// Type encoding: v56@0:8@16@24d32q40@?48
// Implementation: 0x105c6ca24

// -[SCExternalMediaLinkSendingServiceImpl deleteMemoryLinkId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c6dc30

// -[SCExternalMediaLinkSendingServiceImpl _createMemoriesLinkWithExternalLinkSendingMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c6dddc

// -[SCExternalMediaLinkSendingServiceImpl _sendMemoriesLinkRequestWithMemoriesURL:phoneNumberStrings:isImage:lensId:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x105c6e3b8

// -[SCExternalMediaLinkSendingServiceImpl _createMemoriesLinkWithSocialLinks:responsePromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c6e5ec

// -[SCExternalMediaLinkSendingServiceImpl _handleSocialLinkCreateResponse:error:responsePromise:shareId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105c6e8c8

// -[SCExternalMediaLinkSendingServiceImpl _showSendInitiatedNotification]
// Type encoding: v16@0:8
// Implementation: 0x105c6ed4c

// -[SCExternalMediaLinkSendingServiceImpl _showSendCompletedNotification:isForFriendInvite:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105c6ee58

// -[SCExternalMediaLinkSendingServiceImpl _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c6efcc

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateStartWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f028

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestSentWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f06c

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestSuccessWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f0b0

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestFailureWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f0f4

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateRequestLatencyWithShareSource:startTime:didSucceed:]
// Type encoding: v36@0:8q16d24B32
// Implementation: 0x105c6f138

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateSuccessWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f19c

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateFailureWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f1e0

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesBackendLinkCreateLatencyWithShareSource:startTime:didSucceed:]
// Type encoding: v36@0:8q16d24B32
// Implementation: 0x105c6f224

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateSuccessWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f288

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateFailureWithShareSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c6f2cc

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkCreateLatencyWithShareSource:startTime:didSucceed:]
// Type encoding: v36@0:8q16d24B32
// Implementation: 0x105c6f310

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkSnapCount:shareSource:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x105c6f374

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesLinkMissingSnapCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105c6f3c4

// -[SCExternalMediaLinkSendingServiceImpl _logMemoriesUpdateLinkLatencyGraphene:]
// Type encoding: v24@0:8d16
// Implementation: 0x105c6f3d0

// -[SCExternalMediaLinkSendingServiceImpl _logLinkDeletionRequestLatencyWithStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x105c6f428

// -[SCExternalMediaLinkSendingServiceImpl _logLinkDeletionRequestSent]
// Type encoding: v16@0:8
// Implementation: 0x105c6f480

// -[SCExternalMediaLinkSendingServiceImpl _logLinkDeletionRequestOutcome:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c6f48c

// -[SCExternalMediaLinkSendingServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c6f4a0

@end
