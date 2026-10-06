// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFStreamingMultipartFormData
// Superclass: NSObject
// Address: 0xada288

@interface AFStreamingMultipartFormData

// Property: request; attributes: T@"NSMutableURLRequest",C,N,V_request
// Property: bodyStream; attributes: T@"AFMultipartBodyStream",&,N,V_bodyStream
// Property: stringEncoding; attributes: TQ,N,V_stringEncoding

// -[AFStreamingMultipartFormData initWithURLRequest:stringEncoding:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x58e52c

// -[AFStreamingMultipartFormData appendPartWithFileData:name:fileName:mimeType:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x58e5ec

// -[AFStreamingMultipartFormData appendPartWithFormData:name:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x58e6fc

// -[AFStreamingMultipartFormData appendPartWithHeaders:body:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x58e7c8

// -[AFStreamingMultipartFormData requestByFinalizingMultipartFormData]
// Type encoding: @16@0:8
// Implementation: 0x58e890

// -[AFStreamingMultipartFormData request]
// Type encoding: @16@0:8
// Implementation: 0x58eb10

// -[AFStreamingMultipartFormData setRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x58eb18

// -[AFStreamingMultipartFormData bodyStream]
// Type encoding: @16@0:8
// Implementation: 0x58eb20

// -[AFStreamingMultipartFormData setBodyStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x58eb28

// -[AFStreamingMultipartFormData stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x58eb58

// -[AFStreamingMultipartFormData setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x58eb60

// -[AFStreamingMultipartFormData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x58eb68

@end
