// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleBlockedUserStore
// Superclass: NSObject
// Address: 0x112b08988

@interface SCComposerPeopleBlockedUserStore

// Property: blockedUsersObservable; attributes: T@"SCBridgeObservable",?,&,N,V_blockedUsersObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleBlockedUserStore initWithBlockedSnapchatterFetcher:snapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:snapchattersPublicInfoFetcher:performerProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10698fa00

// -[SCComposerPeopleBlockedUserStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10698fbe8

// -[SCComposerPeopleBlockedUserStore _fetchBlockedUsersAndPublishInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x10698fbf4

// -[SCComposerPeopleBlockedUserStore _fetchBlockedUsersAndPublish]
// Type encoding: v16@0:8
// Implementation: 0x10698fce8

// -[SCComposerPeopleBlockedUserStore _publishBlockedUsersWithSnapchatters:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10698fe58

// -[SCComposerPeopleBlockedUserStore blockUserWithUserId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106990030

// -[SCComposerPeopleBlockedUserStore _blockSnapchatter:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069902b0

// -[SCComposerPeopleBlockedUserStore unblockUserWithUserId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106990440

// -[SCComposerPeopleBlockedUserStore _unblockSnapchatter:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106990610

// -[SCComposerPeopleBlockedUserStore didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106990788

// -[SCComposerPeopleBlockedUserStore didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10699078c

// -[SCComposerPeopleBlockedUserStore _createLazyPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106990790

// -[SCComposerPeopleBlockedUserStore _fetchSnapchatterForUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106990884

// -[SCComposerPeopleBlockedUserStore getBlockedUsersWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106990c0c

// -[SCComposerPeopleBlockedUserStore onBlockedUsersUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x106990c10

// -[SCComposerPeopleBlockedUserStore blockedUsersObservable]
// Type encoding: @16@0:8
// Implementation: 0x106990c20

// -[SCComposerPeopleBlockedUserStore setBlockedUsersObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106990c28

// -[SCComposerPeopleBlockedUserStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106990c58

@end
