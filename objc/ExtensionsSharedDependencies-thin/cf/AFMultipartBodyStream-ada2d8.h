// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFMultipartBodyStream
// Superclass: NSInputStream
// Address: 0xada2d8

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
// Implementation: 0x58eb98

// -[AFMultipartBodyStream setInitialAndFinalBoundaries]
// Type encoding: v16@0:8
// Implementation: 0x58ec38

// -[AFMultipartBodyStream appendHTTPBodyPart:]
// Type encoding: v24@0:8@16
// Implementation: 0x58edec

// -[AFMultipartBodyStream isEmpty]
// Type encoding: B16@0:8
// Implementation: 0x58ee3c

// -[AFMultipartBodyStream read:maxLength:]
// Type encoding: q32@0:8*16Q24
// Implementation: 0x58ee7c

// -[AFMultipartBodyStream getBuffer:length:]
// Type encoding: B32@0:8^*16^Q24
// Implementation: 0x58efe4

// -[AFMultipartBodyStream hasBytesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x58efec

// -[AFMultipartBodyStream open]
// Type encoding: v16@0:8
// Implementation: 0x58f008

// -[AFMultipartBodyStream close]
// Type encoding: v16@0:8
// Implementation: 0x58f098

// -[AFMultipartBodyStream propertyForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x58f0a0

// -[AFMultipartBodyStream setProperty:forKey:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x58f0a8

// -[AFMultipartBodyStream scheduleInRunLoop:forMode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x58f0b0

// -[AFMultipartBodyStream removeFromRunLoop:forMode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x58f0b4

// -[AFMultipartBodyStream contentLength]
// Type encoding: Q16@0:8
// Implementation: 0x58f0b8

// -[AFMultipartBodyStream _scheduleInCFRunLoop:forMode:]
// Type encoding: v32@0:8^{__CFRunLoop=}16^{__CFString=}24
// Implementation: 0x58f1bc

// -[AFMultipartBodyStream _unscheduleFromCFRunLoop:forMode:]
// Type encoding: v32@0:8^{__CFRunLoop=}16^{__CFString=}24
// Implementation: 0x58f1c0

// -[AFMultipartBodyStream _setCFClientFlags:callback:context:]
// Type encoding: B40@0:8Q16^?24^{?=q^v^?^?^?}32
// Implementation: 0x58f1c4

// -[AFMultipartBodyStream copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x58f1cc

// -[AFMultipartBodyStream streamStatus]
// Type encoding: Q16@0:8
// Implementation: 0x58f31c

// -[AFMultipartBodyStream setStreamStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x58f32c

// -[AFMultipartBodyStream streamError]
// Type encoding: @16@0:8
// Implementation: 0x58f33c

// -[AFMultipartBodyStream setStreamError:]
// Type encoding: v24@0:8@16
// Implementation: 0x58f34c

// -[AFMultipartBodyStream stringEncoding]
// Type encoding: Q16@0:8
// Implementation: 0x58f38c

// -[AFMultipartBodyStream setStringEncoding:]
// Type encoding: v24@0:8Q16
// Implementation: 0x58f39c

// -[AFMultipartBodyStream HTTPBodyParts]
// Type encoding: @16@0:8
// Implementation: 0x58f3ac

// -[AFMultipartBodyStream setHTTPBodyParts:]
// Type encoding: v24@0:8@16
// Implementation: 0x58f3bc

// -[AFMultipartBodyStream HTTPBodyPartEnumerator]
// Type encoding: @16@0:8
// Implementation: 0x58f3fc

// -[AFMultipartBodyStream setHTTPBodyPartEnumerator:]
// Type encoding: v24@0:8@16
// Implementation: 0x58f40c

// -[AFMultipartBodyStream currentHTTPBodyPart]
// Type encoding: @16@0:8
// Implementation: 0x58f44c

// -[AFMultipartBodyStream setCurrentHTTPBodyPart:]
// Type encoding: v24@0:8@16
// Implementation: 0x58f45c

// -[AFMultipartBodyStream buffer]
// Type encoding: @16@0:8
// Implementation: 0x58f49c

// -[AFMultipartBodyStream setBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x58f4ac

// -[AFMultipartBodyStream numberOfBytesInPacket]
// Type encoding: Q16@0:8
// Implementation: 0x58f4ec

// -[AFMultipartBodyStream setNumberOfBytesInPacket:]
// Type encoding: v24@0:8Q16
// Implementation: 0x58f4fc

// -[AFMultipartBodyStream delay]
// Type encoding: d16@0:8
// Implementation: 0x58f50c

// -[AFMultipartBodyStream setDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x58f51c

// -[AFMultipartBodyStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x58f52c

@end
