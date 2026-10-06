// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShareNotificationActionHandler
// Superclass: NSObject
// Address: 0x112affc98

@interface SCShareNotificationActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCShareNotificationActionHandler initWithURL:shareSource:deeplinkSourceType:shareUIType:notificationPool:blizzardLogger:manualPresenter:copyLinkBlock:circumstanceEngine:offPlatformShareFeatureProvider:]
// Type encoding: @96@0:8@16q24q32q40@48@56@64@?72@80@88
// Implementation: 0x1067eebbc

// -[SCShareNotificationActionHandler copyUrlToClipboardThenNotify]
// Type encoding: v16@0:8
// Implementation: 0x1067eed40

// -[SCShareNotificationActionHandler _copyToClipboardAndNotifyWithUrl:successMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067eeee4

// -[SCShareNotificationActionHandler _logOffPlatformShareMetricWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067eefec

// -[SCShareNotificationActionHandler _handleCopyLinkViaOPSServiceWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067ef0b8

// -[SCShareNotificationActionHandler handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x1067ef35c

// -[SCShareNotificationActionHandler shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x1067ef364

// -[SCShareNotificationActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067ef3ec

@end
