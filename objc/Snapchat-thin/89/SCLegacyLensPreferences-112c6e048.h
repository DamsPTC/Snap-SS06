// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyLensPreferences
// Superclass: NSObject
// Address: 0x112c6e048

@interface SCLegacyLensPreferences

// Property: legacy_rawPreferences; attributes: T@"SCPreferences",R,N,V_lensPreferences
// Property: lensSubPickerActiveOptionIds; attributes: T@"NSDictionary",C,N
// Property: usedLensIds; attributes: T@"NSDictionary",&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyLensPreferences init]
// Type encoding: @16@0:8
// Implementation: 0x100ba334c

// -[SCLegacyLensPreferences lensSubPickerActiveOptionIds]
// Type encoding: @16@0:8
// Implementation: 0x10b0e0498

// -[SCLegacyLensPreferences setLensSubPickerActiveOptionIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0e04a8

// -[SCLegacyLensPreferences usedLensIds]
// Type encoding: @16@0:8
// Implementation: 0x10b0e04e8

// -[SCLegacyLensPreferences setUsedLensIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0e04f8

// -[SCLegacyLensPreferences contentArchiveSizeForLensId:]
// Type encoding: q24@0:8@16
// Implementation: 0x10b0e0538

// -[SCLegacyLensPreferences setContentArchiveSize:forLensId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b0e05d8

// -[SCLegacyLensPreferences loadLensPersistentStoreWithEffectId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0e06c8

// -[SCLegacyLensPreferences saveLensPersistentStoreWithEffectId:serializedStoreData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0e07ac

// -[SCLegacyLensPreferences clearLensPersistentStoreWithPolicy:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b0e0868

// -[SCLegacyLensPreferences _lensPersistentStoreKeyWithEffectId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0e0ac4

// -[SCLegacyLensPreferences _persistentStoreEntryWithValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0e0b3c

// -[SCLegacyLensPreferences legacy_rawPreferences]
// Type encoding: @16@0:8
// Implementation: 0x100ba4154

// -[SCLegacyLensPreferences .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0e0c28

@end
