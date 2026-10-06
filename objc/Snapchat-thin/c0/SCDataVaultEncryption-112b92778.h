// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDataVaultEncryption
// Superclass: NSObject
// Address: 0x112b92778

@interface SCDataVaultEncryption

// Property: location; attributes: T@"CLLocation",R,C,N,V_location
// Property: key; attributes: T@"NSData",R,C,N,V_key
// Property: IV; attributes: T@"NSData",R,C,N,V_IV
// Property: isEncrypted; attributes: TB,R,N,V_isEncrypted
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDataVaultEncryption initWithLocation:key:IV:isEncrypted:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x10800b0c8

// -[SCDataVaultEncryption copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10800b1b0

// -[SCDataVaultEncryption initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10800b1d4

// -[SCDataVaultEncryption encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10800b2c0

// -[SCDataVaultEncryption preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10800b348

// -[SCDataVaultEncryption encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10800b350

// -[SCDataVaultEncryption decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10800b3b8

// -[SCDataVaultEncryption setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10800b458

// -[SCDataVaultEncryption setBool:forUInt64Key:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10800b500

// -[SCDataVaultEncryption isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10800b540

// -[SCDataVaultEncryption hash]
// Type encoding: Q16@0:8
// Implementation: 0x10800b5b0

// -[SCDataVaultEncryption location]
// Type encoding: @16@0:8
// Implementation: 0x10800b668

// -[SCDataVaultEncryption key]
// Type encoding: @16@0:8
// Implementation: 0x10800b670

// -[SCDataVaultEncryption IV]
// Type encoding: @16@0:8
// Implementation: 0x10800b678

// -[SCDataVaultEncryption isEncrypted]
// Type encoding: B16@0:8
// Implementation: 0x10800b680

// -[SCDataVaultEncryption .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10800b688

// +[SCDataVaultEncryption fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10800b520

// +[SCDataVaultEncryption fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10800b534

@end
