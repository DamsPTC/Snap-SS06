// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingPlatformAnalytics
// Superclass: NSObject
// Address: 0x112c80bf8

@interface SCNMessagingPlatformAnalytics

// Property: content; attributes: T@"NSData",C,N,V_content
// Property: metricsMessageType; attributes: Tq,N,V_metricsMessageType
// Property: metricsMessageMediaType; attributes: Tq,N,V_metricsMessageMediaType
// Property: reactionSource; attributes: T@"NSNumber",&,N,V_reactionSource
// Property: reactionSendSource; attributes: T@"NSNumber",&,N,V_reactionSendSource
// Property: attemptId; attributes: T@"SCNMessagingUUID",&,N,V_attemptId
// Property: userActionTimestamp; attributes: T@"NSNumber",&,N,V_userActionTimestamp
// Property: sendMessageAnalytics; attributes: T@"SCNMessagingSendMessageAnalytics",&,N,V_sendMessageAnalytics

// -[SCNMessagingPlatformAnalytics initWithContent:metricsMessageType:metricsMessageMediaType:reactionSource:reactionSendSource:attemptId:userActionTimestamp:sendMessageAnalytics:]
// Type encoding: @80@0:8@16q24q32@40@48@56@64@72
// Implementation: 0x10b63d0ec

// -[SCNMessagingPlatformAnalytics initWithMetricsMessageType:metricsMessageMediaType:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x10b63d2a0

// -[SCNMessagingPlatformAnalytics content]
// Type encoding: @16@0:8
// Implementation: 0x10b63d2d8

// -[SCNMessagingPlatformAnalytics setContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d2e0

// -[SCNMessagingPlatformAnalytics metricsMessageType]
// Type encoding: q16@0:8
// Implementation: 0x10b63d2e8

// -[SCNMessagingPlatformAnalytics setMetricsMessageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63d2f0

// -[SCNMessagingPlatformAnalytics metricsMessageMediaType]
// Type encoding: q16@0:8
// Implementation: 0x10b63d2f8

// -[SCNMessagingPlatformAnalytics setMetricsMessageMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63d300

// -[SCNMessagingPlatformAnalytics reactionSource]
// Type encoding: @16@0:8
// Implementation: 0x10b63d308

// -[SCNMessagingPlatformAnalytics setReactionSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d310

// -[SCNMessagingPlatformAnalytics reactionSendSource]
// Type encoding: @16@0:8
// Implementation: 0x10b63d330

// -[SCNMessagingPlatformAnalytics setReactionSendSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d338

// -[SCNMessagingPlatformAnalytics attemptId]
// Type encoding: @16@0:8
// Implementation: 0x10b63d358

// -[SCNMessagingPlatformAnalytics setAttemptId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d360

// -[SCNMessagingPlatformAnalytics userActionTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10b63d380

// -[SCNMessagingPlatformAnalytics setUserActionTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d388

// -[SCNMessagingPlatformAnalytics sendMessageAnalytics]
// Type encoding: @16@0:8
// Implementation: 0x10b63d3a8

// -[SCNMessagingPlatformAnalytics setSendMessageAnalytics:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d3b0

// -[SCNMessagingPlatformAnalytics .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63d3d0

@end
