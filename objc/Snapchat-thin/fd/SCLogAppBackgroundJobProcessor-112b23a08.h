// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogAppBackgroundJobProcessor
// Superclass: NSObject
// Address: 0x112b23a08

@interface SCLogAppBackgroundJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLogAppBackgroundJobProcessor initWithBlizzardLogger:locationSharingPreferencesProvider:devicePermissionManager:appBackgroundNetworkStatsProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106c1a020

// -[SCLogAppBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x106c1a11c

// -[SCLogAppBackgroundJobProcessor _populateRequestStatsOnRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c1a2a0

// -[SCLogAppBackgroundJobProcessor _handlePreferencesLoadedWithJobCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106c1a314

// -[SCLogAppBackgroundJobProcessor _fetchAuthorizationStatus:notificationStatus:]
// Type encoding: v32@0:8@?16q24
// Implementation: 0x106c1a538

// -[SCLogAppBackgroundJobProcessor _fetchUISettingsWithJobCompletion:notificationStatus:locationAuthorizationStatus:]
// Type encoding: v36@0:8@?16q24i32
// Implementation: 0x106c1a684

// -[SCLogAppBackgroundJobProcessor _handlePreferencesLoadedWithSystemAppearanceSetting:appAppearanceSetting:accessibilityFontSize:voiceOverStatus:captionsStatus:contrastStatus:switchControlStatus:grayscaleStatus:notificationStatus:locationAuthorizationStatus:onComplete:screenHeightInPoints:screenWidthInPoints:isLandscape:]
// Type encoding: v100@0:8q16q24q32B40B44B48B52B56q60i68@?72d80d88B96
// Implementation: 0x106c1a95c

// -[SCLogAppBackgroundJobProcessor _locationSharingListUserIdsFromPreferences:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c1ad60

// -[SCLogAppBackgroundJobProcessor _appearanceSettingFromSystemSetting:]
// Type encoding: q24@0:8q16
// Implementation: 0x106c1af04

// -[SCLogAppBackgroundJobProcessor _appearanceSettingFromAppPreference:]
// Type encoding: q24@0:8q16
// Implementation: 0x106c1af28

// -[SCLogAppBackgroundJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c1af48

@end
