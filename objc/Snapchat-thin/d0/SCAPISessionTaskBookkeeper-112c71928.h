// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAPISessionTaskBookkeeper
// Superclass: NSObject
// Address: 0x112c71928

@interface SCAPISessionTaskBookkeeper

// Property: backgroundTaskWrapper; attributes: T@"<SCBackgroundExecutionProtocol>",W,V_backgroundTaskWrapper
// Property: batteryLogger; attributes: T@"<SCBatteryLoggingProtocol>",W,V_batteryLogger

// -[SCAPISessionTaskBookkeeper init]
// Type encoding: @16@0:8
// Implementation: 0x100671e04

// -[SCAPISessionTaskBookkeeper _addTask:key:session:cancelTask:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10068b07c

// -[SCAPISessionTaskBookkeeper addSCRequestTaskForNNM:]
// Type encoding: v24@0:8@16
// Implementation: 0x10068aedc

// -[SCAPISessionTaskBookkeeper addTask:forSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b261cb8

// -[SCAPISessionTaskBookkeeper _removeTask:forSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008a193c

// -[SCAPISessionTaskBookkeeper removeSCRequestTaskForNNM:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a18b4

// -[SCAPISessionTaskBookkeeper removeTask:forSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b261da8

// -[SCAPISessionTaskBookkeeper markNeedsInvalidationForSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b261dac

// -[SCAPISessionTaskBookkeeper _invalidateAndRemoveSessionCounterIfNeeded:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b261ee4

// -[SCAPISessionTaskBookkeeper backgroundTaskWrapper]
// Type encoding: @16@0:8
// Implementation: 0x10b261fb0

// -[SCAPISessionTaskBookkeeper setBackgroundTaskWrapper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10067515c

// -[SCAPISessionTaskBookkeeper batteryLogger]
// Type encoding: @16@0:8
// Implementation: 0x10b261fc8

// -[SCAPISessionTaskBookkeeper setBatteryLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x100675398

// -[SCAPISessionTaskBookkeeper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b261fe0

// +[SCAPISessionTaskBookkeeper shared]
// Type encoding: @16@0:8
// Implementation: 0x100671d54

@end
