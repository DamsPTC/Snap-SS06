// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiDefaultImageLoader
// Superclass: NSObject
// Address: 0x112b98038

@interface SCValdiDefaultImageLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiDefaultImageLoader init]
// Type encoding: @16@0:8
// Implementation: 0x10809cc48

// -[SCValdiDefaultImageLoader _clearCache]
// Type encoding: v16@0:8
// Implementation: 0x10809cd34

// -[SCValdiDefaultImageLoader _completeTask:withImage:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10809cd98

// -[SCValdiDefaultImageLoader _cachedImageForURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10809ced8

// -[SCValdiDefaultImageLoader _doLoadWithTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809cee0

// -[SCValdiDefaultImageLoader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x10809d2f4

// -[SCValdiDefaultImageLoader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10809d300

// -[SCValdiDefaultImageLoader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x10809d324

// -[SCValdiDefaultImageLoader loadBytesWithRequestPayload:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10809d3f4

// -[SCValdiDefaultImageLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10809d4d8

@end
