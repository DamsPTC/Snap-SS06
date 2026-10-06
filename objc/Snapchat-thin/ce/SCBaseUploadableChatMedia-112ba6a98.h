// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBaseUploadableChatMedia
// Superclass: NSObject
// Address: 0x112ba6a98

@interface SCBaseUploadableChatMedia

// Property: uploadState; attributes: Tq,V_uploadState
// Property: mediaID; attributes: T@"NSString",R,C,N,V_mediaID
// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: iv; attributes: T@"NSString",R,C,N,V_iv
// Property: mediaDuration; attributes: Td,V_mediaDuration
// Property: mediaInfiniteDuration; attributes: TB,V_mediaInfiniteDuration
// Property: mediaWidth; attributes: Tq,V_mediaWidth
// Property: mediaHeight; attributes: Tq,V_mediaHeight
// Property: snapAttachmentUrl; attributes: T@"NSString",&,V_snapAttachmentUrl
// Property: venueId; attributes: T@"NSString",&,V_venueId
// Property: miniThumbnailData; attributes: T@"NSData",C,V_miniThumbnailData
// Property: smartShareable; attributes: TB,R,N,V_smartShareable
// Property: snapMetadata; attributes: T@"SCSnapMetadata",&,N,V_snapMetadata
// Property: importedContentId; attributes: T@"NSString",&,N,V_importedContentId
// Property: rotationLocked; attributes: TB,N,GisRotationLocked,V_rotationLocked
// Property: mediaOrigins; attributes: T@"NSArray",C,N,V_mediaOrigins
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBaseUploadableChatMedia initWithID:key:iv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1085414e8

// -[SCBaseUploadableChatMedia initWithID:]
// Type encoding: @24@0:8@16
// Implementation: 0x108541618

// -[SCBaseUploadableChatMedia setDataToUpload:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085416bc

// -[SCBaseUploadableChatMedia prepareMedia:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108541764

// -[SCBaseUploadableChatMedia _handleMediaDataLost]
// Type encoding: v16@0:8
// Implementation: 0x1085417f4

// -[SCBaseUploadableChatMedia mediaType]
// Type encoding: q16@0:8
// Implementation: 0x108541900

// -[SCBaseUploadableChatMedia _transitionToState:]
// Type encoding: v24@0:8q16
// Implementation: 0x108541954

// -[SCBaseUploadableChatMedia _setMediaData:]
// Type encoding: v24@0:8@16
// Implementation: 0x108541980

// -[SCBaseUploadableChatMedia prepareDataToUploadForMediaId:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108541ac0

// -[SCBaseUploadableChatMedia width]
// Type encoding: d16@0:8
// Implementation: 0x108541bcc

// -[SCBaseUploadableChatMedia height]
// Type encoding: d16@0:8
// Implementation: 0x108541be4

// -[SCBaseUploadableChatMedia isZipped]
// Type encoding: B16@0:8
// Implementation: 0x108541bfc

// -[SCBaseUploadableChatMedia duration]
// Type encoding: d16@0:8
// Implementation: 0x108541c04

// -[SCBaseUploadableChatMedia isInfiniteDuration]
// Type encoding: B16@0:8
// Implementation: 0x108541c08

// -[SCBaseUploadableChatMedia mediaContentType]
// Type encoding: q16@0:8
// Implementation: 0x108541c0c

// -[SCBaseUploadableChatMedia chatKey]
// Type encoding: @16@0:8
// Implementation: 0x108541c20

// -[SCBaseUploadableChatMedia chatIV]
// Type encoding: @16@0:8
// Implementation: 0x108541c24

// -[SCBaseUploadableChatMedia mediaID]
// Type encoding: @16@0:8
// Implementation: 0x108541c28

// -[SCBaseUploadableChatMedia key]
// Type encoding: @16@0:8
// Implementation: 0x108541c30

// -[SCBaseUploadableChatMedia iv]
// Type encoding: @16@0:8
// Implementation: 0x108541c38

// -[SCBaseUploadableChatMedia mediaDuration]
// Type encoding: d16@0:8
// Implementation: 0x108541c40

// -[SCBaseUploadableChatMedia setMediaDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x108541c48

// -[SCBaseUploadableChatMedia mediaInfiniteDuration]
// Type encoding: B16@0:8
// Implementation: 0x108541c50

// -[SCBaseUploadableChatMedia setMediaInfiniteDuration:]
// Type encoding: v20@0:8B16
// Implementation: 0x108541c5c

// -[SCBaseUploadableChatMedia mediaWidth]
// Type encoding: q16@0:8
// Implementation: 0x108541c64

// -[SCBaseUploadableChatMedia setMediaWidth:]
// Type encoding: v24@0:8q16
// Implementation: 0x108541c6c

// -[SCBaseUploadableChatMedia mediaHeight]
// Type encoding: q16@0:8
// Implementation: 0x108541c74

// -[SCBaseUploadableChatMedia setMediaHeight:]
// Type encoding: v24@0:8q16
// Implementation: 0x108541c7c

// -[SCBaseUploadableChatMedia snapAttachmentUrl]
// Type encoding: @16@0:8
// Implementation: 0x108541c84

// -[SCBaseUploadableChatMedia setSnapAttachmentUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x108541c90

// -[SCBaseUploadableChatMedia venueId]
// Type encoding: @16@0:8
// Implementation: 0x108541c98

// -[SCBaseUploadableChatMedia setVenueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108541ca4

// -[SCBaseUploadableChatMedia miniThumbnailData]
// Type encoding: @16@0:8
// Implementation: 0x108541cac

// -[SCBaseUploadableChatMedia setMiniThumbnailData:]
// Type encoding: v24@0:8@16
// Implementation: 0x108541cb8

// -[SCBaseUploadableChatMedia smartShareable]
// Type encoding: B16@0:8
// Implementation: 0x108541cc0

// -[SCBaseUploadableChatMedia snapMetadata]
// Type encoding: @16@0:8
// Implementation: 0x108541cc8

// -[SCBaseUploadableChatMedia setSnapMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x108541cd0

// -[SCBaseUploadableChatMedia importedContentId]
// Type encoding: @16@0:8
// Implementation: 0x108541d00

// -[SCBaseUploadableChatMedia setImportedContentId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108541d08

// -[SCBaseUploadableChatMedia isRotationLocked]
// Type encoding: B16@0:8
// Implementation: 0x108541d38

// -[SCBaseUploadableChatMedia setRotationLocked:]
// Type encoding: v20@0:8B16
// Implementation: 0x108541d40

// -[SCBaseUploadableChatMedia mediaOrigins]
// Type encoding: @16@0:8
// Implementation: 0x108541d48

// -[SCBaseUploadableChatMedia setMediaOrigins:]
// Type encoding: v24@0:8@16
// Implementation: 0x108541d50

// -[SCBaseUploadableChatMedia uploadState]
// Type encoding: q16@0:8
// Implementation: 0x108541d58

// -[SCBaseUploadableChatMedia setUploadState:]
// Type encoding: v24@0:8q16
// Implementation: 0x108541d60

// -[SCBaseUploadableChatMedia .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108541d68

@end
