// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmoji3DBatchedSceneFetcherCallback
// Superclass: NSObject
// Address: 0x112a3a218

@interface SCBitmoji3DBatchedSceneFetcherCallback

// Property: cancelled; attributes: TB,V_cancelled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmoji3DBatchedSceneFetcherCallback initWithContentDelivery:observer:performer:flatlandLogger:avatarId:sceneIdToContentKey:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10548109c

// -[SCBitmoji3DBatchedSceneFetcherCallback onBatchImageDataDownloadComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x10548120c

// -[SCBitmoji3DBatchedSceneFetcherCallback onClientRenderImageWithData:forSceneId:completed:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1054813fc

// -[SCBitmoji3DBatchedSceneFetcherCallback onClientRenderFailedWithError:forSceneId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105481874

// -[SCBitmoji3DBatchedSceneFetcherCallback _cacheImageDataMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x10548199c

// -[SCBitmoji3DBatchedSceneFetcherCallback _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105481e0c

// -[SCBitmoji3DBatchedSceneFetcherCallback cancelled]
// Type encoding: B16@0:8
// Implementation: 0x105482000

// -[SCBitmoji3DBatchedSceneFetcherCallback setCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10548200c

// -[SCBitmoji3DBatchedSceneFetcherCallback .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105482014

@end
