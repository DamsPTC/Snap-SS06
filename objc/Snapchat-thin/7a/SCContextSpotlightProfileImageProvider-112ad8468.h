// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightProfileImageProvider
// Superclass: NSObject
// Address: 0x112ad8468

@interface SCContextSpotlightProfileImageProvider


// -[SCContextSpotlightProfileImageProvider initWithImageFetchingService:bitmojiImageFetcher:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1062a56cc

// -[SCContextSpotlightProfileImageProvider fetchProfileImageWithUrl:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062a57d4

// -[SCContextSpotlightProfileImageProvider fetchBitmojiProfileImageWithAvatarId:bitmojiSelfieId:userId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1062a5938

// -[SCContextSpotlightProfileImageProvider _fetchProfileImageWithImageUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062a5b9c

// -[SCContextSpotlightProfileImageProvider _fetchBitmojiImageWithId:bitmojiSelfieId:key:userId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1062a5fd0

// -[SCContextSpotlightProfileImageProvider _finishedFetchingImageWithKey:image:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062a62ac

// -[SCContextSpotlightProfileImageProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062a6438

@end
