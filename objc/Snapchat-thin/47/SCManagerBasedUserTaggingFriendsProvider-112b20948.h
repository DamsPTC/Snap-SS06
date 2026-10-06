// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagerBasedUserTaggingFriendsProvider
// Superclass: NSObject
// Address: 0x112b20948

@interface SCManagerBasedUserTaggingFriendsProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCManagerBasedUserTaggingFriendsProvider initWithUserId:snapchattersDataFetcher:snapchattersSynchronousDataFetcher:bitmojiSelfieFetcher:imageFetchingService:storyPrivacySettingManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106bdc330

// -[SCManagerBasedUserTaggingFriendsProvider blockedStorySnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x106bdc488

// -[SCManagerBasedUserTaggingFriendsProvider bitmojiSelfieFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106bdc564

// -[SCManagerBasedUserTaggingFriendsProvider imageFetchingService]
// Type encoding: @16@0:8
// Implementation: 0x106bdc56c

// -[SCManagerBasedUserTaggingFriendsProvider isStoryPrivacyCustom]
// Type encoding: B16@0:8
// Implementation: 0x106bdc594

// -[SCManagerBasedUserTaggingFriendsProvider snapchattersListForUsertaggingWithQueryName:filterBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x106bdc5d8

// -[SCManagerBasedUserTaggingFriendsProvider snapchattersListForUsertaggingWithQueryName:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdc68c

// -[SCManagerBasedUserTaggingFriendsProvider snapchatterForUsername:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdc694

// -[SCManagerBasedUserTaggingFriendsProvider userTagsFromText:excludeCarouselTaggedItems:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106bdc700

// -[SCManagerBasedUserTaggingFriendsProvider allOutgoingSnapchatters]
// Type encoding: @16@0:8
// Implementation: 0x106bdc70c

// -[SCManagerBasedUserTaggingFriendsProvider allOutgoingSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106bdc800

// -[SCManagerBasedUserTaggingFriendsProvider snapchattersForUsertaggingWithQueryName:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106bdca9c

// -[SCManagerBasedUserTaggingFriendsProvider defaultSnapchatterList]
// Type encoding: @16@0:8
// Implementation: 0x106bdcde8

// -[SCManagerBasedUserTaggingFriendsProvider _constructSortedFriendsList]
// Type encoding: @16@0:8
// Implementation: 0x106bdcdec

// -[SCManagerBasedUserTaggingFriendsProvider _constructSortedFriendsListFromSnapchatters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdce3c

// -[SCManagerBasedUserTaggingFriendsProvider _sortedRecentSnapchatters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdd034

// -[SCManagerBasedUserTaggingFriendsProvider _filteredAndSortedSnapchattersForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdd154

// -[SCManagerBasedUserTaggingFriendsProvider _filteredAndSortedSnapchattersForQuery:fromSnapchatters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106bdd1c8

// -[SCManagerBasedUserTaggingFriendsProvider _snapchattersListForUsertaggingWithQueryName:fromSnapchatters:filterBlock:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x106bdd278

// -[SCManagerBasedUserTaggingFriendsProvider _trimAndApplyFilterForSnapchatters:queryName:filterBlock:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x106bdd354

// -[SCManagerBasedUserTaggingFriendsProvider _bestFriendsObjects]
// Type encoding: @16@0:8
// Implementation: 0x106bdd42c

// -[SCManagerBasedUserTaggingFriendsProvider _bestFriendsObjectsFromSnapchatters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdd47c

// -[SCManagerBasedUserTaggingFriendsProvider _getAllMutualFriends]
// Type encoding: @16@0:8
// Implementation: 0x106bdd4a4

// -[SCManagerBasedUserTaggingFriendsProvider _getAllMutualFriendsFromSnapchatters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdd4f4

// -[SCManagerBasedUserTaggingFriendsProvider _getRecents]
// Type encoding: @16@0:8
// Implementation: 0x106bdd51c

// -[SCManagerBasedUserTaggingFriendsProvider _getRecentsFromSnapchatters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bdd56c

// -[SCManagerBasedUserTaggingFriendsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bdd644

@end
