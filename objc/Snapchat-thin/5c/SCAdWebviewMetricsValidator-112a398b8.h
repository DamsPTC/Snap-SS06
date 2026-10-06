// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebviewMetricsValidator
// Superclass: NSObject
// Address: 0x112a398b8

@interface SCAdWebviewMetricsValidator

// Property: trackRequest; attributes: T@"SCAdsTrackRequest",&,N,V_trackRequest
// Property: mirrorRequest; attributes: T@"SCAAdThirdPartyMirrorRequest",&,N,V_mirrorRequest
// Property: lifecycleTimestamps; attributes: T@"SCAdLifecycleTimestamps",&,N,V_lifecycleTimestamps
// Property: rawTimingPayload; attributes: T@"NSDictionary",&,N,V_rawTimingPayload
// Property: adIdentifier; attributes: T@"NSString",C,N,V_adIdentifier
// Property: trackEventSymbols; attributes: T@"NSString",C,N,V_trackEventSymbols
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdWebviewMetricsValidator initWithPerformerProvider:graphene:metricsValidationType:suppurtedAdTypes:webviewOnly:adCrashLogger:debugViewer:]
// Type encoding: @68@0:8@16@24q32@40B48@52@60
// Implementation: 0x105470ae8

// -[SCAdWebviewMetricsValidator setMetricsValidatingModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105470c80

// -[SCAdWebviewMetricsValidator startValidationWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105470e64

// -[SCAdWebviewMetricsValidator _onTrackRequest:adIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105470f70

// -[SCAdWebviewMetricsValidator _onMirrorRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054710b0

// -[SCAdWebviewMetricsValidator _onLifecycleTimestamps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054711bc

// -[SCAdWebviewMetricsValidator _onRawTimingPayload:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054712c8

// -[SCAdWebviewMetricsValidator setTrackRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054713d4

// -[SCAdWebviewMetricsValidator setLifecycleTimestamps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105471424

// -[SCAdWebviewMetricsValidator setTrackEventSymbols:]
// Type encoding: v24@0:8@16
// Implementation: 0x105471474

// -[SCAdWebviewMetricsValidator _startValidationWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105471544

// -[SCAdWebviewMetricsValidator _validateAdTrackRequest:errorMsg:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105471b50

// -[SCAdWebviewMetricsValidator _validateTrackRequestIntermediateTrack:errorMsg:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105471bd0

// -[SCAdWebviewMetricsValidator _validateTrackRequestForStoryIntermediateTrack:]
// Type encoding: B24@0:8@16
// Implementation: 0x105471d54

// -[SCAdWebviewMetricsValidator _validateTrackRequestP0Fields:errorMsg:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105472030

// -[SCAdWebviewMetricsValidator _logGrapheneAndUpdateErrMsg:errorMsg:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105472468

// -[SCAdWebviewMetricsValidator _logTrackRequestNullFieldMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054724fc

// -[SCAdWebviewMetricsValidator _validateSwipeUp:adIdentifier:adType:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x105472584

// -[SCAdWebviewMetricsValidator _validateMetrics:adType:errorMsg:]
// Type encoding: B36@0:8@16i24@28
// Implementation: 0x105472980

// -[SCAdWebviewMetricsValidator _isSponsoredSnapCTAAttachmentOrViewImpressionTrack]
// Type encoding: B16@0:8
// Implementation: 0x105474114

// -[SCAdWebviewMetricsValidator _validateRawTimingPayload:adType:errorMsg:]
// Type encoding: B36@0:8@16i24@28
// Implementation: 0x1054741a4

// -[SCAdWebviewMetricsValidator _fileS2RWithErrorMsg:adIdentifier:adType:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x1054743a0

// -[SCAdWebviewMetricsValidator _resetWithCompletion:success:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x105474454

// -[SCAdWebviewMetricsValidator trackRequest]
// Type encoding: @16@0:8
// Implementation: 0x1054744e4

// -[SCAdWebviewMetricsValidator mirrorRequest]
// Type encoding: @16@0:8
// Implementation: 0x1054744ec

// -[SCAdWebviewMetricsValidator setMirrorRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054744f4

// -[SCAdWebviewMetricsValidator lifecycleTimestamps]
// Type encoding: @16@0:8
// Implementation: 0x105474524

// -[SCAdWebviewMetricsValidator rawTimingPayload]
// Type encoding: @16@0:8
// Implementation: 0x10547452c

// -[SCAdWebviewMetricsValidator setRawTimingPayload:]
// Type encoding: v24@0:8@16
// Implementation: 0x105474534

// -[SCAdWebviewMetricsValidator adIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105474564

// -[SCAdWebviewMetricsValidator setAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10547456c

// -[SCAdWebviewMetricsValidator trackEventSymbols]
// Type encoding: @16@0:8
// Implementation: 0x105474574

// -[SCAdWebviewMetricsValidator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10547457c

@end
