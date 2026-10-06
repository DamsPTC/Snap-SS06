// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapBrowsingContextManager
// Superclass: NSObject
// Address: 0x112aadd08

@interface SCMapBrowsingContextManager

// Property: browsingContextDebugObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapBrowsingContextManager initWithMapSDKSession:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f49984

// -[SCMapBrowsingContextManager setDefaultBrowsingContext]
// Type encoding: v16@0:8
// Implementation: 0x105f49a38

// -[SCMapBrowsingContextManager setBitmojiTrayBrowsingContext]
// Type encoding: v16@0:8
// Implementation: 0x105f49abc

// -[SCMapBrowsingContextManager setFilteredBrowsingContextWithVisibleFriendIDs:hideOtherFriendData:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f49b40

// -[SCMapBrowsingContextManager setFocusViewBrowsingContextWithFocusedFeatureID:focusedFeatureCoordinates:]
// Type encoding: v40@0:8@16{CLLocationCoordinate2D=dd}24
// Implementation: 0x105f49c14

// -[SCMapBrowsingContextManager setPlacesTrayBrowsingContextWithFocusedPlaceIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f49d00

// -[SCMapBrowsingContextManager setFriendsTrayBrowsingContextWithVisibleFriendIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f49dc8

// -[SCMapBrowsingContextManager setPlaceProfileBrowsingContextWithFocusedPlaceID:particleEffectURL:fromSearch:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105f49e84

// -[SCMapBrowsingContextManager setHomeSettingsBrowsingContextWithType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105f49f60

// -[SCMapBrowsingContextManager setHomeProfileBrowsingContext]
// Type encoding: v16@0:8
// Implementation: 0x105f4a004

// -[SCMapBrowsingContextManager setMapSnapshotBrowsingContextWithVisibleFriendIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4a08c

// -[SCMapBrowsingContextManager setMemoriesLayerBrowsingContext]
// Type encoding: v16@0:8
// Implementation: 0x105f4a148

// -[SCMapBrowsingContextManager setFootstepsModeBrowsingContext]
// Type encoding: v16@0:8
// Implementation: 0x105f4a1d0

// -[SCMapBrowsingContextManager setUserPreviewBrowsingContextWithVisibleFriendIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4a258

// -[SCMapBrowsingContextManager setDropsTrayBrowsingContext]
// Type encoding: v16@0:8
// Implementation: 0x105f4a314

// -[SCMapBrowsingContextManager browsingContextDebugObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f4a39c

// -[SCMapBrowsingContextManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105f4a3c4

// -[SCMapBrowsingContextManager _startAsyncContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4a430

// -[SCMapBrowsingContextManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f4a4b8

@end
