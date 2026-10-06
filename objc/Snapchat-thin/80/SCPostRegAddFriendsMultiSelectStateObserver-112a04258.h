// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPostRegAddFriendsMultiSelectStateObserver
// Superclass: NSObject
// Address: 0x112a04258

@interface SCPostRegAddFriendsMultiSelectStateObserver

// Property: pageEndSnapshot; attributes: T@"SCPostRegAddFriendsPageEndObserverSnapshot",&,V_pageEndSnapshot
// Property: selectedSnapchatters; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPostRegAddFriendsMultiSelectStateObserver initWithSnapchattersDataFetcher:snapchattersDataTracker:performer:circumstanceEngine:userPreferences:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104e95dd8

// -[SCPostRegAddFriendsMultiSelectStateObserver setSelectedSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e95fdc

// -[SCPostRegAddFriendsMultiSelectStateObserver selectedSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x104e960ec

// -[SCPostRegAddFriendsMultiSelectStateObserver setMaxVisibleCellsCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104e96114

// -[SCPostRegAddFriendsMultiSelectStateObserver infoCellWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x104e96200

// -[SCPostRegAddFriendsMultiSelectStateObserver _setSelectedSnapchattersToIndexPathDictInQueuePerformer:isUserAction:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104e962d4

// -[SCPostRegAddFriendsMultiSelectStateObserver _resetSelectedSnapchattersToIndexPathDictInQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e96470

// -[SCPostRegAddFriendsMultiSelectStateObserver _publishSelectedSnapchatters]
// Type encoding: v16@0:8
// Implementation: 0x104e964c4

// -[SCPostRegAddFriendsMultiSelectStateObserver _refreshPageEndSnapshotInQueuePerformer]
// Type encoding: v16@0:8
// Implementation: 0x104e96508

// -[SCPostRegAddFriendsMultiSelectStateObserver _unselectSnapchattersBeyondLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104e9663c

// -[SCPostRegAddFriendsMultiSelectStateObserver _fetchSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x104e967dc

// -[SCPostRegAddFriendsMultiSelectStateObserver _convertSnapchatterArraytoSnapchatterIndexPathDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e96918

// -[SCPostRegAddFriendsMultiSelectStateObserver _setPreselectedSnapchatterToIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e96a34

// -[SCPostRegAddFriendsMultiSelectStateObserver _shiftIndexPathsByOneForPreselectedSnapchatters]
// Type encoding: v16@0:8
// Implementation: 0x104e96ad8

// -[SCPostRegAddFriendsMultiSelectStateObserver didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e96c6c

// -[SCPostRegAddFriendsMultiSelectStateObserver didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104e96c70

// -[SCPostRegAddFriendsMultiSelectStateObserver didEndSnapchattersContactDataRequest:withResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e96c74

// -[SCPostRegAddFriendsMultiSelectStateObserver _preselectedCountOfSuggestions]
// Type encoding: Q16@0:8
// Implementation: 0x104e96cd8

// -[SCPostRegAddFriendsMultiSelectStateObserver _userSelectedIndicesStringInQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x104e96de8

// -[SCPostRegAddFriendsMultiSelectStateObserver _sortedIndicesStringFromIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e96fc8

// -[SCPostRegAddFriendsMultiSelectStateObserver _sortedIndicesStringFromIndices:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e9704c

// -[SCPostRegAddFriendsMultiSelectStateObserver pageEndSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x104e970cc

// -[SCPostRegAddFriendsMultiSelectStateObserver setPageEndSnapshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e970d8

// -[SCPostRegAddFriendsMultiSelectStateObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e970e0

@end
