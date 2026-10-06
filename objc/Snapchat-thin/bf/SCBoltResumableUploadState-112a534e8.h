// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoltResumableUploadState
// Superclass: NSObject
// Address: 0x112a534e8

@interface SCBoltResumableUploadState

// Property: boltUploadLocation; attributes: T@"SCBoltv2UploadLocation",R,C,N,V_boltUploadLocation
// Property: bytesUploaded; attributes: Tq,R,N,V_bytesUploaded
// Property: isBytesUploadedFromGcs; attributes: TB,R,N,V_isBytesUploadedFromGcs
// Property: resumableURI; attributes: T@"NSURL",R,C,N,V_resumableURI
// Property: resumableURIExpiry; attributes: T@"NSDate",R,C,N,V_resumableURIExpiry

// -[SCBoltResumableUploadState initWithBoltUploadLocation:bytesUploaded:isBytesUploadedFromGcs:resumableURI:resumableURIExpiry:]
// Type encoding: @52@0:8@16q24B32@36@44
// Implementation: 0x10562ffb0

// -[SCBoltResumableUploadState initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056300a0

// -[SCBoltResumableUploadState copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1056301a0

// -[SCBoltResumableUploadState encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056301c4

// -[SCBoltResumableUploadState hash]
// Type encoding: Q16@0:8
// Implementation: 0x105630260

// -[SCBoltResumableUploadState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056302f4

// -[SCBoltResumableUploadState boltUploadLocation]
// Type encoding: @16@0:8
// Implementation: 0x1056303d4

// -[SCBoltResumableUploadState bytesUploaded]
// Type encoding: q16@0:8
// Implementation: 0x1056303dc

// -[SCBoltResumableUploadState isBytesUploadedFromGcs]
// Type encoding: B16@0:8
// Implementation: 0x1056303e4

// -[SCBoltResumableUploadState resumableURI]
// Type encoding: @16@0:8
// Implementation: 0x1056303ec

// -[SCBoltResumableUploadState resumableURIExpiry]
// Type encoding: @16@0:8
// Implementation: 0x1056303f4

// -[SCBoltResumableUploadState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056303fc

@end
