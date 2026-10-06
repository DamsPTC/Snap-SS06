// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdMidrollDynamicInsertionManager
// Superclass: NSObject
// Address: 0x112ade098

@interface SCAdMidrollDynamicInsertionManager


// -[SCAdMidrollDynamicInsertionManager initWithRuleTrackerFactory:adConfigProvider:crossInventoryInsertionRuleTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10640d7e4

// -[SCAdMidrollDynamicInsertionManager subscribeToDatasource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640d8e8

// -[SCAdMidrollDynamicInsertionManager updateCurrentInsertionRuleConfiguration:isFirstSessionAd:adProductType:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x10640da5c

// -[SCAdMidrollDynamicInsertionManager subscribeToPlaylistGroupChange:]
// Type encoding: @24@0:8@16
// Implementation: 0x10640db10

// -[SCAdMidrollDynamicInsertionManager playlistGroupOnNext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640dc28

// -[SCAdMidrollDynamicInsertionManager subscribeToPendingAdSlotObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x10640de44

// -[SCAdMidrollDynamicInsertionManager pendingAdSlotOnNext]
// Type encoding: v16@0:8
// Implementation: 0x10640df40

// -[SCAdMidrollDynamicInsertionManager subscribeToPlaylistItemView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10640df48

// -[SCAdMidrollDynamicInsertionManager playlistItemViewUniqueFilter:]
// Type encoding: B24@0:8@16
// Implementation: 0x10640e2c0

// -[SCAdMidrollDynamicInsertionManager playlistItemViewNonAdFilter:]
// Type encoding: B24@0:8@16
// Implementation: 0x10640e3c8

// -[SCAdMidrollDynamicInsertionManager playlistItemViewToInsertionOpportunitySwitchMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10640e448

// -[SCAdMidrollDynamicInsertionManager _setUpInsertionRetryTimerIfNeededWithObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640e588

// -[SCAdMidrollDynamicInsertionManager insertionOpportunityOnNext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10640e650

// -[SCAdMidrollDynamicInsertionManager _attemptInsert:]
// Type encoding: v24@0:8q16
// Implementation: 0x10640e67c

// -[SCAdMidrollDynamicInsertionManager _logInsertionRuleStatusWithAdReady:]
// Type encoding: v20@0:8B16
// Implementation: 0x10640e8cc

// -[SCAdMidrollDynamicInsertionManager _currentInsertionRuleTracker]
// Type encoding: @16@0:8
// Implementation: 0x10640e998

// -[SCAdMidrollDynamicInsertionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10640e9a4

@end
