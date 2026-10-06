// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAvatarImageFetcher
// Superclass: NSObject
// Address: 0x112a1eec8

@interface SCAvatarImageFetcher


// -[SCAvatarImageFetcher initWithBitmojiImageFetcher:bitmojiSelfieFetcher:bitmojiContentFetcher:bitmojiConfigProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105197c08

// -[SCAvatarImageFetcher fetchSelfieForUserId:avatarId:selfieId:type:contexts:feature:scale:canUsePrior:modifier:preferredImageSize:transformation:callbackQueue:]
// Type encoding: @112@0:8@16@24@32Q40@48i56Q60B68Q72{CGSize=dd}80@96@104
// Implementation: 0x105197d04

// -[SCAvatarImageFetcher _fetchSelfieForUserId:avatarId:selfieId:type:contexts:feature:scale:canUsePrior:modifier:preferredImageSize:transformation:callbackQueue:observer:]
// Type encoding: @120@0:8@16@24@32Q40@48i56Q60B68Q72{CGSize=dd}80@96@104@112
// Implementation: 0x105198020

// -[SCAvatarImageFetcher fetchBitmojiWithTemplateId:avatarId:friendAvatarId:scale:imageType:contexts:feature:canUsePrior:preferredImageSize:transformation:callbackQueue:]
// Type encoding: @104@0:8@16@24@32Q40Q48@56i64B68{CGSize=dd}72@88@96
// Implementation: 0x10519832c

// -[SCAvatarImageFetcher _fetchBitmojiWithTemplateId:avatarId:friendAvatarId:scale:imageType:contexts:feature:canUsePrior:preferredImageSize:transformation:callbackQueue:observer:]
// Type encoding: @112@0:8@16@24@32Q40Q48@56i64B68{CGSize=dd}72@88@96@104
// Implementation: 0x105198634

// -[SCAvatarImageFetcher _didFetchImageData:preferredImageSize:transformation:observer:]
// Type encoding: v56@0:8@16{CGSize=dd}24@40@48
// Implementation: 0x105198910

// -[SCAvatarImageFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105198bf4

@end
