// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapProPendingSnapManager
// Superclass: NSObject
// Address: 0x112b07858

@interface SCStoriesSnapProPendingSnapManager


// -[SCStoriesSnapProPendingSnapManager initWithPerformer:circumstanceEngine:snapProProfilesProvider:snapProUserProfileIdProvider:snapProShareSender:snapchatterFetcher:storyDraftingDataCoordinator:nonFatalReporter:pollerManager:businessProfileManagerService:userSession:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x100c84aec

// -[SCStoriesSnapProPendingSnapManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106963914

// -[SCStoriesSnapProPendingSnapManager insertPostingSnapProSnap:businessIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10696396c

// -[SCStoriesSnapProPendingSnapManager insertPostingSnapProSnapWithBusinessIdsToSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106963af0

// -[SCStoriesSnapProPendingSnapManager _pendingSnapPlaybackInfoEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106963c98

// -[SCStoriesSnapProPendingSnapManager insertPostingContent:storyMetadata:snapProDestinations:spotlightShareInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106963cf4

// -[SCStoriesSnapProPendingSnapManager _insertPostingContentForSpotlightAutoShareFlowWithContent:storyMetadata:snapProDestinations:spotlightShareInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1069642c0

// -[SCStoriesSnapProPendingSnapManager removeSnaps:businessId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c85244

// -[SCStoriesSnapProPendingSnapManager deleteUnrecoverableSnapWithSnapComponentId:businessIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106964af4

// -[SCStoriesSnapProPendingSnapManager snapsWithBusinessId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c854c4

// -[SCStoriesSnapProPendingSnapManager businessIdsWithSnapComponentId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106964f8c

// -[SCStoriesSnapProPendingSnapManager hasSnaps]
// Type encoding: B16@0:8
// Implementation: 0x1069651cc

// -[SCStoriesSnapProPendingSnapManager isPostingSnapWithSnapComponentId:businessIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069652d0

// -[SCStoriesSnapProPendingSnapManager didPostStorySnapWithClientId:quotedUserId:storyIdToStorySnapId:snapProDestinations:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106965514

// -[SCStoriesSnapProPendingSnapManager didFailToPostSnapWithSnapComponentId:businessIds:clientId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106965a1c

// -[SCStoriesSnapProPendingSnapManager _didPostStorySnapWithClientId:notifiedUserId:snapProProfile:storyIdToStorySnapId:snapProDestinations:businessId:pollingId:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106965dd0

// -[SCStoriesSnapProPendingSnapManager _sendStorySnapWithProfilesResult:businessId:storySnapId:notifiedUserId:pollingId:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1069663a8

// -[SCStoriesSnapProPendingSnapManager _sendStorySnapWithSnapProProfile:storySnapId:snapchatter:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106966854

// -[SCStoriesSnapProPendingSnapManager removePendingSnapWithClientId:businessId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106966a28

// -[SCStoriesSnapProPendingSnapManager _observeDraftingSnaps]
// Type encoding: v16@0:8
// Implementation: 0x106966b00

// -[SCStoriesSnapProPendingSnapManager _draftingSnapsDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106966c74

// -[SCStoriesSnapProPendingSnapManager _pollForDraftingSnapsIfRequired]
// Type encoding: v16@0:8
// Implementation: 0x106966e44

// -[SCStoriesSnapProPendingSnapManager _verifyDraftingSnaps]
// Type encoding: v16@0:8
// Implementation: 0x106966f78

// -[SCStoriesSnapProPendingSnapManager _getPollerManagerAndSetDelegateIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x106967320

// -[SCStoriesSnapProPendingSnapManager snapsClientIdsRemovedWithBusinessId:snapClientIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106967380

// -[SCStoriesSnapProPendingSnapManager notifyBusinessProfileUpdateForBusinessId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10696760c

// -[SCStoriesSnapProPendingSnapManager _pollerGrapheneLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x10696771c

// -[SCStoriesSnapProPendingSnapManager _subscribeForNewProfileIdChangeToPollForIncomingClientIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069677b0

// -[SCStoriesSnapProPendingSnapManager _startPollerForNewProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069677f0

// -[SCStoriesSnapProPendingSnapManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106967bdc

@end
