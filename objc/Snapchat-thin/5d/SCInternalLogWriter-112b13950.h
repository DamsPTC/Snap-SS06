// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInternalLogWriter
// Superclass: NSObject
// Address: 0x112b13950

@interface SCInternalLogWriter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInternalLogWriter initWithDataWriter:infoProviderRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106af7a10

// -[SCInternalLogWriter writeLogsToURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x106af7a98

// -[SCInternalLogWriter provideMultipleShakeLogs]
// Type encoding: @16@0:8
// Implementation: 0x106af7c78

// -[SCInternalLogWriter _writeDataWithFileName:data:baseUrl:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106af7dcc

// -[SCInternalLogWriter _normalizedFeatureFromFileName:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af7f0c

// -[SCInternalLogWriter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106af832c

@end
