// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCM3U8
// Superclass: NSObject
// Address: 0x112c73458

@interface SCM3U8

// Property: data; attributes: T@"NSData",R,N
// Property: string; attributes: T@"NSString",R,N,V_string
// Property: isValid; attributes: TB,R,N
// Property: urls; attributes: T@"NSArray",R,N
// Property: segments; attributes: T@"NSArray",R,N
// Property: variants; attributes: T@"NSArray",R,N
// Property: iframeVariants; attributes: T@"NSArray",R,N
// Property: playlistType; attributes: Tq,R,N

// -[SCM3U8 initWithData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2925b8

// -[SCM3U8 initWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2926d0

// -[SCM3U8 data]
// Type encoding: @16@0:8
// Implementation: 0x10b292b90

// -[SCM3U8 isValid]
// Type encoding: B16@0:8
// Implementation: 0x10b292b9c

// -[SCM3U8 urls]
// Type encoding: @16@0:8
// Implementation: 0x10b292bac

// -[SCM3U8 segments]
// Type encoding: @16@0:8
// Implementation: 0x10b292bb4

// -[SCM3U8 variants]
// Type encoding: @16@0:8
// Implementation: 0x10b292bbc

// -[SCM3U8 iframeVariants]
// Type encoding: @16@0:8
// Implementation: 0x10b292bc4

// -[SCM3U8 playlistType]
// Type encoding: q16@0:8
// Implementation: 0x10b292bcc

// -[SCM3U8 M3U8ByUpdatingURLsWithBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b292c0c

// -[SCM3U8 M3U8ByUpdatingURLsWithURLs:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b292c98

// -[SCM3U8 M3U8ByResolvingAgainstBaseURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b292cec

// -[SCM3U8 M3U8BoostVideoVariantWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b292e68

// -[SCM3U8 copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b293d08

// -[SCM3U8 _segmentsFromM3U8String:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b293d2c

// -[SCM3U8 _variantsFromM3U8String:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2941b4

// -[SCM3U8 _iFrameVariantsFromM3U8String:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2946f0

// -[SCM3U8 _m3u8StringByReplacingURLSInM3U8String:withURLs:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b294960

// -[SCM3U8 _urlsFromM3U8String:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b294a68

// -[SCM3U8 _playlistTypeFromM3U8String:]
// Type encoding: q24@0:8@16
// Implementation: 0x10b294c78

// -[SCM3U8 string]
// Type encoding: @16@0:8
// Implementation: 0x10b294e28

// -[SCM3U8 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b294e30

// +[SCM3U8 mainM3U8WithBitrate:averageBitrate:resolution:framerate:mediaM3U8URL:]
// Type encoding: @64@0:8Q16Q24{CGSize=dd}32d48@56
// Implementation: 0x10b2932e0

// +[SCM3U8 mainM3U8WithVariants:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b293564

// +[SCM3U8 mediaM3U8WithHeaderSegment:mediaSegments:targetDuration:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x10b2937f0

@end
