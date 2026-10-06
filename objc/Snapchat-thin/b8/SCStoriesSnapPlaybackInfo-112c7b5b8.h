// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapPlaybackInfo
// Superclass: NSObject
// Address: 0x112c7b5b8

@interface SCStoriesSnapPlaybackInfo

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: serverId; attributes: T@"NSString",R,C,N,V_serverId
// Property: clientId; attributes: T@"NSString",R,C,N,V_clientId
// Property: attributes; attributes: T@"SCStoriesSnapAttributes",R,C,N,V_attributes
// Property: auxIds; attributes: T@"SCStoriesSnapIdentifiers",R,C,N,V_auxIds
// Property: creatorUserId; attributes: T@"NSString",R,C,N,V_creatorUserId
// Property: creatorUsername; attributes: T@"NSString",R,C,N,V_creatorUsername
// Property: timeInfo; attributes: T@"SCStoriesSnapTimeInfo",R,C,N,V_timeInfo
// Property: media; attributes: T@"SCStoriesSnapMedia",R,C,N,V_media
// Property: thumbnail; attributes: T@"SCStoriesThumbnailMedia",R,C,N,V_thumbnail
// Property: captureInfo; attributes: T@"SCStoriesSnapCaptureInfo",R,C,N,V_captureInfo
// Property: renderInfo; attributes: T@"SCStoriesSnapRenderInfo",R,C,N,V_renderInfo
// Property: adInfo; attributes: T@"SCStoriesSnapAdInfo",R,C,N,V_adInfo
// Property: sponsor; attributes: T@"SCStoriesSnapSponsor",R,C,N,V_sponsor
// Property: contextHintInfo; attributes: T@"SCStoriesSnapContextHintInfo",R,C,N,V_contextHintInfo
// Property: lensInfo; attributes: T@"SCStoriesSnapLensInfo",R,C,N,V_lensInfo
// Property: unlockablesInfo; attributes: T@"SCStoriesSnapUnlockablesInfo",R,C,N,V_unlockablesInfo
// Property: audioStitchInfo; attributes: T@"SCStoriesSnapAudioStitchInfo",R,C,N,V_audioStitchInfo
// Property: creatorDisplayName; attributes: T@"NSString",R,C,N,V_creatorDisplayName
// Property: loggingInfo; attributes: T@"SCStoriesSnapLoggingInfo",R,C,N,V_loggingInfo
// Property: source; attributes: T@"SCStoriesSnapSource",R,C,N,V_source
// Property: sequence; attributes: Tq,R,N,V_sequence
// Property: rotationLocked; attributes: TB,R,N,V_rotationLocked
// Property: multiSnapInfo; attributes: T@"SCStoriesMultiSnapInfo",R,C,N,V_multiSnapInfo
// Property: eventSignature; attributes: T@"NSData",R,C,N,V_eventSignature
// Property: boostInfo; attributes: T@"SCStoriesSnapBoostInfo",R,C,N,V_boostInfo
// Property: spotlightEngagementInfo; attributes: T@"SCStoriesSnapSpotlightEngagementInfo",R,C,N,V_spotlightEngagementInfo
// Property: spotlightDescription; attributes: T@"NSString",R,C,N,V_spotlightDescription
// Property: cameosMetadata; attributes: T@"SCStoriesSnapCameoMetadata",R,C,N,V_cameosMetadata
// Property: spotlightRepliesEnabledOnSnap; attributes: TB,R,N,V_spotlightRepliesEnabledOnSnap
// Property: spectaclesMetadata; attributes: T@"NSData",R,C,N,V_spectaclesMetadata
// Property: scanOnPublicContentEnabled; attributes: TB,R,N,V_scanOnPublicContentEnabled
// Property: creatorBitmojiAvatarId; attributes: T@"NSString",R,C,N,V_creatorBitmojiAvatarId
// Property: creatorBitmojiAvatarSelfieId; attributes: T@"NSString",R,C,N,V_creatorBitmojiAvatarSelfieId
// Property: managementInfo; attributes: T@"SCStoriesSnapManagementInfo",R,C,N,V_managementInfo
// Property: mediaOrigin; attributes: T@"NSArray",R,C,N,V_mediaOrigin
// Property: storyTypeVariant; attributes: Tq,R,N,V_storyTypeVariant
// Property: creatorEligibility; attributes: T@"SCStoriesSnapCreatorEligibility",R,C,N,V_creatorEligibility
// Property: commentsSnapReplyMetadata; attributes: T@"SCStoriesCommentsSnapReplyMetadata",R,C,N,V_commentsSnapReplyMetadata
// Property: fanPassSnapPlaceholderCount; attributes: Tq,R,N,V_fanPassSnapPlaceholderCount
// Property: fromCamera; attributes: TB,R,N,V_fromCamera
// Property: suggestedSearchInfo; attributes: T@"SCStoriesSnapSuggestedSearchInfo",R,C,N,V_suggestedSearchInfo

// -[SCStoriesSnapPlaybackInfo xLogObjectInfo]
// Type encoding: @16@0:8
// Implementation: 0x1085058a8

// -[SCStoriesSnapPlaybackInfo isSpectaclesMedia]
// Type encoding: B16@0:8
// Implementation: 0x1071dcf30

// -[SCStoriesSnapPlaybackInfo isSpectaclesImage]
// Type encoding: B16@0:8
// Implementation: 0x1071dcf80

// -[SCStoriesSnapPlaybackInfo isCircularMedia]
// Type encoding: B16@0:8
// Implementation: 0x1071dcfd4

// -[SCStoriesSnapPlaybackInfo isSpectacles60fps]
// Type encoding: B16@0:8
// Implementation: 0x1071dd028

// -[SCStoriesSnapPlaybackInfo spectaclesExportSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1071dd030

// -[SCStoriesSnapPlaybackInfo time]
// Type encoding: d16@0:8
// Implementation: 0x1071dd0c0

// -[SCStoriesSnapPlaybackInfo isGenAISnap]
// Type encoding: B16@0:8
// Implementation: 0x1071dd104

// -[SCStoriesSnapPlaybackInfo exportToVideoURLCompletion:progressBlock:spectaclesExportSettings:snapVideoFilterAdaptor:previewAssetVideoProviderFactory:]
// Type encoding: v56@0:8@?16@?24@32@40@48
// Implementation: 0x1071dd240

// -[SCStoriesSnapPlaybackInfo _exportImageToVideoURLWithSnapData:overlayData:spectaclesExportSettings:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1071dd4a8

// -[SCStoriesSnapPlaybackInfo _writeVideoToUrlWithSnapData:overlayData:success:unarchivingFailed:spectaclesExportSettings:snapVideoFilterAdaptor:completion:]
// Type encoding: v64@0:8@16@24B32B36@40@48@?56
// Implementation: 0x1071dd954

// -[SCStoriesSnapPlaybackInfo _onVideoWrittenToUrl:overlayData:spectaclesExportSettings:snapVideoFilterAdaptor:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1071ddbf0

// -[SCStoriesSnapPlaybackInfo _queryMediaCoordinatorWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071ddfdc

// -[SCStoriesSnapPlaybackInfo initWithServerId:clientId:attributes:auxIds:creatorUserId:creatorUsername:timeInfo:media:thumbnail:captureInfo:renderInfo:adInfo:sponsor:contextHintInfo:lensInfo:unlockablesInfo:audioStitchInfo:creatorDisplayName:loggingInfo:source:sequence:rotationLocked:multiSnapInfo:eventSignature:boostInfo:spotlightEngagementInfo:spotlightDescription:cameosMetadata:spotlightRepliesEnabledOnSnap:spectaclesMetadata:scanOnPublicContentEnabled:creatorBitmojiAvatarId:creatorBitmojiAvatarSelfieId:managementInfo:mediaOrigin:storyTypeVariant:creatorEligibility:commentsSnapReplyMetadata:fanPassSnapPlaceholderCount:fromCamera:suggestedSearchInfo:]
// Type encoding: @328@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168q176B184@188@196@204@212@220@228B236@240B248@252@260@268@276q284@292@300q308B316@320
// Implementation: 0x10095fd24

// -[SCStoriesSnapPlaybackInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b61f5fc

// -[SCStoriesSnapPlaybackInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b61f620

// -[SCStoriesSnapPlaybackInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b61f850

// -[SCStoriesSnapPlaybackInfo serverId]
// Type encoding: @16@0:8
// Implementation: 0x100aabfb4

// -[SCStoriesSnapPlaybackInfo clientId]
// Type encoding: @16@0:8
// Implementation: 0x10b61fc68

// -[SCStoriesSnapPlaybackInfo attributes]
// Type encoding: @16@0:8
// Implementation: 0x10b61fc70

// -[SCStoriesSnapPlaybackInfo auxIds]
// Type encoding: @16@0:8
// Implementation: 0x100aad4f4

// -[SCStoriesSnapPlaybackInfo creatorUserId]
// Type encoding: @16@0:8
// Implementation: 0x10b61fc78

// -[SCStoriesSnapPlaybackInfo creatorUsername]
// Type encoding: @16@0:8
// Implementation: 0x10b61fc80

// -[SCStoriesSnapPlaybackInfo timeInfo]
// Type encoding: @16@0:8
// Implementation: 0x100aacc20

// -[SCStoriesSnapPlaybackInfo media]
// Type encoding: @16@0:8
// Implementation: 0x10b61fc88

// -[SCStoriesSnapPlaybackInfo thumbnail]
// Type encoding: @16@0:8
// Implementation: 0x10b61fc90

// -[SCStoriesSnapPlaybackInfo captureInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fc98

// -[SCStoriesSnapPlaybackInfo renderInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fca0

// -[SCStoriesSnapPlaybackInfo adInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fca8

// -[SCStoriesSnapPlaybackInfo sponsor]
// Type encoding: @16@0:8
// Implementation: 0x10b61fcb0

// -[SCStoriesSnapPlaybackInfo contextHintInfo]
// Type encoding: @16@0:8
// Implementation: 0x100aacef8

// -[SCStoriesSnapPlaybackInfo lensInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fcb8

// -[SCStoriesSnapPlaybackInfo unlockablesInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fcc0

// -[SCStoriesSnapPlaybackInfo audioStitchInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fcc8

// -[SCStoriesSnapPlaybackInfo creatorDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x10b61fcd0

// -[SCStoriesSnapPlaybackInfo loggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fcd8

// -[SCStoriesSnapPlaybackInfo source]
// Type encoding: @16@0:8
// Implementation: 0x10b61fce0

// -[SCStoriesSnapPlaybackInfo sequence]
// Type encoding: q16@0:8
// Implementation: 0x10b61fce8

// -[SCStoriesSnapPlaybackInfo rotationLocked]
// Type encoding: B16@0:8
// Implementation: 0x10b61fcf0

// -[SCStoriesSnapPlaybackInfo multiSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fcf8

// -[SCStoriesSnapPlaybackInfo eventSignature]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd00

// -[SCStoriesSnapPlaybackInfo boostInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd08

// -[SCStoriesSnapPlaybackInfo spotlightEngagementInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd10

// -[SCStoriesSnapPlaybackInfo spotlightDescription]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd18

// -[SCStoriesSnapPlaybackInfo cameosMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd20

// -[SCStoriesSnapPlaybackInfo spotlightRepliesEnabledOnSnap]
// Type encoding: B16@0:8
// Implementation: 0x10b61fd28

// -[SCStoriesSnapPlaybackInfo spectaclesMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd30

// -[SCStoriesSnapPlaybackInfo scanOnPublicContentEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b61fd38

// -[SCStoriesSnapPlaybackInfo creatorBitmojiAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd40

// -[SCStoriesSnapPlaybackInfo creatorBitmojiAvatarSelfieId]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd48

// -[SCStoriesSnapPlaybackInfo managementInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd50

// -[SCStoriesSnapPlaybackInfo mediaOrigin]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd58

// -[SCStoriesSnapPlaybackInfo storyTypeVariant]
// Type encoding: q16@0:8
// Implementation: 0x10b61fd60

// -[SCStoriesSnapPlaybackInfo creatorEligibility]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd68

// -[SCStoriesSnapPlaybackInfo commentsSnapReplyMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd70

// -[SCStoriesSnapPlaybackInfo fanPassSnapPlaceholderCount]
// Type encoding: q16@0:8
// Implementation: 0x10b61fd78

// -[SCStoriesSnapPlaybackInfo fromCamera]
// Type encoding: B16@0:8
// Implementation: 0x10b61fd80

// -[SCStoriesSnapPlaybackInfo suggestedSearchInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b61fd88

// -[SCStoriesSnapPlaybackInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100ab32a0

@end
