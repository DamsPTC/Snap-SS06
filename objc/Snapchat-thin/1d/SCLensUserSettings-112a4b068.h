// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUserSettings
// Superclass: NSObject
// Address: 0x112a4b068

@interface SCLensUserSettings

// Property: lastLensesActivationDate; attributes: T@"NSDate",&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensUserSettings initWithUserPreferences:userSegmentsProvider:usernameProvider:userSession:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100bc8b98

// -[SCLensUserSettings lastLensesActivationDate]
// Type encoding: @16@0:8
// Implementation: 0x100bc8fe4

// -[SCLensUserSettings setLastLensesActivationDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055c7768

// -[SCLensUserSettings isActiveLensesUser]
// Type encoding: B16@0:8
// Implementation: 0x100bc8d3c

// -[SCLensUserSettings isActiveLensesUserUpdates]
// Type encoding: @16@0:8
// Implementation: 0x1055c7824

// -[SCLensUserSettings isNewUser]
// Type encoding: B16@0:8
// Implementation: 0x1055c786c

// -[SCLensUserSettings userId]
// Type encoding: @16@0:8
// Implementation: 0x1055c78cc

// -[SCLensUserSettings usernameDisplayOnly]
// Type encoding: @16@0:8
// Implementation: 0x1055c78d4

// -[SCLensUserSettings .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055c791c

@end
