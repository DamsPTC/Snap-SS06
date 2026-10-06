// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebServerResponse
// Superclass: NSObject
// Address: 0x112b83c28

@interface SCWebServerResponse

// Property: additionalHeaders; attributes: T@"NSDictionary",R,N,V_headers
// Property: usesChunkedTransferEncoding; attributes: TB,R,N
// Property: contentType; attributes: T@"NSString",C,N,V_type
// Property: contentLength; attributes: TQ,N,V_length
// Property: statusCode; attributes: Tq,N,V_status
// Property: cacheControlMaxAge; attributes: TQ,N,V_maxAge
// Property: lastModifiedDate; attributes: T@"NSDate",&,N,V_lastModified
// Property: eTag; attributes: T@"NSString",C,N,V_eTag
// Property: gzipContentEncodingEnabled; attributes: TB,N,GisGZipContentEncodingEnabled,V_gzipped
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebServerResponse initWithRedirect:]
// Type encoding: @24@0:8@16
// Implementation: 0x107df11d8

// -[SCWebServerResponse init]
// Type encoding: @16@0:8
// Implementation: 0x107df0f08

// -[SCWebServerResponse setValue:forAdditionalHeader:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107df0fa4

// -[SCWebServerResponse hasBody]
// Type encoding: B16@0:8
// Implementation: 0x107df0fac

// -[SCWebServerResponse usesChunkedTransferEncoding]
// Type encoding: B16@0:8
// Implementation: 0x107df0fbc

// -[SCWebServerResponse open:]
// Type encoding: B24@0:8^@16
// Implementation: 0x107df0fdc

// -[SCWebServerResponse readData:]
// Type encoding: @24@0:8^@16
// Implementation: 0x107df0fe4

// -[SCWebServerResponse close]
// Type encoding: v16@0:8
// Implementation: 0x107df0ff0

// -[SCWebServerResponse prepareForReading]
// Type encoding: v16@0:8
// Implementation: 0x107df0ff4

// -[SCWebServerResponse performOpen:]
// Type encoding: B24@0:8^@16
// Implementation: 0x107df0ffc

// -[SCWebServerResponse performReadDataWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107df101c

// -[SCWebServerResponse performClose]
// Type encoding: v16@0:8
// Implementation: 0x107df10dc

// -[SCWebServerResponse contentType]
// Type encoding: @16@0:8
// Implementation: 0x107df10e4

// -[SCWebServerResponse setContentType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107df10ec

// -[SCWebServerResponse contentLength]
// Type encoding: Q16@0:8
// Implementation: 0x107df10f4

// -[SCWebServerResponse setContentLength:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107df10fc

// -[SCWebServerResponse statusCode]
// Type encoding: q16@0:8
// Implementation: 0x107df1104

// -[SCWebServerResponse setStatusCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x107df110c

// -[SCWebServerResponse cacheControlMaxAge]
// Type encoding: Q16@0:8
// Implementation: 0x107df1114

// -[SCWebServerResponse setCacheControlMaxAge:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107df111c

// -[SCWebServerResponse lastModifiedDate]
// Type encoding: @16@0:8
// Implementation: 0x107df1124

// -[SCWebServerResponse setLastModifiedDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107df112c

// -[SCWebServerResponse eTag]
// Type encoding: @16@0:8
// Implementation: 0x107df115c

// -[SCWebServerResponse setETag:]
// Type encoding: v24@0:8@16
// Implementation: 0x107df1164

// -[SCWebServerResponse isGZipContentEncodingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107df116c

// -[SCWebServerResponse setGzipContentEncodingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107df1174

// -[SCWebServerResponse additionalHeaders]
// Type encoding: @16@0:8
// Implementation: 0x107df117c

// -[SCWebServerResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107df1184

// +[SCWebServerResponse response]
// Type encoding: @16@0:8
// Implementation: 0x107df0ef0

@end
