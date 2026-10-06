// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoltDataUploadProxy
// Superclass: NSObject
// Address: 0x112a53128

@interface SCBoltDataUploadProxy

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoltDataUploadProxy initWithConfigProviderLazy:directUploaderLazy:resumableUploaderLazy:uploadProgressMonitorLazy:urlExpirationSafetyMargin:dynamicUploadLocationProviderLazy:uploadLocationManagerLazy:circumstanceEngine:]
// Type encoding: @80@0:8@16@24@32@40d48@56@64@72
// Implementation: 0x10561e86c

// -[SCBoltDataUploadProxy _shouldRetryMemories]
// Type encoding: B16@0:8
// Implementation: 0x10561ea74

// -[SCBoltDataUploadProxy _shouldFailFirstUpload]
// Type encoding: B16@0:8
// Implementation: 0x10561ea8c

// -[SCBoltDataUploadProxy _enableExponentialBackoff]
// Type encoding: B16@0:8
// Implementation: 0x10561ea94

// -[SCBoltDataUploadProxy _enableRetries]
// Type encoding: B16@0:8
// Implementation: 0x10561eaac

// -[SCBoltDataUploadProxy _immediateRetryCount]
// Type encoding: q16@0:8
// Implementation: 0x10561eac4

// -[SCBoltDataUploadProxy _sendEstimatedTimeToUpload]
// Type encoding: B16@0:8
// Implementation: 0x10561eaf0

// -[SCBoltDataUploadProxy _useUploadLocationRevampForMediaSource:]
// Type encoding: B20@0:8i16
// Implementation: 0x10561eb08

// -[SCBoltDataUploadProxy uploadWithRequest:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10561eb94

// -[SCBoltDataUploadProxy _shouldRetryMediaSource:]
// Type encoding: B20@0:8i16
// Implementation: 0x10561ec4c

// -[SCBoltDataUploadProxy _uploadWithRequest:callbackPerformer:successBlock:failureBlock:allowRetries:retryCount:shouldFailFirstUpload:]
// Type encoding: v64@0:8@16@24@?32@?40B48q52B60
// Implementation: 0x10561ec70

// -[SCBoltDataUploadProxy startMonitoringUploadProgressWithUniqueMediaId:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10561f6e4

// -[SCBoltDataUploadProxy isBackgroundUploadComplete:]
// Type encoding: B24@0:8@16
// Implementation: 0x10561f754

// -[SCBoltDataUploadProxy cancelUploadWithUniqueMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10561f7b8

// -[SCBoltDataUploadProxy setUploadStatusDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10561f848

// -[SCBoltDataUploadProxy _reportUploadMode:forRequest:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10561f88c

// -[SCBoltDataUploadProxy uploadLocationFetchResultWithUploadLocation:error:metrics:uploadWithRequest:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x10561f9cc

// -[SCBoltDataUploadProxy clientUploadLocationFetchResultWithUploadLocation:error:locationAttribution:uploadWithRequest:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x10561febc

// -[SCBoltDataUploadProxy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10562079c

@end
