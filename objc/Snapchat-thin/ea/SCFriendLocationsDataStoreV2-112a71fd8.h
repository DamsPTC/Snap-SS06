// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendLocationsDataStoreV2
// Superclass: NSObject
// Address: 0x112a71fd8

@interface SCFriendLocationsDataStoreV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendLocationsDataStoreV2 initWithCurrentUserId:circumstanceEngine:loggerQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10583c52c

// -[SCFriendLocationsDataStoreV2 addCluster:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583c66c

// -[SCFriendLocationsDataStoreV2 removeCluster:]
// Type encoding: v24@0:8@16
// Implementation: 0x10583c8c8

// -[SCFriendLocationsDataStoreV2 currentUserPersonLocation]
// Type encoding: @16@0:8
// Implementation: 0x10583cd60

// -[SCFriendLocationsDataStoreV2 personLocationClusterForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583cda8

// -[SCFriendLocationsDataStoreV2 friendPersonLocationForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10583ce30

// -[SCFriendLocationsDataStoreV2 personLocationClustersByUserId]
// Type encoding: @16@0:8
// Implementation: 0x10583ceb8

// -[SCFriendLocationsDataStoreV2 personLocationsByUserId]
// Type encoding: @16@0:8
// Implementation: 0x10583cef4

// -[SCFriendLocationsDataStoreV2 personLocationClustersByClusterId]
// Type encoding: @16@0:8
// Implementation: 0x10583cf30

// -[SCFriendLocationsDataStoreV2 allFriendLocations]
// Type encoding: @16@0:8
// Implementation: 0x10583cf6c

// -[SCFriendLocationsDataStoreV2 clearDataStore]
// Type encoding: v16@0:8
// Implementation: 0x10583cfe4

// -[SCFriendLocationsDataStoreV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10583d070

@end
