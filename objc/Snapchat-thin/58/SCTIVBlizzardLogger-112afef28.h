// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTIVBlizzardLogger
// Superclass: NSObject
// Address: 0x112afef28

@interface SCTIVBlizzardLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTIVBlizzardLogger initWithBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1009670a4

// -[SCTIVBlizzardLogger logNotificationDisplayed:tivBroadcastId:timestamp:isExpiredOnClient:]
// Type encoding: v44@0:8@16@24q32B40
// Implementation: 0x1067d72a4

// -[SCTIVBlizzardLogger logRequestReceived:tivBroadcastId:receiptType:timestamp:queueLength:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x1067d7368

// -[SCTIVBlizzardLogger logUserResponse:transactionId:broadcastId:elapsedTime:]
// Type encoding: v48@0:8q16@24@32q40
// Implementation: 0x1067d7450

// -[SCTIVBlizzardLogger logChangePassword:broadcastId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067d7524

// -[SCTIVBlizzardLogger logContactSupport:broadcastId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067d75c0

// -[SCTIVBlizzardLogger _deliveryChannelFromReceiptType:]
// Type encoding: q24@0:8q16
// Implementation: 0x1067d765c

// -[SCTIVBlizzardLogger _responseFromResult:]
// Type encoding: q24@0:8q16
// Implementation: 0x1067d7668

// -[SCTIVBlizzardLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067d768c

@end
