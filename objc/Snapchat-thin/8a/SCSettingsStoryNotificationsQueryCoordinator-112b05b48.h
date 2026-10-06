// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSettingsStoryNotificationsQueryCoordinator
// Superclass: NSObject
// Address: 0x112b05b48

@interface SCSettingsStoryNotificationsQueryCoordinator

// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSettingsStoryNotificationsQueryCoordinator initWithUserSession:dataStore:creatorSettingsFetcher:snapProServices:snapchattersDataFetcher:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106909434

// -[SCSettingsStoryNotificationsQueryCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069095ec

// -[SCSettingsStoryNotificationsQueryCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069095f4

// -[SCSettingsStoryNotificationsQueryCoordinator _fetchOptInEntitiesWithQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069096cc

// -[SCSettingsStoryNotificationsQueryCoordinator _handledSubscribedCreators:creatorMetadatas:query:updatingBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106909970

// -[SCSettingsStoryNotificationsQueryCoordinator _completeBuildingOptInEntities:query:updatingBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106909fb4

// -[SCSettingsStoryNotificationsQueryCoordinator _mergeMutualFriends:withOptInEntities:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10690a030

// -[SCSettingsStoryNotificationsQueryCoordinator _displaySections:query:updatingBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10690a278

// -[SCSettingsStoryNotificationsQueryCoordinator _loadingQueryResultWithQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x10690a5ec

// -[SCSettingsStoryNotificationsQueryCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x10690a78c

// -[SCSettingsStoryNotificationsQueryCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x10690a794

// -[SCSettingsStoryNotificationsQueryCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x10690a79c

// -[SCSettingsStoryNotificationsQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10690a7a4

// +[SCSettingsStoryNotificationsQueryCoordinator announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1069095e0

@end
