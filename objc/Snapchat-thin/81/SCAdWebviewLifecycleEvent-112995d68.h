// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebviewLifecycleEvent
// Superclass: NSObject
// Address: 0x112995d68

@interface SCAdWebviewLifecycleEvent

// Property: isExitAd; attributes: TB,N,R
// Property: adIdentifier; attributes: T@"NSString",N,R
// Property: snapIndex; attributes: Tq,N,R
// Property: isOnAttachment; attributes: T@"NSNumber",N,R
// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCAdWebviewLifecycleEvent isExitAd]
// Type encoding: B16@0:8
// Implementation: 0x104261854

// -[SCAdWebviewLifecycleEvent adIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x104261894

// -[SCAdWebviewLifecycleEvent snapIndex]
// Type encoding: q16@0:8
// Implementation: 0x1042618f0

// -[SCAdWebviewLifecycleEvent isOnAttachment]
// Type encoding: @16@0:8
// Implementation: 0x104261994

// -[SCAdWebviewLifecycleEvent description]
// Type encoding: @16@0:8
// Implementation: 0x1042cf4c8

// -[SCAdWebviewLifecycleEvent init]
// Type encoding: @16@0:8
// Implementation: 0x1042cf4fc

// -[SCAdWebviewLifecycleEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x1042cf544

// -[SCAdWebviewLifecycleEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1042d0588

// -[SCAdWebviewLifecycleEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1042d0608

// -[SCAdWebviewLifecycleEvent matchView:pageLoaded:click:attachmentPresented:navigationStart:htmlDownloaded:domContentLoaded:paint:fullyLoaded:navigationFinish:browse:dismiss:firstGA:exitAd:]
// Type encoding: v128@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88@?96@?104@?112@?120
// Implementation: 0x1042d0c88

// -[SCAdWebviewLifecycleEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1042d0e7c

// +[SCAdWebviewLifecycleEvent viewWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d060c

// +[SCAdWebviewLifecycleEvent pageLoadedWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0618

// +[SCAdWebviewLifecycleEvent clickWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0628

// +[SCAdWebviewLifecycleEvent attachmentPresentedWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0638

// +[SCAdWebviewLifecycleEvent navigationStartWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0644

// +[SCAdWebviewLifecycleEvent htmlDownloadedWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0650

// +[SCAdWebviewLifecycleEvent domContentLoadedWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d065c

// +[SCAdWebviewLifecycleEvent paintWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0668

// +[SCAdWebviewLifecycleEvent fullyLoadedWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0674

// +[SCAdWebviewLifecycleEvent navigationFinishWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0680

// +[SCAdWebviewLifecycleEvent browseWithAdIdentifier:snapIndex:navigationType:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1042d068c

// +[SCAdWebviewLifecycleEvent dismissWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0704

// +[SCAdWebviewLifecycleEvent firstGAWithAdIdentifier:snapIndex:hitTimestampMs:]
// Type encoding: @40@0:8@16q24d32
// Implementation: 0x1042d0710

// +[SCAdWebviewLifecycleEvent exitAdWithAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1042d0760

@end
