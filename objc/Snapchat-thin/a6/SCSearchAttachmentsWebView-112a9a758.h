// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchAttachmentsWebView
// Superclass: UIView
// Address: 0x112a9a758

@interface SCSearchAttachmentsWebView

// Property: delegate; attributes: T@"<SCSearchAttachmentsWebViewDelegate>",W,N,V_delegate
// Property: webView; attributes: T@"WKWebView",R,N,V_webView
// Property: progressView; attributes: T@"SCWebViewProgressIndicator",R,N,V_progressView
// Property: attachButton; attributes: T@"SCSearchActionButton",R,N,V_attachButton
// Property: backButtonHidden; attributes: TB,N,GisBackButtonHidden
// Property: layoutInsets; attributes: T{UIEdgeInsets=dddd},N,V_layoutInsets
// Property: progressViewOffset; attributes: Td,N,V_progressViewOffset
// Property: safeBrowsingViewHidden; attributes: TB,N,GisSafeBrowsingViewHidden,V_safeBrowsingViewHidden
// Property: attachButtonOriginOffset; attributes: T{CGPoint=dd},N,V_attachButtonOriginOffset
// Property: safeBrowsingUrlType; attributes: Tq,R,N,V_safeBrowsingUrlType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: viewModel; attributes: T@,&,N,V_viewModel
// Property: SIGIcon; attributes: T@"UIImage",?,&,N

// -[SCSearchAttachmentsWebView initWithSafeBrowsingWarningView:]
// Type encoding: @24@0:8@16
// Implementation: 0x105cfbec8

// -[SCSearchAttachmentsWebView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105cfc170

// -[SCSearchAttachmentsWebView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105cfc1dc

// -[SCSearchAttachmentsWebView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfc334

// -[SCSearchAttachmentsWebView setAttachButtonOriginOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105cfc424

// -[SCSearchAttachmentsWebView setAttachButtonViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfc44c

// -[SCSearchAttachmentsWebView setSafeBrowsingViewStateForUrlType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105cfc47c

// -[SCSearchAttachmentsWebView setLayoutInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x105cfc504

// -[SCSearchAttachmentsWebView setBackButtonHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cfc550

// -[SCSearchAttachmentsWebView isBackButtonHidden]
// Type encoding: B16@0:8
// Implementation: 0x105cfc5b0

// -[SCSearchAttachmentsWebView setAttachButtonHidden:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105cfc5c0

// -[SCSearchAttachmentsWebView isAttachButtonHidden]
// Type encoding: B16@0:8
// Implementation: 0x105cfc768

// -[SCSearchAttachmentsWebView contentOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x105cfc778

// -[SCSearchAttachmentsWebView targetOffsetY]
// Type encoding: d16@0:8
// Implementation: 0x105cfc7d0

// -[SCSearchAttachmentsWebView setScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cfc7e4

// -[SCSearchAttachmentsWebView applyTranslation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105cfc828

// -[SCSearchAttachmentsWebView scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfc858

// -[SCSearchAttachmentsWebView _setAttachButtonDestinationAlpha:offset:]
// Type encoding: v40@0:8d16{CGPoint=dd}24
// Implementation: 0x105cfc88c

// -[SCSearchAttachmentsWebView _attachButtonIsHidden]
// Type encoding: B16@0:8
// Implementation: 0x105cfc8ac

// -[SCSearchAttachmentsWebView _layoutButtonsWithEffectiveBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105cfc8d4

// -[SCSearchAttachmentsWebView _handleButtonTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfcb08

// -[SCSearchAttachmentsWebView _updateRoundedCornerMaskIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105cfcc54

// -[SCSearchAttachmentsWebView _didTapBackButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfcdd8

// -[SCSearchAttachmentsWebView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x105cfce14

// -[SCSearchAttachmentsWebView delegate]
// Type encoding: @16@0:8
// Implementation: 0x105cfce24

// -[SCSearchAttachmentsWebView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfce44

// -[SCSearchAttachmentsWebView webView]
// Type encoding: @16@0:8
// Implementation: 0x105cfce58

// -[SCSearchAttachmentsWebView progressView]
// Type encoding: @16@0:8
// Implementation: 0x105cfce68

// -[SCSearchAttachmentsWebView attachButton]
// Type encoding: @16@0:8
// Implementation: 0x105cfce78

// -[SCSearchAttachmentsWebView layoutInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105cfce88

// -[SCSearchAttachmentsWebView progressViewOffset]
// Type encoding: d16@0:8
// Implementation: 0x105cfcea0

// -[SCSearchAttachmentsWebView setProgressViewOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x105cfceb0

// -[SCSearchAttachmentsWebView isSafeBrowsingViewHidden]
// Type encoding: B16@0:8
// Implementation: 0x105cfcec0

// -[SCSearchAttachmentsWebView setSafeBrowsingViewHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cfced0

// -[SCSearchAttachmentsWebView attachButtonOriginOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x105cfcee0

// -[SCSearchAttachmentsWebView safeBrowsingUrlType]
// Type encoding: q16@0:8
// Implementation: 0x105cfcef4

// -[SCSearchAttachmentsWebView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cfcf04

@end
