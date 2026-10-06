// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesFriendOfGroupStoryActionMenuMembershipProvider
// Superclass: NSObject
// Address: 0x112b6e5f8

@interface SCStoriesFriendOfGroupStoryActionMenuMembershipProvider

// Property: membershipDidChangeHandler; attributes: T@?,C,N,V_membershipDidChangeHandler

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider initWithCurrentUserId:conversationUpdatesPublisher:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a9bcbc

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider stopObserving]
// Type encoding: v16@0:8
// Implementation: 0x107a9be0c

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider _membershipShowsHide:]
// Type encoding: B24@0:8q16
// Implementation: 0x107a9c008

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider _membershipShowsJoin:]
// Type encoding: B24@0:8q16
// Implementation: 0x107a9c014

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider _storeMembership:forPublicationId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107a9c024

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider ensureObservingPublicationId:storySnapClientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a9c338

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider membershipForPublicationId:]
// Type encoding: q24@0:8@16
// Implementation: 0x107a9c79c

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider hasResolvedMembershipForPublicationId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a9c848

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider readMembershipForPublicationId:storySnapClientId:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107a9c864

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider applyOptimisticMembership:forPublicationId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107a9c9d0

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider _shouldShowFoGActionMenuForStorySnap:customStoryMetadata:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107a9ca24

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider shouldShowHideGroupStoryInActionMenuForStorySnap:customStoryMetadata:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107a9caec

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider shouldShowJoinGroupStoryInActionMenuForStorySnap:customStoryMetadata:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107a9cbc4

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider _optionsToInsertForMembership:]
// Type encoding: @24@0:8q16
// Implementation: 0x107a9cc9c

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider _arrayByRemovingFriendOfGroupStoryButtons:isV2Options:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107a9cdc8

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider _insertIndexForConfigs:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107a9cf4c

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider mergedActionMenuPagePropertiesForPublicationId:basePageProperties:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a9cffc

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider membershipDidChangeHandler]
// Type encoding: @?16@0:8
// Implementation: 0x107a9d4fc

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider setMembershipDidChangeHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a9d504

// -[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a9d50c

// +[SCStoriesFriendOfGroupStoryActionMenuMembershipProvider isFriendOfGroupStory:customStoryMetadata:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107a9be8c

@end
