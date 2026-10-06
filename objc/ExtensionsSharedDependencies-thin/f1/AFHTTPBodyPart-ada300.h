// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFHTTPBodyPart
// Superclass: NSObject
// Address: 0xada300

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
// Implementation: 0x58f59c

// -[AFHTTPBodyPart dealloc]
// Type encoding: v16@0:8
// Implementation: 0x58f5fc

// -[AFHTTPBodyPart inputStream]
// Type encoding: @16@0:8
// Implementation: 0x58f654

// -[AFHTTPBodyPart stringForHeaders]
// Type encoding: @16@0:8
// Implementation: 0x58f7dc

// -[AFHTTPBodyPart contentLength]
// Type encoding: Q16@0:8
// Implementation: 0x58f9d4

// -[AFHTTPBodyPart hasBytesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x58fb8c

// -[AFHTTPBodyPart read:maxLength:]
// Type encoding: q32@0:8*16Q24
// Implementation: 0x58fbe0

// -[AFHTTPBodyPart readData:intoBuffer:maxLength:]
// Type encoding: q40@0:8@16*24Q32
// Implementation: 0x58fe90

// -[AFHTTPBodyPart transitionToNextPhase]
// Type encoding: B16@0:8
// Implementation: 0x58ff34

// -[AFHTTPBodyPart copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x590078

// -[AFHTTPBodyPart stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x590130

// -[AFHTTPBodyPart setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x590138

// -[AFHTTPBodyPart headers]
// Type encoding: @16@0:8
// Implementation: 0x590140

// -[AFHTTPBodyPart setHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x590148

// -[AFHTTPBodyPart body]
// Type encoding: @16@0:8
// Implementation: 0x590178

// -[AFHTTPBodyPart setBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x590180

// -[AFHTTPBodyPart bodyContentLength]
// Type encoding: Q16@0:8
// Implementation: 0x5901b0

// -[AFHTTPBodyPart setBodyContentLength:]
// Type encoding: v24@0:8Q16
// Implementation: 0x5901b8

// -[AFHTTPBodyPart setInputStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x5901c0

// -[AFHTTPBodyPart hasInitialBoundary]
// Type encoding: B16@0:8
// Implementation: 0x5901f0

// -[AFHTTPBodyPart setHasInitialBoundary:]
// Type encoding: v20@0:8B16
// Implementation: 0x5901f8

// -[AFHTTPBodyPart hasFinalBoundary]
// Type encoding: B16@0:8
// Implementation: 0x590200

// -[AFHTTPBodyPart setHasFinalBoundary:]
// Type encoding: v20@0:8B16
// Implementation: 0x590208

// -[AFHTTPBodyPart .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x590210

@end
