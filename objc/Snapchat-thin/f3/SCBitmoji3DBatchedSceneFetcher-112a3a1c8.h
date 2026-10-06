// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmoji3DBatchedSceneFetcher
// Superclass: NSObject
// Address: 0x112a3a1c8

@interface SCBitmoji3DBatchedSceneFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmoji3DBatchedSceneFetcher initWithFetcher:contentDelivery:userContentDelivery:flatlandLogger:flatlandConfigProvider:renderConfigProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10547fbc0

// -[SCBitmoji3DBatchedSceneFetcher submitBatchForAvatarId:friendAvatarId:sceneIds:feature:scale:sceneType:renderStyle:]
// Type encoding: @68@0:8@16@24@32i40Q44Q52@60
// Implementation: 0x10547fd44

// -[SCBitmoji3DBatchedSceneFetcher isSceneCachedForAvatarId:friendAvatarId:sceneId:scale:sceneType:feature:]
// Type encoding: @60@0:8@16@24@32Q40Q48i56
// Implementation: 0x105480494

// -[SCBitmoji3DBatchedSceneFetcher _contentDeliveryForSceneType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105480a60

// -[SCBitmoji3DBatchedSceneFetcher _downloadBatchForAvatarId:friendAvatarId:sceneIds:feature:scale:sceneType:useStaging:engineType:clientRendererLensId:observer:]
// Type encoding: @80@0:8@16@24@32i40Q44Q52B60i64i68@72
// Implementation: 0x105480a98

// -[SCBitmoji3DBatchedSceneFetcher _getCacheEngineType:engineType:]
// Type encoding: i24@0:8i16i20
// Implementation: 0x105481020

// -[SCBitmoji3DBatchedSceneFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105481030

@end
