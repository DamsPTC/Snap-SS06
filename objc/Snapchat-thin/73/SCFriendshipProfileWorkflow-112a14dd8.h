// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendshipProfileWorkflow
// Superclass: NSObject
// Address: 0x112a14dd8

@interface SCFriendshipProfileWorkflow


// -[SCFriendshipProfileWorkflow initWithScope:router:snapchatterServices:conversationIdServices:snapProServices:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10509c264

// -[SCFriendshipProfileWorkflow fetchPresentingDataFromSource:onSuccess:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10509c3b8

// -[SCFriendshipProfileWorkflow fetchCompleteSnapchatterWithOnSuccess:existingSnapchatter:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10509c538

// -[SCFriendshipProfileWorkflow _fetchSnapchatterFromSource:onSuccess:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10509c748

// -[SCFriendshipProfileWorkflow _handlePublicInfoResult:error:onSuccess:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10509c90c

// -[SCFriendshipProfileWorkflow presentFriendshipOrPublicProfile:onSuccess:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10509c920

// -[SCFriendshipProfileWorkflow _shouldWrapViewControllerForFriendProfile]
// Type encoding: B16@0:8
// Implementation: 0x10509cab0

// -[SCFriendshipProfileWorkflow _presentFriendshipOrPublicProfile:shouldPresentPublicProfile:subscription:onSuccess:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x10509cb84

// -[SCFriendshipProfileWorkflow _fetchPublicProfileForSnapchatter:onSuccess:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10509cc78

// -[SCFriendshipProfileWorkflow _updateSnapchatterWithPublicProfileId:snapchatter:onSuccess:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10509d01c

// -[SCFriendshipProfileWorkflow _presentFriendshipProfile:onSuccess:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10509d374

// -[SCFriendshipProfileWorkflow didEncounterError]
// Type encoding: v16@0:8
// Implementation: 0x10509d624

// -[SCFriendshipProfileWorkflow notifyDelegateWillAppearIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10509d66c

// -[SCFriendshipProfileWorkflow notifyDelegateDidAppearIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10509d6fc

// -[SCFriendshipProfileWorkflow isDismissing]
// Type encoding: B16@0:8
// Implementation: 0x10509d794

// -[SCFriendshipProfileWorkflow notifyDelegateWillDismissIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10509d79c

// -[SCFriendshipProfileWorkflow notifyDelegateDidDismissIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10509d830

// -[SCFriendshipProfileWorkflow shouldPresentPublicProfileWithSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x10509d8ac

// -[SCFriendshipProfileWorkflow handleLaunchBehavior]
// Type encoding: v16@0:8
// Implementation: 0x10509dd08

// -[SCFriendshipProfileWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10509ddd8

@end
