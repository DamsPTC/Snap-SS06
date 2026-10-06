// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesBitmojiFetcher
// Superclass: NSObject
// Address: 0x112b889a8

@interface SCMemoriesBitmojiFetcher

// Property: bitmojiAvatarObservable; attributes: T@"SCObservable",R,N,V_bitmojiAvatarObservable
// Property: currentBitmojiAvatarId; attributes: T@"NSString",R,N,V_currentBitmojiAvatarId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesBitmojiFetcher initWithBitmojiFetcherForBitmojiSelfieProvider:bitmojiSelfieFetcher:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e85cec

// -[SCMemoriesBitmojiFetcher initWithBitmojiFetcherForBitmojiAvatarProvider:bitmojiImageFetcher:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e85d9c

// -[SCMemoriesBitmojiFetcher _initializeMemoriesBitmojiFetcher:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e85e4c

// -[SCMemoriesBitmojiFetcher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107e85ea8

// -[SCMemoriesBitmojiFetcher reset]
// Type encoding: v16@0:8
// Implementation: 0x107e85eec

// -[SCMemoriesBitmojiFetcher setBitmojiImageParamsWithTemplateId:friendAvatarId:scale:imageType:isAnimated:]
// Type encoding: v52@0:8@16@24Q32Q40B48
// Implementation: 0x107e85f3c

// -[SCMemoriesBitmojiFetcher setBitmojiSelfieRequestWithTemplateId:avatarId:userId:scale:modifier:type:willAcceptPriorAvatarVersion:]
// Type encoding: v68@0:8@16@24@32Q40Q48Q56B64
// Implementation: 0x107e86020

// -[SCMemoriesBitmojiFetcher _setupBitmojiObserverAndBehavior]
// Type encoding: v16@0:8
// Implementation: 0x107e86134

// -[SCMemoriesBitmojiFetcher startFetchingBitmoji]
// Type encoding: v16@0:8
// Implementation: 0x107e86420

// -[SCMemoriesBitmojiFetcher fetchBitmojiAvatarWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e864d4

// -[SCMemoriesBitmojiFetcher fetchBitmojiSelfieWithSelfieId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e8670c

// -[SCMemoriesBitmojiFetcher bitmojiAvatarObservable]
// Type encoding: @16@0:8
// Implementation: 0x107e86934

// -[SCMemoriesBitmojiFetcher currentBitmojiAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x107e8693c

// -[SCMemoriesBitmojiFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e86944

@end
