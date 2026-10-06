// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverMediaBlob
// Superclass: NSObject
// Address: 0x112b96d78

@interface SCDiscoverMediaBlob

// Property: publisherDisplayName; attributes: T@"NSString",C,N,V_publisherDisplayName
// Property: publisherUniqueName; attributes: T@"NSString",C,N,V_publisherUniqueName
// Property: publisherId; attributes: T@"NSString",C,N,V_publisherId
// Property: businessProfileId; attributes: T@"NSString",C,N,V_businessProfileId
// Property: filledIconURL; attributes: T@"NSString",C,N,V_filledIconURL
// Property: editionId; attributes: T@"NSString",C,N,V_editionId
// Property: dSnapId; attributes: T@"NSString",C,N,V_dSnapId
// Property: adSnapId; attributes: T@"NSString",C,N,V_adSnapId
// Property: mediaPath; attributes: T@"NSString",C,N,V_mediaPath
// Property: overlayPath; attributes: T@"NSString",C,N,V_overlayPath
// Property: thumbnailPath; attributes: T@"NSString",C,N,V_thumbnailPath
// Property: viewport; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_viewport
// Property: publisherName; attributes: T@"NSString",C,N,V_publisherName
// Property: remoteUrl; attributes: T@"NSString",C,N,V_remoteUrl
// Property: linkToLongform; attributes: TB,N,V_linkToLongform
// Property: thumbnailData; attributes: T@"NSData",C,N,V_thumbnailData
// Property: videoSize; attributes: T{CGSize=dd},N,V_videoSize
// Property: primaryColor; attributes: T@"UIColor",&,N,V_primaryColor
// Property: secondaryColor; attributes: T@"UIColor",&,N,V_secondaryColor
// Property: caption; attributes: Tq,N,V_caption
// Property: drawing; attributes: Tq,N,V_drawing
// Property: filterInfo; attributes: T@"NSString",C,N,V_filterInfo
// Property: filterVisual; attributes: T@"NSString",C,N,V_filterVisual
// Property: additionalPayload; attributes: T@"NSDictionary",C,N,V_additionalPayload
// Property: bitmojiAvatarIds; attributes: T@"NSArray",C,N,V_bitmojiAvatarIds
// Property: type; attributes: Tq,N,V_type
// Property: mediaData; attributes: T@"NSData",C,N,VmediaData
// Property: overlayData; attributes: T@"NSData",C,N,VoverlayData

// -[SCDiscoverMediaBlob initWithPublisherName:publisherDisplayName:publisherUniqueName:publisherId:businessProfileId:filledIconURL:editionId:dSnapId:adSnapId:viewport:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80{CGRect={CGPoint=dd}{CGSize=dd}}88
// Implementation: 0x10806d090

// -[SCDiscoverMediaBlob dataToUpload]
// Type encoding: @16@0:8
// Implementation: 0x10806d2ac

// -[SCDiscoverMediaBlob archiveBlobWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10806dbb4

// -[SCDiscoverMediaBlob unarchiveBlobFromData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10806e188

// -[SCDiscoverMediaBlob updateWithDataDict:metadataDict:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10806e7c8

// -[SCDiscoverMediaBlob mediaData]
// Type encoding: @16@0:8
// Implementation: 0x10806ed9c

// -[SCDiscoverMediaBlob setMediaData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806eda4

// -[SCDiscoverMediaBlob overlayData]
// Type encoding: @16@0:8
// Implementation: 0x10806edac

// -[SCDiscoverMediaBlob setOverlayData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806edb4

// -[SCDiscoverMediaBlob publisherDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x10806edbc

// -[SCDiscoverMediaBlob setPublisherDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806edc4

// -[SCDiscoverMediaBlob publisherUniqueName]
// Type encoding: @16@0:8
// Implementation: 0x10806edcc

// -[SCDiscoverMediaBlob setPublisherUniqueName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806edd4

// -[SCDiscoverMediaBlob publisherId]
// Type encoding: @16@0:8
// Implementation: 0x10806eddc

// -[SCDiscoverMediaBlob setPublisherId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ede4

// -[SCDiscoverMediaBlob businessProfileId]
// Type encoding: @16@0:8
// Implementation: 0x10806edec

// -[SCDiscoverMediaBlob setBusinessProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806edf4

// -[SCDiscoverMediaBlob filledIconURL]
// Type encoding: @16@0:8
// Implementation: 0x10806edfc

// -[SCDiscoverMediaBlob setFilledIconURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee04

// -[SCDiscoverMediaBlob editionId]
// Type encoding: @16@0:8
// Implementation: 0x10806ee0c

// -[SCDiscoverMediaBlob setEditionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee14

// -[SCDiscoverMediaBlob dSnapId]
// Type encoding: @16@0:8
// Implementation: 0x10806ee1c

// -[SCDiscoverMediaBlob setDSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee24

// -[SCDiscoverMediaBlob adSnapId]
// Type encoding: @16@0:8
// Implementation: 0x10806ee2c

// -[SCDiscoverMediaBlob setAdSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee34

// -[SCDiscoverMediaBlob mediaPath]
// Type encoding: @16@0:8
// Implementation: 0x10806ee3c

// -[SCDiscoverMediaBlob setMediaPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee44

// -[SCDiscoverMediaBlob overlayPath]
// Type encoding: @16@0:8
// Implementation: 0x10806ee4c

// -[SCDiscoverMediaBlob setOverlayPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee54

// -[SCDiscoverMediaBlob thumbnailPath]
// Type encoding: @16@0:8
// Implementation: 0x10806ee5c

// -[SCDiscoverMediaBlob setThumbnailPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee64

// -[SCDiscoverMediaBlob remoteUrl]
// Type encoding: @16@0:8
// Implementation: 0x10806ee6c

// -[SCDiscoverMediaBlob setRemoteUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee74

// -[SCDiscoverMediaBlob linkToLongform]
// Type encoding: B16@0:8
// Implementation: 0x10806ee7c

// -[SCDiscoverMediaBlob setLinkToLongform:]
// Type encoding: v20@0:8B16
// Implementation: 0x10806ee84

// -[SCDiscoverMediaBlob thumbnailData]
// Type encoding: @16@0:8
// Implementation: 0x10806ee8c

// -[SCDiscoverMediaBlob setThumbnailData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ee94

// -[SCDiscoverMediaBlob viewport]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10806ee9c

// -[SCDiscoverMediaBlob setViewport:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10806eea8

// -[SCDiscoverMediaBlob videoSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10806eeb4

// -[SCDiscoverMediaBlob setVideoSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10806eebc

// -[SCDiscoverMediaBlob primaryColor]
// Type encoding: @16@0:8
// Implementation: 0x10806eec4

// -[SCDiscoverMediaBlob setPrimaryColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806eecc

// -[SCDiscoverMediaBlob secondaryColor]
// Type encoding: @16@0:8
// Implementation: 0x10806eefc

// -[SCDiscoverMediaBlob setSecondaryColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ef04

// -[SCDiscoverMediaBlob caption]
// Type encoding: q16@0:8
// Implementation: 0x10806ef34

// -[SCDiscoverMediaBlob setCaption:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806ef3c

// -[SCDiscoverMediaBlob drawing]
// Type encoding: q16@0:8
// Implementation: 0x10806ef44

// -[SCDiscoverMediaBlob setDrawing:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806ef4c

// -[SCDiscoverMediaBlob filterInfo]
// Type encoding: @16@0:8
// Implementation: 0x10806ef54

// -[SCDiscoverMediaBlob setFilterInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ef5c

// -[SCDiscoverMediaBlob filterVisual]
// Type encoding: @16@0:8
// Implementation: 0x10806ef64

// -[SCDiscoverMediaBlob setFilterVisual:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ef6c

// -[SCDiscoverMediaBlob publisherName]
// Type encoding: @16@0:8
// Implementation: 0x10806ef74

// -[SCDiscoverMediaBlob setPublisherName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ef7c

// -[SCDiscoverMediaBlob additionalPayload]
// Type encoding: @16@0:8
// Implementation: 0x10806ef84

// -[SCDiscoverMediaBlob setAdditionalPayload:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ef8c

// -[SCDiscoverMediaBlob bitmojiAvatarIds]
// Type encoding: @16@0:8
// Implementation: 0x10806ef94

// -[SCDiscoverMediaBlob setBitmojiAvatarIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806ef9c

// -[SCDiscoverMediaBlob type]
// Type encoding: q16@0:8
// Implementation: 0x10806efa4

// -[SCDiscoverMediaBlob setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10806efac

// -[SCDiscoverMediaBlob .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10806efb4

@end
