// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatMediaFetchMetadata
// Superclass: SCDocObject
// Address: 0x112a14838

@interface SCProfileChatMediaFetchMetadata

// Property: ownerIdentifier; attributes: T@"NSString",R,C,N,V_ownerIdentifier
// Property: checksum; attributes: T@"NSString",R,C,N,V_checksum
// Property: paginationSequenceNumber; attributes: T@"NSArray",R,C,N,V_paginationSequenceNumber
// Property: expirationTimestamp; attributes: TQ,R,N,V_expirationTimestamp

// -[SCProfileChatMediaFetchMetadata initWithOwnerIdentifier:checksum:paginationSeqNumMap:expirationTimestamp:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x10508dd6c

// -[SCProfileChatMediaFetchMetadata paginationSeqNumMap]
// Type encoding: @16@0:8
// Implementation: 0x10508de08

// -[SCProfileChatMediaFetchMetadata _toMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10508de58

// -[SCProfileChatMediaFetchMetadata _fromMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10508dfe8

// -[SCProfileChatMediaFetchMetadata initWithOwnerIdentifier:checksum:paginationSequenceNumber:expirationTimestamp:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x10508fbbc

// -[SCProfileChatMediaFetchMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10508fcbc

// -[SCProfileChatMediaFetchMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x10508fce0

// -[SCProfileChatMediaFetchMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10508fd7c

// -[SCProfileChatMediaFetchMetadata ownerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10508fe6c

// -[SCProfileChatMediaFetchMetadata checksum]
// Type encoding: @16@0:8
// Implementation: 0x10508fe7c

// -[SCProfileChatMediaFetchMetadata paginationSequenceNumber]
// Type encoding: @16@0:8
// Implementation: 0x10508fe8c

// -[SCProfileChatMediaFetchMetadata expirationTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x10508fe9c

// -[SCProfileChatMediaFetchMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10508feac

// +[SCProfileChatMediaFetchMetadata table]
// Type encoding: r*16@0:8
// Implementation: 0x105090b00

// +[SCProfileChatMediaFetchMetadata immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x105090b0c

// +[SCProfileChatMediaFetchMetadata objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x105090e6c

@end
