// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatOperaPlaylistDataSource
// Superclass: NSObject
// Address: 0x112a0bd28

@interface SCChatOperaPlaylistDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatOperaPlaylistDataSource initWithConversationId:messageId:messageType:userId:startIndex:participants:delegate:conversationDataFetcher:conversationUpdateEventPublisher:messagePreparer:playbackGrapheneLogger:messagingExperimentService:performer:isQuoted:]
// Type encoding: @124@0:8@16@24q32@40Q48@56@64@72@80@88@96@104@112B120
// Implementation: 0x104f69fe4

// -[SCChatOperaPlaylistDataSource launchCandidates]
// Type encoding: @16@0:8
// Implementation: 0x104f6a2f0

// -[SCChatOperaPlaylistDataSource itemType]
// Type encoding: @16@0:8
// Implementation: 0x104f6a524

// -[SCChatOperaPlaylistDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6a530

// -[SCChatOperaPlaylistDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f6a53c

// -[SCChatOperaPlaylistDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f6a67c

// -[SCChatOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6a738

// -[SCChatOperaPlaylistDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104f6a8a0

// -[SCChatOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x104f6abb8

// -[SCChatOperaPlaylistDataSource _prepareMediaForItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104f6ad08

// -[SCChatOperaPlaylistDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6b010

// -[SCChatOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f6b014

// -[SCChatOperaPlaylistDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f6b0a8

// -[SCChatOperaPlaylistDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x104f6b1e4

// -[SCChatOperaPlaylistDataSource _didFetchInitialMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6b1ec

// -[SCChatOperaPlaylistDataSource _didFetchSingleMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6b644

// -[SCChatOperaPlaylistDataSource _didFetchBundledMessages:initialMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f6b750

// -[SCChatOperaPlaylistDataSource _configureForBundledMessages:initialMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f6b884

// -[SCChatOperaPlaylistDataSource _configureForSingleMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6bd5c

// -[SCChatOperaPlaylistDataSource _configureMediasAndGetInitialPlaybackMessage:message:playbackMessages:mediaIdToMessages:mediaIdToIndex:isInitialMessage:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x104f6c088

// -[SCChatOperaPlaylistDataSource _playbackMessageForMedia:messsage:isInitialMessage:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x104f6c3c4

// -[SCChatOperaPlaylistDataSource _didLoadContentForMediaId:message:startTime:success:completion:]
// Type encoding: v52@0:8@16@24d32B40@?44
// Implementation: 0x104f6c750

// -[SCChatOperaPlaylistDataSource _handleLoadCompleteForMediaId:message:startTime:success:completion:]
// Type encoding: v52@0:8@16@24d32B40@?44
// Implementation: 0x104f6c8d8

// -[SCChatOperaPlaylistDataSource _didPostProcessMediaId:message:prepareType:success:failureReason:startTime:]
// Type encoding: v60@0:8@16@24q32B40q44d52
// Implementation: 0x104f6cae8

// -[SCChatOperaPlaylistDataSource _postProcessMediaId:message:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104f6cc5c

// -[SCChatOperaPlaylistDataSource _completePromiseIfPossibleWithInitialPlaybackMessage:viewablePlaybackMessages:participants:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104f6d1d0

// -[SCChatOperaPlaylistDataSource _subscribeToUpdates]
// Type encoding: v16@0:8
// Implementation: 0x104f6d324

// -[SCChatOperaPlaylistDataSource _shouldAllowMessageUpdateForUpdateEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f6d5ac

// -[SCChatOperaPlaylistDataSource _updateWithMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6d72c

// -[SCChatOperaPlaylistDataSource _checkForPlaybackUpdatesForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6d7b8

// -[SCChatOperaPlaylistDataSource _handleMediaPrepareFailure:messageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f6e19c

// -[SCChatOperaPlaylistDataSource _updatePlaylistForMediaIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6e34c

// -[SCChatOperaPlaylistDataSource _removeMediaFromPlaylist:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6e460

// -[SCChatOperaPlaylistDataSource _handleUnableToPresentForMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f6e4a8

// -[SCChatOperaPlaylistDataSource _handleMediaIdMissingForMediaContent:messageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f6e534

// -[SCChatOperaPlaylistDataSource _logMediaPrepareWithType:startTime:success:failureReason:]
// Type encoding: v44@0:8q16d24B32q36
// Implementation: 0x104f6e5dc

// -[SCChatOperaPlaylistDataSource _getLatestMessageWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f6e68c

// -[SCChatOperaPlaylistDataSource operaMediaBundleProvider]
// Type encoding: @16@0:8
// Implementation: 0x104f6e694

// -[SCChatOperaPlaylistDataSource canProvideMediaBundleForPlaylistItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f6e698

// -[SCChatOperaPlaylistDataSource mediaBundleFromPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f6e780

// -[SCChatOperaPlaylistDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f6e86c

@end
