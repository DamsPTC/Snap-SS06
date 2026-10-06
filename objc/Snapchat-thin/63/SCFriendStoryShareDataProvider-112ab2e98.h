// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendStoryShareDataProvider
// Superclass: NSObject
// Address: 0x112ab2e98

@interface SCFriendStoryShareDataProvider

// Property: storyId; attributes: T@"NSString",R,N
// Property: storySharePlaybackPresenterDelegate; attributes: T@"<SCStorySharePlaybackScopeDelegate>",W,N,V_storySharePlaybackPresenterDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendStoryShareDataProvider initWithMessage:storyId:renderForQuotedMessage:sharedStorySnapManager:storyShareDataListener:storyShareVisibilityListener:snapchattersSynchronousDataFetcher:userSessionScope:storiesMediaCoordinator:contentDelivery:storiesConfigProvider:messagingMessageProvider:]
// Type encoding: @108@0:8@16@24B32@36@44@52@60@68@76@84@92@100
// Implementation: 0x105f8816c

// -[SCFriendStoryShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x105f883dc

// -[SCFriendStoryShareDataProvider _emitSnapUnavailableWithUIUpdateBlock:storyId:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x105f8abb8

// -[SCFriendStoryShareDataProvider fetchData]
// Type encoding: v16@0:8
// Implementation: 0x105f8ad34

// -[SCFriendStoryShareDataProvider userId]
// Type encoding: @16@0:8
// Implementation: 0x105f8ad68

// -[SCFriendStoryShareDataProvider userIdFuture]
// Type encoding: @16@0:8
// Implementation: 0x105f8ad90

// -[SCFriendStoryShareDataProvider mediaId]
// Type encoding: @16@0:8
// Implementation: 0x105f8ad98

// -[SCFriendStoryShareDataProvider lensId]
// Type encoding: @16@0:8
// Implementation: 0x105f8adc0

// -[SCFriendStoryShareDataProvider isPublicStorySnap]
// Type encoding: B16@0:8
// Implementation: 0x105f8ade8

// -[SCFriendStoryShareDataProvider isMentionRepost]
// Type encoding: B16@0:8
// Implementation: 0x105f8adf0

// -[SCFriendStoryShareDataProvider storyId]
// Type encoding: @16@0:8
// Implementation: 0x105f8ae4c

// -[SCFriendStoryShareDataProvider contextHint]
// Type encoding: @16@0:8
// Implementation: 0x105f8ae74

// -[SCFriendStoryShareDataProvider posterUsername]
// Type encoding: @16@0:8
// Implementation: 0x105f8ae9c

// -[SCFriendStoryShareDataProvider thumbnailDownloadInfo]
// Type encoding: @16@0:8
// Implementation: 0x105f8aec4

// -[SCFriendStoryShareDataProvider updateUIWithActionButton:]
// Type encoding: v20@0:8i16
// Implementation: 0x105f8aeec

// -[SCFriendStoryShareDataProvider constructThumbnailDownloadInfoWithUrl:encryptionKey:encryptionIV:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105f8b0fc

// -[SCFriendStoryShareDataProvider shouldOverrideMediaSize]
// Type encoding: B16@0:8
// Implementation: 0x105f8b1b4

// -[SCFriendStoryShareDataProvider overrideMediaSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105f8b1bc

// -[SCFriendStoryShareDataProvider _requestContextsWithConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f8b1d0

// -[SCFriendStoryShareDataProvider _composerBitmojiSelfieUrlStringWithAvatarId:selfieId:userId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f8b27c

// -[SCFriendStoryShareDataProvider storySharePlaybackPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105f8b2b0

// -[SCFriendStoryShareDataProvider setStorySharePlaybackPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f8b2c8

// -[SCFriendStoryShareDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f8b2d4

@end
