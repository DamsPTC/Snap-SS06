// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRegistrationPerformanceLoggerImpl
// Superclass: NSObject
// Address: 0x112a344a8

@interface SCRegistrationPerformanceLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRegistrationPerformanceLoggerImpl initWithUserTrackedLogger:grapheneRegistry:deviceInfoProvider:registrationFlowUUIDService:loginInfoRepository:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1008cc548

// -[SCRegistrationPerformanceLoggerImpl logCameraStartupTimeIfFromRegistration:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008cc66c

// -[SCRegistrationPerformanceLoggerImpl logFriendsFeedTimeIfFromRegistration:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053f1210

// -[SCRegistrationPerformanceLoggerImpl startTrackingCameraTimer:page:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x1053f1398

// -[SCRegistrationPerformanceLoggerImpl _getRegistrationMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1053f1410

// -[SCRegistrationPerformanceLoggerImpl _logGrapheneEventWithTransitionTimeMs:fromState:toState:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x1053f14cc

// -[SCRegistrationPerformanceLoggerImpl _newDeviceDimensionValue]
// Type encoding: @16@0:8
// Implementation: 0x1053f1618

// -[SCRegistrationPerformanceLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053f1674

@end
