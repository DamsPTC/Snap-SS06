// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGenAIIdentity
// Superclass: NSObject
// Address: 0x112be9398

@interface SCGenAIIdentity

// Property: identifier; attributes: T@"NSString",R,C,N,V_identifier
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: thumbnail; attributes: T@"SCGenAIEncryptedData",R,C,N,V_thumbnail
// Property: images; attributes: T@"NSArray",R,C,N,V_images
// Property: selfies; attributes: T@"NSArray",R,C,N,V_selfies
// Property: isPrimary; attributes: TB,R,N,V_isPrimary
// Property: bodytype; attributes: TQ,R,N,V_bodytype
// Property: cameosIdentity; attributes: T@"SCGenAICameosIdentity",R,C,N,V_cameosIdentity

// -[SCGenAIIdentity initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x109154304

// -[SCGenAIIdentity initWithIdentifier:name:thumbnail:images:selfies:isPrimary:bodytype:cameosIdentity:]
// Type encoding: @76@0:8@16@24@32@40@48B56Q60@68
// Implementation: 0x10915447c

// -[SCGenAIIdentity copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109154600

// -[SCGenAIIdentity encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x109154624

// -[SCGenAIIdentity hash]
// Type encoding: Q16@0:8
// Implementation: 0x1091546fc

// -[SCGenAIIdentity isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091547a8

// -[SCGenAIIdentity identifier]
// Type encoding: @16@0:8
// Implementation: 0x1091548d0

// -[SCGenAIIdentity name]
// Type encoding: @16@0:8
// Implementation: 0x1091548d8

// -[SCGenAIIdentity thumbnail]
// Type encoding: @16@0:8
// Implementation: 0x1091548e0

// -[SCGenAIIdentity images]
// Type encoding: @16@0:8
// Implementation: 0x1091548e8

// -[SCGenAIIdentity selfies]
// Type encoding: @16@0:8
// Implementation: 0x1091548f0

// -[SCGenAIIdentity isPrimary]
// Type encoding: B16@0:8
// Implementation: 0x1091548f8

// -[SCGenAIIdentity bodytype]
// Type encoding: Q16@0:8
// Implementation: 0x109154900

// -[SCGenAIIdentity cameosIdentity]
// Type encoding: @16@0:8
// Implementation: 0x109154908

// -[SCGenAIIdentity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109154910

@end
