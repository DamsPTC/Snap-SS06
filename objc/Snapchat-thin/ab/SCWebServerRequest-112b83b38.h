// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebServerRequest
// Superclass: NSObject
// Address: 0x112b83b38

@interface SCWebServerRequest

// Property: usesChunkedTransferEncoding; attributes: TB,R,N,V_chunked
// Property: localAddressData; attributes: T@"NSData",&,N,V_localAddress
// Property: remoteAddressData; attributes: T@"NSData",&,N,V_remoteAddress
// Property: method; attributes: T@"NSString",R,N,V_method
// Property: URL; attributes: T@"NSURL",R,N,V_url
// Property: headers; attributes: T@"NSDictionary",R,N,V_headers
// Property: path; attributes: T@"NSString",R,N,V_path
// Property: query; attributes: T@"NSDictionary",R,N,V_query
// Property: contentType; attributes: T@"NSString",R,N,V_type
// Property: contentLength; attributes: TQ,R,N,V_length
// Property: ifModifiedSince; attributes: T@"NSDate",R,N,V_modifiedSince
// Property: ifNoneMatch; attributes: T@"NSString",R,N,V_noneMatch
// Property: byteRange; attributes: T{_NSRange=QQ},R,N,V_range
// Property: acceptsGzipContentEncoding; attributes: TB,R,N,V_gzipAccepted
// Property: localAddressString; attributes: T@"NSString",R,N
// Property: remoteAddressString; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebServerRequest initWithMethod:url:headers:path:query:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107df02c4

// -[SCWebServerRequest hasBody]
// Type encoding: B16@0:8
// Implementation: 0x107df0824

// -[SCWebServerRequest hasByteRange]
// Type encoding: B16@0:8
// Implementation: 0x107df0834

// -[SCWebServerRequest attributeForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107df0848

// -[SCWebServerRequest open:]
// Type encoding: B24@0:8^@16
// Implementation: 0x107df0850

// -[SCWebServerRequest writeData:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x107df0858

// -[SCWebServerRequest close:]
// Type encoding: B24@0:8^@16
// Implementation: 0x107df0860

// -[SCWebServerRequest prepareForWriting]
// Type encoding: v16@0:8
// Implementation: 0x107df0868

// -[SCWebServerRequest performOpen:]
// Type encoding: B24@0:8^@16
// Implementation: 0x107df0940

// -[SCWebServerRequest performWriteData:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x107df0960

// -[SCWebServerRequest performClose:]
// Type encoding: B24@0:8^@16
// Implementation: 0x107df0968

// -[SCWebServerRequest setAttribute:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107df0970

// -[SCWebServerRequest localAddressString]
// Type encoding: @16@0:8
// Implementation: 0x107df0978

// -[SCWebServerRequest remoteAddressString]
// Type encoding: @16@0:8
// Implementation: 0x107df0994

// -[SCWebServerRequest method]
// Type encoding: @16@0:8
// Implementation: 0x107df09b0

// -[SCWebServerRequest URL]
// Type encoding: @16@0:8
// Implementation: 0x107df09b8

// -[SCWebServerRequest headers]
// Type encoding: @16@0:8
// Implementation: 0x107df09c0

// -[SCWebServerRequest path]
// Type encoding: @16@0:8
// Implementation: 0x107df09c8

// -[SCWebServerRequest query]
// Type encoding: @16@0:8
// Implementation: 0x107df09d0

// -[SCWebServerRequest contentType]
// Type encoding: @16@0:8
// Implementation: 0x107df09d8

// -[SCWebServerRequest contentLength]
// Type encoding: Q16@0:8
// Implementation: 0x107df09e0

// -[SCWebServerRequest ifModifiedSince]
// Type encoding: @16@0:8
// Implementation: 0x107df09e8

// -[SCWebServerRequest ifNoneMatch]
// Type encoding: @16@0:8
// Implementation: 0x107df09f0

// -[SCWebServerRequest byteRange]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x107df09f8

// -[SCWebServerRequest acceptsGzipContentEncoding]
// Type encoding: B16@0:8
// Implementation: 0x107df0a04

// -[SCWebServerRequest usesChunkedTransferEncoding]
// Type encoding: B16@0:8
// Implementation: 0x107df0a0c

// -[SCWebServerRequest localAddressData]
// Type encoding: @16@0:8
// Implementation: 0x107df0a14

// -[SCWebServerRequest setLocalAddressData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107df0a1c

// -[SCWebServerRequest remoteAddressData]
// Type encoding: @16@0:8
// Implementation: 0x107df0a4c

// -[SCWebServerRequest setRemoteAddressData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107df0a54

// -[SCWebServerRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107df0a84

@end
