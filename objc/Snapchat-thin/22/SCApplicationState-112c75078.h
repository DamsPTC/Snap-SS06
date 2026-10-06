// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCApplicationState
// Superclass: NSObject
// Address: 0x112c75078

@interface SCApplicationState

// Property: protectedDataAvailable; attributes: TB,R,N
// Property: applicationState; attributes: Tq,N
// Property: headlessMode; attributes: TB,R,N
// Property: nextApplicationState; attributes: Tq,R,N

// -[SCApplicationState init]
// Type encoding: @16@0:8
// Implementation: 0x100080f18

// -[SCApplicationState applicationState]
// Type encoding: q16@0:8
// Implementation: 0x100085b08

// -[SCApplicationState setApplicationState:]
// Type encoding: v24@0:8q16
// Implementation: 0x100085718

// -[SCApplicationState nextApplicationState]
// Type encoding: q16@0:8
// Implementation: 0x1001104c4

// -[SCApplicationState headlessMode]
// Type encoding: B16@0:8
// Implementation: 0x100a015bc

// -[SCApplicationState _protectedDataDidBecomeAvailable]
// Type encoding: v16@0:8
// Implementation: 0x10b2d0ec8

// -[SCApplicationState _protectedDataWillBecomeUnavailable]
// Type encoding: v16@0:8
// Implementation: 0x10b2d0f30

// -[SCApplicationState appDidFinishLaunching]
// Type encoding: v16@0:8
// Implementation: 0x100c1dd88

// -[SCApplicationState appDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c7463c

// -[SCApplicationState appWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x10b2d0f94

// -[SCApplicationState appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10b2d1004

// -[SCApplicationState appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10b2d1080

// -[SCApplicationState protectedDataAvailable]
// Type encoding: B16@0:8
// Implementation: 0x100a03c48

// -[SCApplicationState isAppInBackground]
// Type encoding: B16@0:8
// Implementation: 0x100110580

// -[SCApplicationState isAppInBackgroundOrTransitioning]
// Type encoding: B16@0:8
// Implementation: 0x100110490

// -[SCApplicationState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2d10f0

// +[SCApplicationState shared]
// Type encoding: @16@0:8
// Implementation: 0x100080e68

@end
