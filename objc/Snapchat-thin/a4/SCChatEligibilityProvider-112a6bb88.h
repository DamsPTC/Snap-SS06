// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatEligibilityProvider
// Superclass: NSObject
// Address: 0x112a6bb88

@interface SCChatEligibilityProvider

// Property: currentUserIsSnapPro; attributes: TB,V_currentUserIsSnapPro
// Property: hasSyncedFriends; attributes: TB,V_hasSyncedFriends

// -[SCChatEligibilityProvider initWithSnapProUserProfileIdProvider:snapchattersFriendSyncRepository:userSessionContext:profilesProvider:userSnapContactsPrivacyProvider:storiesConfigProvider:messagingExperimentService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100bb0710

// -[SCChatEligibilityProvider isCurrentUserNonFriendMessagingEligible]
// Type encoding: B16@0:8
// Implementation: 0x1057dd614

// -[SCChatEligibilityProvider isSnapchatterNonFriendMessagingEligible:]
// Type encoding: B24@0:8@16
// Implementation: 0x100bf0bb0

// -[SCChatEligibilityProvider isSnapchatterContactBookMessagingEligible:]
// Type encoding: B24@0:8@16
// Implementation: 0x1057dd62c

// -[SCChatEligibilityProvider isSnapchatterEligibleForFriendsFeedDisplay:]
// Type encoding: B24@0:8@16
// Implementation: 0x100bf3208

// -[SCChatEligibilityProvider eligibilityUpdates]
// Type encoding: @16@0:8
// Implementation: 0x100bb8538

// -[SCChatEligibilityProvider _setupProfileIdObserver]
// Type encoding: v16@0:8
// Implementation: 0x1057dd694

// -[SCChatEligibilityProvider _updateWithSnapProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057dd7c4

// -[SCChatEligibilityProvider _getSnapProStatusWithProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057dd848

// -[SCChatEligibilityProvider _refreshIsSnapProOfficial:]
// Type encoding: v20@0:8B16
// Implementation: 0x1057ddb7c

// -[SCChatEligibilityProvider _updateHasSyncedFriends]
// Type encoding: v16@0:8
// Implementation: 0x100c558e8

// -[SCChatEligibilityProvider _refreshUserSnapContactsPrivacy:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb8300

// -[SCChatEligibilityProvider _announceUpdateWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bb8418

// -[SCChatEligibilityProvider currentUserIsSnapPro]
// Type encoding: B16@0:8
// Implementation: 0x1057ddbdc

// -[SCChatEligibilityProvider setCurrentUserIsSnapPro:]
// Type encoding: v20@0:8B16
// Implementation: 0x1057ddbe8

// -[SCChatEligibilityProvider hasSyncedFriends]
// Type encoding: B16@0:8
// Implementation: 0x1057ddbf0

// -[SCChatEligibilityProvider setHasSyncedFriends:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c55918

// -[SCChatEligibilityProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057ddbfc

@end
