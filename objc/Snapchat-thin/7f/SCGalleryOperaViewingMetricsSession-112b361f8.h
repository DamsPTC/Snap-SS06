// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryOperaViewingMetricsSession
// Superclass: NSObject
// Address: 0x112b361f8

@interface SCGalleryOperaViewingMetricsSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryOperaViewingMetricsSession initWithEventAnnouncer:operaSnapResolver:galleryLogger:pageHeight:featureSettingsService:coreConfigProvider:grapheneRegistry:]
// Type encoding: @72@0:8@16@24@32d40@48@56@64
// Implementation: 0x106d4b034

// -[SCGalleryOperaViewingMetricsSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106d4b2cc

// -[SCGalleryOperaViewingMetricsSession userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x106d4b318

// -[SCGalleryOperaViewingMetricsSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d4b3f4

// -[SCGalleryOperaViewingMetricsSession _registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x106d4b7cc

// -[SCGalleryOperaViewingMetricsSession _tryToHandleOperaViewEventAsCameraRollItemWithEvent:page:params:eventReceivedTime:]
// Type encoding: B48@0:8@16@24@32d40
// Implementation: 0x106d4b9a8

// -[SCGalleryOperaViewingMetricsSession _logGalleryOperaExitWithPage:viewSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106d4c040

// -[SCGalleryOperaViewingMetricsSession _handleOperaViewEventForSnap:entry:event:page:params:eventReceivedTime:]
// Type encoding: v64@0:8@16@24@32@40@48d56
// Implementation: 0x106d4c160

// -[SCGalleryOperaViewingMetricsSession _logErrorsIfNecessary:entry:event:page:params:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106d4cadc

// -[SCGalleryOperaViewingMetricsSession _logStorySessionIfNeededWithPage:viewSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106d4cdd0

// -[SCGalleryOperaViewingMetricsSession _logStorySessionIfNeededWithMemoriesOperaPlaybackItem:viewSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106d4ce50

// -[SCGalleryOperaViewingMetricsSession _startStoryViewSessionWithPlaybackItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d4cf18

// -[SCGalleryOperaViewingMetricsSession _endStoryViewSessionIfNeededWithViewSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106d4cf6c

// -[SCGalleryOperaViewingMetricsSession _endStoryViewSessionForStoryLevelPlaylistGroupWithViewSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106d4cfa0

// -[SCGalleryOperaViewingMetricsSession _logStreamingStallStatusWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d4d17c

// -[SCGalleryOperaViewingMetricsSession _startToViewSnap:entry:browseMediaType:page:eventReceivedTime:]
// Type encoding: v56@0:8@16@24Q32@40d48
// Implementation: 0x106d4d3cc

// -[SCGalleryOperaViewingMetricsSession _invalidateCurrentLoadingSnap]
// Type encoding: v16@0:8
// Implementation: 0x106d4d404

// -[SCGalleryOperaViewingMetricsSession _logCurrentFinishLoadingSnap:browseMediaType:isProgressivePlayback:eventReceivedTime:]
// Type encoding: v44@0:8@16Q24B32d36
// Implementation: 0x106d4d420

// -[SCGalleryOperaViewingMetricsSession _logCurrentFinishLoadingPHAsset:page:contextSessionId:eventReceivedTime:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x106d4d4e8

// -[SCGalleryOperaViewingMetricsSession _logPreviousUnfinishLoadingSnapIfNeededWithEventReceivedTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106d4d5c4

// -[SCGalleryOperaViewingMetricsSession _browseMediaTypeForSnap:page:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x106d4d654

// -[SCGalleryOperaViewingMetricsSession _setCurrentlyPlayingSnap:asset:entry:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d4d784

// -[SCGalleryOperaViewingMetricsSession _getViewSourceFromPage:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d4d964

// -[SCGalleryOperaViewingMetricsSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d4da3c

@end
