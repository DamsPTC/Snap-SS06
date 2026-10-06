// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeDirectDataUploader
// Superclass: NSObject
// Address: 0x112a52fe8

@interface SCNativeDirectDataUploader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeDirectDataUploader initWithNativeNetworkManager:uploadProgressMonitorLazy:userBlizzardLoggerLazy:backgroundUploadDbPath:applicationLifecycleEvents:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10561c0fc

// -[SCNativeDirectDataUploader _subscribeToBackgroundTaskResults]
// Type encoding: v16@0:8
// Implementation: 0x10561c378

// -[SCNativeDirectDataUploader startMonitoringUploadProgressWithUniqueMediaId:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10561c59c

// -[SCNativeDirectDataUploader uploadData:uniqueMediaId:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10561c60c

// -[SCNativeDirectDataUploader uploadWithRequest:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10561c610

// -[SCNativeDirectDataUploader isBackgroundUploadComplete:]
// Type encoding: B24@0:8@16
// Implementation: 0x10561c614

// -[SCNativeDirectDataUploader uploadWithRequest:uploadLocation:uploadLocationCallbackMetrics:locationAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x10561c6d4

// -[SCNativeDirectDataUploader didUpdateTaskResultForRequestKey:withTaskResult:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10561cb9c

// -[SCNativeDirectDataUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10561cdc8

@end
