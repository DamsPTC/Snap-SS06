// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoryMembersListWorkflow
// Superclass: NSObject
// Address: 0x112a8c1a8

@interface SCCustomStoryMembersListWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCustomStoryMembersListWorkflow initWithRouter:delegate:publicationId:currentUserId:customStoriesDataFetcher:customStoriesDataMutator:enableViewMode:circumstanceEngine:]
// Type encoding: @76@0:8@16@24@32@40@48@56B64@68
// Implementation: 0x105b26624

// -[SCCustomStoryMembersListWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105b267a8

// -[SCCustomStoryMembersListWorkflow _beginForCustomStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b268e8

// -[SCCustomStoryMembersListWorkflow didUpdateMembersForCustomStory:updatedMemberIds:numOfSnapchattersSelected:numOfGroupsSelected:failureBlock:]
// Type encoding: v56@0:8@16@24Q32Q40@?48
// Implementation: 0x105b26af8

// -[SCCustomStoryMembersListWorkflow didCancelEditMembers]
// Type encoding: v16@0:8
// Implementation: 0x105b26d14

// -[SCCustomStoryMembersListWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b26d40

@end
