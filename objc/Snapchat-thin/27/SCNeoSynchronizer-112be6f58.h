// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoSynchronizer
// Superclass: NSObject
// Address: 0x112be6f58

@interface SCNeoSynchronizer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoSynchronizer init]
// Type encoding: @16@0:8
// Implementation: 0x1090c33fc

// -[SCNeoSynchronizer timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090c34a8

// -[SCNeoSynchronizer setTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090c34b0

// -[SCNeoSynchronizer time]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090c351c

// -[SCNeoSynchronizer setRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x1090c3524

// -[SCNeoSynchronizer rate]
// Type encoding: f16@0:8
// Implementation: 0x1090c3568

// -[SCNeoSynchronizer setRate:time:]
// Type encoding: v44@0:8f16{?=qiIq}20
// Implementation: 0x1090c3584

// -[SCNeoSynchronizer addAudioRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090c35e0

// -[SCNeoSynchronizer addVideoRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090c3688

// -[SCNeoSynchronizer removeAudioRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090c36cc

// -[SCNeoSynchronizer removeVideoRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090c3710

// -[SCNeoSynchronizer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090c3718

@end
