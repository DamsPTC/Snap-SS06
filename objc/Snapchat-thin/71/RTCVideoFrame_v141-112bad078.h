// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: RTCVideoFrame_v141
// Superclass: NSObject
// Address: 0x112bad078

@interface RTCVideoFrame_v141

// Property: width; attributes: Ti,R,N
// Property: height; attributes: Ti,R,N
// Property: rotation; attributes: Tq,R,N
// Property: timeStampNs; attributes: Tq,R,N
// Property: timeStamp; attributes: Ti,N,VtimeStamp
// Property: buffer; attributes: T@"<RTCVideoFrameBuffer>",R,N,V_buffer

// -[RTCVideoFrame_v141 width]
// Type encoding: i16@0:8
// Implementation: 0x108b63644

// -[RTCVideoFrame_v141 height]
// Type encoding: i16@0:8
// Implementation: 0x108b6364c

// -[RTCVideoFrame_v141 rotation]
// Type encoding: q16@0:8
// Implementation: 0x108b63654

// -[RTCVideoFrame_v141 timeStampNs]
// Type encoding: q16@0:8
// Implementation: 0x108b6365c

// -[RTCVideoFrame_v141 newI420VideoFrame]
// Type encoding: @16@0:8
// Implementation: 0x108b63664

// -[RTCVideoFrame_v141 initWithBuffer:rotation:timeStampNs:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x108b636d0

// -[RTCVideoFrame_v141 buffer]
// Type encoding: @16@0:8
// Implementation: 0x108b63764

// -[RTCVideoFrame_v141 timeStamp]
// Type encoding: i16@0:8
// Implementation: 0x108b6376c

// -[RTCVideoFrame_v141 setTimeStamp:]
// Type encoding: v20@0:8i16
// Implementation: 0x108b63774

// -[RTCVideoFrame_v141 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108b6377c

@end
