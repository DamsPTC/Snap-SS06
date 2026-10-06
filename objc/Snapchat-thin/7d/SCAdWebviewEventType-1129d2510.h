// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebviewEventType
// Superclass: NSObject
// Address: 0x1129d2510

@interface SCAdWebviewEventType

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCAdWebviewEventType description]
// Type encoding: @16@0:8
// Implementation: 0x1046a5b14

// -[SCAdWebviewEventType init]
// Type encoding: @16@0:8
// Implementation: 0x1046a5b8c

// -[SCAdWebviewEventType hash]
// Type encoding: q16@0:8
// Implementation: 0x1046a5bd4

// -[SCAdWebviewEventType isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1046a5c08

// -[SCAdWebviewEventType copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1046a5c98

// -[SCAdWebviewEventType matchWebViewLoad:gaHit:attachmentTriggered:viewDidAppear:browse:loadProgress:willLoadUrl:didLoadUrl:onGhostWriterSignalReceived:viewDidDisappear:]
// Type encoding: v96@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88
// Implementation: 0x1046a62ac

// -[SCAdWebviewEventType .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1046a63d4

// +[SCAdWebviewEventType webViewLoadWithWebViewLoadInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046a5c9c

// +[SCAdWebviewEventType gaHitWithHitType:hitLatencyMs:hitTsMs:isPageView:isLandingPage:]
// Type encoding: @48@0:8@16@24@32B40B44
// Implementation: 0x1046a5cd4

// +[SCAdWebviewEventType attachmentTriggered]
// Type encoding: @16@0:8
// Implementation: 0x1046a5d78

// +[SCAdWebviewEventType viewDidAppear]
// Type encoding: @16@0:8
// Implementation: 0x1046a5d90

// +[SCAdWebviewEventType browseWithWebviewUrl:finalResolvedUrl:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1046a5da8

// +[SCAdWebviewEventType loadProgressWithProgress:]
// Type encoding: @24@0:8d16
// Implementation: 0x1046a5e14

// +[SCAdWebviewEventType willLoadUrlWithUrl:collectionItemIndex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1046a5e28

// +[SCAdWebviewEventType didLoadUrlWithUrl:collectionItemIndex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1046a5e34

// +[SCAdWebviewEventType onGhostWriterSignalReceivedWithPayload:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046a5ef4

// +[SCAdWebviewEventType viewDidDisappearWithExitMethod:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046a5f2c

@end
