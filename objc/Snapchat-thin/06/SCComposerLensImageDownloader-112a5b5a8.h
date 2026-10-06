// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerLensImageDownloader
// Superclass: NSObject
// Address: 0x112a5b5a8

@interface SCComposerLensImageDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerLensImageDownloader initWithLensContentFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x100be9590

// -[SCComposerLensImageDownloader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x1056e9388

// -[SCComposerLensImageDownloader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1056e93f4

// -[SCComposerLensImageDownloader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x1056e956c

// -[SCComposerLensImageDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056e99e4

@end
