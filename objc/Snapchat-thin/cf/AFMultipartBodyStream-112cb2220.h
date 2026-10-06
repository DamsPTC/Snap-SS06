// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFMultipartBodyStream
// Superclass: NSInputStream
// Address: 0x112cb2220

@interface AFMultipartBodyStream

// Property: streamStatus; attributes: TQ,N,V_streamStatus
// Property: streamError; attributes: T@"NSError",&,N,V_streamError
// Property: stringEncoding; attributes: TQ,N,V_stringEncoding
// Property: HTTPBodyParts; attributes: T@"NSMutableArray",&,N,V_HTTPBodyParts
// Property: HTTPBodyPartEnumerator; attributes: T@"NSEnumerator",&,N,V_HTTPBodyPartEnumerator
// Property: currentHTTPBodyPart; attributes: T@"AFHTTPBodyPart",&,N,V_currentHTTPBodyPart
// Property: buffer; attributes: T@"NSMutableData",&,N,V_buffer
// Property: numberOfBytesInPacket; attributes: TQ,N,V_numberOfBytesInPacket
// Property: delay; attributes: Td,N,V_delay
// Property: contentLength; attributes: TQ,R,N
// Property: empty; attributes: TB,R,N,GisEmpty
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[AFMultipartBodyStream initWithStringEncoding:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b7177a0

// -[AFMultipartBodyStream setInitialAndFinalBoundaries]
// Type encoding: v16@0:8
// Implementation: 0x10b717840

// -[AFMultipartBodyStream appendHTTPBodyPart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7179f4

// -[AFMultipartBodyStream isEmpty]
// Type encoding: B16@0:8
// Implementation: 0x10b717a44

// -[AFMultipartBodyStream read:maxLength:]
// Type encoding: q32@0:8*16Q24
// Implementation: 0x10b717a84

// -[AFMultipartBodyStream getBuffer:length:]
// Type encoding: B32@0:8^*16^Q24
// Implementation: 0x10b717bec

// -[AFMultipartBodyStream hasBytesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b717bf4

// -[AFMultipartBodyStream open]
// Type encoding: v16@0:8
// Implementation: 0x10b717c10

// -[AFMultipartBodyStream close]
// Type encoding: v16@0:8
// Implementation: 0x10b717ca0

// -[AFMultipartBodyStream propertyForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b717ca8

// -[AFMultipartBodyStream setProperty:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b717cb0

// -[AFMultipartBodyStream scheduleInRunLoop:forMode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b717cb8

// -[AFMultipartBodyStream removeFromRunLoop:forMode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b717cbc

// -[AFMultipartBodyStream contentLength]
// Type encoding: Q16@0:8
// Implementation: 0x10b717cc0

// -[AFMultipartBodyStream _scheduleInCFRunLoop:forMode:]
// Type encoding: v32@0:8^{__CFRunLoop=}16^{__CFString=}24
// Implementation: 0x10b717dc4

// -[AFMultipartBodyStream _unscheduleFromCFRunLoop:forMode:]
// Type encoding: v32@0:8^{__CFRunLoop=}16^{__CFString=}24
// Implementation: 0x10b717dc8

// -[AFMultipartBodyStream _setCFClientFlags:callback:context:]
// Type encoding: B40@0:8Q16^?24^{?=q^v^?^?^?}32
// Implementation: 0x10b717dcc

// -[AFMultipartBodyStream copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b717dd4

// -[AFMultipartBodyStream streamStatus]
// Type encoding: Q16@0:8
// Implementation: 0x10b717f24

// -[AFMultipartBodyStream setStreamStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b717f34

// -[AFMultipartBodyStream streamError]
// Type encoding: @16@0:8
// Implementation: 0x10b717f44

// -[AFMultipartBodyStream setStreamError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b717f54

// -[AFMultipartBodyStream stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x10b717f94

// -[AFMultipartBodyStream setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b717fa4

// -[AFMultipartBodyStream HTTPBodyParts]
// Type encoding: @16@0:8
// Implementation: 0x10b717fb4

// -[AFMultipartBodyStream setHTTPBodyParts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b717fc4

// -[AFMultipartBodyStream HTTPBodyPartEnumerator]
// Type encoding: @16@0:8
// Implementation: 0x10b718004

// -[AFMultipartBodyStream setHTTPBodyPartEnumerator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b718014

// -[AFMultipartBodyStream currentHTTPBodyPart]
// Type encoding: @16@0:8
// Implementation: 0x10b718054

// -[AFMultipartBodyStream setCurrentHTTPBodyPart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b718064

// -[AFMultipartBodyStream buffer]
// Type encoding: @16@0:8
// Implementation: 0x10b7180a4

// -[AFMultipartBodyStream setBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7180b4

// -[AFMultipartBodyStream numberOfBytesInPacket]
// Type encoding: Q16@0:8
// Implementation: 0x10b7180f4

// -[AFMultipartBodyStream setNumberOfBytesInPacket:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b718104

// -[AFMultipartBodyStream delay]
// Type encoding: d16@0:8
// Implementation: 0x10b718114

// -[AFMultipartBodyStream setDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b718124

// -[AFMultipartBodyStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b718134

@end
