// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineVideoImmutablePlaybackConfiguration
// Superclass: NSObject
// Address: 0x112b909c8

@interface SCTimelineVideoImmutablePlaybackConfiguration

// Property: previewExitType; attributes: Tq,N,V_previewExitType
// Property: segments; attributes: T@"NSArray",R,N
// Property: segmentTimeRangesObservable; attributes: T@"SCObservable",R,N,V_semgentTimeRangesObservable
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
// Property: containsOnlyImportedContent; attributes: TB,R,N,V_containsOnlyImportedContent
// Property: editedThumbnails; attributes: T@"NSArray",&,N,V_editedThumbnails
// Property: deletedSegmentCaptureSessionIDs; attributes: T@"NSArray",R,N,V_deletedSegmentCaptureSessionIDs
// Property: uniqueSnapCreationCount; attributes: TQ,R,N,V_uniqueSnapCreationCount
// Property: isAudioEnabled; attributes: TB,R,N,V_isAudioEnabled
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

// -[SCTimelineVideoImmutablePlaybackConfiguration initWithSegments:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fb2e48

// -[SCTimelineVideoImmutablePlaybackConfiguration segments]
// Type encoding: @16@0:8
// Implementation: 0x107fb318c

// -[SCTimelineVideoImmutablePlaybackConfiguration newVideoSegmentWithAssetURL:duration:frameImage:snapSource:activeLensID:externalMediaSource:]
// Type encoding: @76@0:8@16{?=qiIq}24@48q56@64i72
// Implementation: 0x107fb31b4

// -[SCTimelineVideoImmutablePlaybackConfiguration newImageSegmentWithAssetURL:frameImage:snapSource:isFromSnapEditor:activeLensID:]
// Type encoding: @52@0:8@16@24q32B40@44
// Implementation: 0x107fb31bc

// -[SCTimelineVideoImmutablePlaybackConfiguration addSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb31c4

// -[SCTimelineVideoImmutablePlaybackConfiguration addSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb31c8

// -[SCTimelineVideoImmutablePlaybackConfiguration deleteLastSegment]
// Type encoding: v16@0:8
// Implementation: 0x107fb31cc

// -[SCTimelineVideoImmutablePlaybackConfiguration deleteSegmentAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107fb31d0

// -[SCTimelineVideoImmutablePlaybackConfiguration deleteAllSegments]
// Type encoding: v16@0:8
// Implementation: 0x107fb31d4

// -[SCTimelineVideoImmutablePlaybackConfiguration firstFrameImage]
// Type encoding: @16@0:8
// Implementation: 0x107fb31d8

// -[SCTimelineVideoImmutablePlaybackConfiguration totalContentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fb3220

// -[SCTimelineVideoImmutablePlaybackConfiguration totalDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fb3234

// -[SCTimelineVideoImmutablePlaybackConfiguration containsImportedContent]
// Type encoding: B16@0:8
// Implementation: 0x107fb3248

// -[SCTimelineVideoImmutablePlaybackConfiguration addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3348

// -[SCTimelineVideoImmutablePlaybackConfiguration removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb334c

// -[SCTimelineVideoImmutablePlaybackConfiguration videoCodecType]
// Type encoding: q16@0:8
// Implementation: 0x107fb3350

// -[SCTimelineVideoImmutablePlaybackConfiguration segmentTimeRangesObservable]
// Type encoding: @16@0:8
// Implementation: 0x107fb33c4

// -[SCTimelineVideoImmutablePlaybackConfiguration updateFirstFrameImageIfNeededWithPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb33cc

// -[SCTimelineVideoImmutablePlaybackConfiguration uniqueSnapCreationCount]
// Type encoding: Q16@0:8
// Implementation: 0x107fb33d0

// -[SCTimelineVideoImmutablePlaybackConfiguration deletedSegmentCaptureSessionIDs]
// Type encoding: @16@0:8
// Implementation: 0x107fb343c

// -[SCTimelineVideoImmutablePlaybackConfiguration setEditedThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3444

// -[SCTimelineVideoImmutablePlaybackConfiguration setEditedThumbnails:forSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fb3448

// -[SCTimelineVideoImmutablePlaybackConfiguration segmentCount]
// Type encoding: Q16@0:8
// Implementation: 0x107fb344c

// -[SCTimelineVideoImmutablePlaybackConfiguration moveSegmentAtIndex:toDestinationIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107fb3454

// -[SCTimelineVideoImmutablePlaybackConfiguration playbackTimeForFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107fb3458

// -[SCTimelineVideoImmutablePlaybackConfiguration frameTimeForPlaybackTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107fb3824

// -[SCTimelineVideoImmutablePlaybackConfiguration frameTimeForClipLevelRatesAppliedPlaybackTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x107fb3aa0

// -[SCTimelineVideoImmutablePlaybackConfiguration clearDirectSnapDiscard]
// Type encoding: v16@0:8
// Implementation: 0x107fb3ad4

// -[SCTimelineVideoImmutablePlaybackConfiguration cumulativeContentEndTimes]
// Type encoding: @16@0:8
// Implementation: 0x107fb3ad8

// -[SCTimelineVideoImmutablePlaybackConfiguration cumulativeSegmentEndTimes]
// Type encoding: @16@0:8
// Implementation: 0x107fb3cb8

// -[SCTimelineVideoImmutablePlaybackConfiguration lastSegmentUniqueId]
// Type encoding: q16@0:8
// Implementation: 0x107fb3e98

// -[SCTimelineVideoImmutablePlaybackConfiguration updateWithTimelineVideoSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3ed8

// -[SCTimelineVideoImmutablePlaybackConfiguration hasSameTimelineVideoSegments:]
// Type encoding: B24@0:8@16
// Implementation: 0x107fb3edc

// -[SCTimelineVideoImmutablePlaybackConfiguration allSegmentsHaveSamePlaybackRate]
// Type encoding: B16@0:8
// Implementation: 0x107fb3ee4

// -[SCTimelineVideoImmutablePlaybackConfiguration snapSegmentLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x107fb3eec

// -[SCTimelineVideoImmutablePlaybackConfiguration addPendingMemoriesImportSnapDoc:segmentUniqueId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107fb3ef8

// -[SCTimelineVideoImmutablePlaybackConfiguration getThenRemovePendingMemoriesImportSnapDocForSegmentUniqueId:]
// Type encoding: @24@0:8q16
// Implementation: 0x107fb3efc

// -[SCTimelineVideoImmutablePlaybackConfiguration transferDataFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3f04

// -[SCTimelineVideoImmutablePlaybackConfiguration restoreToSegmentsBeforeReordering]
// Type encoding: v16@0:8
// Implementation: 0x107fb3f08

// -[SCTimelineVideoImmutablePlaybackConfiguration didEnterReorderMode]
// Type encoding: v16@0:8
// Implementation: 0x107fb3f0c

// -[SCTimelineVideoImmutablePlaybackConfiguration didExitReorderMode]
// Type encoding: v16@0:8
// Implementation: 0x107fb3f10

// -[SCTimelineVideoImmutablePlaybackConfiguration previewExitType]
// Type encoding: q16@0:8
// Implementation: 0x107fb3f14

// -[SCTimelineVideoImmutablePlaybackConfiguration setPreviewExitType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fb3f1c

// -[SCTimelineVideoImmutablePlaybackConfiguration previewEdits]
// Type encoding: @16@0:8
// Implementation: 0x107fb3f24

// -[SCTimelineVideoImmutablePlaybackConfiguration setPreviewEdits:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3f2c

// -[SCTimelineVideoImmutablePlaybackConfiguration thumbnailGenerationOverlayState]
// Type encoding: @16@0:8
// Implementation: 0x107fb3f5c

// -[SCTimelineVideoImmutablePlaybackConfiguration setThumbnailGenerationOverlayState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3f64

// -[SCTimelineVideoImmutablePlaybackConfiguration musicPickerSelection]
// Type encoding: @16@0:8
// Implementation: 0x107fb3f94

// -[SCTimelineVideoImmutablePlaybackConfiguration setMusicPickerSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3f9c

// -[SCTimelineVideoImmutablePlaybackConfiguration timelineSessionID]
// Type encoding: @16@0:8
// Implementation: 0x107fb3fcc

// -[SCTimelineVideoImmutablePlaybackConfiguration setTimelineSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb3fd4

// -[SCTimelineVideoImmutablePlaybackConfiguration containsOnlyImportedContent]
// Type encoding: B16@0:8
// Implementation: 0x107fb3fdc

// -[SCTimelineVideoImmutablePlaybackConfiguration editedThumbnails]
// Type encoding: @16@0:8
// Implementation: 0x107fb3fe4

// -[SCTimelineVideoImmutablePlaybackConfiguration areSegmentsEditable]
// Type encoding: B16@0:8
// Implementation: 0x107fb3fec

// -[SCTimelineVideoImmutablePlaybackConfiguration isAudioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107fb3ff4

// -[SCTimelineVideoImmutablePlaybackConfiguration isProminentThumbnailEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107fb3ffc

// -[SCTimelineVideoImmutablePlaybackConfiguration setProminentThumbnailEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fb4004

// -[SCTimelineVideoImmutablePlaybackConfiguration useNGSMEPlayback]
// Type encoding: B16@0:8
// Implementation: 0x107fb400c

// -[SCTimelineVideoImmutablePlaybackConfiguration suppressTimelineContextInfo]
// Type encoding: B16@0:8
// Implementation: 0x107fb4014

// -[SCTimelineVideoImmutablePlaybackConfiguration setSuppressTimelineContextInfo:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fb401c

// -[SCTimelineVideoImmutablePlaybackConfiguration usageType]
// Type encoding: q16@0:8
// Implementation: 0x107fb4024

// -[SCTimelineVideoImmutablePlaybackConfiguration renderSizeOverride]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107fb402c

// -[SCTimelineVideoImmutablePlaybackConfiguration setRenderSizeOverride:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107fb4034

// -[SCTimelineVideoImmutablePlaybackConfiguration timelineConfigurationStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x107fb403c

// -[SCTimelineVideoImmutablePlaybackConfiguration shouldPreGenerateImagePixelBuffers]
// Type encoding: B16@0:8
// Implementation: 0x107fb4044

// -[SCTimelineVideoImmutablePlaybackConfiguration setShouldPreGenerateImagePixelBuffers:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fb404c

// -[SCTimelineVideoImmutablePlaybackConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fb4054

// +[SCTimelineVideoImmutablePlaybackConfiguration immutablePlaybackOnlyConfigurationFromConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fb3114

@end
