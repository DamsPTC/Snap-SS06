// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeltaSyncPersistedToken
// Superclass: SCDocObject
// Address: 0x112a2f548

@interface SCDeltaSyncPersistedToken

// Property: kind; attributes: T@"NSString",R,C,N,V_kind
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: id; attributes: Tq,R,N,V_id
// Property: contents; attributes: T@"NSData",R,C,N,V_contents
// Property: version; attributes: Tq,R,N,V_version

// -[SCDeltaSyncPersistedToken initWithKind:name:id:contents:version:]
// Type encoding: @56@0:8@16@24q32@40q48
// Implementation: 0x100c195d8

// -[SCDeltaSyncPersistedToken copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1053b8e80

// -[SCDeltaSyncPersistedToken hash]
// Type encoding: Q16@0:8
// Implementation: 0x1053b8ea4

// -[SCDeltaSyncPersistedToken isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1053b8f54

// -[SCDeltaSyncPersistedToken kind]
// Type encoding: @16@0:8
// Implementation: 0x1053b905c

// -[SCDeltaSyncPersistedToken name]
// Type encoding: @16@0:8
// Implementation: 0x1053b906c

// -[SCDeltaSyncPersistedToken id]
// Type encoding: q16@0:8
// Implementation: 0x1053b907c

// -[SCDeltaSyncPersistedToken contents]
// Type encoding: @16@0:8
// Implementation: 0x100c19bcc

// -[SCDeltaSyncPersistedToken version]
// Type encoding: q16@0:8
// Implementation: 0x100c19bbc

// -[SCDeltaSyncPersistedToken .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c19cbc

// +[SCDeltaSyncPersistedToken table]
// Type encoding: r*16@0:8
// Implementation: 0x100c179f4

// +[SCDeltaSyncPersistedToken immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x100c193c8

// +[SCDeltaSyncPersistedToken objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x1053b9340

@end
