// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineVideoSource
// Superclass: SCVideoFrameSource
// Address: 0x112b9eb18

@interface SCTimelineVideoSource

// Property: timelineConfiguration; attributes: T@"<SCTimelineConfiguration>",R,N,V_timelineConfiguration
// Property: playbackTimeRanges; attributes: T@"NSArray",R,N,V_playbackTimeRanges

// -[SCTimelineVideoSource initWithURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x108463d2c

// -[SCTimelineVideoSource initWithAVAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108463d8c

// -[SCTimelineVideoSource initWithTimelineConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x108463dec

// -[SCTimelineVideoSource initWithTimelineConfiguration:previewAssetVideoProviderFactory:smartTemplate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108463df8

// -[SCTimelineVideoSource removeSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1084642d0

// -[SCTimelineVideoSource isTime:playableInSnapAtIndex:]
// Type encoding: B48@0:8{?=qiIq}16Q40
// Implementation: 0x1084642e0

// -[SCTimelineVideoSource isTime:seekableInSnapAtIndex:]
// Type encoding: B48@0:8{?=qiIq}16Q40
// Implementation: 0x108464458

// -[SCTimelineVideoSource supportsContinuousAudioPlay]
// Type encoding: B16@0:8
// Implementation: 0x10846453c

// -[SCTimelineVideoSource audioTimeForVideoFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108464544

// -[SCTimelineVideoSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1084645cc

// -[SCTimelineVideoSource setAudioOverrideAsset:]
// Type encoding: B24@0:8@16
// Implementation: 0x10846461c

// -[SCTimelineVideoSource baseAudioPlayerItemVolume]
// Type encoding: d16@0:8
// Implementation: 0x1084646ac

// -[SCTimelineVideoSource setIsEditingMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084646cc

// -[SCTimelineVideoSource setMixedAudioAssetTrack:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1084647b0

// -[SCTimelineVideoSource updateVolumeProportion:forAudioTrackWithKey:]
// Type encoding: v28@0:8f16@20
// Implementation: 0x108464818

// -[SCTimelineVideoSource assetComposition]
// Type encoding: @16@0:8
// Implementation: 0x108464994

// -[SCTimelineVideoSource generatePlaybackAssetComposition]
// Type encoding: v16@0:8
// Implementation: 0x108464a00

// -[SCTimelineVideoSource assetVideoComposition]
// Type encoding: @16@0:8
// Implementation: 0x108464b38

// -[SCTimelineVideoSource frameTimeForPlaybackTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108464bec

// -[SCTimelineVideoSource playbackTimeForFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108464c38

// -[SCTimelineVideoSource playbackStartTimeOfMultiSnapAtIndex:]
// Type encoding: {?=qiIq}24@0:8q16
// Implementation: 0x108464c84

// -[SCTimelineVideoSource setRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108464d80

// -[SCTimelineVideoSource _updatePlaybackAssetCompositionWithClipLevelRates]
// Type encoding: @16@0:8
// Implementation: 0x108464f7c

// -[SCTimelineVideoSource acquirePixelBufferForItemTime:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}48@0:8{?=qiIq}16^{?=qiIq}40
// Implementation: 0x108465870

// -[SCTimelineVideoSource acquirePixelBufferForItemTime:forSegmentAtIndex:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}56@0:8{?=qiIq}16q40^{?=qiIq}48
// Implementation: 0x108465ba4

// -[SCTimelineVideoSource updateRenderOrientation]
// Type encoding: v16@0:8
// Implementation: 0x108465d38

// -[SCTimelineVideoSource _originalAssetComposition]
// Type encoding: @16@0:8
// Implementation: 0x108465dc0

// -[SCTimelineVideoSource _handleImageSegment:timeRange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108466680

// -[SCTimelineVideoSource _isItemtime:inImageTimeRange:]
// Type encoding: B88@0:8{?=qiIq}16{?={?=qiIq}{?=qiIq}}40
// Implementation: 0x108466910

// -[SCTimelineVideoSource _updateImageSegmentsWithTimeRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x108466a00

// -[SCTimelineVideoSource _setPlaybackAssetRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108466b4c

// -[SCTimelineVideoSource _videoCompositionForVideoTrack:withTimeRanges:transforms:videoRate:]
// Type encoding: @48@0:8@16@24@32d40
// Implementation: 0x108466f2c

// -[SCTimelineVideoSource _scaleCMTime:withRate:]
// Type encoding: {?=qiIq}48@0:8{?=qiIq}16d40
// Implementation: 0x10846719c

// -[SCTimelineVideoSource _videoTransformRenderSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1084671f4

// -[SCTimelineVideoSource _generatePlaybackAssetCompositionContent]
// Type encoding: @16@0:8
// Implementation: 0x108467234

// -[SCTimelineVideoSource _updateMultiSnapTimeRangesWithTimeRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x108467d48

// -[SCTimelineVideoSource _constructPlaybackCompositionFromOverrideAndMixedTracks]
// Type encoding: v16@0:8
// Implementation: 0x108467e24

// -[SCTimelineVideoSource _constructPlaybackCompositionFromOverride:mixedTracks:inComposition:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108467fd0

// -[SCTimelineVideoSource basePlayerItemAudioMix]
// Type encoding: @16@0:8
// Implementation: 0x10846866c

// -[SCTimelineVideoSource _trackFromComposition:withID:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x10846872c

// -[SCTimelineVideoSource _replaceAudioTrackWithId:inAVMutableComposition:withAsset:inTimeRange:]
// Type encoding: @84@0:8i16@20@28{?={?=qiIq}{?=qiIq}}36
// Implementation: 0x108468790

// -[SCTimelineVideoSource _addOriginalAudioToCompositionTrack:]
// Type encoding: @24@0:8@16
// Implementation: 0x108468b14

// -[SCTimelineVideoSource _addMutableTrackToComposition:mediaType:preferredTrackID:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x108468e68

// -[SCTimelineVideoSource isEditingMode]
// Type encoding: B16@0:8
// Implementation: 0x108468ee8

// -[SCTimelineVideoSource timelineConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108468ef8

// -[SCTimelineVideoSource playbackTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108468f08

// -[SCTimelineVideoSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108468f18

@end
