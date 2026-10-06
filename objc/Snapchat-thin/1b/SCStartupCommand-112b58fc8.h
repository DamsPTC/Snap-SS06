// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStartupCommand
// Superclass: SCAsyncCommand
// Address: 0x112b58fc8

@interface SCStartupCommand

// Property: executed; attributes: TB,R,N,V_executed
// Property: appStartupState; attributes: T@"SCAppStartupState",R,N,V_appStartupState
// Property: mustBeMainThread; attributes: TB,R,N,V_mustBeMainThread
// Property: numberOfDelayedCommands; attributes: TQ,R,N,V_numberOfDelayedCommands

// -[SCStartupCommand initWithAppStartupState:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd6220

// -[SCStartupCommand initMainThreadCommandWithAppStartupState:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fd62a4

// -[SCStartupCommand execute]
// Type encoding: v16@0:8
// Implementation: 0x106fd62cc

// -[SCStartupCommand didTransitionToState:fromState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x106fd631c

// -[SCStartupCommand markCommandStart]
// Type encoding: v16@0:8
// Implementation: 0x106fd6384

// -[SCStartupCommand markCommandEnd]
// Type encoding: v16@0:8
// Implementation: 0x106fd6388

// -[SCStartupCommand taskId]
// Type encoding: @16@0:8
// Implementation: 0x106fd638c

// -[SCStartupCommand setParentCommandIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fd63a0

// -[SCStartupCommand mustBeMainThread]
// Type encoding: B16@0:8
// Implementation: 0x106fd63d8

// -[SCStartupCommand executed]
// Type encoding: B16@0:8
// Implementation: 0x106fd63e8

// -[SCStartupCommand appStartupState]
// Type encoding: @16@0:8
// Implementation: 0x106fd63f8

// -[SCStartupCommand numberOfDelayedCommands]
// Type encoding: Q16@0:8
// Implementation: 0x106fd6408

// -[SCStartupCommand .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fd6418

@end
