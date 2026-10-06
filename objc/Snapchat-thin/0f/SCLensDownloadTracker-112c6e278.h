// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDownloadTracker
// Superclass: NSObject
// Address: 0x112c6e278

@interface SCLensDownloadTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDownloadTracker initWithPreferencesStorage:currentDateProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0e2970

// -[SCLensDownloadTracker initWithPreferencesStorage:currentDateProvider:cooldownTimeInterval:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x100ba415c

// -[SCLensDownloadTracker saveLastDownloadDateForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0e297c

// -[SCLensDownloadTracker _setLastDownloadDate:forLensResource:withExpirationDate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0e2a3c

// -[SCLensDownloadTracker wasContentRecentlyDownloadedForLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0e2b18

// -[SCLensDownloadTracker removeAllDownloadRecords]
// Type encoding: v16@0:8
// Implementation: 0x10b0e2d74

// -[SCLensDownloadTracker saveToPreferences]
// Type encoding: v16@0:8
// Implementation: 0x10b0e2e68

// -[SCLensDownloadTracker _loadFromPreferencesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b0e2f5c

// -[SCLensDownloadTracker _cleanupOldLensContentDownloadData]
// Type encoding: v16@0:8
// Implementation: 0x10b0e30b0

// -[SCLensDownloadTracker _saveCooldownExpirationDate:forLensResource:withExpirationDate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b0e3218

// -[SCLensDownloadTracker _didEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0e336c

// -[SCLensDownloadTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0e3370

@end
