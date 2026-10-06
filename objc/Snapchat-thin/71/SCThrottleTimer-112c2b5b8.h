// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCThrottleTimer
// Superclass: NSObject
// Address: 0x112c2b5b8

@interface SCThrottleTimer

// Property: isScheduled; attributes: TB,V_isScheduled
// Property: repeats; attributes: TB,N,V_repeats
// Property: timeInterval; attributes: Td,N,V_timeInterval
// Property: userInfo; attributes: T@,&,N,V_userInfo
// Property: internalTimer; attributes: T@"NSTimer",&,N,V_internalTimer
// Property: target; attributes: T@"SCThrottleTarget",&,N,V_target
// Property: runLoop; attributes: T@"NSRunLoop",&,N,V_runLoop
// Property: runLoopMode; attributes: T@"NSString",&,N,V_runLoopMode
// Property: tolerance; attributes: Td,N,V_tolerance

// -[SCThrottleTimer initWithInterval:target:selector:userInfo:]
// Type encoding: @48@0:8d16@24:32@40
// Implementation: 0x100babd40

// -[SCThrottleTimer initWithInterval:target:selector:userInfo:repeats:]
// Type encoding: @52@0:8d16@24:32@40B48
// Implementation: 0x100babdf0

// -[SCThrottleTimer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10af846d0

// -[SCThrottleTimer _createTimer]
// Type encoding: v16@0:8
// Implementation: 0x100bbb594

// -[SCThrottleTimer _removeTimer]
// Type encoding: v16@0:8
// Implementation: 0x100bbb714

// -[SCThrottleTimer _onThrottleTargetDidTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af84714

// -[SCThrottleTimer runLoop]
// Type encoding: @16@0:8
// Implementation: 0x100bbb898

// -[SCThrottleTimer runLoopMode]
// Type encoding: @16@0:8
// Implementation: 0x100bbb8f0

// -[SCThrottleTimer schedule]
// Type encoding: v16@0:8
// Implementation: 0x100bbaf50

// -[SCThrottleTimer reschedule]
// Type encoding: v16@0:8
// Implementation: 0x10af84750

// -[SCThrottleTimer fire]
// Type encoding: v16@0:8
// Implementation: 0x100bbafd4

// -[SCThrottleTimer cancel]
// Type encoding: v16@0:8
// Implementation: 0x100bec074

// -[SCThrottleTimer isThrottled]
// Type encoding: B16@0:8
// Implementation: 0x100bbaf8c

// -[SCThrottleTimer isScheduled]
// Type encoding: B16@0:8
// Implementation: 0x10af84778

// -[SCThrottleTimer setIsScheduled:]
// Type encoding: v20@0:8B16
// Implementation: 0x100bbbde4

// -[SCThrottleTimer repeats]
// Type encoding: B16@0:8
// Implementation: 0x100bbbddc

// -[SCThrottleTimer setRepeats:]
// Type encoding: v20@0:8B16
// Implementation: 0x100bac474

// -[SCThrottleTimer timeInterval]
// Type encoding: d16@0:8
// Implementation: 0x100bbb7f0

// -[SCThrottleTimer setTimeInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x100bac43c

// -[SCThrottleTimer userInfo]
// Type encoding: @16@0:8
// Implementation: 0x100bbb7f8

// -[SCThrottleTimer setUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bac444

// -[SCThrottleTimer setRunLoop:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bac47c

// -[SCThrottleTimer setRunLoopMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bac4ac

// -[SCThrottleTimer tolerance]
// Type encoding: d16@0:8
// Implementation: 0x100bbb86c

// -[SCThrottleTimer setTolerance:]
// Type encoding: v24@0:8d16
// Implementation: 0x100bac4dc

// -[SCThrottleTimer internalTimer]
// Type encoding: @16@0:8
// Implementation: 0x100bbb7b8

// -[SCThrottleTimer setInternalTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bbb7c0

// -[SCThrottleTimer target]
// Type encoding: @16@0:8
// Implementation: 0x100bbb024

// -[SCThrottleTimer setTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bac40c

// -[SCThrottleTimer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af84784

@end
