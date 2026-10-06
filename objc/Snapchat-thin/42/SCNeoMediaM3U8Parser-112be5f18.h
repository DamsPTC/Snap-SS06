// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaM3U8Parser
// Superclass: NSObject
// Address: 0x112be5f18

@interface SCNeoMediaM3U8Parser

// Property: error; attributes: T@"NSError",R,N,V_error
// Property: isAtEnd; attributes: TB,R,N

// -[SCNeoMediaM3U8Parser initWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090a0e58

// -[SCNeoMediaM3U8Parser isAtEnd]
// Type encoding: B16@0:8
// Implementation: 0x1090a0f30

// -[SCNeoMediaM3U8Parser parseNewline]
// Type encoding: B16@0:8
// Implementation: 0x1090a0f48

// -[SCNeoMediaM3U8Parser parseComment]
// Type encoding: B16@0:8
// Implementation: 0x1090a0f9c

// -[SCNeoMediaM3U8Parser skipCommentsAndNewlines]
// Type encoding: v16@0:8
// Implementation: 0x1090a1014

// -[SCNeoMediaM3U8Parser nextTokenIsTag]
// Type encoding: B16@0:8
// Implementation: 0x1090a1044

// -[SCNeoMediaM3U8Parser onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090a108c

// -[SCNeoMediaM3U8Parser _parseEpilogue]
// Type encoding: B16@0:8
// Implementation: 0x1090a1134

// -[SCNeoMediaM3U8Parser parseTag:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090a1180

// -[SCNeoMediaM3U8Parser parseTag:withAttributesList:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1090a11d0

// -[SCNeoMediaM3U8Parser parseTag:withSingleAttributesList:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1090a1374

// -[SCNeoMediaM3U8Parser parseTag:withNamedAttributes:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1090a1440

// -[SCNeoMediaM3U8Parser parseString:]
// Type encoding: B24@0:8^@16
// Implementation: 0x1090a1710

// -[SCNeoMediaM3U8Parser error]
// Type encoding: @16@0:8
// Implementation: 0x1090a178c

// -[SCNeoMediaM3U8Parser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090a1794

@end
