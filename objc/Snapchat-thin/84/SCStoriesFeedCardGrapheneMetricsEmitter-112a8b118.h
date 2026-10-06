// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesFeedCardGrapheneMetricsEmitter
// Superclass: NSObject
// Address: 0x112a8b118

@interface SCStoriesFeedCardGrapheneMetricsEmitter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesFeedCardGrapheneMetricsEmitter init]
// Type encoding: @16@0:8
// Implementation: 0x105b082f8

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardNetworkLatency:isPaginationRequest:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105b0835c

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardConverterLatency:isPaginationRequest:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105b0836c

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardNetworkResponseSize:isPaginationRequest:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x105b0837c

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardNetworkRequestCountSuccess:isPaginationRequest:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105b08388

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardNetworkRequestFailureCode:isPaginationRequest:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105b08398

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardResponseStoryCount:feedType:singleSnapCount:publicUserStoryCount:publisherStoryCount:longformShowCount:isPaginationRequest:]
// Type encoding: v68@0:8q16q24Q32Q40Q48Q56B64
// Implementation: 0x105b08404

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardResponseSnapWithFeedType:singleStorySnapCount:publicUserStorySnapCount:publisherStorySnapCount:longformShowSnapCount:isPaginationRequest:]
// Type encoding: v60@0:8q16Q24Q32Q40Q48B56
// Implementation: 0x105b08594

// -[SCStoriesFeedCardGrapheneMetricsEmitter logFeedCardNetworkRequestWithEndpoint:source:success:responseSize:]
// Type encoding: v44@0:8@16@24B32q36
// Implementation: 0x105b0872c

// -[SCStoriesFeedCardGrapheneMetricsEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b0885c

@end
