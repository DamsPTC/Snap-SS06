// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNSEImageLoader
// Superclass: NSObject
// Address: 0x1000dc298

@interface SCNSEImageLoader


// -[SCNSEImageLoader initWithProcessingScope:notificationType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100059cb8

// -[SCNSEImageLoader initWithNetworkingApiClient:cache:mediaDownloadTimeoutMs:grapheneLogger:bitmojiConfigs:groupBitmojiInfoLoader:]
// Type encoding: @64@0:8@16@24Q32@40@48@56
// Implementation: 0x100059e40

// -[SCNSEImageLoader loadImageFromUrl:encryptionKey:encryptionIv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100059f74

// -[SCNSEImageLoader loadImageFromUrl:encryptionKey:encryptionIv:maxOutputSize:]
// Type encoding: @56@0:8@16@24@32{CGSize=dd}40
// Implementation: 0x100059f88

// -[SCNSEImageLoader loadImageDataFromUrl:encryptionKey:encryptionIv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100059f90

// -[SCNSEImageLoader loadUserBitmoji:directDownloadUrl:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100059f98

// -[SCNSEImageLoader loadGroupBitmojiWithConversationId:senderUserId:senderDirectDownloadUrl:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10005a00c

// -[SCNSEImageLoader loadGroupBitmojiImageWithConversationId:senderUserId:senderDirectDownloadUrl:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10005a1f0

// -[SCNSEImageLoader _loadImageFromUrl:encryptionKey:encryptionIv:imageType:maxOutputSize:]
// Type encoding: @64@0:8@16@24@32Q40{CGSize=dd}48
// Implementation: 0x10005a780

// -[SCNSEImageLoader _loadImageDataFromUrl:encryptionKey:encryptionIv:imageType:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x10005a91c

// -[SCNSEImageLoader _loadUserBitmojiOrSilhouetteForUserId:bitmojiDownloadUrl:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10005acf4

// -[SCNSEImageLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10005af44

@end
