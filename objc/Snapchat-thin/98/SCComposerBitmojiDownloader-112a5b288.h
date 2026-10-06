// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerBitmojiDownloader
// Superclass: NSObject
// Address: 0x112a5b288

@interface SCComposerBitmojiDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerBitmojiDownloader initWithBitmojiImageFetcher:performerProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c01288

// -[SCComposerBitmojiDownloader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x1056e4a58

// -[SCComposerBitmojiDownloader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1056e4ac4

// -[SCComposerBitmojiDownloader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x1056e4dc0

// -[SCComposerBitmojiDownloader loadBytesWithRequestPayload:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1056e4fa8

// -[SCComposerBitmojiDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056e5138

@end
