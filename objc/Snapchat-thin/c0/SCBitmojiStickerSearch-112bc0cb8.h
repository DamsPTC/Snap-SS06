// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiStickerSearch
// Superclass: NSObject
// Address: 0x112bc0cb8

@interface SCBitmojiStickerSearch

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiStickerSearch initWithDatabase:avatarProvider:friendProvider:renderStyleProvider:maxCustomojiCount:customojiSearchService:]
// Type encoding: @64@0:8@16@24@32@40q48@56
// Implementation: 0x108d2ba74

// -[SCBitmojiStickerSearch searchStickersWithText:avatarIds:forceFriendmojis:completionBlock:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x108d2bba8

// -[SCBitmojiStickerSearch searchCustomojiStickersWithText:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108d2bfbc

// -[SCBitmojiStickerSearch clearCachedStickerSearchResults]
// Type encoding: v16@0:8
// Implementation: 0x108d2c2f8

// -[SCBitmojiStickerSearch _stickerFromCustomojiResult:itemPresentationModelProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d2c300

// -[SCBitmojiStickerSearch .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d2c508

@end
