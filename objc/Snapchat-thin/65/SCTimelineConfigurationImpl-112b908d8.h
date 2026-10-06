// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineConfigurationImpl
// Superclass: NSObject
// Address: 0x112b908d8

@interface SCTimelineConfigurationImpl

// Property: announcer; attributes: T@"SCTimelineConfigurationListenerAnnouncer",&,N,V_announcer
// Property: previewExitType; attributes: Tq,N,V_previewExitType
// Property: segments; attributes: T@"NSArray",R,N,V_segments
// Property: segmentTimeRangesObservable; attributes: T@"SCObservable",R,N,V_segmentTimeRangesObservable
// Property: segmentCount; attributes: TQ,R,N,V_segmentCount
// Property: segmentsEditable; attributes: TB,R,N,GareSegmentsEditable,V_segmentsEditable
// Property: timelineConfigurationStatusObservable; attributes: T@"SCObservable",R,N,V_timelineConfigurationStatusObservable
// Property: previewEdits; attributes: T@"<SCTimelinePreviewEditing>",&,N,V_previewEdits
// Property: musicPickerSelection; attributes: T@"SCMusicPickerSelection",&,N,V_musicPickerSelection
// Property: thumbnailGenerationOverlayState; attributes: T@"SCVideoThumbnailGenerationOverlayState",&,N,V_thumbnailGenerationOverlayState
// Property: timelineSessionID; attributes: T@"NSString",C,N,V_timelineSessionID
// Property: totalContentDuration; attributes: T{?=qiIq},R,N,V_totalContentDuration
// Property: totalDuration; attributes: T{?=qiIq},R,N,V_totalDuration
// Property: containsImportedContent; attributes: TB,R,N
// Property: containsOnlyImportedContent; attributes: TB,R,N
// Property: editedThumbnails; attributes: T@"NSArray",&,N,V_editedThumbnails
// Property: deletedSegmentCaptureSessionIDs; attributes: T@"NSArray",R,N,V_deletedSegmentCaptureSessionIDs
// Property: uniqueSnapCreationCount; attributes: TQ,R,N,V_uniqueSnapCreationCount
// Property: isAudioEnabled; attributes: TB,R,N
// Property: prominentThumbnailEnabled; attributes: TB,N,GisProminentThumbnailEnabled,V_prominentThumbnailEnabled
// Property: useNGSMEPlayback; attributes: TB,R,N,V_useNGSMEPlayback
// Property: lastSegmentUniqueId; attributes: Tq,R,N
// Property: suppressTimelineContextInfo; attributes: TB,N,V_suppressTimelineContextInfo
// Property: usageType; attributes: Tq,R,N,V_usageType
// Property: renderSizeOverride; attributes: T{CGSize=dd},N,V_renderSizeOverride
// Property: shouldPreGenerateImagePixelBuffers; attributes: TB,N,V_shouldPreGenerateImagePixelBuffers
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimelineConfigurationImpl initWithBlizzardLogger:tinsel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107fad634

// -[SCTimelineConfigurationImpl initWithUsageType:blizzardLogger:tinsel:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x107fad7f8

// -[SCTimelineConfigurationImpl initWithUsageType:segmentsEditable:useNGSMEPlayback:blizzardLogger:tinsel:]
// Type encoding: @48@0:8q16B24B28@32@40
// Implementation: 0x107fad828

// -[SCTimelineConfigurationImpl segments]
// Type encoding: @16@0:8
// Implementation: 0x107fad860

// -[SCTimelineConfigurationImpl newVideoSegmentWithAssetURL:duration:frameImage:snapSource:activeLensID:externalMediaSource:]
// Type encoding: @76@0:8@16{?=qiIq}24@48q56@64i72
// Implementation: 0x107fad878

// -[SCTimelineConfigurationImpl newImageSegmentWithAssetURL:frameImage:snapSource:isFromSnapEditor:activeLensID:]
// Type encoding: @52@0:8@16@24q32B40@44
// Implementation: 0x107fad960

// -[SCTimelineConfigurationImpl addSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fadae0

// -[SCTimelineConfigurationImpl addSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fadb28

// -[SCTimelineConfigurationImpl deleteLastSegment]
// Type encoding: v16@0:8
// Implementation: 0x107fadc30

// -[SCTimelineConfigurationImpl deleteSegmentAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107fadc5c

// -[SCTimelineConfigurationImpl deleteAllSegments]
// Type encoding: v16@0:8
// Implementation: 0x107faded4

// -[SCTimelineConfigurationImpl moveSegmentAtIndex:toDestinationIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107fadf44

// -[SCTimelineConfigurationImpl didEnterReorderMode]
// Type encoding: v16@0:8
// Implementation: 0x107fae000

// -[SCTimelineConfigurationImpl didExitReorderMode]
// Type encoding: v16@0:8
// Implementation: 0x107fae03c

// -[SCTimelineConfigurationImpl restoreToSegmentsBeforeReordering]
// Type encoding: v16@0:8
// Implementation: 0x107fae074

// -[SCTimelineConfigurationImpl updateWithTimelineVideoSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fae110

// -[SCTimelineConfigurationImpl hasSameTimelineVideoSegments:]
// Type encoding: B24@0:8@16
// Implementation: 0x107fae1f4

// -[SCTimelineConfigurationImpl firstFrameImage]
// Type encoding: @16@0:8
// Implementation: 0x107fae270

// -[SCTimelineConfigurationImpl totalContentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fae2b8

// -[SCTimelineConfigurationImpl totalDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fae2cc

// -[SCTimelineConfigurationImpl containsImportedContent]
// Type encoding: B16@0:8
// Implementation: 0x107fae2e0

// -[SCTimelineConfigurationImpl containsOnlyImportedContent]
// Type encoding: B16@0:8
// Implementation: 0x107fae3e0

// -[SCTimelineConfigurationImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fae4e4

// -[SCTimelineConfigurationImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fae4ec

// -[SCTimelineConfigurationImpl videoCodecType]
// Type encoding: q16@0:8
// Implementation: 0x107fae4f4

// -[SCTimelineConfigurationImpl segmentTimeRangesObservable]
// Type encoding: @16@0:8
// Implementation: 0x107fae568

// -[SCTimelineConfigurationImpl timelineConfigurationStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x107fae590

// -[SCTimelineConfigurationImpl updateFirstFrameImageIfNeededWithPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fae5b8

// -[SCTimelineConfigurationImpl uniqueSnapCreationCount]
// Type encoding: Q16@0:8
// Implementation: 0x107fae638

// -[SCTimelineConfigurationImpl deletedSegmentCaptureSessionIDs]
// Type encoding: @16@0:8
// Implementation: 0x107fae6a4

// -[SCTimelineConfigurationImpl setEditedThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fae6cc

// -[SCTimelineConfigurationImpl setEditedThumbnails:forSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fae724

// -[SCTimelineConfigurationImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107fae794

// -[SCTimelineConfigurationImpl segmentCount]
// Type encoding: Q16@0:8
// Implementation: 0x107fae7e0

// -[SCTimelineConfigurationImpl playbackTimeForFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107fae7e8

// -[SCTimelineConfigurationImpl frameTimeForPlaybackTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107faebb4

// -[SCTimelineConfigurationImpl frameTimeForClipLevelRatesAppliedPlaybackTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107faee30

// -[SCTimelineConfigurationImpl clearDirectSnapDiscard]
// Type encoding: v16@0:8
// Implementation: 0x107faee64

// -[SCTimelineConfigurationImpl cumulativeContentEndTimes]
// Type encoding: @16@0:8
// Implementation: 0x107faef54

// -[SCTimelineConfigurationImpl cumulativeSegmentEndTimes]
// Type encoding: @16@0:8
// Implementation: 0x107faf134

// -[SCTimelineConfigurationImpl lastSegmentUniqueId]
// Type encoding: q16@0:8
// Implementation: 0x107faf314

// -[SCTimelineConfigurationImpl suppressTimelineContextInfo]
// Type encoding: B16@0:8
// Implementation: 0x107faf354

// -[SCTimelineConfigurationImpl isAudioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107faf384

// -[SCTimelineConfigurationImpl allSegmentsHaveSamePlaybackRate]
// Type encoding: B16@0:8
// Implementation: 0x107faf39c

// -[SCTimelineConfigurationImpl snapSegmentLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x107faf3a4

// -[SCTimelineConfigurationImpl transferDataFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x107faf49c

// -[SCTimelineConfigurationImpl addPendingMemoriesImportSnapDoc:segmentUniqueId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107faf64c

// -[SCTimelineConfigurationImpl getThenRemovePendingMemoriesImportSnapDocForSegmentUniqueId:]
// Type encoding: @24@0:8q16
// Implementation: 0x107faf6dc

// -[SCTimelineConfigurationImpl _addSingleSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x107faf74c

// -[SCTimelineConfigurationImpl _resetInternalStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107fafa70

// -[SCTimelineConfigurationImpl _resetSessionID]
// Type encoding: v16@0:8
// Implementation: 0x107fafba4

// -[SCTimelineConfigurationImpl _onSegmentTimeRangesUpdated]
// Type encoding: v16@0:8
// Implementation: 0x107fafbd8

// -[SCTimelineConfigurationImpl _notifySegmentTimeRangesChanges]
// Type encoding: v16@0:8
// Implementation: 0x107fafdbc

// -[SCTimelineConfigurationImpl _notifyConfigurationStatusChanges]
// Type encoding: v16@0:8
// Implementation: 0x107fafe68

// -[SCTimelineConfigurationImpl _findFirstDivergentIndexWithTimelineVideoSegments:]
// Type encoding: q24@0:8@16
// Implementation: 0x107fafea4

// -[SCTimelineConfigurationImpl _resetSegmentsTimeOffsetAndObservers]
// Type encoding: v16@0:8
// Implementation: 0x107fb000c

// -[SCTimelineConfigurationImpl _generateTimelineConfigurationStatus]
// Type encoding: @16@0:8
// Implementation: 0x107fb0300

// -[SCTimelineConfigurationImpl _videoTransformRenderSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107fb0304

// -[SCTimelineConfigurationImpl previewExitType]
// Type encoding: q16@0:8
// Implementation: 0x107fb033c

// -[SCTimelineConfigurationImpl setPreviewExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fb0344

// -[SCTimelineConfigurationImpl previewEdits]
// Type encoding: @16@0:8
// Implementation: 0x107fb034c

// -[SCTimelineConfigurationImpl setPreviewEdits:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb0354

// -[SCTimelineConfigurationImpl thumbnailGenerationOverlayState]
// Type encoding: @16@0:8
// Implementation: 0x107fb0384

// -[SCTimelineConfigurationImpl setThumbnailGenerationOverlayState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb038c

// -[SCTimelineConfigurationImpl musicPickerSelection]
// Type encoding: @16@0:8
// Implementation: 0x107fb03bc

// -[SCTimelineConfigurationImpl setMusicPickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb03c4

// -[SCTimelineConfigurationImpl timelineSessionID]
// Type encoding: @16@0:8
// Implementation: 0x107fb03f4

// -[SCTimelineConfigurationImpl setTimelineSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb03fc

// -[SCTimelineConfigurationImpl editedThumbnails]
// Type encoding: @16@0:8
// Implementation: 0x107fb0404

// -[SCTimelineConfigurationImpl areSegmentsEditable]
// Type encoding: B16@0:8
// Implementation: 0x107fb040c

// -[SCTimelineConfigurationImpl isProminentThumbnailEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107fb0414

// -[SCTimelineConfigurationImpl setProminentThumbnailEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fb041c

// -[SCTimelineConfigurationImpl useNGSMEPlayback]
// Type encoding: B16@0:8
// Implementation: 0x107fb0424

// -[SCTimelineConfigurationImpl setSuppressTimelineContextInfo:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fb042c

// -[SCTimelineConfigurationImpl usageType]
// Type encoding: q16@0:8
// Implementation: 0x107fb0434

// -[SCTimelineConfigurationImpl renderSizeOverride]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107fb043c

// -[SCTimelineConfigurationImpl setRenderSizeOverride:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107fb0444

// -[SCTimelineConfigurationImpl shouldPreGenerateImagePixelBuffers]
// Type encoding: B16@0:8
// Implementation: 0x107fb044c

// -[SCTimelineConfigurationImpl setShouldPreGenerateImagePixelBuffers:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fb0454

// -[SCTimelineConfigurationImpl announcer]
// Type encoding: @16@0:8
// Implementation: 0x107fb045c

// -[SCTimelineConfigurationImpl setAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb0464

// -[SCTimelineConfigurationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fb0494

@end
