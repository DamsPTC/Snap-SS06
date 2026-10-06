// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestTaskPool
// Superclass: NSObject
// Address: 0x112c72008

@interface SCRequestTaskPool

// Property: tasks; attributes: T@"NSMutableDictionary",&,N,V_tasks
// Property: currentDisplayContext; attributes: T@"SCDisplayContext",&,N,V_currentDisplayContext

// -[SCRequestTaskPool init]
// Type encoding: @16@0:8
// Implementation: 0x1000e2598

// -[SCRequestTaskPool addTask:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1005a9f6c

// -[SCRequestTaskPool removeTaskForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008a22f0

// -[SCRequestTaskPool boostTaskIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26facc

// -[SCRequestTaskPool taskForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005a9f00

// -[SCRequestTaskPool allTasks]
// Type encoding: @16@0:8
// Implementation: 0x10b26fbd0

// -[SCRequestTaskPool enumerateTasksUsingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1005ab1f4

// -[SCRequestTaskPool taskCount]
// Type encoding: Q16@0:8
// Implementation: 0x1005a8a08

// -[SCRequestTaskPool setCurrentDisplayContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26fc14

// -[SCRequestTaskPool currentDisplayContext]
// Type encoding: @16@0:8
// Implementation: 0x10b26fd20

// -[SCRequestTaskPool tasks]
// Type encoding: @16@0:8
// Implementation: 0x1005a8a44

// -[SCRequestTaskPool setTasks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e260c

// -[SCRequestTaskPool .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b26fd28

@end
