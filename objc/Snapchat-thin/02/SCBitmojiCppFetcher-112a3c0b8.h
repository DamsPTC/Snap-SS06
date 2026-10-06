// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiCppFetcher
// Superclass: NSObject
// Address: 0x112a3c0b8

@interface SCBitmojiCppFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiCppFetcher initWithBitmoji2dFetcher:bitmoji3dFetcher:selfieFetcher:configProvider:preferences:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1054a57ec

// -[SCBitmojiCppFetcher fetchBitmojiImage:feature:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1054a59b0

// -[SCBitmojiCppFetcher _fetchForAvatarId:selfieId:selfieType:scale:feature:callback:]
// Type encoding: v60@0:8@16@24Q32Q40i48@?52
// Implementation: 0x1054a5c7c

// -[SCBitmojiCppFetcher _fetchForAvatarId:stickerId:scale:imageType:feature:callback:]
// Type encoding: v60@0:8@16@24Q32Q40i48@?52
// Implementation: 0x1054a5dc8

// -[SCBitmojiCppFetcher _fetchForAvatarId:sceneId:scale:renderStyle:imageType:feature:callback:]
// Type encoding: v68@0:8@16@24Q32q40Q48i56@?60
// Implementation: 0x1054a5f1c

// -[SCBitmojiCppFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054a624c

@end
