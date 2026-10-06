// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaDrawerBaseMedia
// Superclass: NSObject
// Address: 0x112b0aa08

@interface SCChatMediaDrawerBaseMedia

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: phAsset; attributes: T@"PHAsset",R,C,N,V_phAsset
// Property: loacalIdentifier; attributes: T@"NSString",R,C,N,V_loacalIdentifier
// Property: orientation; attributes: Tq,N,V_orientation
// Property: smallThumbnailSizeInSendBar; attributes: T{CGSize=dd},N,V_smallThumbnailSizeInSendBar
// Property: mediaType; attributes: Tq,N,V_mediaType
// Property: aspectRatio; attributes: Td,R,N
// Property: originalSize; attributes: T{CGSize=dd},R,N
// Property: originalResolution; attributes: T{CGSize=dd},R,N
// Property: croppedSize; attributes: T{CGSize=dd},R,N,V_croppedSize
// Property: creationDate; attributes: T@"NSDate",R,N
// Property: sourceDrawerPosition; attributes: TQ,N,V_sourceDrawerPosition
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatMediaDrawerBaseMedia itemId]
// Type encoding: @16@0:8
// Implementation: 0x1069e5730

// -[SCChatMediaDrawerBaseMedia itemType]
// Type encoding: q16@0:8
// Implementation: 0x1069e5734

// -[SCChatMediaDrawerBaseMedia init]
// Type encoding: @16@0:8
// Implementation: 0x1069d1378

// -[SCChatMediaDrawerBaseMedia initWithPHAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069d13b8

// -[SCChatMediaDrawerBaseMedia aspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x1069d1770

// -[SCChatMediaDrawerBaseMedia originalSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1069d17b8

// -[SCChatMediaDrawerBaseMedia originalResolution]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1069d1808

// -[SCChatMediaDrawerBaseMedia creationDate]
// Type encoding: @16@0:8
// Implementation: 0x1069d1858

// -[SCChatMediaDrawerBaseMedia fetchImageWithSize:mediaType:allowLowQuality:completion:]
// Type encoding: v52@0:8{CGSize=dd}16q32B40@?44
// Implementation: 0x1069d1860

// -[SCChatMediaDrawerBaseMedia fetchThumbnailImageWithCompletion:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1069d18c0

// -[SCChatMediaDrawerBaseMedia fetchSmallThumbnailImageInSenderBarWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1069d1938

// -[SCChatMediaDrawerBaseMedia cancelThumbnailFetchRequest]
// Type encoding: v16@0:8
// Implementation: 0x1069d19f0

// -[SCChatMediaDrawerBaseMedia mediaIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1069d1a44

// -[SCChatMediaDrawerBaseMedia duration]
// Type encoding: d16@0:8
// Implementation: 0x1069d1a4c

// -[SCChatMediaDrawerBaseMedia prepareUploadDataForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069d1aa0

// -[SCChatMediaDrawerBaseMedia prepareDataToUploadForMediaId:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069d1b0c

// -[SCChatMediaDrawerBaseMedia uploadWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1069d1b78

// -[SCChatMediaDrawerBaseMedia mediaContentType]
// Type encoding: q16@0:8
// Implementation: 0x1069d1bd8

// -[SCChatMediaDrawerBaseMedia width]
// Type encoding: d16@0:8
// Implementation: 0x1069d1c2c

// -[SCChatMediaDrawerBaseMedia height]
// Type encoding: d16@0:8
// Implementation: 0x1069d1c80

// -[SCChatMediaDrawerBaseMedia isZipped]
// Type encoding: B16@0:8
// Implementation: 0x1069d1cd4

// -[SCChatMediaDrawerBaseMedia isRotationLocked]
// Type encoding: B16@0:8
// Implementation: 0x1069d1d28

// -[SCChatMediaDrawerBaseMedia chatKey]
// Type encoding: @16@0:8
// Implementation: 0x1069d1d7c

// -[SCChatMediaDrawerBaseMedia chatIV]
// Type encoding: @16@0:8
// Implementation: 0x1069d1d84

// -[SCChatMediaDrawerBaseMedia snapAttachmentUrl]
// Type encoding: @16@0:8
// Implementation: 0x1069d1d8c

// -[SCChatMediaDrawerBaseMedia venueId]
// Type encoding: @16@0:8
// Implementation: 0x1069d1d94

// -[SCChatMediaDrawerBaseMedia isInfiniteDuration]
// Type encoding: B16@0:8
// Implementation: 0x1069d1d9c

// -[SCChatMediaDrawerBaseMedia miniThumbnailData]
// Type encoding: @16@0:8
// Implementation: 0x1069d1da4

// -[SCChatMediaDrawerBaseMedia snapMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1069d1dac

// -[SCChatMediaDrawerBaseMedia maxSizeOnScreen]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1069d1db4

// -[SCChatMediaDrawerBaseMedia maxPixelSizeForUpload]
// Type encoding: d16@0:8
// Implementation: 0x1069d1e7c

// -[SCChatMediaDrawerBaseMedia isGif]
// Type encoding: B16@0:8
// Implementation: 0x1069d1ed0

// -[SCChatMediaDrawerBaseMedia mediaOrigins]
// Type encoding: @16@0:8
// Implementation: 0x1069d2000

// -[SCChatMediaDrawerBaseMedia phAsset]
// Type encoding: @16@0:8
// Implementation: 0x1069d2008

// -[SCChatMediaDrawerBaseMedia loacalIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1069d2010

// -[SCChatMediaDrawerBaseMedia orientation]
// Type encoding: q16@0:8
// Implementation: 0x1069d2018

// -[SCChatMediaDrawerBaseMedia setOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1069d2020

// -[SCChatMediaDrawerBaseMedia smallThumbnailSizeInSendBar]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1069d2028

// -[SCChatMediaDrawerBaseMedia setSmallThumbnailSizeInSendBar:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1069d2030

// -[SCChatMediaDrawerBaseMedia mediaType]
// Type encoding: q16@0:8
// Implementation: 0x1069d2038

// -[SCChatMediaDrawerBaseMedia setMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1069d2040

// -[SCChatMediaDrawerBaseMedia croppedSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1069d2048

// -[SCChatMediaDrawerBaseMedia sourceDrawerPosition]
// Type encoding: Q16@0:8
// Implementation: 0x1069d2050

// -[SCChatMediaDrawerBaseMedia setSourceDrawerPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1069d2058

// -[SCChatMediaDrawerBaseMedia .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069d2060

@end
