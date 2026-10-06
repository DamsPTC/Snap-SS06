// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaSegmentInfo
// Superclass: NSObject
// Address: 0x112be61e8

@interface SCNeoMediaSegmentInfo

// Property: presentationTime; attributes: T{?=qiIq},R,N,V_presentationTime
// Property: duration; attributes: T{?=qiIq},R,N,V_duration
// Property: bufferPosition; attributes: TQ,R,N,V_bufferPosition
// Property: sizeInBytes; attributes: TQ,R,N,V_sizeInBytes
// Property: startsWithSyncFrame; attributes: TB,R,N,V_startsWithSyncFrame

// -[SCNeoMediaSegmentInfo initWithPresentationTime:duration:bufferPosition:sizeInBytes:startsWithSyncFrame:]
// Type encoding: @84@0:8{?=qiIq}16{?=qiIq}40Q64Q72B80
// Implementation: 0x1090a4ad8

// -[SCNeoMediaSegmentInfo presentationTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a4b64

// -[SCNeoMediaSegmentInfo duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090a4b78

// -[SCNeoMediaSegmentInfo bufferPosition]
// Type encoding: Q16@0:8
// Implementation: 0x1090a4b8c

// -[SCNeoMediaSegmentInfo sizeInBytes]
// Type encoding: Q16@0:8
// Implementation: 0x1090a4b94

// -[SCNeoMediaSegmentInfo startsWithSyncFrame]
// Type encoding: B16@0:8
// Implementation: 0x1090a4b9c

@end
