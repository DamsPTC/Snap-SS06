// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiJSWorker
// Superclass: NSObject
// Address: 0x112b99668

@interface SCValdiJSWorker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiJSWorker initWithWorkerRuntime:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d33cc

// -[SCValdiJSWorker initWithWorkerRuntime:nativeObjectsManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1080d3438

// -[SCValdiJSWorker dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080d34c8

// -[SCValdiJSWorker cppRuntime]
// Type encoding: {shared_ptr<Valdi::JavaScriptRuntime>=^{JavaScriptRuntime}^{__shared_weak_count}}16@0:8
// Implementation: 0x1080d3530

// -[SCValdiJSWorker pushModuleAtPath:reportingErrorOnMarshaller:]
// Type encoding: q32@0:8@16^{SCValdiMarshaller=}24
// Implementation: 0x1080d356c

// -[SCValdiJSWorker pushModuleAthPath:inMarshaller:]
// Type encoding: q32@0:8@16^{SCValdiMarshaller=}24
// Implementation: 0x1080d3594

// -[SCValdiJSWorker preloadModuleAtPath:maxDepth:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1080d35e4

// -[SCValdiJSWorker preloadModulesAtPaths:maxDepth:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1080d35ec

// -[SCValdiJSWorker warmUpValueMarshallerForObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d35f4

// -[SCValdiJSWorker addHotReloadObserver:forModulePath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d3670

// -[SCValdiJSWorker addHotReloadObserverWithBlock:forModulePath:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1080d3684

// -[SCValdiJSWorker dispatchInJsThread:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d377c

// -[SCValdiJSWorker createScopedJSRuntimeWithScopeName:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d38e4

// -[SCValdiJSWorker dispose]
// Type encoding: v16@0:8
// Implementation: 0x1080d393c

// -[SCValdiJSWorker dispatchInJsThreadSyncWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d3950

// -[SCValdiJSWorker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080d3a08

@end
