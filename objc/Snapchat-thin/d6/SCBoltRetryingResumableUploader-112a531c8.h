// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoltRetryingResumableUploader
// Superclass: NSObject
// Address: 0x112a531c8

@interface SCBoltRetryingResumableUploader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoltRetryingResumableUploader initWithUploader:retryCount:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10562b810

// -[SCBoltRetryingResumableUploader startMonitoringUploadProgressWithUniqueMediaId:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10562b894

// -[SCBoltRetryingResumableUploader uploadWithRequest:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10562b904

// -[SCBoltRetryingResumableUploader uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x10562bae0

// -[SCBoltRetryingResumableUploader isBackgroundUploadComplete:]
// Type encoding: B24@0:8@16
// Implementation: 0x10562bb24

// -[SCBoltRetryingResumableUploader cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x10562bb88

// -[SCBoltRetryingResumableUploader cancelUploadWithUniqueMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10562bbbc

// -[SCBoltRetryingResumableUploader setUploadStatusDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10562bc78

// -[SCBoltRetryingResumableUploader _uploadWithRemainingAttemptCount:uploadRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v80@0:8q16@24@32@40@48@56@?64@?72
// Implementation: 0x10562bcc8

// -[SCBoltRetryingResumableUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10562bf78

@end
