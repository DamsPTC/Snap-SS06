// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackTracer
// Superclass: NSObject
// Address: 0x112934598

@interface SCPlaybackTracer


// -[SCPlaybackTracer init]
// Type encoding: @16@0:8
// Implementation: 0x103b793d8

// +[SCPlaybackTracer annotate:]
// Type encoding: v24@0:8@16
// Implementation: 0x103b791ec

// +[SCPlaybackTracer beginFor:]
// Type encoding: q24@0:8@16
// Implementation: 0x103b7921c

// +[SCPlaybackTracer endFor:]
// Type encoding: v24@0:8q16
// Implementation: 0x103b79254

// +[SCPlaybackTracer currentTraceClockUs]
// Type encoding: q16@0:8
// Implementation: 0x103b792ac

// +[SCPlaybackTracer insertAsyncSpanWithStart:end:name:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x103b79304

// +[SCPlaybackTracer formattedRangeFor:]
// Type encoding: @32@0:8{_NSRange=QQ}16
// Implementation: 0x103b7939c

@end
