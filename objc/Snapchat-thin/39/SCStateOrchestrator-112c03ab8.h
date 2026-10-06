// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStateOrchestrator
// Superclass: NSObject
// Address: 0x112c03ab8

@interface SCStateOrchestrator

// Property: observable; attributes: T@"SCObservable",R,N
// Property: defaultState; attributes: T@,R,N,V_defaultState

// -[SCStateOrchestrator initWithDefaultState:reducer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10af00428

// -[SCStateOrchestrator initWithDefaultState:reducer:performer:preferSynchronous:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x100840788

// -[SCStateOrchestrator contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x100840b94

// -[SCStateOrchestrator requestStateChange:requester:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10087d028

// -[SCStateOrchestrator requestStateChange:requester:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10087d030

// -[SCStateOrchestrator observable]
// Type encoding: @16@0:8
// Implementation: 0x1008408f0

// -[SCStateOrchestrator defaultState]
// Type encoding: @16@0:8
// Implementation: 0x10087f854

// -[SCStateOrchestrator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af00448

// +[SCStateOrchestrator mapResolvedState:whenRemovingState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1008bbe5c

// +[SCStateOrchestrator shouldRemoveState:]
// Type encoding: B24@0:8@16
// Implementation: 0x10087d348

@end
