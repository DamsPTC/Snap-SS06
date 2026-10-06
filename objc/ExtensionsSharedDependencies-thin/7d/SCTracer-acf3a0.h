// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTracer
// Superclass: NSObject
// Address: 0xacf3a0

@interface SCTracer


// -[SCTracer beginAsyncTraceAndStoreCookieID:]
// Type encoding: v24@0:8@16
// Implementation: 0x21cf24

// -[SCTracer endAsyncTraceWithStoredCookieID:]
// Type encoding: v24@0:8@16
// Implementation: 0x21d008

// -[SCTracer trace:operation:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x21cc14

// -[SCTracer traceWithNameBlock:operation:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x21cde8

// -[SCTracer putSyncInstant:]
// Type encoding: v24@0:8@16
// Implementation: 0x21ca84

// -[SCTracer putAsyncInstant:]
// Type encoding: v24@0:8@16
// Implementation: 0x21cb3c

// -[SCTracer beginAsyncTraceWithNameBlock:]
// Type encoding: q24@0:8@?16
// Implementation: 0x21c1a8

// -[SCTracer beginAsyncTrace:]
// Type encoding: q24@0:8@16
// Implementation: 0x21c2b8

// -[SCTracer beginAsyncTraceWithoutName]
// Type encoding: q16@0:8
// Implementation: 0x21c304

// -[SCTracer pauseAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x21c348

// -[SCTracer resumeAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x21c398

// -[SCTracer cancelAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x21c3e8

// -[SCTracer endAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x21c488

// -[SCTracer endAsyncTrace:withName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x21c4d8

// -[SCTracer beginSyncTraceWithNameBlock:]
// Type encoding: q24@0:8@?16
// Implementation: 0x21c65c

// -[SCTracer beginSyncTrace:]
// Type encoding: q24@0:8@16
// Implementation: 0x21c6a8

// -[SCTracer endSyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x21c6f4

// -[SCTracer traceCounter:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x21c744

// -[SCTracer logPerfEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x21c7a4

// -[SCTracer emitUnclosedAsyncSpans]
// Type encoding: v16@0:8
// Implementation: 0x21c7f0

// -[SCTracer currentTraceClockUs]
// Type encoding: q16@0:8
// Implementation: 0x21c834

// -[SCTracer insertSyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x21c878

// -[SCTracer insertAsyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x21c8e0

// -[SCTracer cancelSyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x21c948

// -[SCTracer isTracing]
// Type encoding: B16@0:8
// Implementation: 0x21c994

// -[SCTracer init]
// Type encoding: @16@0:8
// Implementation: 0x21bed4

// -[SCTracer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x21bfa8

// +[SCTracer shared]
// Type encoding: @16@0:8
// Implementation: 0x21be68

@end
