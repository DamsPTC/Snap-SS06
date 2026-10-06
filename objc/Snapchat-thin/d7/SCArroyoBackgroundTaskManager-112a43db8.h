// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoBackgroundTaskManager
// Superclass: NSObject
// Address: 0x112a43db8

@interface SCArroyoBackgroundTaskManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCArroyoBackgroundTaskManager initWithBackgroundTaskWrapper:applicationLifecycleEvents:retryKeepaliveEnabled:foregroundRefreshEnabled:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x10049297c

// -[SCArroyoBackgroundTaskManager initWithBackgroundTaskWrapper:applicationLifecycleEvents:retryKeepaliveEnabled:foregroundRefreshEnabled:performer:]
// Type encoding: @48@0:8@16@24B32B36@40
// Implementation: 0x100492a30

// -[SCArroyoBackgroundTaskManager onTaskQueued:]
// Type encoding: v24@0:8@16
// Implementation: 0x105524a88

// -[SCArroyoBackgroundTaskManager onNetworkConstraintFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105524b78

// -[SCArroyoBackgroundTaskManager onTaskStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105524c74

// -[SCArroyoBackgroundTaskManager onTaskComplete:taskResult:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105524d70

// -[SCArroyoBackgroundTaskManager _onDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x105524e5c

// -[SCArroyoBackgroundTaskManager _onDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x105524ec4

// -[SCArroyoBackgroundTaskManager _refreshBackgroundTasks]
// Type encoding: v16@0:8
// Implementation: 0x105524f3c

// -[SCArroyoBackgroundTaskManager _beginBackgroundTaskIfAbsentForTaskId:]
// Type encoding: B24@0:8@16
// Implementation: 0x105525154

// -[SCArroyoBackgroundTaskManager _isHoldingBackgroundTaskForTaskId:]
// Type encoding: B24@0:8@16
// Implementation: 0x105525208

// -[SCArroyoBackgroundTaskManager _endBackgroundTaskIfPresentForTaskId:]
// Type encoding: B24@0:8@16
// Implementation: 0x105525284

// -[SCArroyoBackgroundTaskManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10552535c

@end
