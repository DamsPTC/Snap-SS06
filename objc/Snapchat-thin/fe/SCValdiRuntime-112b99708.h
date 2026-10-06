// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiRuntime
// Superclass: NSObject
// Address: 0x112b99708

@interface SCValdiRuntime

// Property: cppInstance; attributes: Tr^v,R,N
// Property: isBackedByRemoteFiles; attributes: TB,N,V_isBackedByRemoteFiles
// Property: disableLegacyMeasureBehaviorByDefault; attributes: TB,N,V_disableLegacyMeasureBehaviorByDefault
// Property: deviceModule; attributes: T@"SCValdiDeviceModule",R,N,V_deviceModule
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiRuntime initWithCppInstance:viewManagerContext:runtimeManager:fontManager:]
// Type encoding: @48@0:8r^v16r^v24@32@40
// Implementation: 0x1080d3e18

// -[SCValdiRuntime dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080d40e0

// -[SCValdiRuntime applicationWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x1080d4158

// -[SCValdiRuntime emitInitMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1080d4160

// -[SCValdiRuntime loadViewWithComponentPath:owner:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x1080d4168

// -[SCValdiRuntime loadViewWithComponentPath:owner:viewModel:componentContext:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x1080d4190

// -[SCValdiRuntime createContextWithViewClass:viewModel:componentContext:]
// Type encoding: @40@0:8#16@24@32
// Implementation: 0x1080d4230

// -[SCValdiRuntime flushPendingMainThreadLoadOperations]
// Type encoding: v16@0:8
// Implementation: 0x1080d42cc

// -[SCValdiRuntime flushPendingMainThreadLoadOperationsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080d42f4

// -[SCValdiRuntime doCreateContextWithComponentPath:viewModel:componentContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1080d433c

// -[SCValdiRuntime doCreateContextWithComponentPath:cppMarshaller:]
// Type encoding: @32@0:8@16^v24
// Implementation: 0x1080d4478

// -[SCValdiRuntime createContextWithComponentPath:viewModel:componentContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1080d45d4

// -[SCValdiRuntime inflateView:owner:viewModel:componentContext:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1080d4620

// -[SCValdiRuntime inflateView:owner:cppMarshaller:]
// Type encoding: v40@0:8@16@24^v32
// Implementation: 0x1080d470c

// -[SCValdiRuntime cppInstance]
// Type encoding: r^v16@0:8
// Implementation: 0x1080d47c8

// -[SCValdiRuntime jsRuntime]
// Type encoding: @16@0:8
// Implementation: 0x1080d47d0

// -[SCValdiRuntime getJsRuntime]
// Type encoding: @16@0:8
// Implementation: 0x1080d47fc

// -[SCValdiRuntime getJSRuntimeWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d48f4

// -[SCValdiRuntime executeMainThreadBatch:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d49a0

// -[SCValdiRuntime loadModule:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1080d4a10

// -[SCValdiRuntime dumpLogMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1080d4b18

// -[SCValdiRuntime dumpLogs]
// Type encoding: @16@0:8
// Implementation: 0x1080d4b7c

// -[SCValdiRuntime getAllContexts]
// Type encoding: @16@0:8
// Implementation: 0x1080d4be0

// -[SCValdiRuntime currentContext]
// Type encoding: @16@0:8
// Implementation: 0x1080d4cb8

// -[SCValdiRuntime manager]
// Type encoding: @16@0:8
// Implementation: 0x1080d4cc4

// -[SCValdiRuntime setIsIntegrationTestEnvironment:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d4cdc

// -[SCValdiRuntime setAllowDarkMode:useScreenUserInterfaceStyleForDarkMode:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1080d4ce4

// -[SCValdiRuntime assetWithModuleName:path:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1080d4cec

// -[SCValdiRuntime assetWithURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d4e9c

// -[SCValdiRuntime dispatchOnJSQueueWithBlock:sync:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x1080d4f2c

// -[SCValdiRuntime registerNativeModuleFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d5070

// -[SCValdiRuntime setPerformHapticFeedbackFunctionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d50ac

// -[SCValdiRuntime makeViewFactoryWithBlock:attributesBinder:forClass:]
// Type encoding: @40@0:8@?16@?24#32
// Implementation: 0x1080d5244

// -[SCValdiRuntime getAllModuleHashes]
// Type encoding: @16@0:8
// Implementation: 0x1080d5508

// -[SCValdiRuntime isBackedByRemoteFiles]
// Type encoding: B16@0:8
// Implementation: 0x1080d5648

// -[SCValdiRuntime setIsBackedByRemoteFiles:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d5650

// -[SCValdiRuntime disableLegacyMeasureBehaviorByDefault]
// Type encoding: B16@0:8
// Implementation: 0x1080d5658

// -[SCValdiRuntime setDisableLegacyMeasureBehaviorByDefault:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080d5660

// -[SCValdiRuntime deviceModule]
// Type encoding: @16@0:8
// Implementation: 0x1080d5668

// -[SCValdiRuntime .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080d5670

// -[SCValdiRuntime .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1080d56c8

@end
