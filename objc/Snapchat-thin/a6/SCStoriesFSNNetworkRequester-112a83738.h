// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesFSNNetworkRequester
// Superclass: NSObject
// Address: 0x112a83738

@interface SCStoriesFSNNetworkRequester

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesFSNNetworkRequester initWithUserSession:sessionRequestManager:snapTokenProvider:networkConnectivityMonitor:STMSGatewayHostBaseURL:locationProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105a19454

// -[SCStoriesFSNNetworkRequester deleteStoryWithServerId:postingStoryType:additionalHttpHeaders:successQueue:successBlock:failureQueue:failureBlock:]
// Type encoding: v68@0:8@16i24@28@36@?44@52@?60
// Implementation: 0x105a195a8

// -[SCStoriesFSNNetworkRequester deleteStoryWithServerId:successQueue:successBlock:failureQueue:failureBlock:]
// Type encoding: v56@0:8@16@24@?32@40@?48
// Implementation: 0x105a19834

// -[SCStoriesFSNNetworkRequester _createSTMSDeleteStoryRequestWithStoryType:serverId:]
// Type encoding: @28@0:8i16@20
// Implementation: 0x105a19a8c

// -[SCStoriesFSNNetworkRequester _createAdditionalHeadersWithCustomAdditionalHttpHeaders:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a19c08

// -[SCStoriesFSNNetworkRequester _submitDeleteStoryRequestWithStoryType:token:serverId:customAdditionalHTTPHeaders:successQueue:successBlock:failureQueue:failureBlock:]
// Type encoding: v76@0:8i16@20@28@36@44@?52@60@?68
// Implementation: 0x105a19c44

// -[SCStoriesFSNNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a19d88

@end
