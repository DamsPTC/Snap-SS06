// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSABitmojiComponent
// Superclass: LSABaseComponent
// Address: 0x112bf8b68

@interface LSABitmojiComponent

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSABitmojiComponent setBitmojiAvailable:bitmojiType:completion:]
// Type encoding: v40@0:8Q16Q24@?32
// Implementation: 0x10ad8ec40

// -[LSABitmojiComponent setBitmojiImage:stickerId:avatarId:friendAvatarId:bitmojiType:imageStyle:scale:isSelfie:completion:]
// Type encoding: v84@0:8@16@24@32@40Q48Q56q64B72@?76
// Implementation: 0x10ad8ef94

// -[LSABitmojiComponent setBitmojiAvatarId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad8f79c

// -[LSABitmojiComponent setFriendAvatarId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad8fb0c

// -[LSABitmojiComponent setSelfieStickerId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad8fe7c

// -[LSABitmojiComponent addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad901ec

// -[LSABitmojiComponent removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad901fc

// -[LSABitmojiComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ad9020c

// -[LSABitmojiComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10ad902e0

// -[LSABitmojiComponent didRequestBitmojiWithId:avatarId:friendAvatarId:stickerType:scale:isRequestingSelfie:]
// Type encoding: v56@0:8@16@24@32i40q44B52
// Implementation: 0x10ad904d4

// -[LSABitmojiComponent didRequestBitmojiInfo]
// Type encoding: v16@0:8
// Implementation: 0x10ad906fc

// -[LSABitmojiComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad90798

// -[LSABitmojiComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad90808

@end
