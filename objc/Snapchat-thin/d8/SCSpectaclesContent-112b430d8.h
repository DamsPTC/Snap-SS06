// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesContent
// Superclass: NSObject
// Address: 0x112b430d8

@interface SCSpectaclesContent

// Property: device; attributes: T@"SCSpectaclesDevice",W,N,V_device
// Property: internalContentName; attributes: T@"NSString",C,N,V_internalContentName
// Property: UUID; attributes: T@"NSString",C,N,V_UUID
// Property: type; attributes: TQ,N,V_type
// Property: mediaFormat; attributes: Ti,N,V_mediaFormat
// Property: mediaType; attributes: Ti,N,V_mediaType
// Property: buttonSide; attributes: TQ,N,V_buttonSide
// Property: flightMode; attributes: TQ,N,V_flightMode
// Property: key; attributes: T@"NSData",&,N,V_key
// Property: IV; attributes: T@"NSData",&,N,V_IV
// Property: timeOfCapture; attributes: T@"NSDate",&,N,V_timeOfCapture
// Property: videoDuration; attributes: T@"NSNumber",&,N,V_videoDuration
// Property: multisnapGroupID; attributes: T@"NSString",&,N,V_multisnapGroupID
// Property: metadataFile; attributes: T@"SCSpectaclesFile",&,N,V_metadataFile
// Property: thumbnailFile; attributes: T@"SCSpectaclesFile",&,N,V_thumbnailFile
// Property: sdVideoFile; attributes: T@"SCSpectaclesFile",&,N,V_sdVideoFile
// Property: hdVideoFile; attributes: T@"SCSpectaclesFile",&,N,V_hdVideoFile
// Property: imuDataFile; attributes: T@"SCSpectaclesFile",&,N,V_imuDataFile
// Property: pictureFile; attributes: T@"SCSpectaclesFile",&,N,V_pictureFile
// Property: animatedThumbnailFile; attributes: T@"SCSpectaclesFile",&,N,V_animatedThumbnailFile
// Property: location; attributes: T@"CLLocation",&,N,V_location
// Property: genericAssetMetadata; attributes: T@"NSArray",&,N,V_genericAssetMetadata
// Property: genericAssetFiles; attributes: T@"NSDictionary",&,N,V_genericAssetFiles
// Property: multisnapContent; attributes: T@"NSArray",C,N,V_multisnapContent
// Property: contentName; attributes: T@"NSString",R,C,N
// Property: batchID; attributes: T@"NSUUID",&,N,V_batchID
// Property: synced; attributes: TB,N,V_synced
// Property: skipPersistToMemories; attributes: TB,N,V_skipPersistToMemories
// Property: isGenericAssetDownloadComplete; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesContent initWithName:device:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e8dda0

// -[SCSpectaclesContent contentName]
// Type encoding: @16@0:8
// Implementation: 0x106e8de94

// -[SCSpectaclesContent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e8debc

// -[SCSpectaclesContent hash]
// Type encoding: Q16@0:8
// Implementation: 0x106e8df60

// -[SCSpectaclesContent timeOfCapture]
// Type encoding: @16@0:8
// Implementation: 0x106e8df9c

// -[SCSpectaclesContent isPausedForComponent:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106e8dfe4

// -[SCSpectaclesContent _isFileDownloaded:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e8dfec

// -[SCSpectaclesContent isDownloadCompleteForComponent:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106e8e09c

// -[SCSpectaclesContent isGenericAssetDownloadComplete]
// Type encoding: B16@0:8
// Implementation: 0x106e8e128

// -[SCSpectaclesContent isDownloadCompleteForGenericAssetMetadata:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e8e274

// -[SCSpectaclesContent isSyncedForComponent:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106e8e314

// -[SCSpectaclesContent isComponentApplicable:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106e8e370

// -[SCSpectaclesContent requiredContentComponentForTransferPersistence]
// Type encoding: Q16@0:8
// Implementation: 0x106e8e3ac

// -[SCSpectaclesContent rawMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106e8e3c0

// -[SCSpectaclesContent dataForComponent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106e8e43c

// -[SCSpectaclesContent dataForComponent:range:]
// Type encoding: @40@0:8Q16{_NSRange=QQ}24
// Implementation: 0x106e8e4a4

// -[SCSpectaclesContent localSizeForComponent:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106e8e500

// -[SCSpectaclesContent remoteSizeForComponent:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106e8e53c

// -[SCSpectaclesContent localSizeForGenericAssetMetadata:]
// Type encoding: q24@0:8@16
// Implementation: 0x106e8e578

// -[SCSpectaclesContent remoteSizeForGenericAssetMetadata:]
// Type encoding: q24@0:8@16
// Implementation: 0x106e8e5b4

// -[SCSpectaclesContent _fileForGenericAssetMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e8e5f0

// -[SCSpectaclesContent dataForGenericAssetMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e8e644

// -[SCSpectaclesContent genericAssetMetadataWithAssetType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106e8e74c

// -[SCSpectaclesContent setupWithDevice:cache:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e8e868

// -[SCSpectaclesContent downloadProgressForComponent:]
// Type encoding: f24@0:8Q16
// Implementation: 0x106e8ed30

// -[SCSpectaclesContent _descriptionForComponent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106e8ede8

// -[SCSpectaclesContent longDescription]
// Type encoding: @16@0:8
// Implementation: 0x106e8ef10

// -[SCSpectaclesContent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e8f230

// -[SCSpectaclesContent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e8f66c

// -[SCSpectaclesContent markSynced]
// Type encoding: v16@0:8
// Implementation: 0x106e8fac8

// -[SCSpectaclesContent deleteContentForExport]
// Type encoding: v16@0:8
// Implementation: 0x106e8fc9c

// -[SCSpectaclesContent markCorrupted]
// Type encoding: v16@0:8
// Implementation: 0x106e8fce8

// -[SCSpectaclesContent extraDiskSpaceInBytesNeededForTransferPersistence]
// Type encoding: q16@0:8
// Implementation: 0x106e8fd28

// -[SCSpectaclesContent _syncedStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106e8fe7c

// -[SCSpectaclesContent _availableFiles]
// Type encoding: @16@0:8
// Implementation: 0x106e90088

// -[SCSpectaclesContent _fileForComponent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106e90344

// -[SCSpectaclesContent device]
// Type encoding: @16@0:8
// Implementation: 0x106e90434

// -[SCSpectaclesContent setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9044c

// -[SCSpectaclesContent type]
// Type encoding: Q16@0:8
// Implementation: 0x106e90458

// -[SCSpectaclesContent setType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e90460

// -[SCSpectaclesContent mediaFormat]
// Type encoding: i16@0:8
// Implementation: 0x106e90468

// -[SCSpectaclesContent setMediaFormat:]
// Type encoding: v20@0:8i16
// Implementation: 0x106e90470

// -[SCSpectaclesContent mediaType]
// Type encoding: i16@0:8
// Implementation: 0x106e90478

// -[SCSpectaclesContent setMediaType:]
// Type encoding: v20@0:8i16
// Implementation: 0x106e90480

// -[SCSpectaclesContent setTimeOfCapture:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90488

// -[SCSpectaclesContent videoDuration]
// Type encoding: @16@0:8
// Implementation: 0x106e904b8

// -[SCSpectaclesContent setVideoDuration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e904c0

// -[SCSpectaclesContent multisnapGroupID]
// Type encoding: @16@0:8
// Implementation: 0x106e904f0

// -[SCSpectaclesContent setMultisnapGroupID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e904f8

// -[SCSpectaclesContent batchID]
// Type encoding: @16@0:8
// Implementation: 0x106e90528

// -[SCSpectaclesContent setBatchID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90530

// -[SCSpectaclesContent buttonSide]
// Type encoding: Q16@0:8
// Implementation: 0x106e90560

// -[SCSpectaclesContent setButtonSide:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e90568

// -[SCSpectaclesContent flightMode]
// Type encoding: Q16@0:8
// Implementation: 0x106e90570

// -[SCSpectaclesContent setFlightMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e90578

// -[SCSpectaclesContent key]
// Type encoding: @16@0:8
// Implementation: 0x106e90580

// -[SCSpectaclesContent setKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90588

// -[SCSpectaclesContent IV]
// Type encoding: @16@0:8
// Implementation: 0x106e905b8

// -[SCSpectaclesContent setIV:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e905c0

// -[SCSpectaclesContent UUID]
// Type encoding: @16@0:8
// Implementation: 0x106e905f0

// -[SCSpectaclesContent setUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e905f8

// -[SCSpectaclesContent location]
// Type encoding: @16@0:8
// Implementation: 0x106e90600

// -[SCSpectaclesContent setLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90608

// -[SCSpectaclesContent skipPersistToMemories]
// Type encoding: B16@0:8
// Implementation: 0x106e90638

// -[SCSpectaclesContent setSkipPersistToMemories:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e90640

// -[SCSpectaclesContent internalContentName]
// Type encoding: @16@0:8
// Implementation: 0x106e90648

// -[SCSpectaclesContent setInternalContentName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90650

// -[SCSpectaclesContent metadataFile]
// Type encoding: @16@0:8
// Implementation: 0x106e90658

// -[SCSpectaclesContent setMetadataFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90660

// -[SCSpectaclesContent thumbnailFile]
// Type encoding: @16@0:8
// Implementation: 0x106e90690

// -[SCSpectaclesContent setThumbnailFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90698

// -[SCSpectaclesContent sdVideoFile]
// Type encoding: @16@0:8
// Implementation: 0x106e906c8

// -[SCSpectaclesContent setSdVideoFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e906d0

// -[SCSpectaclesContent hdVideoFile]
// Type encoding: @16@0:8
// Implementation: 0x106e90700

// -[SCSpectaclesContent setHdVideoFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90708

// -[SCSpectaclesContent imuDataFile]
// Type encoding: @16@0:8
// Implementation: 0x106e90738

// -[SCSpectaclesContent setImuDataFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90740

// -[SCSpectaclesContent pictureFile]
// Type encoding: @16@0:8
// Implementation: 0x106e90770

// -[SCSpectaclesContent setPictureFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90778

// -[SCSpectaclesContent animatedThumbnailFile]
// Type encoding: @16@0:8
// Implementation: 0x106e907a8

// -[SCSpectaclesContent setAnimatedThumbnailFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e907b0

// -[SCSpectaclesContent genericAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106e907e0

// -[SCSpectaclesContent setGenericAssetMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e907e8

// -[SCSpectaclesContent genericAssetFiles]
// Type encoding: @16@0:8
// Implementation: 0x106e90818

// -[SCSpectaclesContent setGenericAssetFiles:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90820

// -[SCSpectaclesContent multisnapContent]
// Type encoding: @16@0:8
// Implementation: 0x106e90850

// -[SCSpectaclesContent setMultisnapContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e90858

// -[SCSpectaclesContent synced]
// Type encoding: B16@0:8
// Implementation: 0x106e90860

// -[SCSpectaclesContent setSynced:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e90868

// -[SCSpectaclesContent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e90870

// +[SCSpectaclesContent UUIDForSerialNumber:contentName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e8eafc

// +[SCSpectaclesContent componentForType:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106e8f120

// +[SCSpectaclesContent hashedHexSerialNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e8f140

// +[SCSpectaclesContent _decodeMediaFormat:]
// Type encoding: i20@0:8i16
// Implementation: 0x106e8fa78

@end
