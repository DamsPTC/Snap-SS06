// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataByIdsFetcher
// Superclass: NSObject
// Address: 0x112a4e588

@interface SCLensMetadataByIdsFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMetadataByIdsFetcher initWithRequestManager:networkConfig:requestInfoProvider:responseParser:performer:grapheneLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1055e3974

// -[SCLensMetadataByIdsFetcher fetchLensMetadataWithIds:lensType:expirationDate:featureAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16q24@32q40@48@?56@?64
// Implementation: 0x1055e3ae8

// -[SCLensMetadataByIdsFetcher fetchLensMetadataWithFetchIdentifiers:lensType:expirationDate:featureAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16q24@32q40@48@?56@?64
// Implementation: 0x1055e3bd0

// -[SCLensMetadataByIdsFetcher _fetchLensMetadataWithLensIdentifiers:lensType:expirationDate:featureAttribution:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16q24@32q40@48@?56@?64
// Implementation: 0x1055e3cb8

// -[SCLensMetadataByIdsFetcher _performNetworkRequestWithLensIdentifiers:lensType:expirationDate:featureAttribution:performer:promise:]
// Type encoding: v64@0:8@16q24@32q40@48@56
// Implementation: 0x1055e405c

// -[SCLensMetadataByIdsFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055e4878

// +[SCLensMetadataByIdsFetcher _lensIdentifiersFromLensFetchIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e4540

// +[SCLensMetadataByIdsFetcher _lensIdentifiersFromLensIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e4628

// +[SCLensMetadataByIdsFetcher _stringFromExclusionReasons:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e4684

@end
