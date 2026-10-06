// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNContentManagerContentManager
// Superclass: NSObject
// Address: 0x112c6f8a8

@interface SCNContentManagerContentManager


// -[SCNContentManagerContentManager initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10b0f5850

// -[SCNContentManagerContentManager defineBlizzardProtoLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0f5b1c

// -[SCNContentManagerContentManager defineBoltNetworkRulesProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0f5ba0

// -[SCNContentManagerContentManager refreshContentAvailability:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0f5c24

// -[SCNContentManagerContentManager claimContent:claimingContentKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0f5ea4

// -[SCNContentManagerContentManager claimContentBundle:claimingContentKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0f5f84

// -[SCNContentManagerContentManager linkContent:contentReference:mediaContextType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10b0f605c

// -[SCNContentManagerContentManager claimExistingContent:newContentKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0f6160

// -[SCNContentManagerContentManager registerLocalContent:expirationDate:readStream:isAuthoritative:serializedFeatureMetadata:callback:]
// Type encoding: v60@0:8@16q24@32B40@44@52
// Implementation: 0x10b0f6250

// -[SCNContentManagerContentManager registerUrl:encryptionKey:encryptionIv:expirationDate:urlRequest:isEligibleForStreaming:serializedFeatureMetadata:callback:]
// Type encoding: v76@0:8@16@24@32q40@48B56@60@68
// Implementation: 0x10b0f63ac

// -[SCNContentManagerContentManager registerContentObject:serializedContentObject:mediaType:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:transformParams:serializedFeatureMetadata:callback:]
// Type encoding: v92@0:8@16@24q32@40@48q56B64@68@76@84
// Implementation: 0x10b0f6580

// -[SCNContentManagerContentManager registerUrlWithTransformationParams:encryptionKey:encryptionIv:expirationDate:urlRequest:isEligibleForStreaming:transformParams:serializedFeatureMetadata:callback:]
// Type encoding: v84@0:8@16@24@32q40@48B56@60@68@76
// Implementation: 0x10b0f67ac

// -[SCNContentManagerContentManager releaseAuthoritativeLocalContent:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0f69c0

// -[SCNContentManagerContentManager retrieveContent:context:prefetchSignals:callback:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b0f6a64

// -[SCNContentManagerContentManager retrieveContentWithContentBundle:context:prefetchSignals:callback:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b0f6b98

// -[SCNContentManagerContentManager retrieveCachedContent:pageInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0f6cc8

// -[SCNContentManagerContentManager monitorDownloadProgress:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0f6db0

// -[SCNContentManagerContentManager queryContentStatus:]
// Type encoding: q24@0:8@16
// Implementation: 0x10b0f6e58

// -[SCNContentManagerContentManager queryContentStatusAsync:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0f6ef8

// -[SCNContentManagerContentManager queryZipEntryContentStatus:zipEntryNamePrefixes:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x10b0f6fa0

// -[SCNContentManagerContentManager queryZipEntryContentStatusAsync:zipEntryNamePrefixes:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0f7068

// -[SCNContentManagerContentManager queryContentRetrievalMetricsAsync:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0f7184

// -[SCNContentManagerContentManager createContentWriter:contentKey:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b0f722c

// -[SCNContentManagerContentManager removeContents:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0f7370

// -[SCNContentManagerContentManager removeAllContentsForContextType:callback:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b0f7434

// -[SCNContentManagerContentManager appStateChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0f74b8

// -[SCNContentManagerContentManager queryCachedContentMetadata:callback:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b0f7514

// -[SCNContentManagerContentManager queryCachedContentMetadataWithAttribution:contentAttribution:callback:]
// Type encoding: v36@0:8q16i24@28
// Implementation: 0x10b0f7598

// -[SCNContentManagerContentManager getContentFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0f76fc

// -[SCNContentManagerContentManager logConsumed:useCase:bytesRange:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10b0f778c

// -[SCNContentManagerContentManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0f794c

// -[SCNContentManagerContentManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10b0f79a0

// +[SCNContentManagerContentManager createWithCacheController:cacheController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0f58c8

// +[SCNContentManagerContentManager createWithGRPC:cacheController:authContextDelegate:cronetPointer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b0f59c0

// +[SCNContentManagerContentManager getContentIdFromContentObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0f7640

@end
