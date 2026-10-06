// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCReplaySubject
// Superclass: SCSubject
// Address: 0x112d322b8

@interface SCReplaySubject

// Property: buffer; attributes: T@"NSMutableArray",&,N,V_buffer
// Property: bufferSize; attributes: TQ,N,V_bufferSize
// Property: isComplete; attributes: TB,V_isComplete

// -[SCReplaySubject initWithBufferSize:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10041bbf0

// -[SCReplaySubject dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10bcbd6c0

// -[SCReplaySubject next:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcbd73c

// -[SCReplaySubject complete]
// Type encoding: v16@0:8
// Implementation: 0x10bcbd84c

// -[SCReplaySubject subscribe:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bcbd87c

// -[SCReplaySubject unsubscribe:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcbdaac

// -[SCReplaySubject buffer]
// Type encoding: @16@0:8
// Implementation: 0x10bcbdabc

// -[SCReplaySubject setBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcbdacc

// -[SCReplaySubject bufferSize]
// Type encoding: Q16@0:8
// Implementation: 0x10bcbdb0c

// -[SCReplaySubject setBufferSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10bcbdb1c

// -[SCReplaySubject isComplete]
// Type encoding: B16@0:8
// Implementation: 0x10bcbdb2c

// -[SCReplaySubject setIsComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x10bcbdb40

// -[SCReplaySubject .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bcbdb50

// -[SCReplaySubject .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10041bbc0

// +[SCReplaySubject replaySubjectWithBufferSize:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10041bb98

@end
