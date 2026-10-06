// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextDirectShareActionPerformer
// Superclass: NSObject
// Address: 0x112a20368

@interface SCContextDirectShareActionPerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextDirectShareActionPerformer initWithSpotlightShareSender:platformAnalyticsCreator:premiumStoryShareSender:snapProMessageSender:notificationPool:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1051bbed0

// -[SCContextDirectShareActionPerformer performAction:onViewController:uiContainer:params:source:completion:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x1051bbff4

// -[SCContextDirectShareActionPerformer _sendLongformShowWithPlatformAnalytics:conversationId:compositeStoryId:viewLocation:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1051bc2a8

// -[SCContextDirectShareActionPerformer _sendSpotlightWithPlatformAnalytics:conversationId:compositeStoryId:viewLocation:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1051bc42c

// -[SCContextDirectShareActionPerformer _sendStoryWithPlatformAnalytics:conversationId:story:compositeStoryId:viewLocation:]
// Type encoding: v56@0:8@16@24@32@40q48
// Implementation: 0x1051bc5d0

// -[SCContextDirectShareActionPerformer _platformAnalyticsWithParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051bc8dc

// -[SCContextDirectShareActionPerformer presentToastWithChatSendResult:viewLocation:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1051bcc48

// -[SCContextDirectShareActionPerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051bcdd4

@end
