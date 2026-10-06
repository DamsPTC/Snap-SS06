// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoltOnDemandResourceDownloader
// Superclass: NSObject
// Address: 0x112a41388

@interface SCBoltOnDemandResourceDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoltOnDemandResourceDownloader initWithContentDelivery:imageFetchingService:circumstanceEngine:contentResultDataFactory:contentResultUnzipper:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1054df108

// -[SCBoltOnDemandResourceDownloader prefetch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054df204

// -[SCBoltOnDemandResourceDownloader download:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054df20c

// -[SCBoltOnDemandResourceDownloader downloadAndUnzip:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054df370

// -[SCBoltOnDemandResourceDownloader downloadAndUnzipToNamedContents:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054df514

// -[SCBoltOnDemandResourceDownloader downloadImage:attributedFeature:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1054df650

// -[SCBoltOnDemandResourceDownloader _unzipResource:fromResult:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054df8f4

// -[SCBoltOnDemandResourceDownloader _registerIfRequiredAndRetriveResource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054df900

// -[SCBoltOnDemandResourceDownloader _retrieveResource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054dfbb4

// -[SCBoltOnDemandResourceDownloader _downloadRequestForResource:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054dfd6c

// -[SCBoltOnDemandResourceDownloader urlOfResource:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054dfe38

// -[SCBoltOnDemandResourceDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054e0034

@end
