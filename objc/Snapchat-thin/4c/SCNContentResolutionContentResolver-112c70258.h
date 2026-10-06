// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNContentResolutionContentResolver
// Superclass: NSObject
// Address: 0x112c70258

@interface SCNContentResolutionContentResolver

// Property: nativeContentResolver; attributes: T@,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNContentResolutionContentResolver nativeContentResolver]
// Type encoding: @16@0:8
// Implementation: 0x105396670

// -[SCNContentResolutionContentResolver resolveContentUrl:mediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105396674

// -[SCNContentResolutionContentResolver convertUrlToContentObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053966b8

// -[SCNContentResolutionContentResolver initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10b109bac

// -[SCNContentResolutionContentResolver resolveUrl:mediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b10a02c

// -[SCNContentResolutionContentResolver resolveUrlAsync:mediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b10a100

// -[SCNContentResolutionContentResolver resolveContentBundle:debugInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b10a41c

// -[SCNContentResolutionContentResolver resolveContentBundleWithMetadata:debugInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b10a4ec

// -[SCNContentResolutionContentResolver resolveContentBundleAsPlatformResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b10a5bc

// -[SCNContentResolutionContentResolver extractAllContentLocationsFromContentBundle:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b10a684

// -[SCNContentResolutionContentResolver resolveSerializedContentObject:mediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b10a7d0

// -[SCNContentResolutionContentResolver resolveSerializedContentObjectAsync:mediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b10a8a4

// -[SCNContentResolutionContentResolver resolveContentLocationToURLs:debugInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b10a994

// -[SCNContentResolutionContentResolver updateNetworkMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b10aa70

// -[SCNContentResolutionContentResolver getUrlForRelativePathWithinAssetGroup:desiredAssetRelativePath:currentAssetRelativePath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b10ab04

// -[SCNContentResolutionContentResolver getContentIdFromContentUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b10ac2c

// -[SCNContentResolutionContentResolver isContentObjectExpired:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b10ace4

// -[SCNContentResolutionContentResolver convertContentUrlToContentObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b10ad80

// -[SCNContentResolutionContentResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b10aef8

// -[SCNContentResolutionContentResolver .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10b10af4c

// +[SCNContentResolutionContentResolver createWithAllDependencies:blizzardLogger:emitContentResolve:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b109c24

// +[SCNContentResolutionContentResolver createWithAllDependenciesOnWeb:mediaVariantProvider:blizzardLogger:emitContentResolve:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x10b109d10

// +[SCNContentResolutionContentResolver create:mediaVariantProvider:blizzardLogger:fallbackServiceHost:emitContentResolve:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10b109ea0

@end
