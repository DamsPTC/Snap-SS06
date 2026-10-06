// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatPushLogger
// Superclass: NSObject
// Address: 0x112ae3ef8

@interface SCChatPushLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatPushLogger initWithGrapheneLogger:performer:startupInfoService:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106503f50

// -[SCChatPushLogger initWithGrapheneLogger:startupInfoService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10650401c

// -[SCChatPushLogger logUserEnteredThroughPushForMessageId:isGroup:notificationCreationDate:isInAppNotification:]
// Type encoding: v40@0:8@16B24@28B36
// Implementation: 0x1065040ec

// -[SCChatPushLogger didConversationViewModelChange:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106504234

// -[SCChatPushLogger clearNotificationLogging]
// Type encoding: v16@0:8
// Implementation: 0x106504448

// -[SCChatPushLogger _logFirstRenderWithMessageFound:currentTime:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1065044f8

// -[SCChatPushLogger _logContentMetricWithSuccess:currentTime:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1065045bc

// -[SCChatPushLogger _logMetric:withDuration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106504678

// -[SCChatPushLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106504798

@end
