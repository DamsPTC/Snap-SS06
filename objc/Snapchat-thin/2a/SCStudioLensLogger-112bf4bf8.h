// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStudioLensLogger
// Superclass: NSObject
// Address: 0x112bf4bf8

@interface SCStudioLensLogger

// Property: logs; attributes: T@"NSArray",R,N,V_logs
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStudioLensLogger initWithMaxLogCount:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1091e8054

// -[SCStudioLensLogger appendLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e8108

// -[SCStudioLensLogger clear]
// Type encoding: v16@0:8
// Implementation: 0x1091e8248

// -[SCStudioLensLogger addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e8338

// -[SCStudioLensLogger removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e8340

// -[SCStudioLensLogger _performAppendLogEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e8348

// -[SCStudioLensLogger _notifyListeners]
// Type encoding: v16@0:8
// Implementation: 0x1091e8444

// -[SCStudioLensLogger logs]
// Type encoding: @16@0:8
// Implementation: 0x1091e8454

// -[SCStudioLensLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091e845c

// +[SCStudioLensLogger sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x1091e7fcc

@end
