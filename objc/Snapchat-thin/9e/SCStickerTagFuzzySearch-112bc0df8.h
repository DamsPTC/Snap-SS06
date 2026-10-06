// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerTagFuzzySearch
// Superclass: NSObject
// Address: 0x112bc0df8

@interface SCStickerTagFuzzySearch


// -[SCStickerTagFuzzySearch initWithBitmojiAvatarProvider:bitmojiStickerSearch:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d2f7d4

// -[SCStickerTagFuzzySearch searchStickersWithSearch:fuzzyTextAndParameter:stickerTarget:shouldIncludeFriendBitmojiForQuickSend:similarity:numShortList:numFuzzyTag:completionHandler:]
// Type encoding: v76@0:8@16@24q32B40d44q52q60@?68
// Implementation: 0x108d2ff5c

// -[SCStickerTagFuzzySearch searchStickers:fuzzyTextAndParameter:stickerTarget:avatarIds:shouldIncludeFriendBitmojiForQuickSend:similarity:numShortList:numFuzzyTag:completionHandler:]
// Type encoding: v84@0:8@16@24q32@40B48d52q60q68@?76
// Implementation: 0x108d300a8

// -[SCStickerTagFuzzySearch clearCachedStickerSearchResults:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d302d4

// -[SCStickerTagFuzzySearch _performSearch:fuzzyTextAndParameter:stickerTarget:avatarIds:shouldIncludeFriendBitmojiForQuickSend:similarity:numShortList:numFuzzyTag:completionHandler:]
// Type encoding: v84@0:8@16@24q32@40B48d52q60q68@?76
// Implementation: 0x108d30328

// -[SCStickerTagFuzzySearch searchStickersWithSearch:singleText:stickerTarget:shouldIncludeFriendBitmojiForQuickSend:includeCustomoji:customojiOnly:completionHandler:]
// Type encoding: v60@0:8@16@24q32B40B44B48@?52
// Implementation: 0x108d30b24

// -[SCStickerTagFuzzySearch searchStickers:singleText:avatarIds:stickerTarget:shouldIncludeFriendBitmojiForQuickSend:includeCustomoji:customojiOnly:completionHandler:]
// Type encoding: v68@0:8@16@24@32q40B48B52B56@?60
// Implementation: 0x108d30c64

// -[SCStickerTagFuzzySearch .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d3124c

// +[SCStickerTagFuzzySearch isStopWord:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d2f8e0

// +[SCStickerTagFuzzySearch isSearchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108d2fd34

// +[SCStickerTagFuzzySearch _isOffensiveWord:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d2fd3c

// +[SCStickerTagFuzzySearch removeDup:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d2ff10

// +[SCStickerTagFuzzySearch processedTextWithText:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d3109c

// +[SCStickerTagFuzzySearch _textHasPunctuationsOnly:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d311e0

@end
