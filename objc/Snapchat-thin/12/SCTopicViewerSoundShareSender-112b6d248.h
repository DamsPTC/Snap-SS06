// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicViewerSoundShareSender
// Superclass: NSObject
// Address: 0x112b6d248

@interface SCTopicViewerSoundShareSender

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTopicViewerSoundShareSender initWithTextSender:scopedConversationParser:sendToScopeExposer:sendToScopeServices:notificationServices:sendToPreviewProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107a6be74

// -[SCTopicViewerSoundShareSender shareTrackId:fromPresentingViewController:onSend:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x107a6bfc8

// -[SCTopicViewerSoundShareSender _containerWithPresentingViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a6c1c0

// -[SCTopicViewerSoundShareSender _detachSendToUI]
// Type encoding: v16@0:8
// Implementation: 0x107a6c380

// -[SCTopicViewerSoundShareSender _sendToSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a6c3b0

// -[SCTopicViewerSoundShareSender _sendToConversations:trackId:additionalText:numOfRecipients:sendToSessionId:error:]
// Type encoding: v64@0:8@16Q24@32q40@48@56
// Implementation: 0x107a6c730

// -[SCTopicViewerSoundShareSender _showSendResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a6cc54

// -[SCTopicViewerSoundShareSender didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a6cd44

// -[SCTopicViewerSoundShareSender didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107a6ce0c

// -[SCTopicViewerSoundShareSender _completeWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x107a6ce10

// -[SCTopicViewerSoundShareSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a6ce88

@end
