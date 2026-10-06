// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPermissionSettingsReporterImpl
// Superclass: NSObject
// Address: 0x112a60828

@interface SCPermissionSettingsReporterImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPermissionSettingsReporterImpl initWithUserSession:networkService:audioSession:captureAuthorizationChecker:contactPermissionManager:contactPermissionInfoProvider:locationPermissionsManager:spectaclesManager:userDefaults:userPreferences:reportTimestampGenerator:logger:userActivityInfoProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@?96@104@112
// Implementation: 0x10573e4e4

// -[SCPermissionSettingsReporterImpl reportPermissionSettingsWithSource:completionQueue:completionHandler:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x10573e810

// -[SCPermissionSettingsReporterImpl processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10573ea4c

// -[SCPermissionSettingsReporterImpl _isInCooldown]
// Type encoding: B16@0:8
// Implementation: 0x10573eb1c

// -[SCPermissionSettingsReporterImpl _handleLocationAuthorizationFetchResult:source:completionQueue:completionHandler:]
// Type encoding: v44@0:8B16Q20@28@?36
// Implementation: 0x10573ebc0

// -[SCPermissionSettingsReporterImpl _createPermissionsRequestWithVideoCaptureAuthorizationFetchResult:locationAuthorized:source:completionQueue:completionHandler:]
// Type encoding: v48@0:8B16B20Q24@32@?40
// Implementation: 0x10573edc0

// -[SCPermissionSettingsReporterImpl _reportPermissionRequest:source:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x10573f024

// -[SCPermissionSettingsReporterImpl _requestCompletedWithOutcome:source:completionQueue:completionHandler:]
// Type encoding: v44@0:8B16Q20@28@?36
// Implementation: 0x10573f2bc

// -[SCPermissionSettingsReporterImpl _logFlowStep:source:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10573f3f8

// -[SCPermissionSettingsReporterImpl _logFlowResult:source:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10573f4a4

// -[SCPermissionSettingsReporterImpl _contactPermissionAuthorizationStatus]
// Type encoding: i16@0:8
// Implementation: 0x10573f550

// -[SCPermissionSettingsReporterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10573f5ac

@end
