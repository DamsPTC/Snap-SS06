// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusAppStartServiceUpdaterImpl
// Superclass: NSObject
// Address: 0x112b256c8

@interface SCPlusAppStartServiceUpdaterImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusAppStartServiceUpdaterImpl initWithFeatureSettingsService:userPreferences:performerProvider:cameraHardwareConfiguration:systemLaunchTabCache:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106c4e854

// -[SCPlusAppStartServiceUpdaterImpl setSerializedAppStartConfig:uiContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106c4e9b8

// -[SCPlusAppStartServiceUpdaterImpl getSerializedAppStartConfig]
// Type encoding: @16@0:8
// Implementation: 0x106c4ec20

// -[SCPlusAppStartServiceUpdaterImpl syncConfigWithDefaultTabGatingState:isSubscribed:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106c4eca0

// -[SCPlusAppStartServiceUpdaterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c4ef24

// +[SCPlusAppStartServiceUpdaterImpl syncToPreferencesIfNeeded:featureSettingsService:systemLaunchTabCache:cameraHardwareConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1005b1de8

// +[SCPlusAppStartServiceUpdaterImpl _updateUserPreferences:withConfig:systemLaunchTabCache:cameraHardwareConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106c4ee20

@end
