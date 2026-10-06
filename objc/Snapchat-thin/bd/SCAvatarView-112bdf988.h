// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAvatarView
// Superclass: UIView
// Address: 0x112bdf988

@interface SCAvatarView

// Property: viewModel; attributes: T@"SCAvatarViewModel",&,N,V_viewModel
// Property: imageDownloader; attributes: T@"<SCImageDownloading>",&,N,V_imageDownloader
// Property: imageFetchingService; attributes: T@"<SCImageFetchingService>",&,N,V_imageFetchingService
// Property: valdiRuntimeProvider; attributes: T@"SCLazy",&,N,V_valdiRuntimeProvider
// Property: delegate; attributes: T@"<SCAvatarViewDelegate>",W,N,V_delegate
// Property: contentEdgeInsets; attributes: T{UIEdgeInsets=dddd},N,V_contentEdgeInsets
// Property: cornerRadius; attributes: Td,N,V_cornerRadius
// Property: animationScale; attributes: Td,N,V_animationScale
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: SIGIcon; attributes: T@"UIImage",?,&,N
// Property: preferredImageSize; attributes: T{CGSize=dd},N,V_preferredImageSize
// Property: optimizationOptions; attributes: TQ,N,V_optimizationOptions

// -[SCAvatarView addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff0104

// -[SCAvatarView removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff0114

// -[SCAvatarView didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108ff0124

// -[SCAvatarView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108ff0134

// -[SCAvatarView prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x108ff0704

// -[SCAvatarView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108ff07f8

// -[SCAvatarView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff0f9c

// -[SCAvatarView setContentEdgeInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x108ff16b8

// -[SCAvatarView setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff1704

// -[SCAvatarView setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff17d4

// -[SCAvatarView setComposerRuntimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff187c

// -[SCAvatarView setBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff18fc

// -[SCAvatarView setPreferredImageSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108ff1a04

// -[SCAvatarView setCornerRadius:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ff1ac8

// -[SCAvatarView setOptimizationOptions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108ff1c68

// -[SCAvatarView bitmojiView]
// Type encoding: @16@0:8
// Implementation: 0x108ff1d14

// -[SCAvatarView _showBitmojiContainerView]
// Type encoding: v16@0:8
// Implementation: 0x108ff1d64

// -[SCAvatarView _showBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x108ff1f14

// -[SCAvatarView _showMiniStoryThumbnailView]
// Type encoding: v16@0:8
// Implementation: 0x108ff211c

// -[SCAvatarView _showRingViewIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff22dc

// -[SCAvatarView _showReplayIcon]
// Type encoding: v16@0:8
// Implementation: 0x108ff24dc

// -[SCAvatarView _ringCornerRadiusForViewModel:]
// Type encoding: d24@0:8@16
// Implementation: 0x108ff27ec

// -[SCAvatarView _showAvatarBadge]
// Type encoding: v16@0:8
// Implementation: 0x108ff2830

// -[SCAvatarView _showAvatarActivityIndicator]
// Type encoding: v16@0:8
// Implementation: 0x108ff28f8

// -[SCAvatarView _getStrokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x108ff29c0

// -[SCAvatarView _getActivityIndicatorCenter]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108ff2aa8

// -[SCAvatarView _getMiniStoryThumbnailCenter]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108ff2ae4

// -[SCAvatarView handleTap]
// Type encoding: v16@0:8
// Implementation: 0x108ff2b34

// -[SCAvatarView _showLoadingViewIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108ff2bcc

// -[SCAvatarView _showLoadingAnimationIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ff2cc0

// -[SCAvatarView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ff369c

// -[SCAvatarView shouldRasterizeAvatar]
// Type encoding: B16@0:8
// Implementation: 0x108ff36b8

// -[SCAvatarView bitmojiDidLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff36f4

// -[SCAvatarView preferredImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ff3770

// -[SCAvatarView optimizationOptions]
// Type encoding: Q16@0:8
// Implementation: 0x108ff3784

// -[SCAvatarView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x108ff3794

// -[SCAvatarView imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x108ff37a4

// -[SCAvatarView imageFetchingService]
// Type encoding: @16@0:8
// Implementation: 0x108ff37b4

// -[SCAvatarView valdiRuntimeProvider]
// Type encoding: @16@0:8
// Implementation: 0x108ff37c4

// -[SCAvatarView setValdiRuntimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff37d4

// -[SCAvatarView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108ff3814

// -[SCAvatarView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ff3834

// -[SCAvatarView contentEdgeInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108ff3848

// -[SCAvatarView cornerRadius]
// Type encoding: d16@0:8
// Implementation: 0x108ff3860

// -[SCAvatarView animationScale]
// Type encoding: d16@0:8
// Implementation: 0x108ff3870

// -[SCAvatarView setAnimationScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ff3880

// -[SCAvatarView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ff3890

// +[SCAvatarView announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x108ff00f8

@end
