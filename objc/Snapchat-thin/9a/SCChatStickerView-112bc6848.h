// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatStickerView
// Superclass: UIView
// Address: 0x112bc6848

@interface SCChatStickerView

// Property: delegate; attributes: T@"<SCChatStickerViewDelegate>",W,N,V_delegate
// Property: canUseLowResolution; attributes: TB,N,V_canUseLowResolution

// -[SCChatStickerView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e93c80

// -[SCChatStickerView setItemInstance:isReaction:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108e93f74

// -[SCChatStickerView _fetchItemInstance:willAcceptLowRes:isReaction:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x108e94498

// -[SCChatStickerView _getCTItemPresentationModelProviderTypeWithInstance:lowRes:isReaction:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x108e94838

// -[SCChatStickerView _isStickerLoaded]
// Type encoding: B16@0:8
// Implementation: 0x108e94974

// -[SCChatStickerView _showItemInstance:withImage:showErrorImage:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108e949b4

// -[SCChatStickerView _showSpinner]
// Type encoding: v16@0:8
// Implementation: 0x108e94b60

// -[SCChatStickerView setCTPItemViewService:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e94c0c

// -[SCChatStickerView stopAnimating]
// Type encoding: v16@0:8
// Implementation: 0x108e94c44

// -[SCChatStickerView startAnimating]
// Type encoding: v16@0:8
// Implementation: 0x108e94c78

// -[SCChatStickerView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e94cac

// -[SCChatStickerView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e94ccc

// -[SCChatStickerView canUseLowResolution]
// Type encoding: B16@0:8
// Implementation: 0x108e94ce0

// -[SCChatStickerView setCanUseLowResolution:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e94cf0

// -[SCChatStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e94d00

@end
