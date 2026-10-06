// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryDraftingDataCoordinator
// Superclass: NSObject
// Address: 0x112a83f08

@interface SCStoryDraftingDataCoordinator

// Property: snapProStoryDraftingSnapsObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryDraftingDataCoordinator initWithSTMSNetworkRequster:userSession:performer:circumstanceEngine:notificationPool:storiesBlizzardLogger:snapProProfilesProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105a25090

// -[SCStoryDraftingDataCoordinator snapProStoryDraftingSnapsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a25250

// -[SCStoryDraftingDataCoordinator syncSnapProStoryDraftingSnaps]
// Type encoding: v16@0:8
// Implementation: 0x105a25278

// -[SCStoryDraftingDataCoordinator deleteDraftingSnapsWithIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a25388

// -[SCStoryDraftingDataCoordinator updateDraftingSnapWithId:goLiveTimestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a2553c

// -[SCStoryDraftingDataCoordinator _fetchSnapProStoryDraftingSnaps]
// Type encoding: v16@0:8
// Implementation: 0x105a25720

// -[SCStoryDraftingDataCoordinator _didFetchSnapProStoryDraftingSnaps:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a25a90

// -[SCStoryDraftingDataCoordinator _createSnapProDataModelFromDraftingSnap:isUpdating:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105a25b00

// -[SCStoryDraftingDataCoordinator _deleteDraftingSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a25e18

// -[SCStoryDraftingDataCoordinator _didDeleteDraftingSnaps:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a260b4

// -[SCStoryDraftingDataCoordinator _updateDraftingSnap:goLiveTimestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a26210

// -[SCStoryDraftingDataCoordinator _didUpdateDraftingSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a26694

// -[SCStoryDraftingDataCoordinator _didFailToUpdateDraftingSnapWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a2683c

// -[SCStoryDraftingDataCoordinator _createObservables]
// Type encoding: v16@0:8
// Implementation: 0x105a2686c

// -[SCStoryDraftingDataCoordinator _publishDraftingSnapProSnaps]
// Type encoding: v16@0:8
// Implementation: 0x105a26c0c

// -[SCStoryDraftingDataCoordinator _locallyDeleteDraftingSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a26c1c

// -[SCStoryDraftingDataCoordinator _clearLocallyDeletedDraftingSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a26c6c

// -[SCStoryDraftingDataCoordinator _updateLocallyDeletedSnapsWithFetchedDraftingSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a26cbc

// -[SCStoryDraftingDataCoordinator _submitFailureToDeleteNotification]
// Type encoding: v16@0:8
// Implementation: 0x105a26d80

// -[SCStoryDraftingDataCoordinator _submitFailureToUpdateNotification]
// Type encoding: v16@0:8
// Implementation: 0x105a26dd8

// -[SCStoryDraftingDataCoordinator _submitFailureNotificationWithText:accessibilityIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a26e1c

// -[SCStoryDraftingDataCoordinator _logDeleteEventForDraftingSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a26f4c

// -[SCStoryDraftingDataCoordinator _storyIdForBusinessId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a2713c

// -[SCStoryDraftingDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a272e8

@end
