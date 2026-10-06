// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesTopicShareManagerImpl
// Superclass: NSObject
// Address: 0x112b6db08

@interface SCStoriesTopicShareManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesTopicShareManagerImpl initWithSpotlightShareSender:scopedConversationParser:sendToScopeExposer:sendToScopeServices:notificationServices:storiesConfigProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107a80d08

// -[SCStoriesTopicShareManagerImpl shareTopicSnap:presentingViewController:thumbnailCoordinator:topicStoryId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107a80e5c

// -[SCStoriesTopicShareManagerImpl _onFetchedThumbnailData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a81150

// -[SCStoriesTopicShareManagerImpl _launchSendToWithPreviewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a812a0

// -[SCStoriesTopicShareManagerImpl _sendToContainerViewWithPresentingViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a81434

// -[SCStoriesTopicShareManagerImpl _sendToPreviewConfigurationWithPreviewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a81534

// -[SCStoriesTopicShareManagerImpl didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8165c

// -[SCStoriesTopicShareManagerImpl didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107a817c0

// -[SCStoriesTopicShareManagerImpl _detachUI]
// Type encoding: v16@0:8
// Implementation: 0x107a81808

// -[SCStoriesTopicShareManagerImpl _sendResultShareToSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a81838

// -[SCStoriesTopicShareManagerImpl _sendStoryShareToConversations:additionalText:numOfRecipients:error:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x107a81b64

// -[SCStoriesTopicShareManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a81f30

@end
