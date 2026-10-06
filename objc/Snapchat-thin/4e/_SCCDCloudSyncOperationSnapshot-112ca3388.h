// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: _SCCDCloudSyncOperationSnapshot
// Superclass: NSManagedObject
// Address: 0x112ca3388

@interface _SCCDCloudSyncOperationSnapshot

// Property: objectID; attributes: T@"SCCDCloudSyncOperationSnapshotID",R,N
// Property: createTimeUtc; attributes: T@"NSDate",&,D,N
// Property: payload; attributes: T@"NSData",&,D,N
// Property: requestID; attributes: T@"NSString",&,D,N
// Property: seqNum; attributes: T@"NSNumber",&,D,N
// Property: seqNumValue; attributes: Tq
// Property: tacomaOperationId_DEPRECATED; attributes: T@"NSNumber",&,D,N
// Property: targetEntryId; attributes: T@"NSString",&,D,N
// Property: owner; attributes: T@"SCCDGalleryProfile",&,D,N

// -[_SCCDCloudSyncOperationSnapshot objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6a40c0

// -[_SCCDCloudSyncOperationSnapshot seqNumValue]
// Type encoding: q16@0:8
// Implementation: 0x10b6a41ec

// -[_SCCDCloudSyncOperationSnapshot setSeqNumValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6a4228

// -[_SCCDCloudSyncOperationSnapshot primitiveSeqNumValue]
// Type encoding: q16@0:8
// Implementation: 0x10b6a426c

// -[_SCCDCloudSyncOperationSnapshot setPrimitiveSeqNumValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6a42a8

// +[_SCCDCloudSyncOperationSnapshot insertInManagedObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6a4084

// +[_SCCDCloudSyncOperationSnapshot entityName]
// Type encoding: @16@0:8
// Implementation: 0x10b6a409c

// +[_SCCDCloudSyncOperationSnapshot entityInManagedObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6a40a8

// +[_SCCDCloudSyncOperationSnapshot keyPathsForValuesAffectingValueForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6a40fc

@end
