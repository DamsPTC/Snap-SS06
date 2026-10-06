// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConversationAdsManagerDelegateImpl
// Superclass: NSObject
// Address: 0x112a43e58

@interface SCConversationAdsManagerDelegateImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConversationAdsManagerDelegateImpl initWithSponsoredSnapsFeedRequestMetadataProvider:sponsoredSnapFeedLifecycleEventSubject:sponsoredSnapFeedActiveBannerSubject:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10041bd08

// -[SCConversationAdsManagerDelegateImpl buildAdRequest:buildAdRequestMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105525658

// -[SCConversationAdsManagerDelegateImpl onAdRequestBuildStart:trigger:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105525808

// -[SCConversationAdsManagerDelegateImpl onAdRequestBuildSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x105525880

// -[SCConversationAdsManagerDelegateImpl onAdResponseSuccess:adResponseBytes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055258f0

// -[SCConversationAdsManagerDelegateImpl onSponsoredSnapInserted:isNoFill:adResponseBytes:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10552597c

// -[SCConversationAdsManagerDelegateImpl onSponsoredSnapHidden:isNoFill:adResponseBytes:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105525a18

// -[SCConversationAdsManagerDelegateImpl onFeedEntered:feedSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105525ab4

// -[SCConversationAdsManagerDelegateImpl onSponsoredSnapBannerInserted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105525b64

// -[SCConversationAdsManagerDelegateImpl onSponsoredSnapBannerHidden]
// Type encoding: v16@0:8
// Implementation: 0x105525ba8

// -[SCConversationAdsManagerDelegateImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105525bec

@end
