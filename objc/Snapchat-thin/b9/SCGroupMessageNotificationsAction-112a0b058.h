// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupMessageNotificationsAction
// Superclass: NSObject
// Address: 0x112a0b058

@interface SCGroupMessageNotificationsAction

// Property: position; attributes: Tq,R,N,V_position
// Property: actionSheetCell; attributes: T@"UIView",R,N,V_actionSheetCell
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupMessageNotificationsAction initWithGroupId:context:groupServices:notificationServices:accessibilityIdentifier:muteAllAction:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f59b48

// -[SCGroupMessageNotificationsAction valueForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f59d14

// -[SCGroupMessageNotificationsAction _valueForNotificationOn:mentionNotificationOn:chatNotificationOn:]
// Type encoding: @28@0:8B16B20B24
// Implementation: 0x104f59d88

// -[SCGroupMessageNotificationsAction _detailTextForNotificationOn:mentionNotificationOn:chatNotificationOn:]
// Type encoding: @28@0:8B16B20B24
// Implementation: 0x104f59de8

// -[SCGroupMessageNotificationsAction _cell]
// Type encoding: @16@0:8
// Implementation: 0x104f59e40

// -[SCGroupMessageNotificationsAction _setUpObservers]
// Type encoding: v16@0:8
// Implementation: 0x104f5a06c

// -[SCGroupMessageNotificationsAction _updateCellWithGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5a240

// -[SCGroupMessageNotificationsAction _onTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5a3a4

// -[SCGroupMessageNotificationsAction _onTapMuteAware:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5a3f4

// -[SCGroupMessageNotificationsAction _rebuildSubSheetContent]
// Type encoding: v16@0:8
// Implementation: 0x104f5a510

// -[SCGroupMessageNotificationsAction _buildMuteAwareCells]
// Type encoding: @16@0:8
// Implementation: 0x104f5a61c

// -[SCGroupMessageNotificationsAction _muteAwareSelectCellForMentionOn:chatOn:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x104f5a740

// -[SCGroupMessageNotificationsAction _updateNotificationStatusWithMentionNotificationOn:chatNotificationOn:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x104f5a9e0

// -[SCGroupMessageNotificationsAction _didUpdateGroupNotificationSucceed:errorMessage:groupIdInResponse:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x104f5ab60

// -[SCGroupMessageNotificationsAction _presentErrorStatusMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5ab78

// -[SCGroupMessageNotificationsAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f5ac14

// -[SCGroupMessageNotificationsAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f5ac1c

// -[SCGroupMessageNotificationsAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f5ac24

// -[SCGroupMessageNotificationsAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f5ac2c

@end
