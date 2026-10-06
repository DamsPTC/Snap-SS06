// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiGoToAppHelper
// Superclass: NSObject
// Address: 0x112a3c068

@interface SCBitmojiGoToAppHelper

// Property: lastKnownLinkPage; attributes: Tq,N,V_lastKnownLinkPage
// Property: deferredGoToAppRequest; attributes: T@"SCBitmojiDeferredGoToAppRequest",&,N,V_deferredGoToAppRequest
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiGoToAppHelper initWithBitmojiLogger:appInfoProvider:applicationLifecycleEvents:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1054a4c98

// -[SCBitmojiGoToAppHelper goToBitmojiAppWith:page:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1054a4e84

// -[SCBitmojiGoToAppHelper _getToBitmojiDeepLinkURLWithSource:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054a4f40

// -[SCBitmojiGoToAppHelper _openURL:source:page:universalLinksOnly:completion:]
// Type encoding: v52@0:8@16@24q32B40@?44
// Implementation: 0x1054a508c

// -[SCBitmojiGoToAppHelper _handleOpenUrlCompletionForSuccess:universalLinksOnly:customURI:url:source:page:completion:]
// Type encoding: v64@0:8B16B20@24@32@40q48@?56
// Implementation: 0x1054a5330

// -[SCBitmojiGoToAppHelper _handleOpenFallbackUrlCompletionForSuccess:customURI:source:page:completion:]
// Type encoding: v52@0:8B16@20@28q36@?44
// Implementation: 0x1054a557c

// -[SCBitmojiGoToAppHelper _imojiURIWithURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054a5618

// -[SCBitmojiGoToAppHelper _resetDeferredGoToAppRequest]
// Type encoding: v16@0:8
// Implementation: 0x1054a5740

// -[SCBitmojiGoToAppHelper lastKnownLinkPage]
// Type encoding: q16@0:8
// Implementation: 0x1054a5750

// -[SCBitmojiGoToAppHelper setLastKnownLinkPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054a5758

// -[SCBitmojiGoToAppHelper deferredGoToAppRequest]
// Type encoding: @16@0:8
// Implementation: 0x1054a5760

// -[SCBitmojiGoToAppHelper setDeferredGoToAppRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054a5768

// -[SCBitmojiGoToAppHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054a5798

@end
