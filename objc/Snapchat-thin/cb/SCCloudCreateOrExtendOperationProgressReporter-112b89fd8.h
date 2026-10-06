// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudCreateOrExtendOperationProgressReporter
// Superclass: NSObject
// Address: 0x112b89fd8

@interface SCCloudCreateOrExtendOperationProgressReporter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: progressReceiver; attributes: T@"<SCCloudSyncProgressReceiving>",W,N,V_progressReceiver

// -[SCCloudCreateOrExtendOperationProgressReporter initWithReporterQueue:progressHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107ec0cf4

// -[SCCloudCreateOrExtendOperationProgressReporter reporterWithIdentifier:didReportFractionCompleted:]
// Type encoding: v28@0:8@16f24
// Implementation: 0x107ec0f1c

// -[SCCloudCreateOrExtendOperationProgressReporter progressReceiver]
// Type encoding: @16@0:8
// Implementation: 0x107ec1068

// -[SCCloudCreateOrExtendOperationProgressReporter setProgressReceiver:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ec1080

// -[SCCloudCreateOrExtendOperationProgressReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ec108c

@end
