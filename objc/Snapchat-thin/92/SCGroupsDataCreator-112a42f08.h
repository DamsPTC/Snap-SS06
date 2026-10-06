// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupsDataCreator
// Superclass: NSObject
// Address: 0x112a42f08

@interface SCGroupsDataCreator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupsDataCreator initWithNativeSessionManager:configProvider:messagingExperimentService:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10550d954

// -[SCGroupsDataCreator nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x10550daf0

// -[SCGroupsDataCreator createLocalGroupWithSnapchatters:source:completion:callbackQueue:]
// Type encoding: v48@0:8@16q24@?32@40
// Implementation: 0x10550db38

// -[SCGroupsDataCreator createGroupOnServerIfNecessary:source:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10550db54

// -[SCGroupsDataCreator createGroupWithName:snapchatters:source:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x10550dda8

// -[SCGroupsDataCreator exitCreationSessionWithGroupIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10550de64

// -[SCGroupsDataCreator maxParticipantsAllowedInGroup]
// Type encoding: Q16@0:8
// Implementation: 0x10550e094

// -[SCGroupsDataCreator maxParticipantsAllowedInCommunityGroup]
// Type encoding: Q16@0:8
// Implementation: 0x10550e0d0

// -[SCGroupsDataCreator _createGroupWithName:snapchatters:source:completion:callbackQueue:]
// Type encoding: v56@0:8@16@24q32@?40@48
// Implementation: 0x10550e110

// -[SCGroupsDataCreator _runBlock:onQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10550e544

// -[SCGroupsDataCreator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10550e5e8

@end
