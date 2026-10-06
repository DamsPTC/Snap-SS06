// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingResourceLoader
// Superclass: NSObject
// Address: 0x112b6e9b8

@interface SCStreamingResourceLoader

// Property: resourceLoaderErrorObservable; attributes: T@"SCObservable",R,N,V_resourceLoaderErrorObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingResourceLoader initWithConfigProvider:grapheneRegistry:contentResolver:contentFetcher:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107aab8e0

// -[SCStreamingResourceLoader createPlaybackAssetFromContentBundle:contentType:mediaContextType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x107aab9f8

// -[SCStreamingResourceLoader createPlaybackAssetFromContentResult:resourceId:contentType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107aabd38

// -[SCStreamingResourceLoader createAssetFromContentResult:resourceId:contentType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107aabd3c

// -[SCStreamingResourceLoader _assetFromContentResult:resourceId:contentType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107aabd40

// -[SCStreamingResourceLoader _estimatedBitrateKbpsFromPrefetchHint:]
// Type encoding: q24@0:8@16
// Implementation: 0x107aac184

// -[SCStreamingResourceLoader requestHandlerDidFinish:withError:contentInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107aac344

// -[SCStreamingResourceLoader resourceLoaderErrorObservable]
// Type encoding: @16@0:8
// Implementation: 0x107aac3f4

// -[SCStreamingResourceLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aac3fc

@end
