// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGeoFilterView
// Superclass: SCOverlayFilterView
// Address: 0x112bbfb88

@interface SCGeoFilterView

// Property: filterId; attributes: T@"NSString",C,N,V_filterId
// Property: geoFilterImageView; attributes: T@"SCGeoFilterImageView",&,N,V_geoFilterImageView
// Property: dynamicResourceImageView; attributes: T@"SCGeoFilterImageView",&,N,V_dynamicResourceImageView
// Property: slugView; attributes: T@"SCSponsoredSlugInteractiveView",&,N,V_slugView
// Property: isSponsored; attributes: TB,N,V_isSponsored
// Property: delegate; attributes: T@"<SCGeoFilterViewDelegate>",W,N,V_delegate
// Property: updateAttemptCount; attributes: Tq,R,N,V_updateAttemptCount
// Property: isFrameFilter; attributes: TB,R,N,V_isFrameFilter
// Property: isActionmoji; attributes: TB,R,N,V_isActionmoji
// Property: isBitmoji; attributes: TB,R,N,V_isBitmoji
// Property: isFriendFilter; attributes: TB,R,N,V_isFriendFilter
// Property: overlayPngData; attributes: T@"NSData",R,C,N,V_overlayPngData
// Property: encryptedGeoData; attributes: T@"NSString",R,C,N,V_encryptedGeoData
// Property: dynamicFilterRefreshHint; attributes: T@"NSString",R,C,N,V_dynamicFilterRefreshHint
// Property: dynamicFilterUpdatingMessage; attributes: T@"NSString",R,C,N,V_dynamicFilterUpdatingMessage
// Property: requestId; attributes: T@"NSString",R,C,N,V_requestId
// Property: filterPrompt; attributes: T@"NSDictionary",R,C,N,V_filterPrompt
// Property: geoFilterLoadingMetaData; attributes: T@"SCGeoFilterLoadingMetaData",R,N,V_geoFilterLoadingMetaData
// Property: unlockableContentType; attributes: Tq,R,N,V_unlockableContentType
// Property: eligibility; attributes: Tq,R,N,V_eligibility
// Property: unlockableTrackInfo; attributes: T@"SOJUUnlockableTrackInfo",R,N,V_unlockableTrackInfo
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGeoFilterView displayName]
// Type encoding: @16@0:8
// Implementation: 0x108d03c70

// -[SCGeoFilterView pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d03d64

// -[SCGeoFilterView rotation:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d03d68

// -[SCGeoFilterView pinch:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d03d6c

// -[SCGeoFilterView shouldRespondToTouchControl:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d03d70

// -[SCGeoFilterView initWithFrame:config:userSession:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x108d03d78

// -[SCGeoFilterView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108d04dc0

// -[SCGeoFilterView videoTrackedImages]
// Type encoding: @16@0:8
// Implementation: 0x108d04e20

// -[SCGeoFilterView hasImage]
// Type encoding: B16@0:8
// Implementation: 0x108d04f30

// -[SCGeoFilterView updateConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d04f40

// -[SCGeoFilterView setupUpdatingLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d05248

// -[SCGeoFilterView drawScreenshotImageInCurrentContextWithRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108d056d8

// -[SCGeoFilterView _activateFilterToast]
// Type encoding: v16@0:8
// Implementation: 0x108d0575c

// -[SCGeoFilterView _scheduleSponsoredSlugFadeout]
// Type encoding: v16@0:8
// Implementation: 0x108d05864

// -[SCGeoFilterView setDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d0591c

// -[SCGeoFilterView _fadeoutSponsoredSlug:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d05a10

// -[SCGeoFilterView _fadeinSponsoredSlug]
// Type encoding: v16@0:8
// Implementation: 0x108d05b00

// -[SCGeoFilterView shouldAddToAlternativeSuperview]
// Type encoding: B16@0:8
// Implementation: 0x108d05ca4

// -[SCGeoFilterView resetUpdateAttemptCount]
// Type encoding: v16@0:8
// Implementation: 0x108d05cb4

// -[SCGeoFilterView _isRecognizer:locatedInView:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108d05cc4

// -[SCGeoFilterView tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d05d6c

// -[SCGeoFilterView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d05e2c

// -[SCGeoFilterView didProcessTapInPreviewContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d05f00

// -[SCGeoFilterView _fadeoutFilterToast:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d05f04

// -[SCGeoFilterView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108d05fcc

// -[SCGeoFilterView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d05fec

// -[SCGeoFilterView dynamicFilterRefreshHint]
// Type encoding: @16@0:8
// Implementation: 0x108d06000

// -[SCGeoFilterView dynamicFilterUpdatingMessage]
// Type encoding: @16@0:8
// Implementation: 0x108d06010

// -[SCGeoFilterView eligibility]
// Type encoding: q16@0:8
// Implementation: 0x108d06020

// -[SCGeoFilterView encryptedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x108d06030

// -[SCGeoFilterView filterPrompt]
// Type encoding: @16@0:8
// Implementation: 0x108d06040

// -[SCGeoFilterView geoFilterLoadingMetaData]
// Type encoding: @16@0:8
// Implementation: 0x108d06050

// -[SCGeoFilterView isActionmoji]
// Type encoding: B16@0:8
// Implementation: 0x108d06060

// -[SCGeoFilterView isBitmoji]
// Type encoding: B16@0:8
// Implementation: 0x108d06070

// -[SCGeoFilterView isFrameFilter]
// Type encoding: B16@0:8
// Implementation: 0x108d06080

// -[SCGeoFilterView unlockableContentType]
// Type encoding: q16@0:8
// Implementation: 0x108d06090

// -[SCGeoFilterView overlayPngData]
// Type encoding: @16@0:8
// Implementation: 0x108d060a0

// -[SCGeoFilterView isFriendFilter]
// Type encoding: B16@0:8
// Implementation: 0x108d060b0

// -[SCGeoFilterView updateAttemptCount]
// Type encoding: q16@0:8
// Implementation: 0x108d060c0

// -[SCGeoFilterView unlockableTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x108d060d0

// -[SCGeoFilterView requestId]
// Type encoding: @16@0:8
// Implementation: 0x108d060e0

// -[SCGeoFilterView filterId]
// Type encoding: @16@0:8
// Implementation: 0x108d060f0

// -[SCGeoFilterView setFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d06100

// -[SCGeoFilterView geoFilterImageView]
// Type encoding: @16@0:8
// Implementation: 0x108d0610c

// -[SCGeoFilterView setGeoFilterImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0611c

// -[SCGeoFilterView dynamicResourceImageView]
// Type encoding: @16@0:8
// Implementation: 0x108d0615c

// -[SCGeoFilterView setDynamicResourceImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0616c

// -[SCGeoFilterView slugView]
// Type encoding: @16@0:8
// Implementation: 0x108d061ac

// -[SCGeoFilterView setSlugView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d061bc

// -[SCGeoFilterView isSponsored]
// Type encoding: B16@0:8
// Implementation: 0x108d061fc

// -[SCGeoFilterView setIsSponsored:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d0620c

// -[SCGeoFilterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d0621c

@end
