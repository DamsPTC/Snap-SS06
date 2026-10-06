// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoFrameSource
// Superclass: NSObject
// Address: 0x112bbed78

@interface SCVideoFrameSource

// Property: asset; attributes: T@"AVAsset",&,N,V_asset
// Property: sourceReady; attributes: TB,N,V_sourceReady
// Property: playbackBufferMonitoringEnabled; attributes: TB,N,V_playbackBufferMonitoringEnabled
// Property: videoOutput; attributes: T@"AVPlayerItemVideoOutput",R,N,V_videoOutput
// Property: videoOutputSetting; attributes: T@"NSDictionary",R,C,N,V_videoOutputSetting
// Property: originalDuration; attributes: T{?=qiIq},R,N,V_originalDuration
// Property: originalAsset; attributes: T@"AVAsset",R,N,V_originalAsset
// Property: assetVideoComposition; attributes: T@"AVVideoComposition",R,N,V_assetVideoComposition
// Property: lastRate; attributes: Td,R,N,V_lastRate
// Property: basePlayerItemAudioMix; attributes: T@"AVAudioMix",R,N
// Property: playerItem; attributes: T@"AVPlayerItem",R,N,V_playerItem
// Property: videoTrack; attributes: T@"AVAssetTrack",R,N
// Property: baseAudioTrack; attributes: T@"AVAssetTrack",R,N
// Property: nonBaseAudioPlayerItem; attributes: T@"AVPlayerItem",R,N,V_nonBaseAudioPlayerItem
// Property: baseAudioPlayerItemVolume; attributes: Td,R,N,V_baseAudioPlayerItemVolume
// Property: assetComposition; attributes: T@"AVComposition",R,N
// Property: delegate; attributes: T@"<SCVideoFrameSourceDelegate>",W,N,V_delegate
// Property: multiSnapTimeRanges; attributes: T@"NSArray",C,N,V_multiSnapTimeRanges
// Property: didDeleteTimeRange; attributes: TB,N,V_didDeleteTimeRange
// Property: firstVSyncHostTime; attributes: Td,N,V_firstVSyncHostTime
// Property: hasExtractedFrame; attributes: TB,N,V_hasExtractedFrame
// Property: noNewPixelBufferCount; attributes: Tq,N,V_noNewPixelBufferCount
// Property: remakeVideoOutputTryCount; attributes: Tq,N,V_remakeVideoOutputTryCount
// Property: supportsContinuousAudioPlay; attributes: TB,R,N
// Property: continuousAudioPlay; attributes: TB,N,V_continuousAudioPlay
// Property: usePlaybackOptimizedAsset; attributes: TB,N,V_usePlaybackOptimizedAsset
// Property: isEditingMode; attributes: TB,N,V_isEditingMode
// Property: useSingleCompositionForVideoFrameSource; attributes: TB,N,V_useSingleCompositionForVideoFrameSource
// Property: itemTimeStartOffset; attributes: T{?=qiIq},N,V_itemTimeStartOffset
// Property: rate; attributes: Td,N,V_rate
// Property: renderOrientation; attributes: Tq,N,V_renderOrientation
// Property: didProcessFirstFrame; attributes: TB,N,VdidProcessFirstFrame
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoFrameSource initWithURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ce1894

// -[SCVideoFrameSource initWithAVAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ce198c

// -[SCVideoFrameSource init]
// Type encoding: @16@0:8
// Implementation: 0x108ce19dc

// -[SCVideoFrameSource setURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce1ac0

// -[SCVideoFrameSource setAVAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce1bb0

// -[SCVideoFrameSource setOriginalAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce1dcc

// -[SCVideoFrameSource updateRenderOrientation]
// Type encoding: v16@0:8
// Implementation: 0x108ce1edc

// -[SCVideoFrameSource videoOutputSetting]
// Type encoding: @16@0:8
// Implementation: 0x108ce1f58

// -[SCVideoFrameSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108ce2048

// -[SCVideoFrameSource startReading]
// Type encoding: v16@0:8
// Implementation: 0x108ce20a8

// -[SCVideoFrameSource cancelReading]
// Type encoding: v16@0:8
// Implementation: 0x108ce2110

// -[SCVideoFrameSource resetPlayerItem]
// Type encoding: v16@0:8
// Implementation: 0x108ce2144

// -[SCVideoFrameSource duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108ce21cc

// -[SCVideoFrameSource itemTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108ce2214

// -[SCVideoFrameSource isSourceReady]
// Type encoding: B16@0:8
// Implementation: 0x108ce2270

// -[SCVideoFrameSource _generateAndSetCurrentPlayerItemFromAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce2278

// -[SCVideoFrameSource _replaceCurrentPlayerItemWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce2304

// -[SCVideoFrameSource itemTimeForHostTime:]
// Type encoding: {?=qiIq}24@0:8d16
// Implementation: 0x108ce23d4

// -[SCVideoFrameSource acquirePixelBufferForItemTime:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}48@0:8{?=qiIq}16^{?=qiIq}40
// Implementation: 0x108ce23ec

// -[SCVideoFrameSource acquirePixelBufferForItemTime:forSegmentAtIndex:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}56@0:8{?=qiIq}16q40^{?=qiIq}48
// Implementation: 0x108ce2520

// -[SCVideoFrameSource hasNewPixelBufferForItemTime:]
// Type encoding: B40@0:8{?=qiIq}16
// Implementation: 0x108ce2554

// -[SCVideoFrameSource remakeVideoOutput]
// Type encoding: v16@0:8
// Implementation: 0x108ce2588

// -[SCVideoFrameSource videoTrack]
// Type encoding: @16@0:8
// Implementation: 0x108ce2694

// -[SCVideoFrameSource baseAudioTrack]
// Type encoding: @16@0:8
// Implementation: 0x108ce26e8

// -[SCVideoFrameSource setPlaybackBufferMonitoringEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce273c

// -[SCVideoFrameSource multiSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x108ce2764

// -[SCVideoFrameSource startTimeForSnapAtIndex:]
// Type encoding: {?=qiIq}24@0:8q16
// Implementation: 0x108ce2848

// -[SCVideoFrameSource endTimeForSnapAtIndex:]
// Type encoding: {?=qiIq}24@0:8q16
// Implementation: 0x108ce28e8

// -[SCVideoFrameSource assetVideoTrack]
// Type encoding: @16@0:8
// Implementation: 0x108ce2984

// -[SCVideoFrameSource _addBaseAudioTrackToComposition:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce29bc

// -[SCVideoFrameSource _addCombinedAudioTracksToComposition:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce2af8

// -[SCVideoFrameSource assetComposition]
// Type encoding: @16@0:8
// Implementation: 0x108ce2c8c

// -[SCVideoFrameSource _videoCompositionForAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ce2e1c

// -[SCVideoFrameSource setMultiSnapTimeRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce2e94

// -[SCVideoFrameSource removeSnapAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ce2ec4

// -[SCVideoFrameSource isTime:playableInSnapAtIndex:]
// Type encoding: B48@0:8{?=qiIq}16Q40
// Implementation: 0x108ce2ecc

// -[SCVideoFrameSource isTime:seekableInSnapAtIndex:]
// Type encoding: B48@0:8{?=qiIq}16Q40
// Implementation: 0x108ce2ed4

// -[SCVideoFrameSource supportsContinuousAudioPlay]
// Type encoding: B16@0:8
// Implementation: 0x108ce2edc

// -[SCVideoFrameSource audioTimeForVideoFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108ce2ee4

// -[SCVideoFrameSource setAudioOverrideAsset:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ce2ef8

// -[SCVideoFrameSource setMixedAudioAssetTrack:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108ce2fb0

// -[SCVideoFrameSource updateVolumeProportion:forAudioTrackWithKey:]
// Type encoding: v28@0:8f16@20
// Implementation: 0x108ce30e8

// -[SCVideoFrameSource _appendMixedTrackVolumesToAVAudioMixInputParameters:separateBaseAudioVolumeProportion:audioTrackVolumeProportions:]
// Type encoding: v36@0:8@16f24@28
// Implementation: 0x108ce3318

// -[SCVideoFrameSource updateBaseAudioPlayerItemVolume]
// Type encoding: v16@0:8
// Implementation: 0x108ce3588

// -[SCVideoFrameSource _constructAudioPlayerItemFromOverrideAndMixedTracks]
// Type encoding: @16@0:8
// Implementation: 0x108ce36d4

// -[SCVideoFrameSource addAudioTracksFromOverride:mixedTracks:assetAudioTracks:toComposition:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x108ce3730

// -[SCVideoFrameSource constructAudioPlayerItemFromOverride:mixedTracks:assetAudioTracks:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108ce3d08

// -[SCVideoFrameSource basePlayerItemAudioMix]
// Type encoding: @16@0:8
// Implementation: 0x108ce3ec4

// -[SCVideoFrameSource frameTimeForPlaybackTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108ce3ecc

// -[SCVideoFrameSource playbackTimeForFrameTime:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108ce3ee0

// -[SCVideoFrameSource playbackStartTimeOfMultiSnapAtIndex:]
// Type encoding: {?=qiIq}24@0:8q16
// Implementation: 0x108ce3ef4

// -[SCVideoFrameSource multiSnapIndexForFrameTime:]
// Type encoding: q40@0:8{?=qiIq}16
// Implementation: 0x108ce4048

// -[SCVideoFrameSource _observePlayerItem]
// Type encoding: v16@0:8
// Implementation: 0x108ce41c4

// -[SCVideoFrameSource _observePlayerItemBuffer]
// Type encoding: v16@0:8
// Implementation: 0x108ce42d8

// -[SCVideoFrameSource _unobservePlayerItemBuffer]
// Type encoding: v16@0:8
// Implementation: 0x108ce4394

// -[SCVideoFrameSource _unobservePlayerItem]
// Type encoding: v16@0:8
// Implementation: 0x108ce4438

// -[SCVideoFrameSource _playerItemReady]
// Type encoding: v16@0:8
// Implementation: 0x108ce4490

// -[SCVideoFrameSource _playerItemDidPlayToEndTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce450c

// -[SCVideoFrameSource _playerItemBufferDidBecomeEmpty:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce4540

// -[SCVideoFrameSource _playerItemLikelyToKeepUp:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce4614

// -[SCVideoFrameSource _playerItemStatusChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce46e8

// -[SCVideoFrameSource setRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ce4840

// -[SCVideoFrameSource _generateAndConfigurePlayerItemFromAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ce4a90

// -[SCVideoFrameSource _prefetchedFrameKeyForFrameTime:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x108ce4b4c

// -[SCVideoFrameSource _mixedAudioTrack:withVolumeProportion:]
// Type encoding: @28@0:8@16f24
// Implementation: 0x108ce4b9c

// -[SCVideoFrameSource itemTimeStartOffset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108ce4c74

// -[SCVideoFrameSource setItemTimeStartOffset:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce4c8c

// -[SCVideoFrameSource rate]
// Type encoding: d16@0:8
// Implementation: 0x108ce4ca4

// -[SCVideoFrameSource renderOrientation]
// Type encoding: q16@0:8
// Implementation: 0x108ce4cac

// -[SCVideoFrameSource setRenderOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ce4cb4

// -[SCVideoFrameSource didProcessFirstFrame]
// Type encoding: B16@0:8
// Implementation: 0x108ce4cbc

// -[SCVideoFrameSource setDidProcessFirstFrame:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4cc4

// -[SCVideoFrameSource originalAsset]
// Type encoding: @16@0:8
// Implementation: 0x108ce4ccc

// -[SCVideoFrameSource playerItem]
// Type encoding: @16@0:8
// Implementation: 0x108ce4cd4

// -[SCVideoFrameSource nonBaseAudioPlayerItem]
// Type encoding: @16@0:8
// Implementation: 0x108ce4cdc

// -[SCVideoFrameSource baseAudioPlayerItemVolume]
// Type encoding: d16@0:8
// Implementation: 0x108ce4ce4

// -[SCVideoFrameSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x108ce4cec

// -[SCVideoFrameSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce4d04

// -[SCVideoFrameSource multiSnapTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108ce4d10

// -[SCVideoFrameSource didDeleteTimeRange]
// Type encoding: B16@0:8
// Implementation: 0x108ce4d18

// -[SCVideoFrameSource setDidDeleteTimeRange:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4d20

// -[SCVideoFrameSource firstVSyncHostTime]
// Type encoding: d16@0:8
// Implementation: 0x108ce4d28

// -[SCVideoFrameSource setFirstVSyncHostTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ce4d30

// -[SCVideoFrameSource hasExtractedFrame]
// Type encoding: B16@0:8
// Implementation: 0x108ce4d38

// -[SCVideoFrameSource setHasExtractedFrame:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4d40

// -[SCVideoFrameSource noNewPixelBufferCount]
// Type encoding: q16@0:8
// Implementation: 0x108ce4d48

// -[SCVideoFrameSource setNoNewPixelBufferCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ce4d50

// -[SCVideoFrameSource remakeVideoOutputTryCount]
// Type encoding: q16@0:8
// Implementation: 0x108ce4d58

// -[SCVideoFrameSource setRemakeVideoOutputTryCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ce4d60

// -[SCVideoFrameSource continuousAudioPlay]
// Type encoding: B16@0:8
// Implementation: 0x108ce4d68

// -[SCVideoFrameSource setContinuousAudioPlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4d70

// -[SCVideoFrameSource usePlaybackOptimizedAsset]
// Type encoding: B16@0:8
// Implementation: 0x108ce4d78

// -[SCVideoFrameSource setUsePlaybackOptimizedAsset:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4d80

// -[SCVideoFrameSource isEditingMode]
// Type encoding: B16@0:8
// Implementation: 0x108ce4d88

// -[SCVideoFrameSource setIsEditingMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4d90

// -[SCVideoFrameSource useSingleCompositionForVideoFrameSource]
// Type encoding: B16@0:8
// Implementation: 0x108ce4d98

// -[SCVideoFrameSource setUseSingleCompositionForVideoFrameSource:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4da0

// -[SCVideoFrameSource asset]
// Type encoding: @16@0:8
// Implementation: 0x108ce4da8

// -[SCVideoFrameSource setAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce4db0

// -[SCVideoFrameSource sourceReady]
// Type encoding: B16@0:8
// Implementation: 0x108ce4de0

// -[SCVideoFrameSource setSourceReady:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce4de8

// -[SCVideoFrameSource playbackBufferMonitoringEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108ce4df0

// -[SCVideoFrameSource videoOutput]
// Type encoding: @16@0:8
// Implementation: 0x108ce4df8

// -[SCVideoFrameSource originalDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108ce4e00

// -[SCVideoFrameSource assetVideoComposition]
// Type encoding: @16@0:8
// Implementation: 0x108ce4e14

// -[SCVideoFrameSource lastRate]
// Type encoding: d16@0:8
// Implementation: 0x108ce4e1c

// -[SCVideoFrameSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ce4e24

@end
