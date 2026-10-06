// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRemixMetadata
// Superclass: NSObject
// Address: 0x112c61ca8

@interface SCRemixMetadata

// Property: replyParameters; attributes: T@"SCRemixReplyParameters",R,C,N,V_replyParameters
// Property: sourceUserId; attributes: T@"NSString",R,C,N,V_sourceUserId
// Property: sourceSnapId; attributes: T@"NSString",R,C,N,V_sourceSnapId
// Property: remixPermission; attributes: TQ,R,N,V_remixPermission
// Property: remixLaunchSource; attributes: TQ,R,N,V_remixLaunchSource
// Property: minimumTotalNonRemixDurationInMS; attributes: Td,R,N,V_minimumTotalNonRemixDurationInMS
// Property: minimumTotalSnapDurationInMS; attributes: Td,R,N,V_minimumTotalSnapDurationInMS
// Property: minimumRemixSegmentDurationInMS; attributes: Td,R,N,V_minimumRemixSegmentDurationInMS

// -[SCRemixMetadata initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0562a4

// -[SCRemixMetadata initWithReplyParameters:sourceUserId:sourceSnapId:remixPermission:remixLaunchSource:minimumTotalNonRemixDurationInMS:minimumTotalSnapDurationInMS:minimumRemixSegmentDurationInMS:]
// Type encoding: @80@0:8@16@24@32Q40Q48d56d64d72
// Implementation: 0x10b0563ec

// -[SCRemixMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b0564fc

// -[SCRemixMetadata encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b056520

// -[SCRemixMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b056604

// -[SCRemixMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0566f4

// -[SCRemixMetadata replyParameters]
// Type encoding: @16@0:8
// Implementation: 0x10b056870

// -[SCRemixMetadata sourceUserId]
// Type encoding: @16@0:8
// Implementation: 0x10b056878

// -[SCRemixMetadata sourceSnapId]
// Type encoding: @16@0:8
// Implementation: 0x10b056880

// -[SCRemixMetadata remixPermission]
// Type encoding: Q16@0:8
// Implementation: 0x10b056888

// -[SCRemixMetadata remixLaunchSource]
// Type encoding: Q16@0:8
// Implementation: 0x10b056890

// -[SCRemixMetadata minimumTotalNonRemixDurationInMS]
// Type encoding: d16@0:8
// Implementation: 0x10b056898

// -[SCRemixMetadata minimumTotalSnapDurationInMS]
// Type encoding: d16@0:8
// Implementation: 0x10b0568a0

// -[SCRemixMetadata minimumRemixSegmentDurationInMS]
// Type encoding: d16@0:8
// Implementation: 0x10b0568a8

// -[SCRemixMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0568b0

@end
