// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesPickerImporterImpl
// Superclass: NSObject
// Address: 0x112ab0ff8

@interface SCMemoriesPickerImporterImpl

// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: cameraConfigurationServices; attributes: T@"_TtC29SCCameraConfigurationServices29SCCameraConfigurationServices",&,N,V_cameraConfigurationServices
// Property: temporaryFileWriterServices; attributes: T@"SCTemporaryFileWriterServices",&,N,V_temporaryFileWriterServices
// Property: mediaVideoImportServices; attributes: T@"SCMediaVideoImportServices",&,N,V_mediaVideoImportServices
// Property: contentDeliveryServices; attributes: T@"SCContentDeliveryServices",&,N,V_contentDeliveryServices
// Property: temporaryImageDatastore; attributes: T@"SCTemporaryDatastore",&,N,V_temporaryImageDatastore
// Property: temporaryVideoDatastore; attributes: T@"SCTemporaryDatastore",&,N,V_temporaryVideoDatastore
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesPickerImporterImpl initWithUserSession:cameraConfigurationServices:temporaryFileWriterServices:mediaVideoImportServices:contentDeliveryServices:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105f65f24

// -[SCMemoriesPickerImporterImpl transcodeMediaSegments:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f66048

// -[SCMemoriesPickerImporterImpl transcodeImageSegmentWithImage:asset:trimmedTimeRangeValue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f6604c

// -[SCMemoriesPickerImporterImpl transcodeVideoSegmentWithVideoAVAsset:asset:trimmedTimeRangeValue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f66050

// -[SCMemoriesPickerImporterImpl imageOutputURLForUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f66054

// -[SCMemoriesPickerImporterImpl videoOutputURLForUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f66058

// -[SCMemoriesPickerImporterImpl _isCameraRollImportWithContentManagerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105f6605c

// -[SCMemoriesPickerImporterImpl _enable1080pVideoImporting]
// Type encoding: B16@0:8
// Implementation: 0x105f660f0

// -[SCMemoriesPickerImporterImpl _transcodeMediaSegments:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f66184

// -[SCMemoriesPickerImporterImpl _transcodeImageSegmentWithImage:asset:trimmedTimeRangeValue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f66724

// -[SCMemoriesPickerImporterImpl _transcodeVideoSegmentWithVideoAVAsset:asset:trimmedTimeRangeValue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f6689c

// -[SCMemoriesPickerImporterImpl _imageOutputURLForUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f66c78

// -[SCMemoriesPickerImporterImpl _videoOutputURLForUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f66d28

// -[SCMemoriesPickerImporterImpl _tempFileWriterPathForFileName:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f66dd8

// -[SCMemoriesPickerImporterImpl temporaryVideoDatastore]
// Type encoding: @16@0:8
// Implementation: 0x105f66ea4

// -[SCMemoriesPickerImporterImpl temporaryImageDataStore]
// Type encoding: @16@0:8
// Implementation: 0x105f66f08

// -[SCMemoriesPickerImporterImpl userSession]
// Type encoding: @16@0:8
// Implementation: 0x105f66f6c

// -[SCMemoriesPickerImporterImpl setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f66f74

// -[SCMemoriesPickerImporterImpl cameraConfigurationServices]
// Type encoding: @16@0:8
// Implementation: 0x105f66fa4

// -[SCMemoriesPickerImporterImpl setCameraConfigurationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f66fac

// -[SCMemoriesPickerImporterImpl temporaryFileWriterServices]
// Type encoding: @16@0:8
// Implementation: 0x105f66fdc

// -[SCMemoriesPickerImporterImpl setTemporaryFileWriterServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f66fe4

// -[SCMemoriesPickerImporterImpl mediaVideoImportServices]
// Type encoding: @16@0:8
// Implementation: 0x105f67014

// -[SCMemoriesPickerImporterImpl setMediaVideoImportServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f6701c

// -[SCMemoriesPickerImporterImpl contentDeliveryServices]
// Type encoding: @16@0:8
// Implementation: 0x105f6704c

// -[SCMemoriesPickerImporterImpl setContentDeliveryServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f67054

// -[SCMemoriesPickerImporterImpl temporaryImageDatastore]
// Type encoding: @16@0:8
// Implementation: 0x105f67084

// -[SCMemoriesPickerImporterImpl setTemporaryImageDatastore:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f6708c

// -[SCMemoriesPickerImporterImpl setTemporaryVideoDatastore:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f670bc

// -[SCMemoriesPickerImporterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f670ec

@end
