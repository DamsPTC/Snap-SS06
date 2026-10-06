// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSingleSessionViewingHistory
// Superclass: NSObject
// Address: 0x112a30a38

@interface SCAdSingleSessionViewingHistory


// -[SCAdSingleSessionViewingHistory initWithViewingSessionId:viewLocation:captureLastNSnapCount:captureLastNStoryCount:captureSnapInLastNSeconds:captureSnapsForStoryAdView:adConfigProviderV2:]
// Type encoding: @68@0:8@16q24q32q40d48B56@60
// Implementation: 0x1053bf74c

// -[SCAdSingleSessionViewingHistory didStartViewSnap:serveItemId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1053bf964

// -[SCAdSingleSessionViewingHistory snapViewed:topSnapViewTimeInSec:bottomSnapViewTimeInSec:loadingSpinnerTimeInSec:isAd:exitMethod:snapId:wasSwiped:isHammerTap:wasLiked:mediaType:inventoryType:inventorySubtype:adType:preferredAttachmentType:actualAttachmentType:adAttachmentTriggerType:tapAttachmentSource:storyType:storyReplied:]
// Type encoding: v156@0:8d16d24d32d40B48@52@60B68B72B76q80@88Q96q104Q112Q120q128q136Q144B152
// Implementation: 0x1053bfa9c

// -[SCAdSingleSessionViewingHistory storyViewed:storyViewTimeInMs:storyType:exitMethod:isAd:contentTopsnapViewCount:adTopsnapViewCount:]
// Type encoding: v68@0:8@16d24Q32@40B48q52q60
// Implementation: 0x1053c0104

// -[SCAdSingleSessionViewingHistory attachmentOpened:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053c01c4

// -[SCAdSingleSessionViewingHistory attachmentViewed:isAd:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1053c01f0

// -[SCAdSingleSessionViewingHistory availableStoriesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c0238

// -[SCAdSingleSessionViewingHistory currentGroupChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c0268

// -[SCAdSingleSessionViewingHistory stopSessionWithExitMethod:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c02c8

// -[SCAdSingleSessionViewingHistory viewSessionRecordWithViewedAdContextCount:enableHammerTapLogging:contentHammerTapDuration:adsHammerTapDuration:isPastSession:]
// Type encoding: @48@0:8q16B24d28d36B44
// Implementation: 0x1053c0338

// -[SCAdSingleSessionViewingHistory getLastNSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053c06dc

// -[SCAdSingleSessionViewingHistory getSnapsInLastNSeconds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053c0710

// -[SCAdSingleSessionViewingHistory _getSessionDepth:]
// Type encoding: @20@0:8B16
// Implementation: 0x1053c0744

// -[SCAdSingleSessionViewingHistory _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x1053c0830

// -[SCAdSingleSessionViewingHistory _addAdRankingSnapLevelInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c0860

// -[SCAdSingleSessionViewingHistory _addAdRankingStoryLevelInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053c0874

// -[SCAdSingleSessionViewingHistory _getLastNSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053c0888

// -[SCAdSingleSessionViewingHistory _getSnapsInLastNSeconds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053c08ec

// -[SCAdSingleSessionViewingHistory _getLastNAdRankingSnapLevelInfo:]
// Type encoding: @24@0:8q16
// Implementation: 0x1053c0950

// -[SCAdSingleSessionViewingHistory _getAdRankingSnapLevelInfoInLastNSeconds:]
// Type encoding: @24@0:8d16
// Implementation: 0x1053c09a4

// -[SCAdSingleSessionViewingHistory _getLastNAdRankingStoryLevelInfo:]
// Type encoding: @24@0:8q16
// Implementation: 0x1053c0aac

// -[SCAdSingleSessionViewingHistory _resetViewedAdStates]
// Type encoding: v16@0:8
// Implementation: 0x1053c0b00

// -[SCAdSingleSessionViewingHistory _getViewDuration:enableHammerTapLogging:hammerTapDuration:]
// Type encoding: @36@0:8@16B24d28
// Implementation: 0x1053c0b08

// -[SCAdSingleSessionViewingHistory _getMinimumTime:]
// Type encoding: d24@0:8@16
// Implementation: 0x1053c0c08

// -[SCAdSingleSessionViewingHistory _getMaximumTime:]
// Type encoding: d24@0:8@16
// Implementation: 0x1053c0d58

// -[SCAdSingleSessionViewingHistory _getP25:]
// Type encoding: d24@0:8@16
// Implementation: 0x1053c0ea8

// -[SCAdSingleSessionViewingHistory _getP50:]
// Type encoding: d24@0:8@16
// Implementation: 0x1053c0eb0

// -[SCAdSingleSessionViewingHistory _getP75:]
// Type encoding: d24@0:8@16
// Implementation: 0x1053c0eb8

// -[SCAdSingleSessionViewingHistory _getP90:]
// Type encoding: d24@0:8@16
// Implementation: 0x1053c0ec0

// -[SCAdSingleSessionViewingHistory _countLessThanOrEqualValuesForTimes:lessThanOrEqualToDuration:]
// Type encoding: q32@0:8@16d24
// Implementation: 0x1053c0ecc

// -[SCAdSingleSessionViewingHistory _calculatePercentileForTimes:percentile:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x1053c0fe0

// -[SCAdSingleSessionViewingHistory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053c10ac

@end
