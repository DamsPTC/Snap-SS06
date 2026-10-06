// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExpiringData
// Superclass: NSObject
// Address: 0x112cd33f8

@interface SCExpiringData

// Property: encrypted; attributes: TB,R,N,V_encrypted
// Property: anObject; attributes: T@,R,N,V_anObject
// Property: data; attributes: T@"NSData",R,C,N,V_data
// Property: expirationDate; attributes: T@"NSDate",R,C,N,V_expirationDate
// Property: clientEncryptionId; attributes: T@"NSString",R,C,N,V_clientEncryptionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExpiringData initWithEncrypted:anObject:data:expirationDate:clientEncryptionId:]
// Type encoding: @52@0:8B16@20@28@36@44
// Implementation: 0x10b7c41bc

// -[SCExpiringData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b7c42cc

// -[SCExpiringData initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c42f0

// -[SCExpiringData encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c4404

// -[SCExpiringData preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b7c44a0

// -[SCExpiringData encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c44a8

// -[SCExpiringData decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c451c

// -[SCExpiringData setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b7c45dc

// -[SCExpiringData setBool:forUInt64Key:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10b7c46bc

// -[SCExpiringData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7c46fc

// -[SCExpiringData hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b7c476c

// -[SCExpiringData encrypted]
// Type encoding: B16@0:8
// Implementation: 0x10b7c4830

// -[SCExpiringData anObject]
// Type encoding: @16@0:8
// Implementation: 0x10b7c4838

// -[SCExpiringData data]
// Type encoding: @16@0:8
// Implementation: 0x10b7c4840

// -[SCExpiringData expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x10b7c4848

// -[SCExpiringData clientEncryptionId]
// Type encoding: @16@0:8
// Implementation: 0x10b7c4850

// -[SCExpiringData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c4858

// +[SCExpiringData fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b7c46dc

// +[SCExpiringData fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b7c46f0

@end
