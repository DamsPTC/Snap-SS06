// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerSnapImageDownloader
// Superclass: NSObject
// Address: 0x112a5b648

@interface SCComposerSnapImageDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerSnapImageDownloader initWithImageFetchingService:]
// Type encoding: @24@0:8@16
// Implementation: 0x100be9214

// -[SCComposerSnapImageDownloader contentTtlInMinutes]
// Type encoding: q16@0:8
// Implementation: 0x1056e9bac

// -[SCComposerSnapImageDownloader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1056e9bb4

// -[SCComposerSnapImageDownloader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x1056e9c14

// -[SCComposerSnapImageDownloader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x1056e9c68

// -[SCComposerSnapImageDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056e9f7c

@end
