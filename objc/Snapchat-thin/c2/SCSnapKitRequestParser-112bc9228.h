// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapKitRequestParser
// Superclass: NSObject
// Address: 0x112bc9228

@interface SCSnapKitRequestParser


// -[SCSnapKitRequestParser initWithDeepLinkUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ecba48

// -[SCSnapKitRequestParser verifyAndExtractMetadata]
// Type encoding: @16@0:8
// Implementation: 0x108ecbabc

// -[SCSnapKitRequestParser verifyAndExtractPayloadWithType:]
// Type encoding: @24@0:8q16
// Implementation: 0x108ecbd30

// -[SCSnapKitRequestParser _verifyPreviewPayload:metadata:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108ecbeb4

// -[SCSnapKitRequestParser _verifyCameraPayload:metadata:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108ecc18c

// -[SCSnapKitRequestParser _decodeParams:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x108ecc3d0

// -[SCSnapKitRequestParser _creativeKitLoggingDataForPayload:metadata:type:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x108ecc458

// -[SCSnapKitRequestParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ecc624

@end
