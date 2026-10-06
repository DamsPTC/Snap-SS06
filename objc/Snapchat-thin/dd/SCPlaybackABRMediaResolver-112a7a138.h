// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackABRMediaResolver
// Superclass: NSObject
// Address: 0x112a7a138

@interface SCPlaybackABRMediaResolver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackABRMediaResolver initWithBoltContentResolver:contentDelivery:configProvider:abrMediaServices:webProxyServices:legacyMediaResolver:performer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1058f2d08

// -[SCPlaybackABRMediaResolver shouldResolveWithRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058f2f04

// -[SCPlaybackABRMediaResolver resolveRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f30dc

// -[SCPlaybackABRMediaResolver downloadSingleMedia:range:loggedUseCase:completion:]
// Type encoding: @56@0:8@16{_NSRange=QQ}24@40@?48
// Implementation: 0x1058f3214

// -[SCPlaybackABRMediaResolver prefetchStreamingContentFrom:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1058f3218

// -[SCPlaybackABRMediaResolver _failureResultForRequest:errorCode:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1058f321c

// -[SCPlaybackABRMediaResolver _processRequest:contentBundle:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1058f3324

// -[SCPlaybackABRMediaResolver _resolvedUrlFromABRResult:error:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058f3b3c

// -[SCPlaybackABRMediaResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058f3cc4

@end
