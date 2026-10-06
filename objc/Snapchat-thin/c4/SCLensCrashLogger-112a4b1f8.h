// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCrashLogger
// Superclass: NSObject
// Address: 0x112a4b1f8

@interface SCLensCrashLogger

// Property: currentLensIds; attributes: T@"NSArray",&,V_currentLensIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCrashLogger initWithBlizzardLogger:crashLogger:appInsightsMetadataStorage:grapheneRegistry:lensSwipeIdObservable:lensCrashSampler:appStartExperimentReader:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1055c847c

// -[SCLensCrashLogger initWithCrashedLensIdsObservable:possibleCrashLogger:blizzardLogger:crashLogger:appInsightsMetadataStorage:grapheneRegistry:lensSwipeIdObservable:lensCrashSampler:appStartExperimentReader:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1055c84c4

// -[SCLensCrashLogger setupEffectIdsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c875c

// -[SCLensCrashLogger setupSnapSourceObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c8760

// -[SCLensCrashLogger setEffectIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c8764

// -[SCLensCrashLogger setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c88f4

// -[SCLensCrashLogger setSwipeId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c899c

// -[SCLensCrashLogger setProductType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1055c8a44

// -[SCLensCrashLogger setRenderingContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x1055c8ab8

// -[SCLensCrashLogger logCrashError:selector:]
// Type encoding: v32@0:8@16:24
// Implementation: 0x1055c8b2c

// -[SCLensCrashLogger logCrashError:lensId:selector:]
// Type encoding: v40@0:8@16@24:32
// Implementation: 0x1055c8b94

// -[SCLensCrashLogger defaultErrorHandlerWithSelector:]
// Type encoding: @?24@0:8:16
// Implementation: 0x1055c8c90

// -[SCLensCrashLogger handlerWithLensId:selector:]
// Type encoding: @?32@0:8@16:24
// Implementation: 0x1055c8cf0

// -[SCLensCrashLogger handlerWithLensIds:selector:]
// Type encoding: @?32@0:8@16:24
// Implementation: 0x1055c8dd4

// -[SCLensCrashLogger logLensesNotResponsive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c8f08

// -[SCLensCrashLogger isLNRDetectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1055c91a0

// -[SCLensCrashLogger lnrDetectionTimeoutSec]
// Type encoding: d16@0:8
// Implementation: 0x1055c91a8

// -[SCLensCrashLogger _logCrashError:lensIds:selector:]
// Type encoding: v40@0:8@16@24:32
// Implementation: 0x1055c91b4

// -[SCLensCrashLogger _logCrashWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c93bc

// -[SCLensCrashLogger _updateAppInsightsInfoWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c9dec

// -[SCLensCrashLogger _subscribeOnSwipeIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c9fc4

// -[SCLensCrashLogger _subscribeOnLensIdsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055ca0f0

// -[SCLensCrashLogger _setupSnapSourceObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055ca21c

// -[SCLensCrashLogger sharedContextBuilderCopy]
// Type encoding: @16@0:8
// Implementation: 0x1055ca354

// -[SCLensCrashLogger _updateSharedContextWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1055ca3d8

// -[SCLensCrashLogger currentLensIds]
// Type encoding: @16@0:8
// Implementation: 0x1055ca45c

// -[SCLensCrashLogger setCurrentLensIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055ca468

// -[SCLensCrashLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055ca470

// +[SCLensCrashLogger _sendNotificationWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c95e4

// +[SCLensCrashLogger _reportNonFatalExceptionEventWithContext:crashLogger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055c9778

// +[SCLensCrashLogger _reportNonFatalExceptionEventWithContext:crashLogger:errorCode:threadCaptureOption:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1055c9910

// +[SCLensCrashLogger _blizzardLogExceptionEventWithContext:logger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055c9af8

// +[SCLensCrashLogger _logExceptionWithGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c9d44

// +[SCLensCrashLogger _logErrorForContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055ca43c

@end
