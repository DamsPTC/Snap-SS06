// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AdSessionsViewingHistory
// Superclass: NSObject
// Address: 0x1127e3748

@interface AdSessionsViewingHistory


// -[AdSessionsViewingHistory viewingSessionStart:viewLocation:captureLastNSnapCount:captureLastNStoriesCount:captureSnapInLastNSeconds:captureSnapsForStoryAdView:]
// Type encoding: v60@0:8@16q24q32q40d48B56
// Implementation: 0x101676b04

// -[AdSessionsViewingHistory didStartViewSnap:adIdentifier:serveItemId:adProductType:]
// Type encoding: v44@0:8B16@20@28Q36
// Implementation: 0x101676e68

// -[AdSessionsViewingHistory adViewedCountForProductType:completionQueue:completionBlock:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x10167729c

// -[AdSessionsViewingHistory snapViewed:topSnapViewTimeInSec:bottomSnapViewTimeInSec:loadingSpinnerTimeInSec:isAd:exitMethod:snapId:wasSwiped:isHammerTap:wasLiked:mediaType:inventoryType:inventorySubtype:adType:preferredAttachmentType:actualAttachmentType:adAttachmentTriggerType:tapAttachmentSource:storyType:storyReplied:]
// Type encoding: v156@0:8d16d24d32d40B48@52@60B68B72B76q80@88Q96q104Q112Q120q128q136Q144B152
// Implementation: 0x101677ff4

// -[AdSessionsViewingHistory storyViewed:storyViewTimeInMs:storyType:exitMethod:isAd:contentTopsnapViewCount:adTopsnapViewCount:]
// Type encoding: v68@0:8@16d24Q32@40B48q52q60
// Implementation: 0x1016783b8

// -[AdSessionsViewingHistory attachmentOpened:]
// Type encoding: v20@0:8B16
// Implementation: 0x1016785c8

// -[AdSessionsViewingHistory attachmentViewed:isAd:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x101678758

// -[AdSessionsViewingHistory availableStoriesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1016788c8

// -[AdSessionsViewingHistory currentGroupChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x101678a3c

// -[AdSessionsViewingHistory latestViewingSessionRecordsWithSessionCount:viewedAdContextCount:enableHammerTapLogging:contentHammerTapDuration:adsHammerTapDuration:completionQueue:completionBlock:]
// Type encoding: v68@0:8q16q24B32d36d44@52@?60
// Implementation: 0x101679944

// -[AdSessionsViewingHistory stopCurrentViewingSessionWithExitMethod:]
// Type encoding: v24@0:8@16
// Implementation: 0x101679b04

// -[AdSessionsViewingHistory currentViewLocationWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x101679e7c

// -[AdSessionsViewingHistory getLastNSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x10167a0d0

// -[AdSessionsViewingHistory getSnapsInLastNSeconds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10167a0dc

// -[AdSessionsViewingHistory init]
// Type encoding: @16@0:8
// Implementation: 0x10167a250

// -[AdSessionsViewingHistory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10167a2b0

@end
