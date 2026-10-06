// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverMediaBlobMetadata
// Superclass: NSObject
// Address: 0x112b96dc8

@interface SCDiscoverMediaBlobMetadata

// Property: publisherName; attributes: T@"NSString",R,C,N,V_publisherName
// Property: publisherDisplayName; attributes: T@"NSString",R,C,N,V_publisherDisplayName
// Property: publisherUniqueName; attributes: T@"NSString",R,C,N,V_publisherUniqueName
// Property: publisherId; attributes: T@"NSString",R,C,N,V_publisherId
// Property: businessProfileId; attributes: T@"NSString",R,C,N,V_businessProfileId
// Property: filledIconURL; attributes: T@"NSString",R,C,N,V_filledIconURL
// Property: dSnapId; attributes: T@"NSString",R,C,N,V_dSnapId
// Property: adSnapId; attributes: T@"NSString",R,C,N,V_adSnapId
// Property: blobMediaType; attributes: Tq,R,N,V_blobMediaType
// Property: editionId; attributes: T@"NSString",R,C,N,V_editionId
// Property: viewport; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_viewport
// Property: linkToLongform; attributes: TB,R,N,V_linkToLongform
// Property: caption; attributes: Tq,R,N,V_caption
// Property: drawing; attributes: Tq,R,N,V_drawing
// Property: filterInfo; attributes: T@"NSString",R,C,N,V_filterInfo
// Property: filterVisual; attributes: T@"NSString",R,C,N,V_filterVisual
// Property: primaryColor; attributes: T@"UIColor",R,C,N,V_primaryColor
// Property: secondaryColor; attributes: T@"UIColor",R,C,N,V_secondaryColor
// Property: remoteUrl; attributes: T@"NSString",R,C,N,V_remoteUrl
// Property: additionalPayload; attributes: T@"NSDictionary",R,C,N,V_additionalPayload
// Property: bitmojiAvatarIds; attributes: T@"NSArray",R,C,N,V_bitmojiAvatarIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverMediaBlobMetadata initWithPublisherName:publisherDisplayName:publisherUniqueName:publisherId:businessProfileId:filledIconURL:dSnapId:adSnapId:blobMediaType:editionId:viewport:linkToLongform:caption:drawing:filterInfo:filterVisual:primaryColor:secondaryColor:remoteUrl:additionalPayload:bitmojiAvatarIds:]
// Type encoding: @204@0:8@16@24@32@40@48@56@64@72q80@88{CGRect={CGPoint=dd}{CGSize=dd}}96B128q132q140@148@156@164@172@180@188@196
// Implementation: 0x10806f0d4

// -[SCDiscoverMediaBlobMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10806f480

// -[SCDiscoverMediaBlobMetadata initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10806f4a4

// -[SCDiscoverMediaBlobMetadata encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806f7ec

// -[SCDiscoverMediaBlobMetadata preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10806f9cc

// -[SCDiscoverMediaBlobMetadata encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806f9d4

// -[SCDiscoverMediaBlobMetadata decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10806fb0c

// -[SCDiscoverMediaBlobMetadata setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10806fda0

// -[SCDiscoverMediaBlobMetadata setBool:forUInt64Key:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x108070090

// -[SCDiscoverMediaBlobMetadata setSInt32:forUInt64Key:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x1080700b0

// -[SCDiscoverMediaBlobMetadata setSInt64:forUInt64Key:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x1080700d4

// -[SCDiscoverMediaBlobMetadata setRect:forUInt64Key:]
// Type encoding: v56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16Q48
// Implementation: 0x108070118

// -[SCDiscoverMediaBlobMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10807015c

// -[SCDiscoverMediaBlobMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x10807022c

// -[SCDiscoverMediaBlobMetadata publisherName]
// Type encoding: @16@0:8
// Implementation: 0x1080703c4

// -[SCDiscoverMediaBlobMetadata publisherDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x1080703cc

// -[SCDiscoverMediaBlobMetadata publisherUniqueName]
// Type encoding: @16@0:8
// Implementation: 0x1080703d4

// -[SCDiscoverMediaBlobMetadata publisherId]
// Type encoding: @16@0:8
// Implementation: 0x1080703dc

// -[SCDiscoverMediaBlobMetadata businessProfileId]
// Type encoding: @16@0:8
// Implementation: 0x1080703e4

// -[SCDiscoverMediaBlobMetadata filledIconURL]
// Type encoding: @16@0:8
// Implementation: 0x1080703ec

// -[SCDiscoverMediaBlobMetadata dSnapId]
// Type encoding: @16@0:8
// Implementation: 0x1080703f4

// -[SCDiscoverMediaBlobMetadata adSnapId]
// Type encoding: @16@0:8
// Implementation: 0x1080703fc

// -[SCDiscoverMediaBlobMetadata blobMediaType]
// Type encoding: q16@0:8
// Implementation: 0x108070404

// -[SCDiscoverMediaBlobMetadata editionId]
// Type encoding: @16@0:8
// Implementation: 0x10807040c

// -[SCDiscoverMediaBlobMetadata viewport]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108070414

// -[SCDiscoverMediaBlobMetadata linkToLongform]
// Type encoding: B16@0:8
// Implementation: 0x108070420

// -[SCDiscoverMediaBlobMetadata caption]
// Type encoding: q16@0:8
// Implementation: 0x108070428

// -[SCDiscoverMediaBlobMetadata drawing]
// Type encoding: q16@0:8
// Implementation: 0x108070430

// -[SCDiscoverMediaBlobMetadata filterInfo]
// Type encoding: @16@0:8
// Implementation: 0x108070438

// -[SCDiscoverMediaBlobMetadata filterVisual]
// Type encoding: @16@0:8
// Implementation: 0x108070440

// -[SCDiscoverMediaBlobMetadata primaryColor]
// Type encoding: @16@0:8
// Implementation: 0x108070448

// -[SCDiscoverMediaBlobMetadata secondaryColor]
// Type encoding: @16@0:8
// Implementation: 0x108070450

// -[SCDiscoverMediaBlobMetadata remoteUrl]
// Type encoding: @16@0:8
// Implementation: 0x108070458

// -[SCDiscoverMediaBlobMetadata additionalPayload]
// Type encoding: @16@0:8
// Implementation: 0x108070460

// -[SCDiscoverMediaBlobMetadata bitmojiAvatarIds]
// Type encoding: @16@0:8
// Implementation: 0x108070468

// -[SCDiscoverMediaBlobMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108070470

// +[SCDiscoverMediaBlobMetadata fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10807013c

// +[SCDiscoverMediaBlobMetadata fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x108070150

@end
