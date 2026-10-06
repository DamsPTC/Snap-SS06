// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCrashDoctor
// Superclass: NSObject
// Address: 0xad90b8

@interface KSCrashDoctor


// -[KSCrashDoctor recrashReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f424

// -[KSCrashDoctor systemReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f434

// -[KSCrashDoctor crashReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f444

// -[KSCrashDoctor infoReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f454

// -[KSCrashDoctor errorReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f464

// -[KSCrashDoctor cpuFamily:]
// Type encoding: i24@0:8@16
// Implementation: 0x49f4a4

// -[KSCrashDoctor registerNameForFamily:paramIndex:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x49f560

// -[KSCrashDoctor mainExecutableNameForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f5c0

// -[KSCrashDoctor crashedThreadReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f600

// -[KSCrashDoctor backtraceFromThreadReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f748

// -[KSCrashDoctor basicRegistersFromThreadReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f794

// -[KSCrashDoctor lastInAppStackEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f7e0

// -[KSCrashDoctor lastStackEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x49f938

// -[KSCrashDoctor isInvalidAddress:]
// Type encoding: B24@0:8@16
// Implementation: 0x49f9b8

// -[KSCrashDoctor isMathError:]
// Type encoding: B24@0:8@16
// Implementation: 0x49fa84

// -[KSCrashDoctor isMemoryCorruption:]
// Type encoding: B24@0:8@16
// Implementation: 0x49fb50

// -[KSCrashDoctor lastFunctionCall:]
// Type encoding: @24@0:8@16
// Implementation: 0x49fe6c

// -[KSCrashDoctor zombieCall:]
// Type encoding: @24@0:8@16
// Implementation: 0x4a02e4

// -[KSCrashDoctor isStackOverflow:]
// Type encoding: B24@0:8@16
// Implementation: 0x4a0464

// -[KSCrashDoctor isDeadlock:]
// Type encoding: B24@0:8@16
// Implementation: 0x4a04c4

// -[KSCrashDoctor appendOriginatingCall:callName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4a0524

// -[KSCrashDoctor diagnoseCrash:]
// Type encoding: @24@0:8@16
// Implementation: 0x4a05b0

// +[KSCrashDoctor doctor]
// Type encoding: @16@0:8
// Implementation: 0x49f410

@end
