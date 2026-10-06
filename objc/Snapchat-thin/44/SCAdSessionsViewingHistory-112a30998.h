// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSessionsViewingHistory
// Superclass: NSObject
// Address: 0x112a30998

@interface SCAdSessionsViewingHistory

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdSessionsViewingHistory initWithPerformer:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053bde4c

// -[SCAdSessionsViewingHistory viewingSessionStart:viewLocation:captureLastNSnapCount:captureLastNStoriesCount:captureSnapInLastNSeconds:captureSnapsForStoryAdView:]
// Type encoding: v60@0:8@16q24q32q40d48B56
// Implementation: 0x1053bdf28

// -[SCAdSessionsViewingHistory didStartViewSnap:adIdentifier:serveItemId:adProductType:]
// Type encoding: v44@0:8B16@20@28Q36
// Implementation: 0x1053be080

// -[SCAdSessionsViewingHistory adViewedCountForProductType:completionQueue:completionBlock:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1053be1d4

// -[SCAdSessionsViewingHistory snapViewed:topSnapViewTimeInSec:bottomSnapViewTimeInSec:loadingSpinnerTimeInSec:isAd:exitMethod:snapId:wasSwiped:isHammerTap:wasLiked:mediaType:inventoryType:inventorySubtype:adType:preferredAttachmentType:actualAttachmentType:adAttachmentTriggerType:tapAttachmentSource:storyType:storyReplied:]
// Type encoding: v156@0:8d16d24d32d40B48@52@60B68B72B76q80@88Q96q104Q112Q120q128q136Q144B152
// Implementation: 0x1053be31c

// -[SCAdSessionsViewingHistory storyViewed:storyViewTimeInMs:storyType:exitMethod:isAd:contentTopsnapViewCount:adTopsnapViewCount:]
// Type encoding: v68@0:8@16d24Q32@40B48q52q60
// Implementation: 0x1053be574

// -[SCAdSessionsViewingHistory attachmentOpened:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053be6f4

// -[SCAdSessionsViewingHistory attachmentViewed:isAd:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1053be7e0

// -[SCAdSessionsViewingHistory availableStoriesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053be8e0

// -[SCAdSessionsViewingHistory currentGroupChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053be9ec

// -[SCAdSessionsViewingHistory latestViewingSessionRecordsWithSessionCount:viewedAdContextCount:enableHammerTapLogging:contentHammerTapDuration:adsHammerTapDuration:completionQueue:completionBlock:]
// Type encoding: v68@0:8q16q24B32d36d44@52@?60
// Implementation: 0x1053beaf8

// -[SCAdSessionsViewingHistory stopCurrentViewingSessionWithExitMethod:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053beccc

// -[SCAdSessionsViewingHistory currentViewLocationWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053bedd8

// -[SCAdSessionsViewingHistory getLastNSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053beed8

// -[SCAdSessionsViewingHistory getSnapsInLastNSeconds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053beee0

// -[SCAdSessionsViewingHistory _currentViewLocationWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053beee8

// -[SCAdSessionsViewingHistory _didStartViewSnap:adIdentifier:serveItemId:adProductType:]
// Type encoding: v44@0:8B16@20@28Q36
// Implementation: 0x1053beef8

// -[SCAdSessionsViewingHistory _viewingSessionStart:viewLocation:captureLastNSnapCount:captureLastNStoriesCount:captureSnapInLastNSeconds:captureSnapsForStoryAdView:]
// Type encoding: v60@0:8@16q24q32q40d48B56
// Implementation: 0x1053bf0a4

// -[SCAdSessionsViewingHistory _adViewedCountForProductType:completionQueue:completionBlock:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1053bf178

// -[SCAdSessionsViewingHistory _snapViewed:topSnapViewTimeInSec:bottomSnapViewTimeInSec:loadingSpinnerTimeInSec:isAd:exitMethod:snapId:wasSwiped:isHammerTap:wasLiked:mediaType:inventoryType:inventorySubtype:adType:preferredAttachmentType:actualAttachmentType:adAttachmentTriggerType:tapAttachmentSource:storyType:storyReplied:]
// Type encoding: v156@0:8d16d24d32d40B48@52@60B68B72B76q80@88Q96q104Q112Q120q128q136Q144B152
// Implementation: 0x1053bf288

// -[SCAdSessionsViewingHistory _storyViewed:storyViewTimeInMs:storyType:exitMethod:isAd:contentTopsnapViewCount:adTopsnapViewCount:]
// Type encoding: v68@0:8@16d24Q32@40B48q52q60
// Implementation: 0x1053bf298

// -[SCAdSessionsViewingHistory _attachmentOpened:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053bf2a0

// -[SCAdSessionsViewingHistory _attachmentViewed:isAd:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1053bf2a8

// -[SCAdSessionsViewingHistory _availableStoriesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053bf2b0

// -[SCAdSessionsViewingHistory _currentGroupChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053bf2b8

// -[SCAdSessionsViewingHistory _latestViewingSessionRecordsWithSessionCount:viewedAdContextCount:enableHammerTapLogging:contentHammerTapDuration:adsHammerTapDuration:completionQueue:completionBlock:]
// Type encoding: v68@0:8q16q24B32d36d44@52@?60
// Implementation: 0x1053bf2c0

// -[SCAdSessionsViewingHistory _stopCurrentViewingSessionWithExitMethod:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053bf59c

// -[SCAdSessionsViewingHistory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053bf5a8

@end
