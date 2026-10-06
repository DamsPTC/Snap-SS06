// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFHTTPBodyPart
// Superclass: NSObject
// Address: 0x112cb2248

@interface AFHTTPBodyPart

// Property: stringEncoding; attributes: TQ,N,V_stringEncoding
// Property: headers; attributes: T@"NSDictionary",&,N,V_headers
// Property: body; attributes: T@,&,N,V_body
// Property: bodyContentLength; attributes: TQ,N,V_bodyContentLength
// Property: inputStream; attributes: T@"NSInputStream",&,N,V_inputStream
// Property: hasInitialBoundary; attributes: TB,N,V_hasInitialBoundary
// Property: hasFinalBoundary; attributes: TB,N,V_hasFinalBoundary
// Property: bytesAvailable; attributes: TB,R,N,GhasBytesAvailable
// Property: contentLength; attributes: TQ,R,N

// -[AFHTTPBodyPart init]
// Type encoding: @16@0:8
// Implementation: 0x10b7181a4

// -[AFHTTPBodyPart dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b718204

// -[AFHTTPBodyPart inputStream]
// Type encoding: @16@0:8
// Implementation: 0x10b71825c

// -[AFHTTPBodyPart stringForHeaders]
// Type encoding: @16@0:8
// Implementation: 0x10b7183e4

// -[AFHTTPBodyPart contentLength]
// Type encoding: Q16@0:8
// Implementation: 0x10b7185dc

// -[AFHTTPBodyPart hasBytesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b718794

// -[AFHTTPBodyPart read:maxLength:]
// Type encoding: q32@0:8*16Q24
// Implementation: 0x10b7187e8

// -[AFHTTPBodyPart readData:intoBuffer:maxLength:]
// Type encoding: q40@0:8@16*24Q32
// Implementation: 0x10b718a98

// -[AFHTTPBodyPart transitionToNextPhase]
// Type encoding: B16@0:8
// Implementation: 0x10b718b3c

// -[AFHTTPBodyPart copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b718c80

// -[AFHTTPBodyPart stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x10b718d38

// -[AFHTTPBodyPart setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b718d40

// -[AFHTTPBodyPart headers]
// Type encoding: @16@0:8
// Implementation: 0x10b718d48

// -[AFHTTPBodyPart setHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b718d50

// -[AFHTTPBodyPart body]
// Type encoding: @16@0:8
// Implementation: 0x10b718d80

// -[AFHTTPBodyPart setBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b718d88

// -[AFHTTPBodyPart bodyContentLength]
// Type encoding: Q16@0:8
// Implementation: 0x10b718db8

// -[AFHTTPBodyPart setBodyContentLength:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b718dc0

// -[AFHTTPBodyPart setInputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b718dc8

// -[AFHTTPBodyPart hasInitialBoundary]
// Type encoding: B16@0:8
// Implementation: 0x10b718df8

// -[AFHTTPBodyPart setHasInitialBoundary:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b718e00

// -[AFHTTPBodyPart hasFinalBoundary]
// Type encoding: B16@0:8
// Implementation: 0x10b718e08

// -[AFHTTPBodyPart setHasFinalBoundary:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b718e10

// -[AFHTTPBodyPart .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b718e18

@end
