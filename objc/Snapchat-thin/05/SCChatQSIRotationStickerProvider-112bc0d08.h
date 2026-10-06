// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatQSIRotationStickerProvider
// Superclass: NSObject
// Address: 0x112bc0d08

@interface SCChatQSIRotationStickerProvider

// Property: delegate; attributes: T@"<SCChatQSIRotationStickerProviderDelegate>",W,N,V_delegate

// -[SCChatQSIRotationStickerProvider initWithRotationType:timeIntervalBetweenRotations:]
// Type encoding: @32@0:8Q16d24
// Implementation: 0x108d2c55c

// -[SCChatQSIRotationStickerProvider startRotationWithStickers:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d2c5b4

// -[SCChatQSIRotationStickerProvider stopRotation]
// Type encoding: v16@0:8
// Implementation: 0x108d2c7ac

// -[SCChatQSIRotationStickerProvider _getQSIStickersWithInitialSticker:stickers:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d2c7e4

// -[SCChatQSIRotationStickerProvider _getByOneStickerOfEachTypeExceptSticker:stickers:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d2c968

// -[SCChatQSIRotationStickerProvider _mixAllTypesStickers:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d2cb4c

// -[SCChatQSIRotationStickerProvider _groupStickersByType:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d2cc8c

// -[SCChatQSIRotationStickerProvider _rotateToNextSticker]
// Type encoding: v16@0:8
// Implementation: 0x108d2cf88

// -[SCChatQSIRotationStickerProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x108d2d03c

// -[SCChatQSIRotationStickerProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d2d054

// -[SCChatQSIRotationStickerProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d2d060

@end
