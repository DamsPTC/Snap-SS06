// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupsDataMutator
// Superclass: NSObject
// Address: 0x112a42fa8

@interface SCGroupsDataMutator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupsDataMutator initWithNativeSessionManager:groupsDataFetcher:selfUserId:configProvider:userTrackedLogger:messagingExperimentService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10550fff4

// -[SCGroupsDataMutator nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x105510214

// -[SCGroupsDataMutator addToGroupWithId:snapchatters:phoneNumbers:source:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x10551025c

// -[SCGroupsDataMutator grantGroupExemptBlockedUsersWithId:newBlockedParticipantExceptions:completion:callbackQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x105510740

// -[SCGroupsDataMutator grantGroupNonFriendUserParticipantExceptionsWithId:nonFriendUserIds:completion:callbackQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x105510acc

// -[SCGroupsDataMutator leaveGroupWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105510e58

// -[SCGroupsDataMutator updateGroupNameWithId:groupName:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105510ffc

// -[SCGroupsDataMutator updateGroupChatNotificationWithId:mentionNotificationOn:chatNotificationOn:muteAction:source:completion:]
// Type encoding: v56@0:8@16B24B28q32q40@?48
// Implementation: 0x105511440

// -[SCGroupsDataMutator updateGroupCallingNotificationWithId:notificationOn:source:completion:]
// Type encoding: v44@0:8@16B24q28@?36
// Implementation: 0x105511844

// -[SCGroupsDataMutator updateTemporaryGroupChatNotificationWithId:muteDurationMinutes:source:completion:]
// Type encoding: v44@0:8@16i24q28@?36
// Implementation: 0x105511c24

// -[SCGroupsDataMutator updateTemporaryGroupCallingNotificationWithId:muteDurationMinutes:source:completion:]
// Type encoding: v44@0:8@16i24q28@?36
// Implementation: 0x105511ff8

// -[SCGroupsDataMutator maxParticipantsAllowedInGroup]
// Type encoding: Q16@0:8
// Implementation: 0x1055123f8

// -[SCGroupsDataMutator maxParticipantsAllowedInCommunityGroup]
// Type encoding: Q16@0:8
// Implementation: 0x105512434

// -[SCGroupsDataMutator _logUpdateGroupNameWithGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105512474

// -[SCGroupsDataMutator _logAddToGroupWithGroupId:snapchatters:phoneNumbers:source:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1055124f0

// -[SCGroupsDataMutator _logAddToGroupWithGroup:groupId:userIds:phoneNumbers:source:]
// Type encoding: v56@0:8@16@24@32@40q48
// Implementation: 0x10551273c

// -[SCGroupsDataMutator _logLeaveGroupWithGroupId:countExcludingUser:communityId:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1055128b0

// -[SCGroupsDataMutator _logChatNotificationMuteWithGroupId:muteDurationMinutes:source:]
// Type encoding: v36@0:8@16i24q28
// Implementation: 0x105512970

// -[SCGroupsDataMutator _logChatNotificationMuteWithGroupId:mentionNotificationOn:chatNotificationOn:muteAction:source:]
// Type encoding: v48@0:8@16B24B28q32q40
// Implementation: 0x105512b64

// -[SCGroupsDataMutator _logCallingNotificationMuteWithGroupId:muteAction:source:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x105512c40

// -[SCGroupsDataMutator _leaveConversationWithGroupId:group:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105512d08

// -[SCGroupsDataMutator _handleLeaveConversationSuccessWithGroupId:countExcludingUser:communityId:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x105512fe8

// -[SCGroupsDataMutator _handleLeaveConversationFailureWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1055130b8

// -[SCGroupsDataMutator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105513190

@end
