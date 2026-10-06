// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendRequestsReporter
// Superclass: NSObject
// Address: 0x112a5dee8

@interface SCFriendRequestsReporter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendRequestsReporter initWithGrapheneRegistry:snapchattersDataTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105720448

// -[SCFriendRequestsReporter didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105720578

// -[SCFriendRequestsReporter didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10572080c

// -[SCFriendRequestsReporter _reportFriendRequestsSendWithSource:placement:snapchatter:isMultiAdd:]
// Type encoding: v44@0:8q16q24@32B40
// Implementation: 0x105720b2c

// -[SCFriendRequestsReporter _reportFriendRequestsReponseWithSource:placement:snapchatter:latencyMs:isMultiAdd:success:]
// Type encoding: v56@0:8q16q24@32q40B48B52
// Implementation: 0x105720c34

// -[SCFriendRequestsReporter _registeredGraphene]
// Type encoding: @16@0:8
// Implementation: 0x105720df4

// -[SCFriendRequestsReporter _metricWithDimension:friendAction:addSource:placement:result:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105720e60

// -[SCFriendRequestsReporter _getAddSourceDimensionWithSource:isMultiAdd:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x105720f6c

// -[SCFriendRequestsReporter _getFriendActionDimensionWithSnapchatter:isMultiAdd:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105720f9c

// -[SCFriendRequestsReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105720ffc

@end
