// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSampleBufferRef
// Superclass: NSObject
// Address: 0x112c4bc28

@interface SCSampleBufferRef

// Property: sampleBuffer; attributes: T^{opaqueCMSampleBuffer=},R,N,V_sampleBuffer
// Property: isProcessedPhoto; attributes: TB,R,N,V_isProcessedPhoto
// Property: isRecordingVideo; attributes: TB,R,N,V_isRecordingVideo

// -[SCSampleBufferRef sc_copy]
// Type encoding: @16@0:8
// Implementation: 0x106f22078

// -[SCSampleBufferRef _copyCVPixelBuffer:]
// Type encoding: ^{__CVBuffer=}24@0:8^{__CVBuffer=}16
// Implementation: 0x106f220ec

// -[SCSampleBufferRef _copyCMSampleBufferWithImageBuffer:]
// Type encoding: ^{opaqueCMSampleBuffer=}24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x106f22310

// -[SCSampleBufferRef initWithSampleBuffer:isProcessedPhoto:isRecordingVideo:]
// Type encoding: @32@0:8^{opaqueCMSampleBuffer=}16B24B28
// Implementation: 0x1007099fc

// -[SCSampleBufferRef initWithSampleBuffer:]
// Type encoding: @24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10b014600

// -[SCSampleBufferRef sampleBuffer]
// Type encoding: ^{opaqueCMSampleBuffer=}16@0:8
// Implementation: 0x100709e44

// -[SCSampleBufferRef isProcessedPhoto]
// Type encoding: B16@0:8
// Implementation: 0x10b01460c

// -[SCSampleBufferRef isRecordingVideo]
// Type encoding: B16@0:8
// Implementation: 0x10b014614

@end
