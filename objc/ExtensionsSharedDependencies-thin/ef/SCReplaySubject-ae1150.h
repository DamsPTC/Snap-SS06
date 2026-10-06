// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCReplaySubject
// Superclass: SCSubject
// Address: 0xae1150

@interface SCReplaySubject

// Property: buffer; attributes: T@"NSMutableArray",&,N,V_buffer
// Property: bufferSize; attributes: TQ,N,V_bufferSize
// Property: isComplete; attributes: TB,V_isComplete

// -[SCReplaySubject initWithBufferSize:]
// Type encoding: @24@0:8Q16
// Implementation: 0x61f0d4

// -[SCReplaySubject dealloc]
// Type encoding: v16@0:8
// Implementation: 0x61f204

// -[SCReplaySubject next:]
// Type encoding: v24@0:8@16
// Implementation: 0x61f280

// -[SCReplaySubject complete]
// Type encoding: v16@0:8
// Implementation: 0x61f390

// -[SCReplaySubject subscribe:]
// Type encoding: @24@0:8@16
// Implementation: 0x61f3c0

// -[SCReplaySubject unsubscribe:]
// Type encoding: v24@0:8@16
// Implementation: 0x61f5f0

// -[SCReplaySubject buffer]
// Type encoding: @16@0:8
// Implementation: 0x61f600

// -[SCReplaySubject setBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x61f610

// -[SCReplaySubject bufferSize]
// Type encoding: Q16@0:8
// Implementation: 0x61f650

// -[SCReplaySubject setBufferSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x61f660

// -[SCReplaySubject isComplete]
// Type encoding: B16@0:8
// Implementation: 0x61f670

// -[SCReplaySubject setIsComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x61f684

// -[SCReplaySubject .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x61f694

// -[SCReplaySubject .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x61f6f0

// +[SCReplaySubject replaySubjectWithBufferSize:]
// Type encoding: @24@0:8Q16
// Implementation: 0x61f1dc

@end
