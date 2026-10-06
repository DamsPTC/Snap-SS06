// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiSceneDataFetcher
// Superclass: NSObject
// Address: 0x112a3ad08

@interface SCBitmojiSceneDataFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiSceneDataFetcher initWithContentDelivery:configProvider:bitmojiAvatarDataServices:unifiedGRPCServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1054a0270

// -[SCBitmojiSceneDataFetcher fetchSceneDataForSceneId:avatarId:friendAvatarId:avatarType:surface:optimizationParams:]
// Type encoding: @64@0:8@16@24@32Q40Q48@56
// Implementation: 0x1054a0530

// -[SCBitmojiSceneDataFetcher _handleAvatarDataCompleted:friendAvatarId:response:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1054a1348

// -[SCBitmojiSceneDataFetcher _parseSceneDataWithContentKey:pageInfo:avatarId:sceneId:sceneDataPromise:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1054a145c

// -[SCBitmojiSceneDataFetcher _cacheKeyForSceneId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054a15ac

// -[SCBitmojiSceneDataFetcher _requestWithURLString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054a1644

// -[SCBitmojiSceneDataFetcher _retrieveAssetWithContentKey:pageInfo:observer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054a16f4

// -[SCBitmojiSceneDataFetcher _useStagingDomain]
// Type encoding: B16@0:8
// Implementation: 0x1054a1888

// -[SCBitmojiSceneDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054a18a0

@end
