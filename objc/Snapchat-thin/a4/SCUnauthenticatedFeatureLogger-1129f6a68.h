// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedFeatureLogger
// Superclass: NSObject
// Address: 0x1129f6a68

@interface SCUnauthenticatedFeatureLogger


// -[SCUnauthenticatedFeatureLogger initWithRegistrationUserNotTrackedLogger:loginInfoRepository:installServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104d24888

// -[SCUnauthenticatedFeatureLogger logRegistrationUserSplashScreenPageviewWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d24954

// -[SCUnauthenticatedFeatureLogger logRegistrationUserSignupPageviewWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d24af8

// -[SCUnauthenticatedFeatureLogger logLoginSignupView]
// Type encoding: v16@0:8
// Implementation: 0x104d24c10

// -[SCUnauthenticatedFeatureLogger logRegistrationUserSuccessWithUnverifiedUserId:verificationChannel:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104d24c84

// -[SCUnauthenticatedFeatureLogger _isFirstSplashScreenVisit]
// Type encoding: B16@0:8
// Implementation: 0x104d24dc8

// -[SCUnauthenticatedFeatureLogger _lastSignupPageviewTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104d24e90

// -[SCUnauthenticatedFeatureLogger _updateLastSignupPageviewTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x104d24f14

// -[SCUnauthenticatedFeatureLogger _logGraphenePageViewWithPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x104d24fa0

// -[SCUnauthenticatedFeatureLogger logRegistrationFlowEvent:pageType:unverifiedUserId:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x104d2504c

// -[SCUnauthenticatedFeatureLogger logPageView:unverifiedUserId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104d250b4

// -[SCUnauthenticatedFeatureLogger logRegistrationNetworkRequestWithEndpoint:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d25114

// -[SCUnauthenticatedFeatureLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:]
// Type encoding: v60@0:8@16@24B32q36q44q52
// Implementation: 0x104d25184

// -[SCUnauthenticatedFeatureLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d25224

@end
