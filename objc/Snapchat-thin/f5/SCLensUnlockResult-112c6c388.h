// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockResult
// Superclass: NSObject
// Address: 0x112c6c388

@interface SCLensUnlockResult

// Property: toLegacyUnlockerResult; attributes: T@"SCLensUnlockerResult",R,N
// Property: lensMetadata; attributes: T@"SCLens",R,C,N,V_lensMetadata
// Property: resultType; attributes: TQ,R,N,V_resultType
// Property: unlockType; attributes: TQ,R,N,V_unlockType

// -[SCLensUnlockResult toLegacyUnlockerResult]
// Type encoding: @16@0:8
// Implementation: 0x10b0b3d7c

// -[SCLensUnlockResult createLaunchDataWithParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x10687fe1c

// -[SCLensUnlockResult initWithLensMetadata:resultType:unlockType:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10b0b9958

// -[SCLensUnlockResult copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b0b99e4

// -[SCLensUnlockResult hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b9a08

// -[SCLensUnlockResult isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0b9a78

// -[SCLensUnlockResult lensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b0b9b28

// -[SCLensUnlockResult resultType]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b9b30

// -[SCLensUnlockResult unlockType]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b9b38

// -[SCLensUnlockResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b9b40

@end
