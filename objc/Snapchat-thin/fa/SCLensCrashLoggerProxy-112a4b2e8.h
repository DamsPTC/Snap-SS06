// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCrashLoggerProxy
// Superclass: NSObject
// Address: 0x112a4b2e8

@interface SCLensCrashLoggerProxy

// Property: currentEffectIds; attributes: T@"NSArray",&,V_currentEffectIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCrashLoggerProxy initWithLensCrashLogger:effectIdsObservable:errorReporter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055cac30

// -[SCLensCrashLoggerProxy logCrashError:selector:]
// Type encoding: v32@0:8@16:24
// Implementation: 0x1055cacf8

// -[SCLensCrashLoggerProxy logCrashError:lensId:selector:]
// Type encoding: v40@0:8@16@24:32
// Implementation: 0x1055cad98

// -[SCLensCrashLoggerProxy defaultErrorHandlerWithSelector:]
// Type encoding: @?24@0:8:16
// Implementation: 0x1055cae8c

// -[SCLensCrashLoggerProxy handlerWithLensId:selector:]
// Type encoding: @?32@0:8@16:24
// Implementation: 0x1055cafd8

// -[SCLensCrashLoggerProxy setupEffectIdsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb178

// -[SCLensCrashLoggerProxy setEffectIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb1c8

// -[SCLensCrashLoggerProxy setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb20c

// -[SCLensCrashLoggerProxy setSwipeId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb214

// -[SCLensCrashLoggerProxy setProductType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1055cb21c

// -[SCLensCrashLoggerProxy setRenderingContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x1055cb224

// -[SCLensCrashLoggerProxy setupSnapSourceObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb22c

// -[SCLensCrashLoggerProxy logLensesNotResponsive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb234

// -[SCLensCrashLoggerProxy isLNRDetectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1055cb23c

// -[SCLensCrashLoggerProxy lnrDetectionTimeoutSec]
// Type encoding: d16@0:8
// Implementation: 0x1055cb244

// -[SCLensCrashLoggerProxy _subscribeOnEffectIdsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb24c

// -[SCLensCrashLoggerProxy currentEffectIds]
// Type encoding: @16@0:8
// Implementation: 0x1055cb380

// -[SCLensCrashLoggerProxy setCurrentEffectIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb38c

// -[SCLensCrashLoggerProxy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055cb394

@end
