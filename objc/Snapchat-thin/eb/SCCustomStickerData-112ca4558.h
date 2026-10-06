// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStickerData
// Superclass: NSObject
// Address: 0x112ca4558

@interface SCCustomStickerData

// Property: objectID; attributes: T@"NSString",R,C,N,V_objectID
// Property: creationTime; attributes: T@"NSDate",R,C,N,V_creationTime
// Property: encIv; attributes: T@"NSString",R,C,N,V_encIv
// Property: encKey; attributes: T@"NSString",R,C,N,V_encKey
// Property: isSynced; attributes: TB,R,N,V_isSynced
// Property: lastInteractionTime; attributes: T@"NSDate",R,C,N,V_lastInteractionTime
// Property: numSyncFailed; attributes: Ti,R,N,V_numSyncFailed
// Property: originalSnapId; attributes: T@"NSString",R,C,N,V_originalSnapId
// Property: packId; attributes: T@"NSString",R,C,N,V_packId
// Property: stickerId; attributes: T@"NSString",R,C,N,V_stickerId
// Property: type; attributes: Ti,R,N,V_type
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCustomStickerData initWithObjectID:creationTime:encIv:encKey:isSynced:lastInteractionTime:numSyncFailed:originalSnapId:packId:stickerId:type:]
// Type encoding: @92@0:8@16@24@32@40B48@52i60@64@72@80i88
// Implementation: 0x10b6e56b0

// -[SCCustomStickerData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6e58a0

// -[SCCustomStickerData initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6e58c4

// -[SCCustomStickerData encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e5aa0

// -[SCCustomStickerData preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b6e5bb4

// -[SCCustomStickerData encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e5bbc

// -[SCCustomStickerData decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e5c78

// -[SCCustomStickerData setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6e5dd8

// -[SCCustomStickerData setBool:forUInt64Key:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10b6e5f68

// -[SCCustomStickerData setSInt32:forUInt64Key:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x10b6e5f88

// -[SCCustomStickerData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6e5fec

// -[SCCustomStickerData hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e6094

// -[SCCustomStickerData description]
// Type encoding: @16@0:8
// Implementation: 0x10b6e6190

// -[SCCustomStickerData objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6e6478

// -[SCCustomStickerData creationTime]
// Type encoding: @16@0:8
// Implementation: 0x10b6e6480

// -[SCCustomStickerData encIv]
// Type encoding: @16@0:8
// Implementation: 0x10b6e6488

// -[SCCustomStickerData encKey]
// Type encoding: @16@0:8
// Implementation: 0x10b6e6490

// -[SCCustomStickerData isSynced]
// Type encoding: B16@0:8
// Implementation: 0x10b6e6498

// -[SCCustomStickerData lastInteractionTime]
// Type encoding: @16@0:8
// Implementation: 0x10b6e64a0

// -[SCCustomStickerData numSyncFailed]
// Type encoding: i16@0:8
// Implementation: 0x10b6e64a8

// -[SCCustomStickerData originalSnapId]
// Type encoding: @16@0:8
// Implementation: 0x10b6e64b0

// -[SCCustomStickerData packId]
// Type encoding: @16@0:8
// Implementation: 0x10b6e64b8

// -[SCCustomStickerData stickerId]
// Type encoding: @16@0:8
// Implementation: 0x10b6e64c0

// -[SCCustomStickerData type]
// Type encoding: i16@0:8
// Implementation: 0x10b6e64c8

// -[SCCustomStickerData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6e64d0

// +[SCCustomStickerData observe:dataObjectContext:queue:changeHandler:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b6a3c14

// +[SCCustomStickerData allKeys]
// Type encoding: @16@0:8
// Implementation: 0x10b6a3cc4

// +[SCCustomStickerData customStickerDataWithCreationTime:encIv:encKey:isSynced:lastInteractionTime:numSyncFailed:originalSnapId:packId:stickerId:type:]
// Type encoding: @84@0:8@16@24@32B40@44i52@56@64@72i80
// Implementation: 0x10b6a1278

// +[SCCustomStickerData fetchCustomStickerDataWithOptions:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b69d908

// +[SCCustomStickerData countOfCustomStickerDataWithOptions:dataObjectContext:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10b69de28

// +[SCCustomStickerData fetchCustomStickerDataForOwner:options:error:dataObjectContext:]
// Type encoding: @48@0:8@16@24^@32@40
// Implementation: 0x10b69e118

// +[SCCustomStickerData countOfCustomStickerDataForOwner:options:dataObjectContext:]
// Type encoding: Q40@0:8@16@24@32
// Implementation: 0x10b69e740

// +[SCCustomStickerData fetchCustomStickerDataWithStickerId:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b69d1ec

// +[SCCustomStickerData fetchAllCustomStickerDataWithdataObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b69d2e0

// +[SCCustomStickerData fetchSyncedCustomStickerDataForOwner:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b69d398

// +[SCCustomStickerData fetchUnSyncedCustomStickerDataForOwner:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b69d470

// +[SCCustomStickerData fetchSyncedScissorCustomStickerDataForOwnerV2:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b69d548

// +[SCCustomStickerData fetchUnSyncedScissorCustomStickerDataForOwnerV2:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b69d634

// +[SCCustomStickerData parseManagedObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b69ce5c

// +[SCCustomStickerData fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b6e5fcc

// +[SCCustomStickerData fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b6e5fe0

@end
