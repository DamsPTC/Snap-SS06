// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCapturerTokenImpl
// Superclass: NSObject
// Address: 0x112a27f28

@interface SCCapturerTokenImpl

// Property: isValid; attributes: TB,R,N,V_isValid
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCapturerTokenImpl initWithIdentifier:performer:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1008ba274

// -[SCCapturerTokenImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x100c24ea8

// -[SCCapturerTokenImpl checkIsValid:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052f38a0

// -[SCCapturerTokenImpl isOnlyActiveToken:performer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1052f3910

// -[SCCapturerTokenImpl invalidateAfter:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x1052f3b24

// -[SCCapturerTokenImpl description]
// Type encoding: @16@0:8
// Implementation: 0x1052f3cb4

// -[SCCapturerTokenImpl isValid]
// Type encoding: B16@0:8
// Implementation: 0x1052f3d40

// -[SCCapturerTokenImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c24fa8

@end
