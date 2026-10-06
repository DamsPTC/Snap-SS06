// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCharmsDataCoordinator
// Superclass: NSObject
// Address: 0x112a15be8

@interface SCCharmsDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCharmsDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050c5684

// -[SCCharmsDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050c568c

// -[SCCharmsDataCoordinator initWithSessionRequestManager:snapTokenProvider:docObjectContext:userID:username:friendmojiRegistry:snapchattersDataFetcher:snapchattersDataTracker:groupsDataTracker:usernameToSnapchatterFetcher:chatMessageActionHandler:conversationIdResolver:charmsBlizzardLogger:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1050c5694

// -[SCCharmsDataCoordinator fetchCharmsForOwner:shouldDisplayStreakCounter:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1050c5a60

// -[SCCharmsDataCoordinator _populateClientLocalCharms:ownerIdentifier:shouldDisplayStreakCounter:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1050c5bd8

// -[SCCharmsDataCoordinator fetchHiddenCharmsForOwner:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1050c5eb8

// -[SCCharmsDataCoordinator didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050c6090

// -[SCCharmsDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1050c6094

// -[SCCharmsDataCoordinator didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1050c62e4

// -[SCCharmsDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050c6384

// -[SCCharmsDataCoordinator _processingCompletionForDataRequest:]
// Type encoding: @?24@0:8@16
// Implementation: 0x1050c65a8

// -[SCCharmsDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1050c67a8

// +[SCCharmsDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1050c5678

@end
