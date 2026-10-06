// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFStreamingMultipartFormData
// Superclass: NSObject
// Address: 0x112cb21d0

@interface AFStreamingMultipartFormData

// Property: request; attributes: T@"NSMutableURLRequest",C,N,V_request
// Property: bodyStream; attributes: T@"AFMultipartBodyStream",&,N,V_bodyStream
// Property: stringEncoding; attributes: TQ,N,V_stringEncoding

// -[AFStreamingMultipartFormData initWithURLRequest:stringEncoding:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10b717134

// -[AFStreamingMultipartFormData appendPartWithFileData:name:fileName:mimeType:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10b7171f4

// -[AFStreamingMultipartFormData appendPartWithFormData:name:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b717304

// -[AFStreamingMultipartFormData appendPartWithHeaders:body:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7173d0

// -[AFStreamingMultipartFormData requestByFinalizingMultipartFormData]
// Type encoding: @16@0:8
// Implementation: 0x10b717498

// -[AFStreamingMultipartFormData request]
// Type encoding: @16@0:8
// Implementation: 0x10b717718

// -[AFStreamingMultipartFormData setRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b717720

// -[AFStreamingMultipartFormData bodyStream]
// Type encoding: @16@0:8
// Implementation: 0x10b717728

// -[AFStreamingMultipartFormData setBodyStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b717730

// -[AFStreamingMultipartFormData stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x10b717760

// -[AFStreamingMultipartFormData setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b717768

// -[AFStreamingMultipartFormData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b717770

@end
