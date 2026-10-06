// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLocationOnboardingController
// Superclass: NSObject
// Address: 0x112aa9c08

@interface SCMapLocationOnboardingController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapLocationOnboardingController initWithMultiTrayManager:logEventSender:sharingPreferencesProvider:sharingPreferencesMutator:mapPersonLocationsProvider:mapPeopleFriendsProvider:slippyUpsellRequestService:bitmojiAvatarGenerator:contentFetcher:currentUserId:friendPickerScopeExposer:locationSharingSettingsFactoryServices:circumstanceEngine:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105eddb7c

// -[SCMapLocationOnboardingController presentTrayUpsellIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105edde68

// -[SCMapLocationOnboardingController _userHasBitmoji]
// Type encoding: B16@0:8
// Implementation: 0x105eddeb8

// -[SCMapLocationOnboardingController _friendsCount]
// Type encoding: q16@0:8
// Implementation: 0x105eddf40

// -[SCMapLocationOnboardingController _bestFriendsCount]
// Type encoding: q16@0:8
// Implementation: 0x105eddfa0

// -[SCMapLocationOnboardingController _friendsWithBitmojiWithFilterToBestFriends:]
// Type encoding: @20@0:8B16
// Implementation: 0x105ede004

// -[SCMapLocationOnboardingController _friendsWithBitmojiCount:]
// Type encoding: q20@0:8B16
// Implementation: 0x105ede244

// -[SCMapLocationOnboardingController _fetchMapPropImageWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ede280

// -[SCMapLocationOnboardingController _fetchBlankBitmojiImageWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ede534

// -[SCMapLocationOnboardingController _handleUpsellAssetCompletionWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ede7e8

// -[SCMapLocationOnboardingController _presentUpsellTrayWithStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x105edea10

// -[SCMapLocationOnboardingController _handleUpsellAction:style:updatedPreferences:viewTime:]
// Type encoding: v48@0:8q16q24@32d40
// Implementation: 0x105eded4c

// -[SCMapLocationOnboardingController _handleTrayEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105edee64

// -[SCMapLocationOnboardingController locationUpsellShareToAllFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x105edef38

// -[SCMapLocationOnboardingController locationUpsellShowMapSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x105edf0c0

// -[SCMapLocationOnboardingController locationUpsellShareToSelectFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x105edf15c

// -[SCMapLocationOnboardingController locationUpsellShouldDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105edf1f8

// -[SCMapLocationOnboardingController _launchMapSettings]
// Type encoding: v16@0:8
// Implementation: 0x105edf28c

// -[SCMapLocationOnboardingController locationUpsellShareHappened:]
// Type encoding: v20@0:8B16
// Implementation: 0x105edf34c

// -[SCMapLocationOnboardingController _launchFriendPicker]
// Type encoding: v16@0:8
// Implementation: 0x105edf388

// -[SCMapLocationOnboardingController locationSharingSettingsScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105edf434

// -[SCMapLocationOnboardingController mapFriendPickerScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105edf444

// -[SCMapLocationOnboardingController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105edf48c

@end
