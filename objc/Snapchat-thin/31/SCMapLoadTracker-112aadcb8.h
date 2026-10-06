// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLoadTracker
// Superclass: NSObject
// Address: 0x112aadcb8

@interface SCMapLoadTracker

// Property: didReadyMap; attributes: TB,N,V_didReadyMap
// Property: didLoadFriend; attributes: TB,N,V_didLoadFriend
// Property: didLoadMapTiles; attributes: TB,N,V_didLoadMapTiles
// Property: mapReadyObservable; attributes: T@"SCObservable",R,N
// Property: mapFriendLoadObservable; attributes: T@"SCObservable",R,N
// Property: mapDidLoadObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapLoadTracker initWithMapLoadingState:mapFriendLoadState:mapReadyState:applicationLifecycleEvents:timeProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105f48d60

// -[SCMapLoadTracker startTracking]
// Type encoding: v16@0:8
// Implementation: 0x105f4926c

// -[SCMapLoadTracker didRequestFriendLocations]
// Type encoding: v16@0:8
// Implementation: 0x105f492bc

// -[SCMapLoadTracker didReceiveFriendLocations]
// Type encoding: v16@0:8
// Implementation: 0x105f492e4

// -[SCMapLoadTracker cancelTracking]
// Type encoding: v16@0:8
// Implementation: 0x105f49334

// -[SCMapLoadTracker mapReadyObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f49360

// -[SCMapLoadTracker mapFriendLoadObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f49388

// -[SCMapLoadTracker mapDidLoadObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f493b0

// -[SCMapLoadTracker _onMapReadyReported]
// Type encoding: v16@0:8
// Implementation: 0x105f493d8

// -[SCMapLoadTracker _onNoFriendsToLoad]
// Type encoding: v16@0:8
// Implementation: 0x105f49484

// -[SCMapLoadTracker _onFirstFriendLoaded]
// Type encoding: v16@0:8
// Implementation: 0x105f4951c

// -[SCMapLoadTracker _onMapTilesLoaded]
// Type encoding: v16@0:8
// Implementation: 0x105f49630

// -[SCMapLoadTracker setDidReadyMap:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f49664

// -[SCMapLoadTracker setDidLoadFriend:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f4966c

// -[SCMapLoadTracker setDidLoadMapTiles:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f49674

// -[SCMapLoadTracker _checkAndReportMapLoadIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105f4967c

// -[SCMapLoadTracker _createTraces]
// Type encoding: v16@0:8
// Implementation: 0x105f49738

// -[SCMapLoadTracker _cancelTrackers]
// Type encoding: v16@0:8
// Implementation: 0x105f4983c

// -[SCMapLoadTracker didReadyMap]
// Type encoding: B16@0:8
// Implementation: 0x105f4987c

// -[SCMapLoadTracker didLoadFriend]
// Type encoding: B16@0:8
// Implementation: 0x105f49884

// -[SCMapLoadTracker didLoadMapTiles]
// Type encoding: B16@0:8
// Implementation: 0x105f4988c

// -[SCMapLoadTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f49894

@end
