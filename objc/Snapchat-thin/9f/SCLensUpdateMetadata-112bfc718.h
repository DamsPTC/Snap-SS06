// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUpdateMetadata
// Superclass: NSObject
// Address: 0x112bfc718

@interface SCLensUpdateMetadata

// Property: idValue; attributes: T@"NSNumber",R,C,N,V_idValue
// Property: checksum; attributes: T@"NSData",R,C,N,V_checksum
// Property: clientCacheTtlMinutes; attributes: T@"NSNumber",R,C,N,V_clientCacheTtlMinutes
// Property: trackingInfo; attributes: T@"SCLensMetadataTrackingInfo",R,C,N,V_trackingInfo
// Property: prefetchContexts; attributes: T@"NSSet",R,C,N,V_prefetchContexts

// -[SCLensUpdateMetadata initWithIdValue:checksum:clientCacheTtlMinutes:trackingInfo:prefetchContexts:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10aec49cc

// -[SCLensUpdateMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10aec4b04

// -[SCLensUpdateMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x10aec4b28

// -[SCLensUpdateMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aec4bc0

// -[SCLensUpdateMetadata idValue]
// Type encoding: @16@0:8
// Implementation: 0x10aec4cb0

// -[SCLensUpdateMetadata checksum]
// Type encoding: @16@0:8
// Implementation: 0x10aec4cb8

// -[SCLensUpdateMetadata clientCacheTtlMinutes]
// Type encoding: @16@0:8
// Implementation: 0x10aec4cc0

// -[SCLensUpdateMetadata trackingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10aec4cc8

// -[SCLensUpdateMetadata prefetchContexts]
// Type encoding: @16@0:8
// Implementation: 0x10aec4cd0

// -[SCLensUpdateMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aec4cd8

// +[SCLensUpdateMetadata updateMetadataFromChecksumEntries:overrideClientCacheTtlMinutes:lensMetadataMapper:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aeb8548

// +[SCLensUpdateMetadata updateMetadataFromUnlockableChecksumResponses:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeb8620

// +[SCLensUpdateMetadata _updateMetadataFromChecksumEntry:overrideTtlMinutes:lensMetadataMapper:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aeb86f8

// +[SCLensUpdateMetadata _lensPrefetchContextsFromLPPrefetchContexts:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeb88f0

@end
