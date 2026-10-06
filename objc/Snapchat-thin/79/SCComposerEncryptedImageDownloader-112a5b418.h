// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerEncryptedImageDownloader
// Superclass: NSObject
// Address: 0x112a5b418

@interface SCComposerEncryptedImageDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerEncryptedImageDownloader initWithContentDelivery:simpleContentFetcher:imageFetchingService:appStartExperimentReader:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100be8cc0

// -[SCComposerEncryptedImageDownloader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x1056e6598

// -[SCComposerEncryptedImageDownloader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1056e6604

// -[SCComposerEncryptedImageDownloader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x1056e6a38

// -[SCComposerEncryptedImageDownloader _fetchAndDecryptImageDataForImageURLRequest:parameters:completionQueue:completion:]
// Type encoding: @56@0:8@16{SCValdiAssetRequestParameters=qq}24@40@?48
// Implementation: 0x1056e6b54

// -[SCComposerEncryptedImageDownloader _imageFetchingServiceWithURLForConfig:parameters:completionQueue:completion:]
// Type encoding: @56@0:8@16{SCValdiAssetRequestParameters=qq}24@40@?48
// Implementation: 0x1056e700c

// -[SCComposerEncryptedImageDownloader _contentDeliveryWithURLForConfig:parameters:completionQueue:completion:]
// Type encoding: @56@0:8@16{SCValdiAssetRequestParameters=qq}24@40@?48
// Implementation: 0x1056e7598

// -[SCComposerEncryptedImageDownloader _fetchImageForContentObjectRequest:parameters:completionQueue:completion:]
// Type encoding: @56@0:8@16{SCValdiAssetRequestParameters=qq}24@40@?48
// Implementation: 0x1056e7990

// -[SCComposerEncryptedImageDownloader _simpleContentFetcherWithContentObjectForConfig:request:parameters:completionQueue:completion:]
// Type encoding: @64@0:8@16@24{SCValdiAssetRequestParameters=qq}32@48@?56
// Implementation: 0x1056e7bb4

// -[SCComposerEncryptedImageDownloader _imageFetchingServiceWithContentObjectForConfig:request:parameters:completionQueue:completion:]
// Type encoding: @64@0:8@16@24{SCValdiAssetRequestParameters=qq}32@48@?56
// Implementation: 0x1056e7f88

// -[SCComposerEncryptedImageDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056e8424

@end
