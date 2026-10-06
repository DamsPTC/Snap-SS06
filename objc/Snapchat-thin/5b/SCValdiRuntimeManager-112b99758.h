// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiRuntimeManager
// Superclass: NSObject
// Address: 0x112b99758

@interface SCValdiRuntimeManager

// Property: currentUsername; attributes: T@"NSString",C,N,V_currentUsername
// Property: mainRuntime; attributes: T@"SCValdiRuntime",R,N
// Property: cppInstance; attributes: T^v,R,N
// Property: referenceTrackingEnabled; attributes: TB,R,N
// Property: gesturePrewarmEnabled; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiRuntimeManager init]
// Type encoding: @16@0:8
// Implementation: 0x10090ae04

// -[SCValdiRuntimeManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080d5f08

// -[SCValdiRuntimeManager _initializeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080d6020

// -[SCValdiRuntimeManager _cppInstanceIfInitialized]
// Type encoding: {Ref<Valdi::RuntimeManager>=^{RuntimeManager}}16@0:8
// Implementation: 0x1080d6ce4

// -[SCValdiRuntimeManager registerViewClassReplacement:withViewClass:]
// Type encoding: v32@0:8#16#24
// Implementation: 0x1080d6d78

// -[SCValdiRuntimeManager setDebugMessageDisplayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d6e48

// -[SCValdiRuntimeManager setCurrentUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d6ea4

// -[SCValdiRuntimeManager setUserSessionWithUserId:userIv:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d6edc

// -[SCValdiRuntimeManager setUserSessionWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d6ee0

// -[SCValdiRuntimeManager _getOrCreateConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10090c4f4

// -[SCValdiRuntimeManager _applyConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10090c8bc

// -[SCValdiRuntimeManager _registerImageLoader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d6f3c

// -[SCValdiRuntimeManager _registerVideoLoader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d70b4

// -[SCValdiRuntimeManager _unregisterImageLoader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d7194

// -[SCValdiRuntimeManager _unregisterVideoLoader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d7258

// -[SCValdiRuntimeManager updateConfiguration:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10090c474

// -[SCValdiRuntimeManager referenceTrackingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1080d731c

// -[SCValdiRuntimeManager gesturePrewarmEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1080d7324

// -[SCValdiRuntimeManager mainRuntime]
// Type encoding: @16@0:8
// Implementation: 0x1080d732c

// -[SCValdiRuntimeManager provideMainRuntime]
// Type encoding: @16@0:8
// Implementation: 0x1080d750c

// -[SCValdiRuntimeManager setRequestManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d7510

// -[SCValdiRuntimeManager unloadAllJsModules]
// Type encoding: v16@0:8
// Implementation: 0x1080d756c

// -[SCValdiRuntimeManager createRuntimeWithCustomModuleProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d75d0

// -[SCValdiRuntimeManager clearViewPools]
// Type encoding: v16@0:8
// Implementation: 0x1080d778c

// -[SCValdiRuntimeManager preloadViewsOfClass:count:]
// Type encoding: v32@0:8#16q24
// Implementation: 0x1080d77bc

// -[SCValdiRuntimeManager snapDrawingRuntime]
// Type encoding: @16@0:8
// Implementation: 0x1080d7848

// -[SCValdiRuntimeManager _didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x1080d7930

// -[SCValdiRuntimeManager _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1080d7974

// -[SCValdiRuntimeManager _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1080d79b8

// -[SCValdiRuntimeManager _applicationWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x1080d79fc

// -[SCValdiRuntimeManager registerMainRuntimeCreatedCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1009a3648

// -[SCValdiRuntimeManager registerModuleFactoriesProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10090bbec

// -[SCValdiRuntimeManager registerTypeConverterForClass:converterFunctionPath:]
// Type encoding: v32@0:8#16@24
// Implementation: 0x10090bf88

// -[SCValdiRuntimeManager registerTypeConverterForClassName:converterFunctionPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10090bff8

// -[SCValdiRuntimeManager _javaScriptBridge]
// Type encoding: ^{IJavaScriptBridge=^^?}16@0:8
// Implementation: 0x1080d7a48

// -[SCValdiRuntimeManager captureStackTracesWithTimeoutMs:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1080d7a8c

// -[SCValdiRuntimeManager dumpMemoryStatistics]
// Type encoding: {?=qq}16@0:8
// Implementation: 0x1080d7c34

// -[SCValdiRuntimeManager dumpMemoryStatisticsAsyncWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d7c8c

// -[SCValdiRuntimeManager cppInstance]
// Type encoding: ^v16@0:8
// Implementation: 0x1080d7da4

// -[SCValdiRuntimeManager getWorkerOnExecutor:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1080d7dec

// -[SCValdiRuntimeManager currentUsername]
// Type encoding: @16@0:8
// Implementation: 0x1080d81f8

// -[SCValdiRuntimeManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080d8200

// -[SCValdiRuntimeManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10090ade8

// +[SCValdiRuntimeManager allRuntimeManagers]
// Type encoding: @16@0:8
// Implementation: 0x1080d8040

@end
