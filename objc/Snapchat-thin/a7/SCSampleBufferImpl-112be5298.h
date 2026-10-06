// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSampleBufferImpl
// Superclass: NSObject
// Address: 0x112be5298

@interface SCSampleBufferImpl

// Property: sampleBufferId; attributes: T@"NSString",R,C,N,V_sampleBufferId
// Property: savingSource; attributes: TQ,R,N,V_savingSource
// Property: isFileSource; attributes: TB,R,N,V_isFileSource
// Property: orientation; attributes: Tq,R,N,V_orientation
// Property: sampleBuffer; attributes: T^{opaqueCMSampleBuffer=},R,N,V_sampleBuffer
// Property: previewSampleBuffer; attributes: T^{opaqueCMSampleBuffer=},R,N
// Property: fillMode; attributes: TQ,R,N,V_fillMode
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSampleBufferImpl initWithSampleBuffer:savingSource:isFileSource:orientation:identifier:fillMode:]
// Type encoding: @60@0:8^{opaqueCMSampleBuffer=}16Q24B32q36@44Q52
// Implementation: 0x100709594

// -[SCSampleBufferImpl previewSampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x100883c9c

// -[SCSampleBufferImpl sampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x10908e310

// -[SCSampleBufferImpl sampleBufferId]
// Type encoding: @16@0:8
// Implementation: 0x1008be92c

// -[SCSampleBufferImpl savingSource]
// Type encoding: Q16@0:8
// Implementation: 0x100709714

// -[SCSampleBufferImpl fillMode]
// Type encoding: Q16@0:8
// Implementation: 0x1008bea6c

// -[SCSampleBufferImpl isFileSource]
// Type encoding: B16@0:8
// Implementation: 0x10908e318

// -[SCSampleBufferImpl orientation]
// Type encoding: q16@0:8
// Implementation: 0x1008beb50

// -[SCSampleBufferImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10070b1a4

@end
