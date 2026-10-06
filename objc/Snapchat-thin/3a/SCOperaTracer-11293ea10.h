// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaTracer
// Superclass: NSObject
// Address: 0x11293ea10

@interface SCOperaTracer


// -[SCOperaTracer init]
// Type encoding: @16@0:8
// Implementation: 0x103bbb374

// +[SCOperaTracer annotate:]
// Type encoding: v24@0:8@16
// Implementation: 0x103bbb228

// +[SCOperaTracer beginFor:]
// Type encoding: q24@0:8@16
// Implementation: 0x103bbb258

// +[SCOperaTracer endFor:]
// Type encoding: v24@0:8q16
// Implementation: 0x103bbb290

// +[SCOperaTracer insertTraceFor:startTimeUs:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x103bbb2e8

// +[SCOperaTracer currentTraceClock]
// Type encoding: q16@0:8
// Implementation: 0x103bbb31c

@end
