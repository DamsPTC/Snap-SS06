// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiManager
// Superclass: NSObject
// Address: 0x112a5cf98

@interface SCBitmojiManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiManager initWithBitmoji3DFetcher:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100ba2a00

// -[SCBitmojiManager fetchBitmojiImage:contexts:feature:completionQueue:completionBlock:]
// Type encoding: @52@0:8@16@24i32@36@?44
// Implementation: 0x10570a10c

// -[SCBitmojiManager fetchCurrentOrPrior:contexts:feature:transform:completionQueue:completionBlock:]
// Type encoding: @60@0:8@16@24i32@?36@44@?52
// Implementation: 0x10570a110

// -[SCBitmojiManager fetchBitmojiImageData:contexts:feature:transform:completionQueue:completionBlock:]
// Type encoding: @60@0:8@16@24i32@?36@44@?52
// Implementation: 0x10570a114

// -[SCBitmojiManager prefetchBitmojiImage:contexts:feature:completionQueue:completionBlock:]
// Type encoding: @52@0:8@16@24i32@36@?44
// Implementation: 0x10570a118

// -[SCBitmojiManager fetchURLForBitmojiImage_DEPRECATED:feature:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x10570a11c

// -[SCBitmojiManager stringFromAttribution:]
// Type encoding: @20@0:8i16
// Implementation: 0x10570a504

// -[SCBitmojiManager attributionFromString:]
// Type encoding: i24@0:8@16
// Implementation: 0x10570a50c

// -[SCBitmojiManager _fetch3DImage:contexts:feature:completionQueue:completionBlock:]
// Type encoding: @52@0:8@16@24i32@36@?44
// Implementation: 0x10570a514

// -[SCBitmojiManager _fetch3DImageData:contexts:feature:transform:completionQueue:completionBlock:]
// Type encoding: @60@0:8@16@24i32@?36@44@?52
// Implementation: 0x10570b154

// -[SCBitmojiManager _prefetch3DImageData:contexts:feature:completionQueue:completionBlock:]
// Type encoding: @52@0:8@16@24i32@36@?44
// Implementation: 0x10570bee0

// -[SCBitmojiManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10570c538

// +[SCBitmojiManager defaultManagerWithBitmoji3DFetcher:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10570a0a0

@end
