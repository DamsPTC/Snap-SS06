// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessGlobalQueue
// Superclass: NSObject
// Address: 0x112be4668

@interface SCImageProcessGlobalQueue

// Property: pending; attributes: TQ,R,N,V_pending
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessGlobalQueue init]
// Type encoding: @16@0:8
// Implementation: 0x10907c670

// -[SCImageProcessGlobalQueue _applicationWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907cc94

// -[SCImageProcessGlobalQueue _applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907cc98

// -[SCImageProcessGlobalQueue _applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907cc9c

// -[SCImageProcessGlobalQueue _applicationDidReceiveMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907ccc0

// -[SCImageProcessGlobalQueue startSuspendOpenGLOperations]
// Type encoding: v16@0:8
// Implementation: 0x10907ccfc

// -[SCImageProcessGlobalQueue resumeOpenGLOperations]
// Type encoding: v16@0:8
// Implementation: 0x10907cd2c

// -[SCImageProcessGlobalQueue waitUntilOpenGLOperationsHalted]
// Type encoding: v16@0:8
// Implementation: 0x10907cd7c

// -[SCImageProcessGlobalQueue _markMainThreadSetupAsFinished]
// Type encoding: v16@0:8
// Implementation: 0x10907cd90

// -[SCImageProcessGlobalQueue _scheduleForProcessingWithPendingRequestPresent:oldRequest:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10907ce10

// -[SCImageProcessGlobalQueue _executeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907cfe8

// -[SCImageProcessGlobalQueue _reportFailureWithRequest:error:openGLErrors:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10907d1b4

// -[SCImageProcessGlobalQueue _scheduleOnQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907d42c

// -[SCImageProcessGlobalQueue addRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10907d508

// -[SCImageProcessGlobalQueue _queueDebugInfo]
// Type encoding: @16@0:8
// Implementation: 0x10907d57c

// -[SCImageProcessGlobalQueue queueDebugInfo]
// Type encoding: @16@0:8
// Implementation: 0x10907d5b4

// -[SCImageProcessGlobalQueue processingRequestIdentifier]
// Type encoding: Q16@0:8
// Implementation: 0x10907d5fc

// -[SCImageProcessGlobalQueue glEsVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10907d648

// -[SCImageProcessGlobalQueue pending]
// Type encoding: Q16@0:8
// Implementation: 0x10907d650

// -[SCImageProcessGlobalQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907d658

// +[SCImageProcessGlobalQueue sharedQueue]
// Type encoding: @16@0:8
// Implementation: 0x10907c5f0

// +[SCImageProcessGlobalQueue setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006d4198

// +[SCImageProcessGlobalQueue setGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006d41a8

// +[SCImageProcessGlobalQueue setEnableReportGLErrors:]
// Type encoding: v20@0:8B16
// Implementation: 0x1006d41b8

// +[SCImageProcessGlobalQueue setDisableCATransactionFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x1006d41c4

// +[SCImageProcessGlobalQueue setApplicationLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006d4224

@end
