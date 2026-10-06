// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUploadStatusUpdate
// Superclass: NSObject
// Address: 0x112c14458

@interface SCUploadStatusUpdate

// Property: mode; attributes: Tq,R,N,V_mode
// Property: sentBytes; attributes: T@"NSNumber",R,C,N,V_sentBytes
// Property: requestSentBytes; attributes: T@"NSNumber",R,C,N,V_requestSentBytes
// Property: confirmedBytes; attributes: T@"NSNumber",R,C,N,V_confirmedBytes
// Property: totalBytes; attributes: T@"NSNumber",R,C,N,V_totalBytes
// Property: chunked; attributes: TB,R,N,V_chunked
// Property: timestampMs; attributes: Tq,R,N,V_timestampMs

// -[SCUploadStatusUpdate initWithMode:sentBytes:requestSentBytes:confirmedBytes:totalBytes:chunked:timestampMs:]
// Type encoding: @68@0:8q16@24@32@40@48B56q60
// Implementation: 0x10af1e8f8

// -[SCUploadStatusUpdate copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10af1ea24

// -[SCUploadStatusUpdate hash]
// Type encoding: Q16@0:8
// Implementation: 0x10af1ea48

// -[SCUploadStatusUpdate isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af1eaf4

// -[SCUploadStatusUpdate mode]
// Type encoding: q16@0:8
// Implementation: 0x10af1ebfc

// -[SCUploadStatusUpdate sentBytes]
// Type encoding: @16@0:8
// Implementation: 0x10af1ec04

// -[SCUploadStatusUpdate requestSentBytes]
// Type encoding: @16@0:8
// Implementation: 0x10af1ec0c

// -[SCUploadStatusUpdate confirmedBytes]
// Type encoding: @16@0:8
// Implementation: 0x10af1ec14

// -[SCUploadStatusUpdate totalBytes]
// Type encoding: @16@0:8
// Implementation: 0x10af1ec1c

// -[SCUploadStatusUpdate chunked]
// Type encoding: B16@0:8
// Implementation: 0x10af1ec24

// -[SCUploadStatusUpdate timestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10af1ec2c

// -[SCUploadStatusUpdate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af1ec34

@end
