// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCReactionsLogger
// Superclass: NSObject
// Address: 0x112a6cfd8

@interface SCReactionsLogger


// -[SCReactionsLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057fc0cc

// -[SCReactionsLogger logInterfaceRequestForType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057fc140

// -[SCReactionsLogger logRequestStart:isRetry:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1057fc22c

// -[SCReactionsLogger logRequestLatency:type:isRetry:]
// Type encoding: v36@0:8Q16Q24B32
// Implementation: 0x1057fc384

// -[SCReactionsLogger logRequestSuccess:isRetry:numIntentsReturned:]
// Type encoding: v36@0:8Q16B24Q28
// Implementation: 0x1057fc4e4

// -[SCReactionsLogger logRequestFailure:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1057fc6a0

// -[SCReactionsLogger logIncompleteMap:presentElements:type:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x1057fc78c

// -[SCReactionsLogger logIntentFailure:isRetry:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1057fc948

// -[SCReactionsLogger logIntentItemNotFound:isRetry:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1057fcaa0

// -[SCReactionsLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057fcbf8

@end
