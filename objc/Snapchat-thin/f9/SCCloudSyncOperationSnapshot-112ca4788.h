// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncOperationSnapshot
// Superclass: NSObject
// Address: 0x112ca4788

@interface SCCloudSyncOperationSnapshot

// Property: objectID; attributes: T@"NSString",R,C,N,V_objectID
// Property: createTimeUtc; attributes: T@"NSDate",R,C,N,V_createTimeUtc
// Property: payload; attributes: T@"NSData",R,C,N,V_payload
// Property: requestID; attributes: T@"NSString",R,C,N,V_requestID
// Property: seqNum; attributes: Tq,R,N,V_seqNum
// Property: tacomaOperationId_DEPRECATED; attributes: T@"NSNumber",R,C,N,V_tacomaOperationId_DEPRECATED
// Property: targetEntryId; attributes: T@"NSString",R,C,N,V_targetEntryId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSyncOperationSnapshot initWithObjectID:createTimeUtc:payload:requestID:seqNum:tacomaOperationId_DEPRECATED:targetEntryId:]
// Type encoding: @72@0:8@16@24@32@40q48@56@64
// Implementation: 0x10b6e7c44

// -[SCCloudSyncOperationSnapshot copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6e7db8

// -[SCCloudSyncOperationSnapshot initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6e7ddc

// -[SCCloudSyncOperationSnapshot encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e7f40

// -[SCCloudSyncOperationSnapshot preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b6e8004

// -[SCCloudSyncOperationSnapshot encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e800c

// -[SCCloudSyncOperationSnapshot decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e8098

// -[SCCloudSyncOperationSnapshot setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6e8198

// -[SCCloudSyncOperationSnapshot setSInt64:forUInt64Key:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x10b6e82b8

// -[SCCloudSyncOperationSnapshot isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6e82f8

// -[SCCloudSyncOperationSnapshot hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e8368

// -[SCCloudSyncOperationSnapshot description]
// Type encoding: @16@0:8
// Implementation: 0x10b6e8444

// -[SCCloudSyncOperationSnapshot objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6e862c

// -[SCCloudSyncOperationSnapshot createTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6e8634

// -[SCCloudSyncOperationSnapshot payload]
// Type encoding: @16@0:8
// Implementation: 0x10b6e863c

// -[SCCloudSyncOperationSnapshot requestID]
// Type encoding: @16@0:8
// Implementation: 0x10b6e8644

// -[SCCloudSyncOperationSnapshot seqNum]
// Type encoding: q16@0:8
// Implementation: 0x10b6e864c

// -[SCCloudSyncOperationSnapshot tacomaOperationId_DEPRECATED]
// Type encoding: @16@0:8
// Implementation: 0x10b6e8654

// -[SCCloudSyncOperationSnapshot targetEntryId]
// Type encoding: @16@0:8
// Implementation: 0x10b6e865c

// -[SCCloudSyncOperationSnapshot .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6e8664

// +[SCCloudSyncOperationSnapshot observe:dataObjectContext:queue:changeHandler:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b6e2388

// +[SCCloudSyncOperationSnapshot allKeys]
// Type encoding: @16@0:8
// Implementation: 0x10b6e2438

// +[SCCloudSyncOperationSnapshot cloudSyncOperationSnapshotWithCreateTimeUtc:payload:requestID:seqNum:tacomaOperationId_DEPRECATED:targetEntryId:]
// Type encoding: @64@0:8@16@24@32q40@48@56
// Implementation: 0x10b6d059c

// +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsWithOptions:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6b8254

// +[SCCloudSyncOperationSnapshot countOfCloudSyncOperationSnapshotsWithOptions:dataObjectContext:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10b6b8774

// +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForOwner:options:error:dataObjectContext:]
// Type encoding: @48@0:8@16@24^@32@40
// Implementation: 0x10b6b8a64

// +[SCCloudSyncOperationSnapshot countOfCloudSyncOperationSnapshotsForOwner:options:dataObjectContext:]
// Type encoding: Q40@0:8@16@24@32
// Implementation: 0x10b6b908c

// +[SCCloudSyncOperationSnapshot fetchFirstCloudSyncOperationSnapshotForOwner:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6aede8

// +[SCCloudSyncOperationSnapshot fetchLatestCloudSyncOperationSnapshotForOwner:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6aef48

// +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForOwner:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6af0a8

// +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForTargetEntryId:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6af1ec

// +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForReqeustId:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6af2b0

// +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsForReqeustIds:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6af398

// +[SCCloudSyncOperationSnapshot fetchCloudSyncOperationSnapshotsWithTacomaOperationId:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6af45c

// +[SCCloudSyncOperationSnapshot parseManagedObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6ad45c

// +[SCCloudSyncOperationSnapshot fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e82d8

// +[SCCloudSyncOperationSnapshot fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b6e82ec

@end
