// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationAckViaHttpClient
// Superclass: NSObject
// Address: 0x112b24e58

@interface SCNotificationAckViaHttpClient


// -[SCNotificationAckViaHttpClient initWithPath:graphene:httpRequestModifier:httpMetadataService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c3d684

// -[SCNotificationAckViaHttpClient ackNotificationWithNotificationId:senderUsername:sentTimestamp:clientReceiveTimestampMs:pushType:trackingData:inBackground:systemNotificationEnabled:fromExtension:ackEventName:displayDelayLatencyMillis:displayDelayReason:fromRecovery:clientReceiveSource:]
// Type encoding: v108@0:8@16@24@32q40@48@56B64B68B72Q76q84@92B100i104
// Implementation: 0x106c3d780

// -[SCNotificationAckViaHttpClient postRequestWithData:ackEventName:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106c3da44

// -[SCNotificationAckViaHttpClient _getStringRepresentingAckEvent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106c3dd88

// -[SCNotificationAckViaHttpClient _getAckNotificationRequestEventName:]
// Type encoding: i24@0:8Q16
// Implementation: 0x106c3dda4

// -[SCNotificationAckViaHttpClient reportSuccessGrapheneForPnsRequestWithType:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c3ddb0

// -[SCNotificationAckViaHttpClient reportFailureGrapheneForPnsRequestWithType:statusCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106c3de50

// -[SCNotificationAckViaHttpClient _getCallbackForAckCallWithAckEventName:]
// Type encoding: @?24@0:8Q16
// Implementation: 0x106c3df60

// -[SCNotificationAckViaHttpClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c3e0b0

@end
