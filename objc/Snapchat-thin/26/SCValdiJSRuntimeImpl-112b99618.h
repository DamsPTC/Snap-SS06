// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiJSRuntimeImpl
// Superclass: NSObject
// Address: 0x112b99618

@interface SCValdiJSRuntimeImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiJSRuntimeImpl initWithJSRuntimeProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d2ae8

// -[SCValdiJSRuntimeImpl initWithJSRuntimeProvider:jsRuntime:nativeObjectsManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1080d2b4c

// -[SCValdiJSRuntimeImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080d2c0c

// -[SCValdiJSRuntimeImpl jsRuntime]
// Type encoding: @16@0:8
// Implementation: 0x1080d2c74

// -[SCValdiJSRuntimeImpl pushModuleAtPath:reportingErrorOnMarshaller:]
// Type encoding: q32@0:8@16^{SCValdiMarshaller=}24
// Implementation: 0x1080d2d08

// -[SCValdiJSRuntimeImpl pushModuleAthPath:inMarshaller:]
// Type encoding: q32@0:8@16^{SCValdiMarshaller=}24
// Implementation: 0x1080d2d7c

// -[SCValdiJSRuntimeImpl preloadModuleAtPath:maxDepth:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1080d2dc8

// -[SCValdiJSRuntimeImpl preloadModulesAtPaths:maxDepth:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1080d2e28

// -[SCValdiJSRuntimeImpl cppRuntime]
// Type encoding: {shared_ptr<Valdi::JavaScriptRuntime>=^{JavaScriptRuntime}^{__shared_weak_count}}16@0:8
// Implementation: 0x1080d2e88

// -[SCValdiJSRuntimeImpl warmUpValueMarshallerForObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080d2f48

// -[SCValdiJSRuntimeImpl addHotReloadObserver:forModulePath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080d2fc0

// -[SCValdiJSRuntimeImpl addHotReloadObserverWithBlock:forModulePath:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1080d3030

// -[SCValdiJSRuntimeImpl createScopedJSRuntimeWithScopeName:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080d3128

// -[SCValdiJSRuntimeImpl dispose]
// Type encoding: v16@0:8
// Implementation: 0x1080d31f8

// -[SCValdiJSRuntimeImpl dispatchInJsThread:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d320c

// -[SCValdiJSRuntimeImpl dispatchInJsThreadSyncWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080d3258

// -[SCValdiJSRuntimeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080d32a4

@end
