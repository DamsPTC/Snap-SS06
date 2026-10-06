// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocThumbnailResolverImpl
// Superclass: NSObject
// Address: 0x112b65188

@interface SCSnapDocThumbnailResolverImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocThumbnailResolverImpl initWithSnapDocMediaResolver:contentDelivery:playbackAssetRepository:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10795bad4

// -[SCSnapDocThumbnailResolverImpl retrieveImageForKey:snapDoc:thumbnailSnapDoc:pageInfo:thumbnailRequestConfigBuilder:completion:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x10795bba0

// -[SCSnapDocThumbnailResolverImpl retrieveVideoForKey:snapDoc:pageInfo:thumbnailRequestConfigBuilder:completion:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x10795bfe4

// -[SCSnapDocThumbnailResolverImpl _localImageContentKeyFromKey:thumbnailSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10795bfec

// -[SCSnapDocThumbnailResolverImpl _retrieveLocalGeneratedThumbnailForKey:snapDoc:pageInfo:thumbnailRequestConfig:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10795c0e8

// -[SCSnapDocThumbnailResolverImpl _validateOnlyTwoMediaPlaybackLayersPresentInSnapDoc:snapDocKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10795c368

// -[SCSnapDocThumbnailResolverImpl _generateAndCacheThumbnailForSnapDoc:snapDocKey:pageInfo:thumbnailRequestConfig:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10795c550

// -[SCSnapDocThumbnailResolverImpl _retrieveBaseAndOverlayMediaForSnapDoc:snapDocKey:pageInfo:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10795c778

// -[SCSnapDocThumbnailResolverImpl _generateThumbnailAndCacheFromBaseMediaResult:overlayImageResult:snapDoc:snapDocKey:thumbnailRequestConfig:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x10795cab4

// -[SCSnapDocThumbnailResolverImpl _generateThumbnailFromBaseMediaResult:overlayImageResult:snapDoc:snapDocKey:thumbnailSize:completion:]
// Type encoding: v72@0:8@16@24@32@40{CGSize=dd}48@?64
// Implementation: 0x10795cd24

// -[SCSnapDocThumbnailResolverImpl _generateThumbnailFromBaseImage:overlayImage:isSpectacles:thumbnailSize:]
// Type encoding: @52@0:8@16@24B32{CGSize=dd}36
// Implementation: 0x10795d27c

// -[SCSnapDocThumbnailResolverImpl _saveGeneratedThumbnailToCMForKey:thumbnailRequestConfig:data:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10795d3d4

// -[SCSnapDocThumbnailResolverImpl _validationConfigFromMediaContextType:]
// Type encoding: @20@0:8i16
// Implementation: 0x10795d500

// -[SCSnapDocThumbnailResolverImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10795d550

@end
