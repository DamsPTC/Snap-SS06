// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationOptInRequestManager
// Superclass: NSObject
// Address: 0x112b70c68

@interface SCNotificationOptInRequestManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationOptInRequestManager initWithDataStoreMutating:dataStoreFetching:requestManager:userId:creatorsSettingsRequestMananger:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107b01d18

// -[SCNotificationOptInRequestManager updateStoryWithDedupeFp:toState:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8Q16Q24@32@40@?48@?56
// Implementation: 0x107b01e28

// -[SCNotificationOptInRequestManager _updateStoryWithDedupeFp:toState:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8Q16Q24@32@40@?48@?56
// Implementation: 0x107b01fdc

// -[SCNotificationOptInRequestManager updateStory:toState:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16Q24@32@40@?48@?56
// Implementation: 0x107b020c4

// -[SCNotificationOptInRequestManager updatePublisherWithPublisherId:toState:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8q16Q24@32@40@?48@?56
// Implementation: 0x107b021b0

// -[SCNotificationOptInRequestManager updateUserWithUserId:toState:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16Q24@32@40@?48@?56
// Implementation: 0x107b022c4

// -[SCNotificationOptInRequestManager _sendOptInRequest:story:toState:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24Q32@40@48@?56@?64
// Implementation: 0x107b023e8

// -[SCNotificationOptInRequestManager _updateStoryInDataStore:optedIn:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107b02760

// -[SCNotificationOptInRequestManager _updateOptInSuccessWithData:story:toState:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24Q32@40@48@?56@?64
// Implementation: 0x107b027cc

// -[SCNotificationOptInRequestManager _updateOptInFailedForStory:failureQueue:failureBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b029ac

// -[SCNotificationOptInRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b029c4

@end
