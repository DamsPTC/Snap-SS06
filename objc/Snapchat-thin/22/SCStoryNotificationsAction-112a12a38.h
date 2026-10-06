// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryNotificationsAction
// Superclass: NSObject
// Address: 0x112a12a38

@interface SCStoryNotificationsAction

// Property: actionSheetCell; attributes: T@"SIGActionSheetCell",R,N,V_actionSheetCell
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: position; attributes: Tq,R,N,V_position
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton

// -[SCStoryNotificationsAction initWithFriend:context:snapchatterServices:notificationServices:creatorSettingService:discoverFeedNotificationServices:friendStorySettingMutator:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1050383e4

// -[SCStoryNotificationsAction _handleStoryNotificationsTapped]
// Type encoding: v16@0:8
// Implementation: 0x105038788

// -[SCStoryNotificationsAction _enableStoryNotifications]
// Type encoding: v16@0:8
// Implementation: 0x105038858

// -[SCStoryNotificationsAction _enableStoryNotificationsError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105038a80

// -[SCStoryNotificationsAction _disableStoryNotifications]
// Type encoding: v16@0:8
// Implementation: 0x105038ad8

// -[SCStoryNotificationsAction _disableStoryNotificationsError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105038c9c

// -[SCStoryNotificationsAction didUpdateFriendStorySettingWithUpdateRequest:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105038cf4

// -[SCStoryNotificationsAction didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105038e74

// -[SCStoryNotificationsAction didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105038e78

// -[SCStoryNotificationsAction _didEndUpdateRequestWithDidMute:]
// Type encoding: v20@0:8B16
// Implementation: 0x105038f98

// -[SCStoryNotificationsAction _updateFriend:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10503924c

// -[SCStoryNotificationsAction didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1050392c4

// -[SCStoryNotificationsAction _updateStoryNotificationsOptInStatusAndShowPromptIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x105039520

// -[SCStoryNotificationsAction _presentErrorStatusMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050395bc

// -[SCStoryNotificationsAction position]
// Type encoding: q16@0:8
// Implementation: 0x105039658

// -[SCStoryNotificationsAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x105039660

// -[SCStoryNotificationsAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x105039668

// -[SCStoryNotificationsAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105039670

@end
