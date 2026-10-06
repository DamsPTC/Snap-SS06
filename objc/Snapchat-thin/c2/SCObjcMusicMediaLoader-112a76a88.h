// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCObjcMusicMediaLoader
// Superclass: NSObject
// Address: 0x112a76a88

@interface SCObjcMusicMediaLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCObjcMusicMediaLoader initWithContentDelivery:memoriesMediaRetriever:retryHelper:trackLoadLogger:musicSelectionResolver:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1058e3cd8

// -[SCObjcMusicMediaLoader loadAudioDataForAudioDataURL:encryptionKey:encryptionIv:completionQueue:completion:source:]
// Type encoding: @64@0:8@16@24@32@40@?48@56
// Implementation: 0x1058e3dfc

// -[SCObjcMusicMediaLoader loadAlbumArtImageForImageURL:encryptionKey:encryptionIv:completionQueue:completion:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x1058e3e38

// -[SCObjcMusicMediaLoader requestDecryptedSelectionForSnapID:synchronous:queue:completion:source:]
// Type encoding: v52@0:8@16B24@28@?36@44
// Implementation: 0x1058e3fb4

// -[SCObjcMusicMediaLoader requestMusicSelectionWithDecryptedData:completionQueue:completionHandler:source:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1058e4188

// -[SCObjcMusicMediaLoader requestMusicSelectionWithMusicTrack:completionQueue:completionHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1058e42d4

// -[SCObjcMusicMediaLoader claimCachedAudioForAudioDataURL:claimId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058e460c

// -[SCObjcMusicMediaLoader _loadDataForURL:mediaType:encryptionKey:encryptionIv:completionQueue:completion:source:]
// Type encoding: @72@0:8@16@24@32@40@48@?56@64
// Implementation: 0x1058e48c4

// -[SCObjcMusicMediaLoader _fetchSelectionForAsset:completionQueue:completionHandler:source:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1058e4f84

// -[SCObjcMusicMediaLoader _asynchronousEncryptedContentDataResultHandlerOnQueue:completion:source:]
// Type encoding: @?40@0:8@16@?24@32
// Implementation: 0x1058e58a0

// -[SCObjcMusicMediaLoader _fetchSelectionWithMusicData:completionQueue:completionHandler:source:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1058e5cec

// -[SCObjcMusicMediaLoader _encryptedContentDataResultHandlerWithCompletion:dispatchGroup:source:]
// Type encoding: @?40@0:8@?16^@24@32
// Implementation: 0x1058e5ea0

// -[SCObjcMusicMediaLoader _AESGCMDecryptData:encryptionKey:encryptionIv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058e63ac

// -[SCObjcMusicMediaLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058e6458

@end
