// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiSelfieManager
// Superclass: NSObject
// Address: 0x112a31668

@interface SCBitmojiSelfieManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiSelfieManager initWithGrpcClientFactory:selfieProvider:selfieFetcher:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1053cb1a8

// -[SCBitmojiSelfieManager fetchSelfie:contexts:feature:completionQueue:completion:]
// Type encoding: @52@0:8@16@24i32@36@?44
// Implementation: 0x1053cb3dc

// -[SCBitmojiSelfieManager fetchDataForSelfie:contexts:feature:completionQueue:completion:]
// Type encoding: @52@0:8@16@24i32@36@?44
// Implementation: 0x1053cb3e4

// -[SCBitmojiSelfieManager isSelfieCached:feature:]
// Type encoding: B28@0:8@16i24
// Implementation: 0x1053cb3ec

// -[SCBitmojiSelfieManager changeSelfie:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1053cb3f4

// -[SCBitmojiSelfieManager fetchURLForSelfie:feature:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x1053cb758

// -[SCBitmojiSelfieManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053cb760

@end
