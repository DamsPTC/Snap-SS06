// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupBitmojiAvatarView
// Superclass: UIView
// Address: 0x112bdfa78

@interface SCGroupBitmojiAvatarView

// Property: viewModels; attributes: T@"NSArray",&,N,V_viewModels
// Property: withSelfieInset; attributes: TB,N,V_withSelfieInset
// Property: imageDownloader; attributes: T@"<SCImageDownloading>",&,N,V_imageDownloader
// Property: rearBitmojiOpacity; attributes: Td,N,V_rearBitmojiOpacity
// Property: preferredImageSize; attributes: T{CGSize=dd},N,V_preferredImageSize
// Property: optimizationOptions; attributes: TQ,N,V_optimizationOptions

// -[SCGroupBitmojiAvatarView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108ff6690

// -[SCGroupBitmojiAvatarView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108ff67ec

// -[SCGroupBitmojiAvatarView _layoutLeftBitmojiImageView]
// Type encoding: v16@0:8
// Implementation: 0x108ff692c

// -[SCGroupBitmojiAvatarView _layoutRightBitmojiImageView]
// Type encoding: v16@0:8
// Implementation: 0x108ff6b04

// -[SCGroupBitmojiAvatarView _layoutMiddleBitmojiImageView]
// Type encoding: v16@0:8
// Implementation: 0x108ff6c48

// -[SCGroupBitmojiAvatarView setViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff6d70

// -[SCGroupBitmojiAvatarView setViewModels:withSelfieInset:withImageSynchronizer:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108ff6df4

// -[SCGroupBitmojiAvatarView setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff71b8

// -[SCGroupBitmojiAvatarView setPreferredImageSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108ff7288

// -[SCGroupBitmojiAvatarView setBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff7368

// -[SCGroupBitmojiAvatarView setRearBitmojiOpacity:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ff7400

// -[SCGroupBitmojiAvatarView _updateBitmojiImageView:networkImage:loadingImage:fallbackNetworkImage:viewModels:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x108ff7410

// -[SCGroupBitmojiAvatarView _useFallBackImageForBitmojiView:fallbackNetworkImage:viewModels:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108ff768c

// -[SCGroupBitmojiAvatarView _updateOpacityForBitmojiImageView:networkImage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ff77ac

// -[SCGroupBitmojiAvatarView _bitmojiImageViewsToUpdateForCount:]
// Type encoding: @24@0:8q16
// Implementation: 0x108ff7888

// -[SCGroupBitmojiAvatarView _createIfNecessaryForView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff7980

// -[SCGroupBitmojiAvatarView _hideBitmojiImageViewsForCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ff7b9c

// -[SCGroupBitmojiAvatarView _updatePreferredImageSizeForView:bitmojiAvatarViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108ff7c40

// -[SCGroupBitmojiAvatarView _updateMaskingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108ff7dec

// -[SCGroupBitmojiAvatarView _shouldMaskWithRoundedCornerContainerView]
// Type encoding: B16@0:8
// Implementation: 0x108ff7ea8

// -[SCGroupBitmojiAvatarView isVisible]
// Type encoding: B16@0:8
// Implementation: 0x108ff7fdc

// -[SCGroupBitmojiAvatarView preferredImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ff811c

// -[SCGroupBitmojiAvatarView optimizationOptions]
// Type encoding: Q16@0:8
// Implementation: 0x108ff8130

// -[SCGroupBitmojiAvatarView setOptimizationOptions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108ff8140

// -[SCGroupBitmojiAvatarView viewModels]
// Type encoding: @16@0:8
// Implementation: 0x108ff8150

// -[SCGroupBitmojiAvatarView withSelfieInset]
// Type encoding: B16@0:8
// Implementation: 0x108ff8160

// -[SCGroupBitmojiAvatarView setWithSelfieInset:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ff8170

// -[SCGroupBitmojiAvatarView imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x108ff8180

// -[SCGroupBitmojiAvatarView rearBitmojiOpacity]
// Type encoding: d16@0:8
// Implementation: 0x108ff8190

// -[SCGroupBitmojiAvatarView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ff81a0

@end
