// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingLocationSharingPreferencesProvider
// Superclass: NSObject
// Address: 0x112aab788

@interface SCStreamingLocationSharingPreferencesProvider

// Property: preferences; attributes: T@"SCLocationSharingPreferences",&,V_preferences
// Property: isBeingMutated; attributes: TB,V_isBeingMutated
// Property: hasEverSetPreferences; attributes: TB,V_hasEverSetPreferences
// Property: preferencesChangeObservable; attributes: T@"SCObservable",R,N,V_preferencesChangeObservable
// Property: preferencesSyncObservable; attributes: T@"SCObservable",R,N,V_preferencesSyncObservable
// Property: locationVisibleToFriendsCount; attributes: T@"NSNumber",R
// Property: hasFetchedLocationPreferences; attributes: TB,R
// Property: shouldForceGhostModeForUnderAgeCompliance; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingLocationSharingPreferencesProvider _setCachedPreferencesObjectWithPreference:forceInvalidate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f10c14

// -[SCStreamingLocationSharingPreferencesProvider _getCachedPreferencesObject]
// Type encoding: @16@0:8
// Implementation: 0x1005093ac

// -[SCStreamingLocationSharingPreferencesProvider _updatePreferences:forceInvalidate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f10d04

// -[SCStreamingLocationSharingPreferencesProvider initWithUserPreferences:applicationPreferences:dataManager:mapUserPreferences:notificationPresenter:blizzardLogger:lazyFeatureSettingsService:userContext:mapPeopleFriendsProvider:locationPermissionsManager:currentUserId:circumstanceEngine:applicationLifecycleEvents:mapUKUnder18ComplianceChecker:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x100508a44

// -[SCStreamingLocationSharingPreferencesProvider ensureHasPreferencesWithSource:completionQueue:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x105f10e2c

// -[SCStreamingLocationSharingPreferencesProvider revalidateCachedPreferencesWithSource:forced:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105f10ff4

// -[SCStreamingLocationSharingPreferencesProvider hasFetchedLocationPreferences]
// Type encoding: B16@0:8
// Implementation: 0x105f11168

// -[SCStreamingLocationSharingPreferencesProvider locationVisibleToFriendsCount]
// Type encoding: @16@0:8
// Implementation: 0x105f111a8

// -[SCStreamingLocationSharingPreferencesProvider _retryRevalidateCachedPreferencesWithSource:forced:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105f114b0

// -[SCStreamingLocationSharingPreferencesProvider _updateWithLatestServerPreferencesWithFetchType:source:completionQueue:completion:]
// Type encoding: v48@0:8Q16q24@32@?40
// Implementation: 0x105f115c8

// -[SCStreamingLocationSharingPreferencesProvider _didFetchLatestServerPreferences:fetchType:source:]
// Type encoding: v40@0:8@16Q24q32
// Implementation: 0x105f11818

// -[SCStreamingLocationSharingPreferencesProvider _didFailToFetchPreferencesWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f11928

// -[SCStreamingLocationSharingPreferencesProvider setDidOnboard]
// Type encoding: v16@0:8
// Implementation: 0x105f1193c

// -[SCStreamingLocationSharingPreferencesProvider stopSharingLocationWithUserIds:source:completionQueue:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x105f11980

// -[SCStreamingLocationSharingPreferencesProvider enterGhostModeWithDuration:source:completionQueue:completion:]
// Type encoding: v48@0:8q16q24@32@?40
// Implementation: 0x105f12178

// -[SCStreamingLocationSharingPreferencesProvider _expirationDateFromDuration:]
// Type encoding: @24@0:8q16
// Implementation: 0x105f123b0

// -[SCStreamingLocationSharingPreferencesProvider exitGhostModeWithSource:completionQueue:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x105f1240c

// -[SCStreamingLocationSharingPreferencesProvider overrideSimplifiedOnboardingWithTweakValue]
// Type encoding: v16@0:8
// Implementation: 0x105f125f8

// -[SCStreamingLocationSharingPreferencesProvider updateLocationSharingPreferences:source:updateType:completionQueue:completion:]
// Type encoding: v56@0:8@16q24q32@40@?48
// Implementation: 0x105f1277c

// -[SCStreamingLocationSharingPreferencesProvider _updateLocationSharingPreferences:lastLocationPreference:source:updateType:completionQueue:completionWrapper:error:version:]
// Type encoding: v80@0:8@16@24q32q40@48@?56@64q72
// Implementation: 0x105f12bc4

// -[SCStreamingLocationSharingPreferencesProvider _updatedLocationSharingPreferencesWithLocalPreferences:lastLocationPreference:source:updateType:completionWrapper:error:]
// Type encoding: v64@0:8@16@24q32q40@?48@56
// Implementation: 0x105f12e18

// -[SCStreamingLocationSharingPreferencesProvider _syncLocalPreferencesToServerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105f12fb4

// -[SCStreamingLocationSharingPreferencesProvider updateSharingPreferencesWithType:userIds:permissionsPromptPresentationDelegate:source:completion:]
// Type encoding: v56@0:8q16@24@32q40@?48
// Implementation: 0x105f1326c

// -[SCStreamingLocationSharingPreferencesProvider shouldForceGhostModeForUnderAgeCompliance]
// Type encoding: B16@0:8
// Implementation: 0x105f13424

// -[SCStreamingLocationSharingPreferencesProvider forceGhostModeForUKUnder18OnFirstDeviceLoginIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105f13518

// -[SCStreamingLocationSharingPreferencesProvider _forceGhostModeForUnderAgeComplianceWithPreferences:version:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105f13928

// -[SCStreamingLocationSharingPreferencesProvider forceOnboardToSimplifiedSharingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105f13b64

// -[SCStreamingLocationSharingPreferencesProvider _forceOnboardWithLocationSharingPreferences:lastLocationPreference:source:updateType:version:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x105f13e24

// -[SCStreamingLocationSharingPreferencesProvider _forceOnboardedWithLocationSharingPreferences:preferencesResponseFromServer:lastLocationPreference:source:updateType:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x105f14004

// -[SCStreamingLocationSharingPreferencesProvider _didForceSimplifiedOnboardingWithPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f141c8

// -[SCStreamingLocationSharingPreferencesProvider preferencesChangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f14378

// -[SCStreamingLocationSharingPreferencesProvider preferencesSyncObservable]
// Type encoding: @16@0:8
// Implementation: 0x10058b858

// -[SCStreamingLocationSharingPreferencesProvider clearCache]
// Type encoding: v16@0:8
// Implementation: 0x105f143a0

// -[SCStreamingLocationSharingPreferencesProvider ghostModeTimerController:wantsToRefreshLocationSharingPreferencesWithCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f143ac

// -[SCStreamingLocationSharingPreferencesProvider ghostModeTimerControllerWantsToExitGhostMode:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f14588

// -[SCStreamingLocationSharingPreferencesProvider locationSharingStatusForFriendWithUserId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105f146ec

// -[SCStreamingLocationSharingPreferencesProvider locationSharingStatus]
// Type encoding: Q16@0:8
// Implementation: 0x105f149c4

// -[SCStreamingLocationSharingPreferencesProvider _isFriendEligibleForShare:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f14af0

// -[SCStreamingLocationSharingPreferencesProvider _keyWindow]
// Type encoding: @16@0:8
// Implementation: 0x105f14b98

// -[SCStreamingLocationSharingPreferencesProvider _requestPermissionsAndUpdatePreferencesWithSelectPeopleList:shouldChangeToAllFriends:needsSetDidOnboard:isInitialPeopleList:permissionsPromptPresentationDelegate:source:completion:]
// Type encoding: v60@0:8@16B24B28B32@36q44@?52
// Implementation: 0x105f14ce0

// -[SCStreamingLocationSharingPreferencesProvider _updatePreferencesWithSelectPeopleList:shouldChangeToAllFriends:needsSetDidOnboard:isInitialPeopleList:source:completion:]
// Type encoding: v52@0:8@16B24B28B32q36@?44
// Implementation: 0x105f14eb8

// -[SCStreamingLocationSharingPreferencesProvider _migrateUserFromBlocklistIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1005881c8

// -[SCStreamingLocationSharingPreferencesProvider preferences]
// Type encoding: @16@0:8
// Implementation: 0x100588130

// -[SCStreamingLocationSharingPreferencesProvider setPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x100588128

// -[SCStreamingLocationSharingPreferencesProvider isBeingMutated]
// Type encoding: B16@0:8
// Implementation: 0x105f15284

// -[SCStreamingLocationSharingPreferencesProvider setIsBeingMutated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f15290

// -[SCStreamingLocationSharingPreferencesProvider hasEverSetPreferences]
// Type encoding: B16@0:8
// Implementation: 0x105f15298

// -[SCStreamingLocationSharingPreferencesProvider setHasEverSetPreferences:]
// Type encoding: v20@0:8B16
// Implementation: 0x1005881c0

// -[SCStreamingLocationSharingPreferencesProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f152a4

@end
