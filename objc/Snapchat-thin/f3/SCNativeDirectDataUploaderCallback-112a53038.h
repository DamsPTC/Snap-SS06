// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeDirectDataUploaderCallback
// Superclass: NSObject
// Address: 0x112a53038

@interface SCNativeDirectDataUploaderCallback

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeDirectDataUploaderCallback initWithUploadSuccessBlock:failureBlock:callbackPerformer:cupsMetricsLogger:uploadLocationCallbackMetrics:locationAttribution:mediaDuration:captureSessionId:mediaOrchestrationId:]
// Type encoding: @88@0:8@?16@?24@32@40@48@56@64@72@80
// Implementation: 0x10561d258

// -[SCNativeDirectDataUploaderCallback onSuccess:serializedContentObject:contentUploadCallbackMetrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10561d43c

// -[SCNativeDirectDataUploaderCallback onFailure:contentUploadCallbackMetrics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10561d678

// -[SCNativeDirectDataUploaderCallback .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10561d8d4

@end
