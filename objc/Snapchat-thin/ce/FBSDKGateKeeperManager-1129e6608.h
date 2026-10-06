// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKGateKeeperManager
// Superclass: NSObject
// Address: 0x1129e6608

@interface FBSDKGateKeeperManager


// +[FBSDKGateKeeperManager initialize]
// Type encoding: v16@0:8
// Implementation: 0x1049603b0

// +[FBSDKGateKeeperManager configureWithSettings:graphRequestFactory:graphRequestConnectionFactory:store:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104960450

// +[FBSDKGateKeeperManager boolForKey:defaultValue:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x104960548

// +[FBSDKGateKeeperManager loadGateKeepers:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1049605e4

// +[FBSDKGateKeeperManager requestToLoadGateKeepers]
// Type encoding: @16@0:8
// Implementation: 0x104960994

// +[FBSDKGateKeeperManager processLoadRequestResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104960b4c

// +[FBSDKGateKeeperManager _didProcessGKFromNetwork:]
// Type encoding: v24@0:8@16
// Implementation: 0x104960fcc

// +[FBSDKGateKeeperManager _gateKeeperTimestampIsValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104961104

// +[FBSDKGateKeeperManager _gateKeeperIsValid]
// Type encoding: B16@0:8
// Implementation: 0x104961190

// +[FBSDKGateKeeperManager graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x1049611d0

// +[FBSDKGateKeeperManager settings]
// Type encoding: @16@0:8
// Implementation: 0x1049611dc

// +[FBSDKGateKeeperManager graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x1049611e8

// +[FBSDKGateKeeperManager gateKeepers]
// Type encoding: @16@0:8
// Implementation: 0x1049611f4

// +[FBSDKGateKeeperManager store]
// Type encoding: @16@0:8
// Implementation: 0x104961200

@end
