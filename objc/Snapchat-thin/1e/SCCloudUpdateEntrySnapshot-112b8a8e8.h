// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudUpdateEntrySnapshot
// Superclass: NSObject
// Address: 0x112b8a8e8

@interface SCCloudUpdateEntrySnapshot

// Property: profile; attributes: T@"<SCGalleryProfile>",R,C,N,V_profile
// Property: entryId; attributes: T@"NSString",R,C,N,V_entryId
// Property: title; attributes: T@"NSString",R,C,N,V_title
// Property: deletedSnapId; attributes: T@"NSString",R,C,N,V_deletedSnapId
// Property: snapPlaceholder; attributes: T@"<SCGallerySnap>",R,C,N,V_snapPlaceholder
// Property: detailPlaceholder; attributes: T@"<SCGallerySnapDetail>",R,C,N,V_detailPlaceholder
// Property: miniThumbnailPlaceholder; attributes: T@"<SCGallerySnapMiniThumbnail>",R,C,N,V_miniThumbnailPlaceholder
// Property: dataVaultEncryption; attributes: T@"NSDictionary",R,C,N,V_dataVaultEncryption
// Property: updatedSnapsOrder; attributes: T@"NSDictionary",R,C,N,V_updatedSnapsOrder
// Property: userContext; attributes: T@"SCCloudSyncTriggerUserContext",R,C,N,V_userContext
// Property: requiresSyncStatusUpdate; attributes: TB,R,N,V_requiresSyncStatusUpdate
// Property: deleteSharedSnapForAll; attributes: TB,R,N,V_deleteSharedSnapForAll
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudUpdateEntrySnapshot initWithProfile:entryId:title:deletedSnapId:snapPlaceholder:detailPlaceholder:miniThumbnailPlaceholder:dataVaultEncryption:updatedSnapsOrder:userContext:requiresSyncStatusUpdate:deleteSharedSnapForAll:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88B96B100
// Implementation: 0x107ef381c

// -[SCCloudUpdateEntrySnapshot copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107ef3a54

// -[SCCloudUpdateEntrySnapshot initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ef3a78

// -[SCCloudUpdateEntrySnapshot encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ef3c90

// -[SCCloudUpdateEntrySnapshot preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x107ef3db8

// -[SCCloudUpdateEntrySnapshot encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ef3dc0

// -[SCCloudUpdateEntrySnapshot decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ef3e88

// -[SCCloudUpdateEntrySnapshot setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107ef4014

// -[SCCloudUpdateEntrySnapshot setBool:forUInt64Key:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x107ef41e4

// -[SCCloudUpdateEntrySnapshot isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ef4248

// -[SCCloudUpdateEntrySnapshot hash]
// Type encoding: Q16@0:8
// Implementation: 0x107ef42c8

// -[SCCloudUpdateEntrySnapshot profile]
// Type encoding: @16@0:8
// Implementation: 0x107ef43dc

// -[SCCloudUpdateEntrySnapshot entryId]
// Type encoding: @16@0:8
// Implementation: 0x107ef43e4

// -[SCCloudUpdateEntrySnapshot title]
// Type encoding: @16@0:8
// Implementation: 0x107ef43ec

// -[SCCloudUpdateEntrySnapshot deletedSnapId]
// Type encoding: @16@0:8
// Implementation: 0x107ef43f4

// -[SCCloudUpdateEntrySnapshot snapPlaceholder]
// Type encoding: @16@0:8
// Implementation: 0x107ef43fc

// -[SCCloudUpdateEntrySnapshot detailPlaceholder]
// Type encoding: @16@0:8
// Implementation: 0x107ef4404

// -[SCCloudUpdateEntrySnapshot miniThumbnailPlaceholder]
// Type encoding: @16@0:8
// Implementation: 0x107ef440c

// -[SCCloudUpdateEntrySnapshot dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x107ef4414

// -[SCCloudUpdateEntrySnapshot updatedSnapsOrder]
// Type encoding: @16@0:8
// Implementation: 0x107ef441c

// -[SCCloudUpdateEntrySnapshot userContext]
// Type encoding: @16@0:8
// Implementation: 0x107ef4424

// -[SCCloudUpdateEntrySnapshot requiresSyncStatusUpdate]
// Type encoding: B16@0:8
// Implementation: 0x107ef442c

// -[SCCloudUpdateEntrySnapshot deleteSharedSnapForAll]
// Type encoding: B16@0:8
// Implementation: 0x107ef4434

// -[SCCloudUpdateEntrySnapshot .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ef443c

// +[SCCloudUpdateEntrySnapshot fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x107ef4228

// +[SCCloudUpdateEntrySnapshot fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x107ef423c

@end
