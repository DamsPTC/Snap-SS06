// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkTracer
// Superclass: NSObject
// Address: 0x112a417e8

@interface SCNetworkTracer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNetworkTracer initWithApplicationLifeCycleEvent:backgroundTaskWrapper:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054e1360

// -[SCNetworkTracer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1054e1524

// -[SCNetworkTracer logEventBeginWithName:timeStamp:pid:uid:tid:cname:args:]
// Type encoding: v68@0:8@16Q24@32I40@44@52@60
// Implementation: 0x1054e156c

// -[SCNetworkTracer logEventEndWithName:timeStamp:pid:uid:tid:cname:isFinal:]
// Type encoding: v64@0:8@16Q24@32I40@44@52B60
// Implementation: 0x1054e1570

// -[SCNetworkTracer logInstantEventWithName:timeStamp:pid:uid:tid:cname:isGlobal:]
// Type encoding: v64@0:8@16Q24@32I40@44@52B60
// Implementation: 0x1054e1574

// -[SCNetworkTracer writeLogsToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x1054e1578

// -[SCNetworkTracer _trimTimestampForNetworkTraceFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054e18e4

// -[SCNetworkTracer _getUploadPerfTestTraceUrl]
// Type encoding: @16@0:8
// Implementation: 0x1054e1990

// -[SCNetworkTracer _shouldUploadPerfTestTrace]
// Type encoding: B16@0:8
// Implementation: 0x1054e1a04

// -[SCNetworkTracer _flushTraceFileIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1054e1a38

// -[SCNetworkTracer _heartbeatLogging]
// Type encoding: v16@0:8
// Implementation: 0x1054e1a3c

// -[SCNetworkTracer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054e1b98

@end
