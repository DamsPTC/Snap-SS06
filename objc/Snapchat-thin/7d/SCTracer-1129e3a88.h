// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTracer
// Superclass: NSObject
// Address: 0x1129e3a88

@interface SCTracer


// -[SCTracer beginAsyncTraceAndStoreCookieID:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a016b4

// -[SCTracer endAsyncTraceWithStoredCookieID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048d89cc

// -[SCTracer trace:operation:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100521a38

// -[SCTracer traceWithNameBlock:operation:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1048d88a0

// -[SCTracer putSyncInstant:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008cf658

// -[SCTracer putAsyncInstant:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048d8660

// -[SCTracer beginAsyncTraceWithNameBlock:]
// Type encoding: q24@0:8@?16
// Implementation: 0x10029cea8

// -[SCTracer beginAsyncTrace:]
// Type encoding: q24@0:8@16
// Implementation: 0x10008a0fc

// -[SCTracer beginAsyncTraceWithoutName]
// Type encoding: q16@0:8
// Implementation: 0x1048d8170

// -[SCTracer pauseAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c7b5d8

// -[SCTracer resumeAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c7b694

// -[SCTracer cancelAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x1048d8254

// -[SCTracer endAsyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x1002bf3e0

// -[SCTracer endAsyncTrace:withName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1048d8334

// -[SCTracer beginSyncTraceWithNameBlock:]
// Type encoding: q24@0:8@?16
// Implementation: 0x1000ba978

// -[SCTracer beginSyncTrace:]
// Type encoding: q24@0:8@16
// Implementation: 0x100072520

// -[SCTracer endSyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x10007265c

// -[SCTracer traceCounter:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10011cf3c

// -[SCTracer logPerfEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1048d8398

// -[SCTracer emitUnclosedAsyncSpans]
// Type encoding: v16@0:8
// Implementation: 0x1048d83e4

// -[SCTracer currentTraceClockUs]
// Type encoding: q16@0:8
// Implementation: 0x100084730

// -[SCTracer insertSyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x100084a1c

// -[SCTracer insertAsyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x1048d84bc

// -[SCTracer cancelSyncTrace:]
// Type encoding: v24@0:8q16
// Implementation: 0x100436930

// -[SCTracer isTracing]
// Type encoding: B16@0:8
// Implementation: 0x1048d8570

// -[SCTracer init]
// Type encoding: @16@0:8
// Implementation: 0x100029974

// -[SCTracer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1048d800c

// +[SCTracer shared]
// Type encoding: @16@0:8
// Implementation: 0x1000724b4

@end
