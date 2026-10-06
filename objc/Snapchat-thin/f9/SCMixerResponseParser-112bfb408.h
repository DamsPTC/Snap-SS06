// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerResponseParser
// Superclass: NSObject
// Address: 0x112bfb408

@interface SCMixerResponseParser

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMixerResponseParser initWithLensSnapchatMapper:timeProvider:lensDataConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1003d70d0

// -[SCMixerResponseParser parsedMixerResponse:requestId:params:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10aea76ec

// -[SCMixerResponseParser parsedMixerFeeds:requestId:params:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10aea88f0

// -[SCMixerResponseParser _renderStrategyFromSCGFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea9ff8

// -[SCMixerResponseParser _lensTileLayoutFromProtoPresentation:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10aeaa1c8

// -[SCMixerResponseParser _orientationFromProtoOrientation:]
// Type encoding: Q20@0:8i16
// Implementation: 0x10aeaa240

// -[SCMixerResponseParser _contentTypeFromProtoType:]
// Type encoding: Q20@0:8i16
// Implementation: 0x10aeaa24c

// -[SCMixerResponseParser _isValidFeed:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aeaa258

// -[SCMixerResponseParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeaa2d4

// +[SCMixerResponseParser _namespaceData:withNamespaceName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea8ba4

// +[SCMixerResponseParser _namespaceWithNamespaceId:namespaces:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea8ca0

// +[SCMixerResponseParser _itemsMapFromMetadataItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea8d7c

// +[SCMixerResponseParser _insertItem:forId:checksum:intoMap:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10aea9124

// +[SCMixerResponseParser _lensMapFromLensesChecksums:lensMapper:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea91d0

// +[SCMixerResponseParser _ctItemsMapFromCTItemsChecksum:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea9430

// +[SCMixerResponseParser _mergedLensMetadata:mixerResult:namespaceId:expirationDate:lensSnapchatMapper:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10aea9600

// +[SCMixerResponseParser _locationMetadataFromResponse:currentDate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea9a44

// +[SCMixerResponseParser _geofenceFromLPGeofence:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea9bc0

// +[SCMixerResponseParser _geoCircleFromGeoCircle:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea9cb0

// +[SCMixerResponseParser _coordinateFromULCoordinate:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea9d64

// +[SCMixerResponseParser _lensPrefetchContextsFromLPPrefetchContexts:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea9de0

// +[SCMixerResponseParser _lensTypeFromLensSource:]
// Type encoding: q20@0:8i16
// Implementation: 0x10aea9ecc

// +[SCMixerResponseParser _noFillLensesFromNoFillLensArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea9ef0

@end
