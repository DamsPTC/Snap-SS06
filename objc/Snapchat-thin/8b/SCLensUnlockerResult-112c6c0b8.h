// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockerResult
// Superclass: NSObject
// Address: 0x112c6c0b8

@interface SCLensUnlockerResult

// Property: toUnlockResult; attributes: T@"SCLensUnlockResult",R,N
// Property: lens; attributes: T@"SCLens",R,N,V_lens
// Property: resultType; attributes: TQ,R,N,V_resultType
// Property: unlockType; attributes: TQ,R,N,V_unlockType
// Property: error; attributes: T@"NSError",R,N,V_error

// -[SCLensUnlockerResult toUnlockResult]
// Type encoding: @16@0:8
// Implementation: 0x10b0b3dfc

// -[SCLensUnlockerResult initWithLens:resultType:unlockType:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10b0b7d20

// -[SCLensUnlockerResult initWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0b7da8

// -[SCLensUnlockerResult lens]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7e20

// -[SCLensUnlockerResult resultType]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b7e28

// -[SCLensUnlockerResult unlockType]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b7e30

// -[SCLensUnlockerResult error]
// Type encoding: @16@0:8
// Implementation: 0x10b0b7e38

// -[SCLensUnlockerResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b7e40

@end
