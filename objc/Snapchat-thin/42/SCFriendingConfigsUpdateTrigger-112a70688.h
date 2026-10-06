// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingConfigsUpdateTrigger
// Superclass: NSObject
// Address: 0x112a70688

@interface SCFriendingConfigsUpdateTrigger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendingConfigsUpdateTrigger initWithCircumstanceEngine:appStartExperimentReader:featureSettingsService:discrepancyHandler:snapchatterDataMutator:snapchattersDataTracker:userStorageServices:timeProvider:performer:configsProvider:contactPermissionInfoProvider:contactSyncer:facebookContactSyncer:friendingPhoneContactBookStoreService:grapheneRegistry:findFriendsEligibilityChecker:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x10097cbb4

// -[SCFriendingConfigsUpdateTrigger tryToSyncContact]
// Type encoding: v16@0:8
// Implementation: 0x10582e028

// -[SCFriendingConfigsUpdateTrigger tryFetchSuggestedFriends]
// Type encoding: v16@0:8
// Implementation: 0x10097df5c

// -[SCFriendingConfigsUpdateTrigger clearSuggestedFriendsLastFetchedTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x10582e088

// -[SCFriendingConfigsUpdateTrigger _didContactDataRequestSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582e090

// -[SCFriendingConfigsUpdateTrigger _endFetchSuggestedFriends:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10582e124

// -[SCFriendingConfigsUpdateTrigger _shouldRemoveUserLevelPermission]
// Type encoding: B16@0:8
// Implementation: 0x10097cf24

// -[SCFriendingConfigsUpdateTrigger didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582e12c

// -[SCFriendingConfigsUpdateTrigger didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10582e130

// -[SCFriendingConfigsUpdateTrigger didEndSnapchattersContactDataRequest:withResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10582e134

// -[SCFriendingConfigsUpdateTrigger didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10582e1d4

// -[SCFriendingConfigsUpdateTrigger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10582e390

@end
