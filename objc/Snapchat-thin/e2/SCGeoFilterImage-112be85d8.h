// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGeoFilterImage
// Superclass: NSObject
// Address: 0x112be85d8

@interface SCGeoFilterImage

// Property: imageData; attributes: T@"NSData",R,C,N,V_imageData
// Property: filterId; attributes: T@"NSString",R,C,N,V_filterId
// Property: displayName; attributes: T@"NSString",R,C,N,V_displayName
// Property: scaleSetting; attributes: Tq,R,N,V_scaleSetting
// Property: positionSetting; attributes: TQ,R,N,V_positionSetting
// Property: mediaFilterSubType; attributes: Tq,R,N,V_mediaFilterSubType
// Property: extraImageMetadata; attributes: T@"SOJUGeofilterImageMetadata",&,N,V_extraImageMetadata
// Property: croppedImageUrlString; attributes: T@"NSString",&,N,V_croppedImageUrlString
// Property: requestId; attributes: T@"NSString",&,N,V_requestId
// Property: loadingMetaData; attributes: T@"SCGeoFilterLoadingMetaData",&,N,V_loadingMetaData
// Property: encryptedGeoData; attributes: T@"NSString",C,N,V_encryptedGeoData
// Property: contextFilterInput; attributes: T@"SCArSegmentationDownloadedInput",&,N,V_contextFilterInput
// Property: skipFilteredImageCheck; attributes: TB,N,V_skipFilteredImageCheck
// Property: audioInput; attributes: T@"SCAudioDownloadedInput",&,N,V_audioInput
// Property: isUnifiedCameraObject; attributes: TB,N,V_isUnifiedCameraObject
// Property: croppedImageData; attributes: T@"NSData",&,N,V_croppedImageData
// Property: croppedImageSticker; attributes: T@"SCSnapchatSticker",&,N,V_croppedImageSticker
// Property: filteredCaptureImage; attributes: T@"UIImage",C,N,V_filteredCaptureImage
// Property: dynamicResourceImageData; attributes: T@"NSData",&,N,V_dynamicResourceImageData

// -[SCGeoFilterImage initWithImageData:filterId:displayName:geoFilterLoadingMetaData:scaleSetting:positionSetting:mediaFilterSubType:requestId:]
// Type encoding: @80@0:8@16@24@32@40q48Q56q64@72
// Implementation: 0x10913fba0

// -[SCGeoFilterImage isReadyForDisplay]
// Type encoding: B16@0:8
// Implementation: 0x10913fcf4

// -[SCGeoFilterImage copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10913fd9c

// -[SCGeoFilterImage imageData]
// Type encoding: @16@0:8
// Implementation: 0x10913fdc0

// -[SCGeoFilterImage filterId]
// Type encoding: @16@0:8
// Implementation: 0x10913fdc8

// -[SCGeoFilterImage displayName]
// Type encoding: @16@0:8
// Implementation: 0x10913fdd0

// -[SCGeoFilterImage scaleSetting]
// Type encoding: q16@0:8
// Implementation: 0x10913fdd8

// -[SCGeoFilterImage positionSetting]
// Type encoding: Q16@0:8
// Implementation: 0x10913fde0

// -[SCGeoFilterImage mediaFilterSubType]
// Type encoding: q16@0:8
// Implementation: 0x10913fde8

// -[SCGeoFilterImage extraImageMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10913fdf0

// -[SCGeoFilterImage setExtraImageMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913fdf8

// -[SCGeoFilterImage croppedImageUrlString]
// Type encoding: @16@0:8
// Implementation: 0x10913fe28

// -[SCGeoFilterImage setCroppedImageUrlString:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913fe30

// -[SCGeoFilterImage requestId]
// Type encoding: @16@0:8
// Implementation: 0x10913fe60

// -[SCGeoFilterImage setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913fe68

// -[SCGeoFilterImage loadingMetaData]
// Type encoding: @16@0:8
// Implementation: 0x10913fe98

// -[SCGeoFilterImage setLoadingMetaData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913fea0

// -[SCGeoFilterImage encryptedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x10913fed0

// -[SCGeoFilterImage setEncryptedGeoData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913fed8

// -[SCGeoFilterImage contextFilterInput]
// Type encoding: @16@0:8
// Implementation: 0x10913fee0

// -[SCGeoFilterImage setContextFilterInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913fee8

// -[SCGeoFilterImage skipFilteredImageCheck]
// Type encoding: B16@0:8
// Implementation: 0x10913ff18

// -[SCGeoFilterImage setSkipFilteredImageCheck:]
// Type encoding: v20@0:8B16
// Implementation: 0x10913ff20

// -[SCGeoFilterImage audioInput]
// Type encoding: @16@0:8
// Implementation: 0x10913ff28

// -[SCGeoFilterImage setAudioInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913ff30

// -[SCGeoFilterImage isUnifiedCameraObject]
// Type encoding: B16@0:8
// Implementation: 0x10913ff60

// -[SCGeoFilterImage setIsUnifiedCameraObject:]
// Type encoding: v20@0:8B16
// Implementation: 0x10913ff68

// -[SCGeoFilterImage croppedImageData]
// Type encoding: @16@0:8
// Implementation: 0x10913ff70

// -[SCGeoFilterImage setCroppedImageData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913ff78

// -[SCGeoFilterImage croppedImageSticker]
// Type encoding: @16@0:8
// Implementation: 0x10913ffa8

// -[SCGeoFilterImage setCroppedImageSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913ffb0

// -[SCGeoFilterImage filteredCaptureImage]
// Type encoding: @16@0:8
// Implementation: 0x10913ffe0

// -[SCGeoFilterImage setFilteredCaptureImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913ffe8

// -[SCGeoFilterImage dynamicResourceImageData]
// Type encoding: @16@0:8
// Implementation: 0x10913fff0

// -[SCGeoFilterImage setDynamicResourceImageData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913fff8

// -[SCGeoFilterImage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109140028

@end
