// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiGLBFetcher
// Superclass: NSObject
// Address: 0x112a3ac18

@interface SCBitmojiGLBFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiGLBFetcher initWithContentDelivery:snapTokenProvider:configProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10549e72c

// -[SCBitmojiGLBFetcher isGLBFetchedForAvatar:avatarType:feature:]
// Type encoding: B36@0:8@16Q24i32
// Implementation: 0x10549e7f8

// -[SCBitmojiGLBFetcher fetchGLBForAvatar:feature:avatarType:]
// Type encoding: @36@0:8@16i24Q28
// Implementation: 0x10549e88c

// -[SCBitmojiGLBFetcher _fetchGLBForAvatar:avatarId:feature:avatarType:contentKey:]
// Type encoding: @52@0:8@16@24i32Q36@44
// Implementation: 0x10549e9a4

// -[SCBitmojiGLBFetcher bitmojiGlbAssetRequestForEncodedConfig:feature:performer:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x10549eed0

// -[SCBitmojiGLBFetcher _useStagingDomain]
// Type encoding: B16@0:8
// Implementation: 0x10549f228

// -[SCBitmojiGLBFetcher _fetchSnapToken]
// Type encoding: @16@0:8
// Implementation: 0x10549f240

// -[SCBitmojiGLBFetcher _requestWithURLString:snapToken:feature:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10549f514

// -[SCBitmojiGLBFetcher _retrieveAssetWithContentKey:pageInfo:observer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10549f63c

// -[SCBitmojiGLBFetcher _glbRequestForUrlString:feature:performer:isAuthenticated:]
// Type encoding: @40@0:8@16i24@28B36
// Implementation: 0x10549f7d0

// -[SCBitmojiGLBFetcher _bitmojiDynamicAssetUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x10549fad8

// -[SCBitmojiGLBFetcher downloadURLForAvatar:avatarType:feature:]
// Type encoding: @36@0:8@16Q24i32
// Implementation: 0x10549fc00

// -[SCBitmojiGLBFetcher optimizationParamsForFeature:]
// Type encoding: @20@0:8i16
// Implementation: 0x10549fcc4

// -[SCBitmojiGLBFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10549fcd8

@end
