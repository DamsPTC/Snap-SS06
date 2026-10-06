// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatAttachmentFetchMetadata
// Superclass: SCDocObject
// Address: 0x112a13f28

@interface SCProfileChatAttachmentFetchMetadata

// Property: ownerIdentifier; attributes: T@"NSString",R,C,N,V_ownerIdentifier
// Property: checksum; attributes: T@"NSString",R,C,N,V_checksum
// Property: paginationSequenceNumber; attributes: T@"NSArray",R,C,N,V_paginationSequenceNumber
// Property: expirationTimestamp; attributes: TQ,R,N,V_expirationTimestamp

// -[SCProfileChatAttachmentFetchMetadata initWithOwnerIdentifier:checksum:paginationSeqNumMap:expirationTimestamp:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x105076b94

// -[SCProfileChatAttachmentFetchMetadata paginationSeqNumMap]
// Type encoding: @16@0:8
// Implementation: 0x105076c30

// -[SCProfileChatAttachmentFetchMetadata _toMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x105076c80

// -[SCProfileChatAttachmentFetchMetadata _fromMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x105076e10

// -[SCProfileChatAttachmentFetchMetadata initWithOwnerIdentifier:checksum:paginationSequenceNumber:expirationTimestamp:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x105078aac

// -[SCProfileChatAttachmentFetchMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105078bac

// -[SCProfileChatAttachmentFetchMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x105078bd0

// -[SCProfileChatAttachmentFetchMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105078c6c

// -[SCProfileChatAttachmentFetchMetadata ownerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105078d5c

// -[SCProfileChatAttachmentFetchMetadata checksum]
// Type encoding: @16@0:8
// Implementation: 0x105078d6c

// -[SCProfileChatAttachmentFetchMetadata paginationSequenceNumber]
// Type encoding: @16@0:8
// Implementation: 0x105078d7c

// -[SCProfileChatAttachmentFetchMetadata expirationTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x105078d8c

// -[SCProfileChatAttachmentFetchMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105078d9c

// +[SCProfileChatAttachmentFetchMetadata table]
// Type encoding: r*16@0:8
// Implementation: 0x10507d500

// +[SCProfileChatAttachmentFetchMetadata immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x10507d50c

// +[SCProfileChatAttachmentFetchMetadata objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x10507d86c

@end
