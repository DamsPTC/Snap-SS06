// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightShareSender
// Superclass: NSObject
// Address: 0x112b03fc8

@interface SCSpotlightShareSender


// -[SCSpotlightShareSender initWithTextSender:userSession:ephemeralMediaFactory:galleryStorySaver:legacyEphemeralMediaFactory:previewSnapSenderFactory:spotlightConfigProvider:contentProductSnapRenderer:snapDocManagerServices:snapDocEditorFactory:lensMetadataBuilder:messagingExperimentService:storiesMediaCoordinator:snapUploaderServices:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x10689e3d8

// -[SCSpotlightShareSender _fetchAttributionFromObservable:group:state:logContext:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10689e764

// -[SCSpotlightShareSender _fetchMediaDataForMediaInfo:contexts:group:state:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10689f11c

// -[SCSpotlightShareSender sendSpotlightWithPlaybackMetadata:spotlightObservable:businessIds:additionalText:storiesConfig:completionQueue:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x10689f2f4

// -[SCSpotlightShareSender sendSpotlightShareMediaData:overlayData:playbackMetadata:storiesConfig:businessIds:additionalText:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:completionQueue:completionHandler:]
// Type encoding: v116@0:8@16@24@32@40@48@56@64@72@80@88B96@100@?108
// Implementation: 0x10689fccc

// -[SCSpotlightShareSender isSpotlightShareToStoriesV2OptimizationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1068a0580

// -[SCSpotlightShareSender prefetchForSpotlightShare:spotlightObservable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068a0588

// -[SCSpotlightShareSender _buildAndStartUploadForV2ShareWithMediaData:overlayData:playbackMetadata:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:additionalCaptionText:completion:]
// Type encoding: v92@0:8@16@24@32@40@48@56@64B72@76@?84
// Implementation: 0x1068a0bd0

// -[SCSpotlightShareSender sendSpotlightShare:conversationIds:additionalText:platformAnalytics:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1068a11e8

// -[SCSpotlightShareSender sendSpotlightReplyShareModel:conversationIds:additionalText:platformAnalytics:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1068a18b0

// -[SCSpotlightShareSender _handleSpotlightShareError:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068a1cf8

// -[SCSpotlightShareSender _setupLayerCompositionForSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068a1d8c

// -[SCSpotlightShareSender _applySpotlightTimelineToSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068a2118

// -[SCSpotlightShareSender _buildSnapDocFromPlaybackMetadata:mediaData:overlayData:lensId:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:additionalCaptionText:]
// Type encoding: @92@0:8@16@24@32Q40@48@56@64@72B80@84
// Implementation: 0x1068a241c

// -[SCSpotlightShareSender _buildEphemeralFromMedia:overlayData:playbackMetadata:contextHintInfo:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1068a2f50

// -[SCSpotlightShareSender _sendEphemeralMedia:spotlightSnapDoc:storiesConfig:businessIds:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1068a31a4

// -[SCSpotlightShareSender _snapSender]
// Type encoding: @16@0:8
// Implementation: 0x1068a337c

// -[SCSpotlightShareSender _injectRepostMetadata:snapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1068a3420

// -[SCSpotlightShareSender _createRepostInfoWithPlaybackMetadata:additionalText:version:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1068a3578

// -[SCSpotlightShareSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068a3690

@end
