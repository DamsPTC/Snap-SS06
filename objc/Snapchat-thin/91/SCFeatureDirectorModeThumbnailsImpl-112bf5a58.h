// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureDirectorModeThumbnailsImpl
// Superclass: SCFeature
// Address: 0x112bf5a58

@interface SCFeatureDirectorModeThumbnailsImpl

// Property: mediaConfiguration; attributes: T@"<SCTimelineConfiguration>",&,N,V_mediaConfiguration
// Property: selectedSegment; attributes: T@"<SCTimelineMediaSegment>",R,N
// Property: delegate; attributes: T@"<SCDirectorModeThumbnailsDelegate>",W,N,V_delegate
// Property: previewDelegate; attributes: T@"<SCDirectorModeThumbnailsPreviewDelegate>",W,N,V_previewDelegate
// Property: isPlaybackManuallyPaused; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureDirectorModeThumbnailsImpl initWithSnapDocEditorProvider:mediaConfiguration:thumbnailGenerator:includeFooterView:snapEditorEnabled:isSegmentTrimmable:isClipReorderingEnabled:maxVideoDurationInSec:useFixedSegmentDuration:templateExplorerEnabled:runtime:]
// Type encoding: @80@0:8@16@24@32B40B44B48B52d56B64B68@72
// Implementation: 0x1091fd1fc

// -[SCFeatureDirectorModeThumbnailsImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fd394

// -[SCFeatureDirectorModeThumbnailsImpl configureRuntimeGeometryWithView:cameraView:overlapDidChangeHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1091fd3c8

// -[SCFeatureDirectorModeThumbnailsImpl synchronizeRuntimeGeometry]
// Type encoding: v16@0:8
// Implementation: 0x1091fd684

// -[SCFeatureDirectorModeThumbnailsImpl invalidateRuntimeGeometry]
// Type encoding: v16@0:8
// Implementation: 0x1091fd694

// -[SCFeatureDirectorModeThumbnailsImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091fd6f8

// -[SCFeatureDirectorModeThumbnailsImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1091fd878

// -[SCFeatureDirectorModeThumbnailsImpl isFeatureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091fd87c

// -[SCFeatureDirectorModeThumbnailsImpl thumbnailsView]
// Type encoding: @16@0:8
// Implementation: 0x1091fd884

// -[SCFeatureDirectorModeThumbnailsImpl firstThumbnailCell]
// Type encoding: @16@0:8
// Implementation: 0x1091fd894

// -[SCFeatureDirectorModeThumbnailsImpl updateThumbnailsViewAlphaWithAnimated:duration:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x1091fd8a4

// -[SCFeatureDirectorModeThumbnailsImpl setThumbnailHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091fd9e4

// -[SCFeatureDirectorModeThumbnailsImpl setMediaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fda78

// -[SCFeatureDirectorModeThumbnailsImpl selectedSegment]
// Type encoding: @16@0:8
// Implementation: 0x1091fdae8

// -[SCFeatureDirectorModeThumbnailsImpl setPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fdaf8

// -[SCFeatureDirectorModeThumbnailsImpl playbackDidRenderFrameAtTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1091fdb08

// -[SCFeatureDirectorModeThumbnailsImpl playbackDidStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091fdb44

// -[SCFeatureDirectorModeThumbnailsImpl playbackDidStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091fdb54

// -[SCFeatureDirectorModeThumbnailsImpl playbackDidPauseRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091fdb64

// -[SCFeatureDirectorModeThumbnailsImpl playbackDidResumeRunning]
// Type encoding: v16@0:8
// Implementation: 0x1091fdb74

// -[SCFeatureDirectorModeThumbnailsImpl onEnterPreviewAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091fdb84

// -[SCFeatureDirectorModeThumbnailsImpl onDismissPreview]
// Type encoding: v16@0:8
// Implementation: 0x1091fdbf8

// -[SCFeatureDirectorModeThumbnailsImpl deleteSelectedSegment]
// Type encoding: v16@0:8
// Implementation: 0x1091fdc34

// -[SCFeatureDirectorModeThumbnailsImpl isPlaybackManuallyPaused]
// Type encoding: B16@0:8
// Implementation: 0x1091fdc44

// -[SCFeatureDirectorModeThumbnailsImpl batchThumbnailsUpdateBegin]
// Type encoding: v16@0:8
// Implementation: 0x1091fdc54

// -[SCFeatureDirectorModeThumbnailsImpl batchThumbnailsUpdateEnd]
// Type encoding: v16@0:8
// Implementation: 0x1091fdc64

// -[SCFeatureDirectorModeThumbnailsImpl setPreSelectedSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fdc74

// -[SCFeatureDirectorModeThumbnailsImpl startEnterEditingModeWithThumbnailsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091fdc84

// -[SCFeatureDirectorModeThumbnailsImpl revealThumbnails]
// Type encoding: v16@0:8
// Implementation: 0x1091fdd30

// -[SCFeatureDirectorModeThumbnailsImpl deselectSelectedSegmentIfAny]
// Type encoding: B16@0:8
// Implementation: 0x1091fddd4

// -[SCFeatureDirectorModeThumbnailsImpl exitSegmentThumbnailsReordering]
// Type encoding: v16@0:8
// Implementation: 0x1091fdde4

// -[SCFeatureDirectorModeThumbnailsImpl restoreThumbnailsToInitialStateInReorder]
// Type encoding: v16@0:8
// Implementation: 0x1091fddf4

// -[SCFeatureDirectorModeThumbnailsImpl setSegmentThumbnailSelectedAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091fde04

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091fde14

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didAddSegments:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091fe2fc

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didSelectSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091fe414

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didDeselectSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091fe4b0

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didTrimSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091fe510

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:isPlaybackManuallyPaused:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091fe584

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidTapAddMore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fe5e4

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:updateEditedThumbnailForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091fe640

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x1091fe69c

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidFinishSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fe700

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:isInReordering:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091fe738

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidDeleteSegmentInReorder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fe788

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidEndDroppingInReorder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fe7c0

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidStartUpdatingCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fe7f8

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidFinishUpdatingCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fe830

// -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidTapTemplateExplorerButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fe868

// -[SCFeatureDirectorModeThumbnailsImpl availableIntervalForIncreasingTrimLength]
// Type encoding: d16@0:8
// Implementation: 0x1091fe8a0

// -[SCFeatureDirectorModeThumbnailsImpl preferredHeight]
// Type encoding: d16@0:8
// Implementation: 0x1091fe918

// -[SCFeatureDirectorModeThumbnailsImpl componentView]
// Type encoding: @16@0:8
// Implementation: 0x1091fe91c

// -[SCFeatureDirectorModeThumbnailsImpl _setupThumbnailsInParentView]
// Type encoding: v16@0:8
// Implementation: 0x1091fe92c

// -[SCFeatureDirectorModeThumbnailsImpl _thumbnailsViewHeight]
// Type encoding: d16@0:8
// Implementation: 0x1091fead4

// -[SCFeatureDirectorModeThumbnailsImpl mediaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1091febd0

// -[SCFeatureDirectorModeThumbnailsImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091febe0

// -[SCFeatureDirectorModeThumbnailsImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fec00

// -[SCFeatureDirectorModeThumbnailsImpl previewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1091fec14

// -[SCFeatureDirectorModeThumbnailsImpl setPreviewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091fec34

// -[SCFeatureDirectorModeThumbnailsImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091fec48

@end
