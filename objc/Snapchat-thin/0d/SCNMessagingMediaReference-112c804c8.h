// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingMediaReference
// Superclass: NSObject
// Address: 0x112c804c8

@interface SCNMessagingMediaReference

// Property: contentObject; attributes: T@"NSData",C,N,V_contentObject
// Property: mediaListId; attributes: Tq,N,V_mediaListId
// Property: mediaType; attributes: Tq,N,V_mediaType
// Property: mediaReferenceKey; attributes: T@"NSString",C,N,V_mediaReferenceKey
// Property: videoDescription; attributes: T@"SCNMessagingVideoDescription",&,N,V_videoDescription
// Property: metadataType; attributes: T@"NSNumber",&,N,V_metadataType

// -[SCNMessagingMediaReference initWithContentObject:mediaListId:mediaType:mediaReferenceKey:videoDescription:metadataType:]
// Type encoding: @64@0:8@16q24q32@40@48@56
// Implementation: 0x1006ae03c

// -[SCNMessagingMediaReference initWithContentObject:mediaListId:mediaType:mediaReferenceKey:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x10b63b35c

// -[SCNMessagingMediaReference contentObject]
// Type encoding: @16@0:8
// Implementation: 0x100be71f8

// -[SCNMessagingMediaReference setContentObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b368

// -[SCNMessagingMediaReference mediaListId]
// Type encoding: q16@0:8
// Implementation: 0x100be71f0

// -[SCNMessagingMediaReference setMediaListId:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b370

// -[SCNMessagingMediaReference mediaType]
// Type encoding: q16@0:8
// Implementation: 0x10b63b378

// -[SCNMessagingMediaReference setMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b380

// -[SCNMessagingMediaReference mediaReferenceKey]
// Type encoding: @16@0:8
// Implementation: 0x100be7200

// -[SCNMessagingMediaReference setMediaReferenceKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b388

// -[SCNMessagingMediaReference videoDescription]
// Type encoding: @16@0:8
// Implementation: 0x10b63b390

// -[SCNMessagingMediaReference setVideoDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b398

// -[SCNMessagingMediaReference metadataType]
// Type encoding: @16@0:8
// Implementation: 0x10b63b3bc

// -[SCNMessagingMediaReference setMetadataType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b3c4

// -[SCNMessagingMediaReference .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63b3e8

@end
