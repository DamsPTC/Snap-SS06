// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackEvent
// Superclass: NSObject
// Address: 0x1129d12a8

@interface SCAdTrackEvent

// Property: common; attributes: T@"SCAdTrackCommon",R,C,N
// Property: lifecycle; attributes: T@"SCAdLifecycleEvent",R,C,N
// Property: interaction; attributes: T@"SCAdInteractionEvent",R,C,N
// Property: webview; attributes: T@"SCAdWebviewEvent",R,C,N
// Property: deeplink; attributes: T@"SCAdDeeplinkEvent",R,C,N
// Property: appInstall; attributes: T@"SCAdAppInstallEvent",R,C,N
// Property: adToMessage; attributes: T@"SCAdAdToMessageEvent",R,C,N
// Property: subscribe; attributes: T@"SCAdSubscribeEvent",R,C,N
// Property: adReport; attributes: T@"SCAdReportEvent",R,C,N
// Property: reminder; attributes: T@"SCAdReminderEvent",R,C,N
// Property: stickers; attributes: T@"SCAdStickersEvent",R,C,N
// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCAdTrackEvent common]
// Type encoding: @16@0:8
// Implementation: 0x1084be9d4

// -[SCAdTrackEvent lifecycle]
// Type encoding: @16@0:8
// Implementation: 0x1084bee44

// -[SCAdTrackEvent interaction]
// Type encoding: @16@0:8
// Implementation: 0x1084befb4

// -[SCAdTrackEvent webview]
// Type encoding: @16@0:8
// Implementation: 0x1084bf124

// -[SCAdTrackEvent deeplink]
// Type encoding: @16@0:8
// Implementation: 0x1084bf294

// -[SCAdTrackEvent appInstall]
// Type encoding: @16@0:8
// Implementation: 0x1084bf404

// -[SCAdTrackEvent adToMessage]
// Type encoding: @16@0:8
// Implementation: 0x1084bf574

// -[SCAdTrackEvent subscribe]
// Type encoding: @16@0:8
// Implementation: 0x1084bf6e4

// -[SCAdTrackEvent adReport]
// Type encoding: @16@0:8
// Implementation: 0x1084bf854

// -[SCAdTrackEvent reminder]
// Type encoding: @16@0:8
// Implementation: 0x1084bf9c4

// -[SCAdTrackEvent stickers]
// Type encoding: @16@0:8
// Implementation: 0x1084bfb34

// -[SCAdTrackEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104693efc

// -[SCAdTrackEvent init]
// Type encoding: @16@0:8
// Implementation: 0x1046949fc

// -[SCAdTrackEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104694a44

// -[SCAdTrackEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10469528c

// -[SCAdTrackEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10469531c

// -[SCAdTrackEvent matchLifecycle:interaction:webview:deeplink:appInstall:adToMessage:subscribe:adReport:reminder:stickers:]
// Type encoding: v96@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88
// Implementation: 0x1046956fc

// -[SCAdTrackEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104695824

// +[SCAdTrackEvent adTrackEventWithSqlEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10541de08

// +[SCAdTrackEvent adTrackEventWithSqlWebViewEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10541e4c8

// +[SCAdTrackEvent adTrackEventWithSqlDeeplinkEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10541eb24

// +[SCAdTrackEvent lifecycleWithLifecycleEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x104695320

// +[SCAdTrackEvent interactionWithInteractionEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x104695358

// +[SCAdTrackEvent webviewWithWebviewEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x104695390

// +[SCAdTrackEvent deeplinkWithDeeplinkEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046953c8

// +[SCAdTrackEvent appInstallWithAppInstallEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x104695400

// +[SCAdTrackEvent adToMessageWithAdToMessageEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x104695438

// +[SCAdTrackEvent subscribeWithSubscribeEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x104695470

// +[SCAdTrackEvent adReportWithAdReportEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046954a8

// +[SCAdTrackEvent reminderWithReminderEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046954e0

// +[SCAdTrackEvent stickersWithStickersEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x104695518

@end
