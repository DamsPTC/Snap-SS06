// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserActivityInfoProviderImpl
// Superclass: NSObject
// Address: 0x112a34598

@interface SCUserActivityInfoProviderImpl

// Property: lastActiveDays; attributes: T@"NSNumber",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserActivityInfoProviderImpl initWithUserSessionContext:userPreferences:currentDateProvider:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x100a885ec

// -[SCUserActivityInfoProviderImpl lastActiveDays]
// Type encoding: @16@0:8
// Implementation: 0x1053f1784

// -[SCUserActivityInfoProviderImpl _updateValueWithUserSessionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a886b4

// -[SCUserActivityInfoProviderImpl _updateWithLoginResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053f198c

// -[SCUserActivityInfoProviderImpl _updateAfterRegistration]
// Type encoding: v16@0:8
// Implementation: 0x1053f1a6c

// -[SCUserActivityInfoProviderImpl _updateAfterResume]
// Type encoding: v16@0:8
// Implementation: 0x100a88758

// -[SCUserActivityInfoProviderImpl _resolveLastActiveDateIfNeed]
// Type encoding: v16@0:8
// Implementation: 0x1053f1ac0

// -[SCUserActivityInfoProviderImpl _readThenUpdatePreferencesWithDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053f1ae0

// -[SCUserActivityInfoProviderImpl _updatePreferencesWithDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053f1b3c

// -[SCUserActivityInfoProviderImpl _updatePreferencesWithCurrentDate]
// Type encoding: v16@0:8
// Implementation: 0x1053f1b94

// -[SCUserActivityInfoProviderImpl _lastActiveDateFromUserPreferences]
// Type encoding: @16@0:8
// Implementation: 0x1053f1bd8

// -[SCUserActivityInfoProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053f1c28

@end
