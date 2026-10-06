// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineMediaSegmentImpl
// Superclass: NSObject
// Address: 0x112b90978

@interface SCTimelineMediaSegmentImpl

// Property: assetURL; attributes: T@"NSURL",R,N
// Property: videoAsset; attributes: T@"AVAsset",R,N
// Property: frameImage; attributes: T@"UIImage",R,N
// Property: imagePixelBuffer; attributes: T^{__CVBuffer=},R,N
// Property: segmentCreationTimeTs; attributes: Td,R,N,V_segmentCreationTimeTs
// Property: snapSource; attributes: Tq,R,N,V_snapSource
// Property: externalMediaSource; attributes: Ti,R,N,V_externalMediaSource
// Property: originalMediaOrigins; attributes: T@"NSArray",C,N,V_originalMediaOrigins
// Property: externalMediaCreationTimeTs; attributes: Td,N,V_externalMediaCreationTimeTs
// Property: tinselMedia; attributes: T@"SCTinselMedia",R,N,V_tinselMedia
// Property: startTimeOffset; attributes: T{?=qiIq},N,V_startTimeOffset
// Property: contentTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N,V_contentTimeRange
// Property: trimmedTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},N,V_trimmedTimeRange
// Property: trimmingTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N
// Property: firstFrameTime; attributes: T{?=qiIq},R,N
// Property: localTrimmedTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N
// Property: trimmedTimeRangeObservable; attributes: T@"SCObservable",R,N
// Property: localFirstFrameTime; attributes: T{?=qiIq},N,V_localFirstFrameTime
// Property: playbackRate; attributes: Td,N,V_playbackRate
// Property: uniqueId; attributes: Tq,R,N,V_uniqueId
// Property: captureSessionID; attributes: T@"NSString",C,N,V_captureSessionID
// Property: lensSessionID; attributes: T@"NSString",C,N,V_lensSessionID
// Property: activeLensID; attributes: T@"NSString",C,N,V_activeLensID
// Property: activeCameraModes; attributes: T@"NSArray",C,N,V_activeCameraModes
// Property: detailedCameraModes; attributes: T@"NSString",C,N,V_detailedCameraModes
// Property: firstFrameThumbnailFuture; attributes: T@"SCFuture",&,N,V_firstFrameThumbnailFuture
// Property: editedThumbnail; attributes: T@"UIImage",&,N,V_editedThumbnail
// Property: thumbnailFutures; attributes: T@"NSArray",&,N,V_thumbnailFutures
// Property: activeLensMusicTrackMetadata; attributes: T@"NSArray",C,N,V_activeLensMusicTrackMetadata
// Property: baseMediaMusicSelection; attributes: T@"SCMusicSelection",C,N,V_baseMediaMusicSelection
// Property: creativeEditTag; attributes: T@"SDMCreativeEditTag",C,N,V_creativeEditTag
// Property: remixMetadata; attributes: T@"SCRemixMetadata",C,N,V_remixMetadata
// Property: spotlightMediaSource; attributes: Tq,N,V_spotlightMediaSource
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimelineMediaSegmentImpl initWithUniqueId:blizzardLogger:snapSource:activeLensID:externalMediaSource:]
// Type encoding: @52@0:8q16@24q32@40i48
// Implementation: 0x107fb08e8

// -[SCTimelineMediaSegmentImpl assetURL]
// Type encoding: @16@0:8
// Implementation: 0x107fb0a5c

// -[SCTimelineMediaSegmentImpl hasAssetURL]
// Type encoding: B16@0:8
// Implementation: 0x107fb0ab0

// -[SCTimelineMediaSegmentImpl videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fb0b04

// -[SCTimelineMediaSegmentImpl frameImage]
// Type encoding: @16@0:8
// Implementation: 0x107fb0b58

// -[SCTimelineMediaSegmentImpl imagePixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x107fb0bac

// -[SCTimelineMediaSegmentImpl setStartTimeOffset:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107fb0c00

// -[SCTimelineMediaSegmentImpl setSegmentDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107fb0d14

// -[SCTimelineMediaSegmentImpl setTotalContentDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107fb0dd8

// -[SCTimelineMediaSegmentImpl firstFrameTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fb0e68

// -[SCTimelineMediaSegmentImpl localTrimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x107fb0e80

// -[SCTimelineMediaSegmentImpl trimmedTimeRangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x107fb0f00

// -[SCTimelineMediaSegmentImpl setTrimmedTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x107fb0f28

// -[SCTimelineMediaSegmentImpl trimmingTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x107fb1020

// -[SCTimelineMediaSegmentImpl updateTrimmingTimeRangeWithStartTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107fb106c

// -[SCTimelineMediaSegmentImpl updateTrimmingTimeRangeWithEndTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107fb10ac

// -[SCTimelineMediaSegmentImpl hasDirectSnapDiscard]
// Type encoding: B16@0:8
// Implementation: 0x107fb1120

// -[SCTimelineMediaSegmentImpl setDirectSnapDiscardWithSnapSessionId:cameraShortcutId:scanSessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107fb1140

// -[SCTimelineMediaSegmentImpl _setDirectSnapDiscardEvent:withSnapSessionId:cameraShortcutId:scanSessionId:snapSource:]
// Type encoding: v56@0:8@16@24@32@40q48
// Implementation: 0x107fb1240

// -[SCTimelineMediaSegmentImpl setDirectSnapDiscardMethod:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fb1328

// -[SCTimelineMediaSegmentImpl setIsWholeVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fb1358

// -[SCTimelineMediaSegmentImpl setDiscardLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fb1388

// -[SCTimelineMediaSegmentImpl setRecoveredSnap]
// Type encoding: v16@0:8
// Implementation: 0x107fb13b8

// -[SCTimelineMediaSegmentImpl setContentLossReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fb13e8

// -[SCTimelineMediaSegmentImpl updateTimelineLoggingForDirectSnapDiscardWithSnapSource:flashOn:adjustingFocus:adjustingExposure:frontCamera:lowLightStatus:shutterSpeed:aperture:ISO:brightness:filterLensId:targetingCampaignId:rankingId:rankingData:]
// Type encoding: v112@0:8q16B24B28B32B36q40d48d56d64d72@80@88@96@104
// Implementation: 0x107fb1418

// -[SCTimelineMediaSegmentImpl _updateDirectSnapDiscardEvent:withSnapSource:flashOn:adjustingFocus:adjustingExposure:frontCamera:lowLightStatus:shutterSpeed:aperture:ISO:brightness:filterLensId:targetingCampaignId:rankingId:rankingData:]
// Type encoding: v120@0:8@16q24B32B36B40B44q48d56d64d72d80@88@96@104@112
// Implementation: 0x107fb15bc

// -[SCTimelineMediaSegmentImpl updateTimelineLoggingForDirectSnapDiscardWithSegmentSource:mediaSource:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107fb1734

// -[SCTimelineMediaSegmentImpl clearDirectSnapDiscard]
// Type encoding: v16@0:8
// Implementation: 0x107fb1800

// -[SCTimelineMediaSegmentImpl logDirectSnapDiscardIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107fb183c

// -[SCTimelineMediaSegmentImpl hasTimelineSegmentDiscard]
// Type encoding: B16@0:8
// Implementation: 0x107fb18b8

// -[SCTimelineMediaSegmentImpl setTimelineSegmentDiscardWithSnapSessionId:captureSessionId:segmentIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107fb18c8

// -[SCTimelineMediaSegmentImpl setTimelineSegmentDiscardWithSnapSessionId:importedContentId:segmentIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107fb195c

// -[SCTimelineMediaSegmentImpl logTimelineSegmentDiscardIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107fb19f0

// -[SCTimelineMediaSegmentImpl hasAddSnapTap]
// Type encoding: B16@0:8
// Implementation: 0x107fb1a38

// -[SCTimelineMediaSegmentImpl logAddSnapTapWithCameraMode:captureSessionId:snapSessionId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x107fb1a48

// -[SCTimelineMediaSegmentImpl setAddSnapTapWithPreviewToTapAddButtonMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fb1b28

// -[SCTimelineMediaSegmentImpl hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x107fb1b94

// -[SCTimelineMediaSegmentImpl isImportedContent]
// Type encoding: B16@0:8
// Implementation: 0x107fb1be8

// -[SCTimelineMediaSegmentImpl updateWithSnapCommonLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb1c08

// -[SCTimelineMediaSegmentImpl snapSegmentLoggingParamsWithSnapSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fb1c38

// -[SCTimelineMediaSegmentImpl _segmentTrimmedLocation]
// Type encoding: q16@0:8
// Implementation: 0x107fb1e34

// -[SCTimelineMediaSegmentImpl _isSpotlightPostingContent]
// Type encoding: B16@0:8
// Implementation: 0x107fb1ef4

// -[SCTimelineMediaSegmentImpl startTimeOffset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fb1f08

// -[SCTimelineMediaSegmentImpl contentTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x107fb1f20

// -[SCTimelineMediaSegmentImpl trimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x107fb1f38

// -[SCTimelineMediaSegmentImpl uniqueId]
// Type encoding: q16@0:8
// Implementation: 0x107fb1f50

// -[SCTimelineMediaSegmentImpl captureSessionID]
// Type encoding: @16@0:8
// Implementation: 0x107fb1f58

// -[SCTimelineMediaSegmentImpl setCaptureSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb1f60

// -[SCTimelineMediaSegmentImpl lensSessionID]
// Type encoding: @16@0:8
// Implementation: 0x107fb1f68

// -[SCTimelineMediaSegmentImpl setLensSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb1f70

// -[SCTimelineMediaSegmentImpl firstFrameThumbnailFuture]
// Type encoding: @16@0:8
// Implementation: 0x107fb1f78

// -[SCTimelineMediaSegmentImpl setFirstFrameThumbnailFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb1f80

// -[SCTimelineMediaSegmentImpl editedThumbnail]
// Type encoding: @16@0:8
// Implementation: 0x107fb1fb0

// -[SCTimelineMediaSegmentImpl setEditedThumbnail:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb1fb8

// -[SCTimelineMediaSegmentImpl thumbnailFutures]
// Type encoding: @16@0:8
// Implementation: 0x107fb1fe8

// -[SCTimelineMediaSegmentImpl setThumbnailFutures:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb1ff0

// -[SCTimelineMediaSegmentImpl activeLensID]
// Type encoding: @16@0:8
// Implementation: 0x107fb2020

// -[SCTimelineMediaSegmentImpl setActiveLensID:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb2028

// -[SCTimelineMediaSegmentImpl activeLensMusicTrackMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107fb2030

// -[SCTimelineMediaSegmentImpl setActiveLensMusicTrackMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb2038

// -[SCTimelineMediaSegmentImpl baseMediaMusicSelection]
// Type encoding: @16@0:8
// Implementation: 0x107fb2040

// -[SCTimelineMediaSegmentImpl setBaseMediaMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb2048

// -[SCTimelineMediaSegmentImpl activeCameraModes]
// Type encoding: @16@0:8
// Implementation: 0x107fb2050

// -[SCTimelineMediaSegmentImpl setActiveCameraModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb2058

// -[SCTimelineMediaSegmentImpl detailedCameraModes]
// Type encoding: @16@0:8
// Implementation: 0x107fb2060

// -[SCTimelineMediaSegmentImpl setDetailedCameraModes:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb2068

// -[SCTimelineMediaSegmentImpl segmentCreationTimeTs]
// Type encoding: d16@0:8
// Implementation: 0x107fb2070

// -[SCTimelineMediaSegmentImpl localFirstFrameTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107fb2078

// -[SCTimelineMediaSegmentImpl setLocalFirstFrameTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107fb208c

// -[SCTimelineMediaSegmentImpl playbackRate]
// Type encoding: d16@0:8
// Implementation: 0x107fb20a0

// -[SCTimelineMediaSegmentImpl setPlaybackRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x107fb20a8

// -[SCTimelineMediaSegmentImpl creativeEditTag]
// Type encoding: @16@0:8
// Implementation: 0x107fb20b0

// -[SCTimelineMediaSegmentImpl setCreativeEditTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb20b8

// -[SCTimelineMediaSegmentImpl snapSource]
// Type encoding: q16@0:8
// Implementation: 0x107fb20c0

// -[SCTimelineMediaSegmentImpl externalMediaSource]
// Type encoding: i16@0:8
// Implementation: 0x107fb20c8

// -[SCTimelineMediaSegmentImpl externalMediaCreationTimeTs]
// Type encoding: d16@0:8
// Implementation: 0x107fb20d0

// -[SCTimelineMediaSegmentImpl setExternalMediaCreationTimeTs:]
// Type encoding: v24@0:8d16
// Implementation: 0x107fb20d8

// -[SCTimelineMediaSegmentImpl remixMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107fb20e0

// -[SCTimelineMediaSegmentImpl setRemixMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb20e8

// -[SCTimelineMediaSegmentImpl tinselMedia]
// Type encoding: @16@0:8
// Implementation: 0x107fb20f0

// -[SCTimelineMediaSegmentImpl spotlightMediaSource]
// Type encoding: q16@0:8
// Implementation: 0x107fb20f8

// -[SCTimelineMediaSegmentImpl setSpotlightMediaSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fb2100

// -[SCTimelineMediaSegmentImpl originalMediaOrigins]
// Type encoding: @16@0:8
// Implementation: 0x107fb2108

// -[SCTimelineMediaSegmentImpl setOriginalMediaOrigins:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb2110

// -[SCTimelineMediaSegmentImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fb2118

@end
