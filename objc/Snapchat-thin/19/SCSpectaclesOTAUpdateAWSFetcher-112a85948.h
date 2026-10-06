// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesOTAUpdateAWSFetcher
// Superclass: NSObject
// Address: 0x112a85948

@interface SCSpectaclesOTAUpdateAWSFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesOTAUpdateAWSFetcher initWithDevice:otaServiceClient:metadataFetcher:otaDownloader:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105a61cf4

// -[SCSpectaclesOTAUpdateAWSFetcher checkUpdateForRequestTag:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105a61de8

// -[SCSpectaclesOTAUpdateAWSFetcher downloadUpdate:userInitiated:onProgress:onError:onSuccess:]
// Type encoding: @52@0:8@16B24@?28@?36@?44
// Implementation: 0x105a621e4

// -[SCSpectaclesOTAUpdateAWSFetcher _getMetadata:requestTag:majorVersion:response:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105a62340

// -[SCSpectaclesOTAUpdateAWSFetcher _retrieveFileResultForCacheKey:onError:onSuccess:]
// Type encoding: @40@0:8@16@?24@?32
// Implementation: 0x105a626dc

// -[SCSpectaclesOTAUpdateAWSFetcher _downloadUpdateForURLString:cacheKey:userInitiated:onProgress:onError:onSuccess:]
// Type encoding: @60@0:8@16@24B32@?36@?44@?52
// Implementation: 0x105a62850

// -[SCSpectaclesOTAUpdateAWSFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a62a80

@end
