// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDeeplinkEventType
// Superclass: NSObject
// Address: 0x1129cf7f8

@interface SCAdDeeplinkEventType

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCAdDeeplinkEventType description]
// Type encoding: @16@0:8
// Implementation: 0x104680c20

// -[SCAdDeeplinkEventType init]
// Type encoding: @16@0:8
// Implementation: 0x104680c48

// -[SCAdDeeplinkEventType hash]
// Type encoding: q16@0:8
// Implementation: 0x104680c90

// -[SCAdDeeplinkEventType isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104680cc4

// -[SCAdDeeplinkEventType copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104680d44

// -[SCAdDeeplinkEventType matchAttachmentTriggered:deeplinkAttempt:deeplinkOpened:fellbackToWebview:fellbackToAppInstall:fellbackToDefaultBrowser:]
// Type encoding: v64@0:8@?16@?24@?32@?40@?48@?56
// Implementation: 0x104681158

// -[SCAdDeeplinkEventType .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104681228

// +[SCAdDeeplinkEventType attachmentTriggeredWithDeeplinkUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x104680d48

// +[SCAdDeeplinkEventType deeplinkAttemptWithDeeplinkUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x104680df0

// +[SCAdDeeplinkEventType deeplinkOpenedWithIsInternal:]
// Type encoding: @20@0:8B16
// Implementation: 0x104680e9c

// +[SCAdDeeplinkEventType fellbackToWebview]
// Type encoding: @16@0:8
// Implementation: 0x104680f28

// +[SCAdDeeplinkEventType fellbackToAppInstallWithCustomProductPageEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x104680f30

// +[SCAdDeeplinkEventType fellbackToDefaultBrowser]
// Type encoding: @16@0:8
// Implementation: 0x104680fc0

@end
