// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNQEAppStateChangeNotifier
// Superclass: NSObject
// Address: 0x112c72148

@interface SCNQEAppStateChangeNotifier

// Property: listener; attributes: T@"SCNNetworkTypesAppStateChangeListener",&,V_listener
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNQEAppStateChangeNotifier init]
// Type encoding: @16@0:8
// Implementation: 0x10066a798

// -[SCNQEAppStateChangeNotifier sc_appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10b27034c

// -[SCNQEAppStateChangeNotifier sc_appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x100c1f4c0

// -[SCNQEAppStateChangeNotifier notifyListener:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b270380

// -[SCNQEAppStateChangeNotifier registerListener:]
// Type encoding: q24@0:8@16
// Implementation: 0x10066bc14

// -[SCNQEAppStateChangeNotifier listener]
// Type encoding: @16@0:8
// Implementation: 0x100c1f4f4

// -[SCNQEAppStateChangeNotifier setListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10066bf80

// -[SCNQEAppStateChangeNotifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2703b8

@end
