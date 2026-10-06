// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedOperaPlaylistDataSource
// Superclass: NSObject
// Address: 0x112a0bdc8

@interface SCFriendsFeedOperaPlaylistDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedOperaPlaylistDataSource initWithConversationId:userId:senderUserId:participants:delegate:feedUpdatesPublisher:friendsFeedGraphene:groupsDataTracker:initialViewableSnaps:messagePreparer:playbackGrapheneLogger:snapchattersObservableRepository:snapCountDownManager:performer:userInfoBitmojiAvatarIdProvider:userInfoBitmojiSelfieIdProvider:messagingExperimentService:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x104f6f6ec

// -[SCFriendsFeedOperaPlaylistDataSource launchCandidates]
// Type encoding: @16@0:8
// Implementation: 0x104f6fcb8

// -[SCFriendsFeedOperaPlaylistDataSource itemType]
// Type encoding: @16@0:8
// Implementation: 0x104f6fdcc

// -[SCFriendsFeedOperaPlaylistDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6fdd8

// -[SCFriendsFeedOperaPlaylistDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f6fde4

// -[SCFriendsFeedOperaPlaylistDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f6fe60

// -[SCFriendsFeedOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6ff1c

// -[SCFriendsFeedOperaPlaylistDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104f70020

// -[SCFriendsFeedOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x104f70084

// -[SCFriendsFeedOperaPlaylistDataSource _logSnapMediaPrepareWithType:startTime:success:failureReason:]
// Type encoding: v44@0:8q16d24B32q36
// Implementation: 0x104f70088

// -[SCFriendsFeedOperaPlaylistDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f70138

// -[SCFriendsFeedOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f7013c

// -[SCFriendsFeedOperaPlaylistDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f701d0

// -[SCFriendsFeedOperaPlaylistDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x104f70214

// -[SCFriendsFeedOperaPlaylistDataSource _fetchInitialPlaybackMessages]
// Type encoding: v16@0:8
// Implementation: 0x104f7021c

// -[SCFriendsFeedOperaPlaylistDataSource _completePromiseIfPossibleWithInitialPlaybackMessage:viewableSnaps:participants:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104f70838

// -[SCFriendsFeedOperaPlaylistDataSource _didPostProcessNativeMessage:prepareType:success:failureReason:startTime:]
// Type encoding: v52@0:8@16q24B32q36d44
// Implementation: 0x104f709c0

// -[SCFriendsFeedOperaPlaylistDataSource _loadContentForMessageId:mediaContent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f70b10

// -[SCFriendsFeedOperaPlaylistDataSource _didLoadContentForMessageId:success:startTime:]
// Type encoding: v36@0:8@16B24d28
// Implementation: 0x104f70c60

// -[SCFriendsFeedOperaPlaylistDataSource _didProcessMessage:success:unableToPresentReason:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x104f70dac

// -[SCFriendsFeedOperaPlaylistDataSource _subscribeToFeedUpdateEvents]
// Type encoding: v16@0:8
// Implementation: 0x104f712bc

// -[SCFriendsFeedOperaPlaylistDataSource _updateWithFeedEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f716dc

// -[SCFriendsFeedOperaPlaylistDataSource _subscribeToSnapchatterWithSenderUserId:replyUserId:isCampaignConversation:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104f726d8

// -[SCFriendsFeedOperaPlaylistDataSource _subscribeToGroupUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f7294c

// -[SCFriendsFeedOperaPlaylistDataSource _updateParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f72b38

// -[SCFriendsFeedOperaPlaylistDataSource _updateCurrentItemIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f72d08

// -[SCFriendsFeedOperaPlaylistDataSource _refreshOperaPlaylistGroup]
// Type encoding: v16@0:8
// Implementation: 0x104f72df0

// -[SCFriendsFeedOperaPlaylistDataSource _updateAllItems]
// Type encoding: v16@0:8
// Implementation: 0x104f72e90

// -[SCFriendsFeedOperaPlaylistDataSource _preparingPlaybackMessageForMessageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f72fe4

// -[SCFriendsFeedOperaPlaylistDataSource _logFriendsFeedSnapPresentReady]
// Type encoding: v16@0:8
// Implementation: 0x104f73138

// -[SCFriendsFeedOperaPlaylistDataSource _failToPresentWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x104f73194

// -[SCFriendsFeedOperaPlaylistDataSource operaMediaBundleProvider]
// Type encoding: @16@0:8
// Implementation: 0x104f731f4

// -[SCFriendsFeedOperaPlaylistDataSource canProvideMediaBundleForPlaylistItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f731f8

// -[SCFriendsFeedOperaPlaylistDataSource mediaBundleFromPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f7332c

// -[SCFriendsFeedOperaPlaylistDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f7343c

@end
