// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPSearchSessionDefault
// Superclass: NSObject
// Address: 0x112a6e388

@interface CTPSearchSessionDefault

// Property: config; attributes: T@"<CTPSessionConfig>",&,N
// Property: age; attributes: Ti,R,N
// Property: countryCode; attributes: T@"NSString",R,N
// Property: location; attributes: T@"CLLocation",R,N
// Property: bitmojiAvatarId; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: queryId; attributes: Tq,R,N
// Property: superSessionId; attributes: T@"NSString",R,N
// Property: sessionId; attributes: T@"NSString",R,N
// Property: userInfo; attributes: T@"<CTPUserInfo>",R,N

// -[CTPSearchSessionDefault initWithSuperSessionId:config:age:bitmojiAvatarProvider:locationProvider:]
// Type encoding: @52@0:8@16@24i32@36@44
// Implementation: 0x105809efc

// -[CTPSearchSessionDefault setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580a000

// -[CTPSearchSessionDefault superSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10580a030

// -[CTPSearchSessionDefault sessionId]
// Type encoding: @16@0:8
// Implementation: 0x10580a058

// -[CTPSearchSessionDefault config]
// Type encoding: @16@0:8
// Implementation: 0x10580a080

// -[CTPSearchSessionDefault userInfo]
// Type encoding: @16@0:8
// Implementation: 0x10580a0a8

// -[CTPSearchSessionDefault resetSession]
// Type encoding: v16@0:8
// Implementation: 0x10580a0ac

// -[CTPSearchSessionDefault queryId]
// Type encoding: q16@0:8
// Implementation: 0x10580a0e8

// -[CTPSearchSessionDefault incrementQueryId]
// Type encoding: v16@0:8
// Implementation: 0x10580a0f0

// -[CTPSearchSessionDefault updateWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580a100

// -[CTPSearchSessionDefault age]
// Type encoding: i16@0:8
// Implementation: 0x10580a104

// -[CTPSearchSessionDefault countryCode]
// Type encoding: @16@0:8
// Implementation: 0x10580a10c

// -[CTPSearchSessionDefault location]
// Type encoding: @16@0:8
// Implementation: 0x10580a158

// -[CTPSearchSessionDefault bitmojiAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x10580a1a0

// -[CTPSearchSessionDefault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10580a1e8

@end
