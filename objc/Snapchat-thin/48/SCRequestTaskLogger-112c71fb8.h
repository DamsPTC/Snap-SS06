// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestTaskLogger
// Superclass: NSObject
// Address: 0x112c71fb8

@interface SCRequestTaskLogger


// -[SCRequestTaskLogger initWithNetworkTraceFile:]
// Type encoding: @24@0:8^{SCNetworkTraceFileStruct=}16
// Implementation: 0x1005a0dcc

// -[SCRequestTaskLogger taskDidInitiateByUser]
// Type encoding: v16@0:8
// Implementation: 0x100b4427c

// -[SCRequestTaskLogger taskDidEnqueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a8850

// -[SCRequestTaskLogger taskDidSubmit:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005ab644

// -[SCRequestTaskLogger taskWillRun:]
// Type encoding: v24@0:8@16
// Implementation: 0x10068ae28

// -[SCRequestTaskLogger taskDidSent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26f8b4

// -[SCRequestTaskLogger taskDidRun:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26f8b8

// -[SCRequestTaskLogger taskDidPause:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26f8bc

// -[SCRequestTaskLogger taskDidFinish:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008a2a38

// -[SCRequestTaskLogger _shouldTraceTask:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b26f8c0

// -[SCRequestTaskLogger _orderedJSONObjectFromDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b26f9c8

@end
