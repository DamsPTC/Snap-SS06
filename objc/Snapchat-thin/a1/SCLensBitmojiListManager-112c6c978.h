// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensBitmojiListManager
// Superclass: NSObject
// Address: 0x112c6c978

@interface SCLensBitmojiListManager


// -[SCLensBitmojiListManager initWithRequestManager:lensUserProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100ba1360

// -[SCLensBitmojiListManager fetchBitmojiList:requestSettings:completionBlock:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b0bbb90

// -[SCLensBitmojiListManager _issueBitmojiListFetch:requestSettings:requestKey:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b0bbfbc

// -[SCLensBitmojiListManager boostRequest:setting:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0bc560

// -[SCLensBitmojiListManager _initBitmojiListCache]
// Type encoding: v16@0:8
// Implementation: 0x10b0bc5b0

// -[SCLensBitmojiListManager _lookupInCache:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b0bc604

// -[SCLensBitmojiListManager _ttlFromCacheControlHeader:]
// Type encoding: q24@0:8@16
// Implementation: 0x10b0bc668

// -[SCLensBitmojiListManager resetCache]
// Type encoding: v16@0:8
// Implementation: 0x10b0bc774

// -[SCLensBitmojiListManager resetCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0bc77c

// -[SCLensBitmojiListManager lensUserProvider]
// Type encoding: @16@0:8
// Implementation: 0x10b0bc858

// -[SCLensBitmojiListManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0bc860

@end
