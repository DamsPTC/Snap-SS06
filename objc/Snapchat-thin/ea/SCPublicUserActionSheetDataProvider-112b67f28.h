// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublicUserActionSheetDataProvider
// Superclass: NSObject
// Address: 0x112b67f28

@interface SCPublicUserActionSheetDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCUnifiedActionMenuDataProviderDelegate>",W,N,V_delegate

// -[SCPublicUserActionSheetDataProvider initWithPublicUser:storyDedupeFp:subscribeStatusManager:notificationStatusManager:lazySnapchattersDataFetcher:storyType:savedStoryId:thumbnailSnapId:displayTimestampSecs:imageThumbnail:circumstanceEngine:]
// Type encoding: @104@0:8@16Q24@32@40@48q56@64@72d80@88@96
// Implementation: 0x1079cf96c

// -[SCPublicUserActionSheetDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1079cfc5c

// -[SCPublicUserActionSheetDataProvider updateViewModelWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1079cfcb4

// -[SCPublicUserActionSheetDataProvider reload]
// Type encoding: v16@0:8
// Implementation: 0x1079cfd48

// -[SCPublicUserActionSheetDataProvider _actionSheetViewModelForSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079cfd7c

// -[SCPublicUserActionSheetDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1079d08dc

// -[SCPublicUserActionSheetDataProvider _fetchSnapchatterWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1079d0a20

// -[SCPublicUserActionSheetDataProvider _convertSnapchatterFromStoryWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1079d0bc4

// -[SCPublicUserActionSheetDataProvider _setSnapchatter:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1079d0dec

// -[SCPublicUserActionSheetDataProvider _loadTileMedia]
// Type encoding: v16@0:8
// Implementation: 0x1079d0ee0

// -[SCPublicUserActionSheetDataProvider _subscribeStateDidUpdateForStoryDedupeFp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d0f20

// -[SCPublicUserActionSheetDataProvider _notificationStateDidUpdateForStoryDedupeFp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d0f98

// -[SCPublicUserActionSheetDataProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1079d1008

// -[SCPublicUserActionSheetDataProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079d1020

// -[SCPublicUserActionSheetDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079d102c

@end
