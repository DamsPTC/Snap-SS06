// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeUploadDelegateImpl
// Superclass: NSObject
// Address: 0x112a44218

@interface SCNativeUploadDelegateImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeUploadDelegateImpl initWithMediaOrchestratorLazy:chatGrapheneLazy:grapheneRegistryLazy:plugins:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100415d08

// -[SCNativeUploadDelegateImpl _pluginForMediaReference:plugins:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105529434

// -[SCNativeUploadDelegateImpl _uploadMediaReference:appSource:contentType:trackingId:plugins:]
// Type encoding: @56@0:8@16q24q32@40@48
// Implementation: 0x105529550

// -[SCNativeUploadDelegateImpl _uploadPlatformMediaReference:appSource:contentType:trackingId:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x105529b84

// -[SCNativeUploadDelegateImpl uploadMedia:originalDestinations:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105529c1c

// -[SCNativeUploadDelegateImpl _uploadMessageContent:originalDestinations:plugins:callback:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105529da8

// -[SCNativeUploadDelegateImpl _updatedLocalMessageContentWithLocalMessageContent:originalDestinations:trackingId:contentData:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10552a87c

// -[SCNativeUploadDelegateImpl uploadMediaReferences:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10552b3f8

// -[SCNativeUploadDelegateImpl queryUploadStatus:uploadStatusCallback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10552bec0

// -[SCNativeUploadDelegateImpl resetUpload:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10552c9b8

// -[SCNativeUploadDelegateImpl _mediaOrchestrationResultFromLocalMediaReference:trackingId:contentType:appSource:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x10552cf74

// -[SCNativeUploadDelegateImpl _handleILCWithSnapDoc:customizationId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10552d1ac

// -[SCNativeUploadDelegateImpl _handlePromptLensWithSnapDoc:promptId:key:promptCreatorUserId:promptReceiverUserId:turnBased:score:isCompleteAtCapture:lensName:]
// Type encoding: @80@0:8@16@24@32@40@48B56@60B68@72
// Implementation: 0x10552d3dc

// -[SCNativeUploadDelegateImpl userIdStringToSCCOREUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x10552d78c

// -[SCNativeUploadDelegateImpl didConfirmConversationServerCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10552d824

// -[SCNativeUploadDelegateImpl didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10552d828

// -[SCNativeUploadDelegateImpl didCreateConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10552d82c

// -[SCNativeUploadDelegateImpl didRemoveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10552d830

// -[SCNativeUploadDelegateImpl didSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x10552d834

// -[SCNativeUploadDelegateImpl didSendStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10552dab0

// -[SCNativeUploadDelegateImpl didConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10552dab4

// -[SCNativeUploadDelegateImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10552dab8

// +[SCNativeUploadDelegateImpl _trackingIdFromLocalMessageContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10552d0c4

@end
