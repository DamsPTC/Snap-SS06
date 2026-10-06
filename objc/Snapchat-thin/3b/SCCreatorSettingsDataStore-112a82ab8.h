// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreatorSettingsDataStore
// Superclass: NSObject
// Address: 0x112a82ab8

@interface SCCreatorSettingsDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreatorSettingsDataStore initWithDocObjectContext:creatorSettingsDataTracker:circumstanceEngine:requestManager:snapTokenProvider:userPreferences:userID:isFromLogin:]
// Type encoding: @76@0:8@16@24@32@40@48@56@64B72
// Implementation: 0x10043ec64

// -[SCCreatorSettingsDataStore didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a042c8

// -[SCCreatorSettingsDataStore didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105a042cc

// -[SCCreatorSettingsDataStore _checkIfCreatorSettingsStale:]
// Type encoding: v20@0:8B16
// Implementation: 0x10043ff1c

// -[SCCreatorSettingsDataStore _refreshCreatorSettings]
// Type encoding: v16@0:8
// Implementation: 0x105a044f0

// -[SCCreatorSettingsDataStore _fetchCreatorSettingsWithAccessToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a04674

// -[SCCreatorSettingsDataStore _overrideCreatorSettingsDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a0484c

// -[SCCreatorSettingsDataStore _completeCreatorSettingsDataStoreOverride]
// Type encoding: v16@0:8
// Implementation: 0x105a04c60

// -[SCCreatorSettingsDataStore _updateCreatorSettingsForSnapchatter:isSubscribing:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a04cf0

// -[SCCreatorSettingsDataStore _completeCreatorSettingsUpdate:isSubscribing:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a04ef8

// -[SCCreatorSettingsDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a04f90

@end
