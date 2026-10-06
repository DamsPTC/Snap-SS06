// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapcodeView
// Superclass: UIView
// Address: 0x112a0df38

@interface SCSnapcodeView

// Property: loadingIndicator; attributes: T@"UIActivityIndicatorView",&,N,V_loadingIndicator
// Property: previewImageView; attributes: T@"UIImageView",&,N,V_previewImageView
// Property: bitmojiLoadingView; attributes: T@"SCPulsingView",&,N,V_bitmojiLoadingView
// Property: snapcodeSVGView; attributes: T@"SVGDocumentView",R,N,V_snapcodeSVGView

// -[SCSnapcodeView initWithFrame:userSession:bitmojiSelfieFetcher:geoFilterURLDataFetching:qrCodeRepository:]
// Type encoding: @80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56@64@72
// Implementation: 0x104fb0550

// -[SCSnapcodeView updateWithUserInfo:contexts:completionQueue:bitmojiSilhouette:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x104fb0818

// -[SCSnapcodeView updateWithUserId:bitmojiAvatarId:bitmojiSelfieId:contexts:completionQueue:bitmojiSilhouette:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x104fb0934

// -[SCSnapcodeView _renderSnapcodeForUserId:currentSession:shouldShowSnapchatGhost:contexts:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16i24B28@32@40@?48
// Implementation: 0x104fb0e1c

// -[SCSnapcodeView _handleSnapcodeData:success:userId:shouldShowSnapchatGhost:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16B24@28B36@40@?48
// Implementation: 0x104fb10a4

// -[SCSnapcodeView _renderBitmojiForUserId:avatarId:selfieId:currentSession:contexts:completionBlock:]
// Type encoding: v60@0:8@16@24@32i40@44@?52
// Implementation: 0x104fb11ec

// -[SCSnapcodeView updateWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x104fb1540

// -[SCSnapcodeView snapcodeSVGView]
// Type encoding: @16@0:8
// Implementation: 0x104fb1594

// -[SCSnapcodeView previewImageView]
// Type encoding: @16@0:8
// Implementation: 0x104fb169c

// -[SCSnapcodeView bitmojiLoadingView]
// Type encoding: @16@0:8
// Implementation: 0x104fb17b4

// -[SCSnapcodeView loadingIndicator]
// Type encoding: @16@0:8
// Implementation: 0x104fb18e0

// -[SCSnapcodeView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x104fb1960

// -[SCSnapcodeView _resetSnapcodeViewForBitmoji:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fb1b3c

// -[SCSnapcodeView _drawPreviewImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fb1bf0

// -[SCSnapcodeView _drawSnapcode:]
// Type encoding: B24@0:8@16
// Implementation: 0x104fb1e00

// -[SCSnapcodeView _hideSnapcode:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fb1ebc

// -[SCSnapcodeView _hidePreviewImage:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fb1f08

// -[SCSnapcodeView _startLoadingForBitmoji:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fb1f18

// -[SCSnapcodeView _stopLoadingWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fb20ac

// -[SCSnapcodeView _loadedWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fb21f0

// -[SCSnapcodeView setLoadingIndicator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fb2220

// -[SCSnapcodeView setPreviewImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fb2260

// -[SCSnapcodeView setBitmojiLoadingView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fb22a0

// -[SCSnapcodeView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fb22e0

@end
