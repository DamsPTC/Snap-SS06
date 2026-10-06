// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesViewCountManager
// Superclass: NSObject
// Address: 0x112a82838

@interface SCSpotlightRepliesViewCountManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesViewCountManager initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f9b28

// -[SCSpotlightRepliesViewCountManager updateCreatorInfoForCreatorId:creatorId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059f9c24

// -[SCSpotlightRepliesViewCountManager contextCreatorInfoForCreatorId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059f9cac

// -[SCSpotlightRepliesViewCountManager setRepliesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f9d24

// -[SCSpotlightRepliesViewCountManager setRepliesCountFromSnapPlaybackInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059f9e58

// -[SCSpotlightRepliesViewCountManager fetchRepliesCountForSnapID:viewCountType:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1059f9f80

// -[SCSpotlightRepliesViewCountManager liveRepliesCountObservableForSnapID:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059fa110

// -[SCSpotlightRepliesViewCountManager pendingRepliesCountObservableForSnapID:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059fa19c

// -[SCSpotlightRepliesViewCountManager increaseCountByOneForViewCountType:snapID:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1059fa228

// -[SCSpotlightRepliesViewCountManager decreaseCountByOneForViewCountType:snapID:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1059fa340

// -[SCSpotlightRepliesViewCountManager increaseLiveCountDecreasePendingCountByOneForSnapID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059fa458

// -[SCSpotlightRepliesViewCountManager addAllPendingCountToLiveCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059fa564

// -[SCSpotlightRepliesViewCountManager _saveRepliesCount:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059fa670

// -[SCSpotlightRepliesViewCountManager _setRepliesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059fa67c

// -[SCSpotlightRepliesViewCountManager _setRepliesCountFromSnapPlaybackInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059fa7e8

// -[SCSpotlightRepliesViewCountManager _getRepliesCountForSnapID:viewCountType:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x1059faa68

// -[SCSpotlightRepliesViewCountManager _increaseCountByOneForViewCountType:snapID:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1059faab0

// -[SCSpotlightRepliesViewCountManager _decreaseCountByOneForViewCountType:snapID:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1059fab30

// -[SCSpotlightRepliesViewCountManager _increaseLiveCountDecreasePendingCountByOneForSnapID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059fabb4

// -[SCSpotlightRepliesViewCountManager _addAllPendingCountToLiveCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059fac80

// -[SCSpotlightRepliesViewCountManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059fad48

@end
