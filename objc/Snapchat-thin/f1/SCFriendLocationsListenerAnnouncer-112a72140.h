// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendLocationsListenerAnnouncer
// Superclass: NSObject
// Address: 0x112a72140

@interface SCFriendLocationsListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendLocationsListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x105843704

// -[SCFriendLocationsListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058438e0

// -[SCFriendLocationsListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105843d14

// -[SCFriendLocationsListenerAnnouncer friendLocationsDidChange:affectedUserIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105843f44

// -[SCFriendLocationsListenerAnnouncer friendLocationsDataStoreDidUpdateCurrentUserFriendLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10584406c

// -[SCFriendLocationsListenerAnnouncer friendLocationsDataStoreDidLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x105844174

// -[SCFriendLocationsListenerAnnouncer friendLocationsDataStore:didFailToLoadWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10584427c

// -[SCFriendLocationsListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058443a4

// -[SCFriendLocationsListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1058443cc

@end
