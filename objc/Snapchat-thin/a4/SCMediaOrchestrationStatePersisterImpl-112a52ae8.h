// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaOrchestrationStatePersisterImpl
// Superclass: NSObject
// Address: 0x112a52ae8

@interface SCMediaOrchestrationStatePersisterImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaOrchestrationStatePersisterImpl initWithSCPreferences:diskWritePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105612510

// -[SCMediaOrchestrationStatePersisterImpl persistSessionInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056125b4

// -[SCMediaOrchestrationStatePersisterImpl persistSessionInfosAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10561262c

// -[SCMediaOrchestrationStatePersisterImpl retrieveInfoSessions]
// Type encoding: @16@0:8
// Implementation: 0x10561274c

// -[SCMediaOrchestrationStatePersisterImpl persistInitIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1056127b4

// -[SCMediaOrchestrationStatePersisterImpl retrieveInitIndex]
// Type encoding: Q16@0:8
// Implementation: 0x105612820

// -[SCMediaOrchestrationStatePersisterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105612888

@end
