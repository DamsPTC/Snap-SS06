// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSnapTokenManager
// Superclass: NSObject
// Address: 0x112b221f8

@interface SCAdSnapTokenManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdSnapTokenManager initWithSnapTokenProvider:initMetricsManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106bf9bb8

// -[SCAdSnapTokenManager fetchAccessTokenWithPrimaryDataSource:successBlock:failureBlock:]
// Type encoding: v36@0:8B16@?20@?28
// Implementation: 0x106bf9c5c

// -[SCAdSnapTokenManager fetchAccessTokenWithPrimaryDataSource:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v52@0:8B16@20@28@?36@?44
// Implementation: 0x106bf9c94

// -[SCAdSnapTokenManager _handleSnapTokenFetchSuccess:isPrimary:snapTokenFetchingLatencyInSec:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x106bf9f64

// -[SCAdSnapTokenManager _handleSnapTokenFetchFailure:isPrimary:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106bf9f78

// -[SCAdSnapTokenManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bf9f8c

@end
