// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewSendMediaHandler
// Superclass: NSObject
// Address: 0x112b96c38

@interface SCPreviewSendMediaHandler

// Property: isTranscodingMemoryIntensive; attributes: TB,R,N
// Property: needsRetranscodeForMusicChange; attributes: TB,N,V_needsRetranscodeForMusicChange
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewSendMediaHandler initWithConfiguration:infoStickerFeature:sendingFeature:commonLoggingParamsBuilder:previewLoggingServices:snapCrop:captionFeature:logging:stickerContainer:webAttachment:filterMetadataProvider:venueFilterController:userTagging:creativeToolsABProvider:uploadMediaQualityController:delegate:checkInOptionFetcher:snapCaptureLocation:placeTagsTracker:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x108069878

// -[SCPreviewSendMediaHandler sharedChatMediasToUpload]
// Type encoding: @16@0:8
// Implementation: 0x108069ca8

// -[SCPreviewSendMediaHandler ephemeralMediaList]
// Type encoding: @16@0:8
// Implementation: 0x108069d1c

// -[SCPreviewSendMediaHandler processSendingMedia:selectedItemsFromSendTo:audioEnabled:hasAnimatedOrExternalAudioContent:isInfiniteDuration:]
// Type encoding: v40@0:8B16@20B28B32B36
// Implementation: 0x108069d60

// -[SCPreviewSendMediaHandler finalizeSendingMedia:businessIds:recipientUserIds:groups:quickPostOurStorySelected:circumstanceEngine:isCrossPosting:isEligibleForCrossPostingSpotlightToStories:massSnapRecipientIds:crossPostToStoryInfo:]
// Type encoding: v84@0:8@16@24@32@40B48@52B60B64@68@76
// Implementation: 0x108069e54

// -[SCPreviewSendMediaHandler _updateLoggingParamsForMobStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806af24

// -[SCPreviewSendMediaHandler prepareChatMedia:selectedItemsFromSendTo:audioEnabled:hasAnimatedOrExternalAudioContent:isInfiniteDuration:]
// Type encoding: v40@0:8B16@20B28B32B36
// Implementation: 0x10806b044

// -[SCPreviewSendMediaHandler prepareEphemeralMedia:selectedItemsFromSendTo:isMultiMedia:isDoubleTap:]
// Type encoding: v36@0:8B16@20B28B32
// Implementation: 0x10806b27c

// -[SCPreviewSendMediaHandler sendingEphemeralMediaList]
// Type encoding: @16@0:8
// Implementation: 0x10806b4e4

// -[SCPreviewSendMediaHandler isTranscodingMemoryIntensive]
// Type encoding: B16@0:8
// Implementation: 0x10806b54c

// -[SCPreviewSendMediaHandler _generateSharedMessageMediaToUpload:hasAnimatedOrExternalAudioContent:isInfiniteDuration:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x10806b5f8

// -[SCPreviewSendMediaHandler _firstEphemeralMedia]
// Type encoding: @16@0:8
// Implementation: 0x10806b880

// -[SCPreviewSendMediaHandler _configureSpectaclesMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806b90c

// -[SCPreviewSendMediaHandler _logGrapheneVenueIdAttributionWithStoriesPostingConfig:circumstanceEngine:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10806ba1c

// -[SCPreviewSendMediaHandler _shouldRetranscodeForMultisnapAnnihilation:storiesPostingConfig:businessStoryCount:circumstanceEngine:]
// Type encoding: B48@0:8@16@24q32@40
// Implementation: 0x10806bb40

// -[SCPreviewSendMediaHandler needsRetranscodeForMusicChange]
// Type encoding: B16@0:8
// Implementation: 0x10806bc0c

// -[SCPreviewSendMediaHandler setNeedsRetranscodeForMusicChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x10806bc14

// -[SCPreviewSendMediaHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10806bc1c

@end
