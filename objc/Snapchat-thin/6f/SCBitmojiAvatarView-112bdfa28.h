// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiAvatarView
// Superclass: UIView
// Address: 0x112bdfa28

@interface SCBitmojiAvatarView

// Property: viewModel; attributes: T@"SCBitmojiAvatarViewModel",&,N,V_viewModel
// Property: imageDownloader; attributes: T@"<SCImageDownloading>",&,N,V_imageDownloader
// Property: valdiRuntimeProvider; attributes: T@"SCLazy",&,N,V_valdiRuntimeProvider
// Property: delegate; attributes: T@"<SCBitmojiAvatarDelegate>",W,N,V_delegate
// Property: preferredImageSize; attributes: T{CGSize=dd},N,V_preferredImageSize
// Property: optimizationOptions; attributes: TQ,N,V_optimizationOptions

// -[SCBitmojiAvatarView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108ff508c

// -[SCBitmojiAvatarView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108ff51d8

// -[SCBitmojiAvatarView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff52e4

// -[SCBitmojiAvatarView setViewModel:withImageSynchronizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ff52ec

// -[SCBitmojiAvatarView setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff56f4

// -[SCBitmojiAvatarView setComposerRuntimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff5774

// -[SCBitmojiAvatarView setPreferredImageSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108ff57ac

// -[SCBitmojiAvatarView _showBitmojiNetworkImageViewWithNetworkImage:loadingImage:fallbackNetworkImage:transformation:viewModel:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x108ff5870

// -[SCBitmojiAvatarView _updateBitmojiNetworkImageWithFallBackImage:viewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ff5e84

// -[SCBitmojiAvatarView _updateAccessibilityValueWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff5f94

// -[SCBitmojiAvatarView _updateAccessibilityValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff6044

// -[SCBitmojiAvatarView _showEmojiLabelWithAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff6048

// -[SCBitmojiAvatarView _showAlternativeAvatarViewWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff615c

// -[SCBitmojiAvatarView isVisible]
// Type encoding: B16@0:8
// Implementation: 0x108ff6270

// -[SCBitmojiAvatarView preferredImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ff6390

// -[SCBitmojiAvatarView optimizationOptions]
// Type encoding: Q16@0:8
// Implementation: 0x108ff63a4

// -[SCBitmojiAvatarView setOptimizationOptions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108ff63b4

// -[SCBitmojiAvatarView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x108ff63c4

// -[SCBitmojiAvatarView imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x108ff63d4

// -[SCBitmojiAvatarView valdiRuntimeProvider]
// Type encoding: @16@0:8
// Implementation: 0x108ff63e4

// -[SCBitmojiAvatarView setValdiRuntimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff63f4

// -[SCBitmojiAvatarView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108ff6434

// -[SCBitmojiAvatarView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff6454

// -[SCBitmojiAvatarView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ff6468

@end
