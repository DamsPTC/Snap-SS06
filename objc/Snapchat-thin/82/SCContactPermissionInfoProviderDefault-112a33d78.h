// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContactPermissionInfoProviderDefault
// Superclass: NSObject
// Address: 0x112a33d78

@interface SCContactPermissionInfoProviderDefault

// Property: grantedUserLevelContactAccessV1; attributes: TB,R,N
// Property: grantedUserLevelContactAccessV2; attributes: TB,R,N
// Property: grantedNeededContactPermissions; attributes: TB,R,N
// Property: grantedNeededContactPermissionsIncludingLimitAccess; attributes: TB,R,N
// Property: hasLimitedDeviceContactsAccess; attributes: TB,R,N
// Property: contactPermissionChangedSinceLastAppSession; attributes: TB,R,N
// Property: deniedDeviceLevelContactsPermissionDate; attributes: T@"NSDate",&,N
// Property: contactPermissionState; attributes: TQ,R,N
// Property: contactPermissionsStatusObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContactPermissionInfoProviderDefault initWithPreferences:userId:contactPermissionManager:userTrackedLogger:featureSettingsService:grapheneRegistry:lastLoginInfoRepository:applicationLifecycleEvents:userPreferences:autoGrantUserPermFeatureEnabled:shouldRemoveUserLevelPermission:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72@80@?88B96
// Implementation: 0x1053eb0c4

// -[SCContactPermissionInfoProviderDefault contactPermissionsStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x1053eb72c

// -[SCContactPermissionInfoProviderDefault grantedUserLevelContactAccessV1]
// Type encoding: B16@0:8
// Implementation: 0x1053eb754

// -[SCContactPermissionInfoProviderDefault grantedUserLevelContactAccessV2]
// Type encoding: B16@0:8
// Implementation: 0x1053eb7ec

// -[SCContactPermissionInfoProviderDefault grantedNeededContactPermissions]
// Type encoding: B16@0:8
// Implementation: 0x1053eb86c

// -[SCContactPermissionInfoProviderDefault grantedNeededContactPermissionsIncludingLimitAccess]
// Type encoding: B16@0:8
// Implementation: 0x1053eb8c8

// -[SCContactPermissionInfoProviderDefault hasLimitedDeviceContactsAccess]
// Type encoding: B16@0:8
// Implementation: 0x1053eb930

// -[SCContactPermissionInfoProviderDefault contactPermissionState]
// Type encoding: Q16@0:8
// Implementation: 0x1053eb998

// -[SCContactPermissionInfoProviderDefault contactPermissionChangedSinceLastAppSession]
// Type encoding: B16@0:8
// Implementation: 0x1053eb99c

// -[SCContactPermissionInfoProviderDefault updateUserLevelGrantStatus:source:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1053eb9a4

// -[SCContactPermissionInfoProviderDefault deniedDeviceLevelContactsPermissionDate]
// Type encoding: @16@0:8
// Implementation: 0x1053ebb80

// -[SCContactPermissionInfoProviderDefault setDeniedDeviceLevelContactsPermissionDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053ebb90

// -[SCContactPermissionInfoProviderDefault userIdSpecificKeyForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053ebba0

// -[SCContactPermissionInfoProviderDefault _currentContactPermissionRequestState]
// Type encoding: Q16@0:8
// Implementation: 0x1053ebbd8

// -[SCContactPermissionInfoProviderDefault _grantUserLevelPermissionFromPersistenceWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053ebcb4

// -[SCContactPermissionInfoProviderDefault _setContactPermissionsChangedSinceLastAppSession]
// Type encoding: v16@0:8
// Implementation: 0x1053ebcec

// -[SCContactPermissionInfoProviderDefault _lastAppSessionContactPermission]
// Type encoding: q16@0:8
// Implementation: 0x1053ebd50

// -[SCContactPermissionInfoProviderDefault _persistCurrentContactPermission]
// Type encoding: v16@0:8
// Implementation: 0x1053ebdd4

// -[SCContactPermissionInfoProviderDefault _autoGrantUserPermAndSetupTaskWhenEligible]
// Type encoding: v16@0:8
// Implementation: 0x1053ebe54

// -[SCContactPermissionInfoProviderDefault _grantUserPermWhenTaskWasSetupAndOSPermGranted]
// Type encoding: v16@0:8
// Implementation: 0x1053ebe78

// -[SCContactPermissionInfoProviderDefault _setupTaskWhenAppWillResignActiveIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1053ebf6c

// -[SCContactPermissionInfoProviderDefault _setupAutoGrantTaskToStorage]
// Type encoding: v16@0:8
// Implementation: 0x1053ec08c

// -[SCContactPermissionInfoProviderDefault _updateSyncToggle:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053ec108

// -[SCContactPermissionInfoProviderDefault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053ec10c

@end
