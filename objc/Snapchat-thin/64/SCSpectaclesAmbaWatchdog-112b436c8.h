// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAmbaWatchdog
// Superclass: NSObject
// Address: 0x112b436c8

@interface SCSpectaclesAmbaWatchdog

// Property: kickers; attributes: T@"NSPointerArray",&,N,V_kickers
// Property: device; attributes: T@"SCSpectaclesDevice",W,N,V_device
// Property: ambaWatchdogKickTimer; attributes: T@"SCWeakTimer",&,N,V_ambaWatchdogKickTimer

// -[SCSpectaclesAmbaWatchdog initWithDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x106eab928

// -[SCSpectaclesAmbaWatchdog addKicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab9b8

// -[SCSpectaclesAmbaWatchdog removeKicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eabb0c

// -[SCSpectaclesAmbaWatchdog _updateAmbaWatchdogKickTimer]
// Type encoding: v16@0:8
// Implementation: 0x106eabc18

// -[SCSpectaclesAmbaWatchdog _kickWatchdog]
// Type encoding: v16@0:8
// Implementation: 0x106eabd48

// -[SCSpectaclesAmbaWatchdog kickers]
// Type encoding: @16@0:8
// Implementation: 0x106eabdd4

// -[SCSpectaclesAmbaWatchdog setKickers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eabddc

// -[SCSpectaclesAmbaWatchdog device]
// Type encoding: @16@0:8
// Implementation: 0x106eabe0c

// -[SCSpectaclesAmbaWatchdog setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eabe24

// -[SCSpectaclesAmbaWatchdog ambaWatchdogKickTimer]
// Type encoding: @16@0:8
// Implementation: 0x106eabe30

// -[SCSpectaclesAmbaWatchdog setAmbaWatchdogKickTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eabe38

// -[SCSpectaclesAmbaWatchdog .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eabe68

@end
