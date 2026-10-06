// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapBitmojiAvatarGenerator
// Superclass: NSObject
// Address: 0x112ac0048

@interface SCMapBitmojiAvatarGenerator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapBitmojiAvatarGenerator initWithBitmoji3dContentFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x10603b76c

// -[SCMapBitmojiAvatarGenerator fetchBitmojiImageForBitmojiAvatarId:bitmojiStickerId:stickerDynamicElements:clustered:completionQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x10603ba78

// -[SCMapBitmojiAvatarGenerator prefetchBitmojiImageForBitmojiAvatarId:bitmojiStickerId:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10603c374

// -[SCMapBitmojiAvatarGenerator clearCache]
// Type encoding: v16@0:8
// Implementation: 0x10603c5ac

// -[SCMapBitmojiAvatarGenerator _cachedBitmojiImageForBitmojiAvatarId:bitmojiStickerId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10603c698

// -[SCMapBitmojiAvatarGenerator _cacheBitmojiImage:forBitmojiAvatarId:bitmojiStickerId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10603c728

// -[SCMapBitmojiAvatarGenerator _prefetchActionmojiForAvatarId:sceneId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10603c7d4

// -[SCMapBitmojiAvatarGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10603c9bc

// +[SCMapBitmojiAvatarGenerator imageIdentifierForBitmojiAvatarId:bitmojiStickerId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10603b824

// +[SCMapBitmojiAvatarGenerator imageIdentifierForBitmojiAvatarId:bitmojiStickerId:stickerDynamicElements:clustered:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x10603b854

@end
