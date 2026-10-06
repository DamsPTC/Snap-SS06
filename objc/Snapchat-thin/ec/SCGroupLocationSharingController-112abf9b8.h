// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupLocationSharingController
// Superclass: NSObject
// Address: 0x112abf9b8

@interface SCGroupLocationSharingController

// Property: cellTypes; attributes: T@"NSArray",R,N
// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController
// Property: dataListener; attributes: T@"<SCGroupLocationSharingControllerDataListener>",W,N,V_dataListener

// -[SCGroupLocationSharingController initWithGroupId:userSession:preferencesProvider:mapPersonLocationsProvider:mapPeopleFriendsProvider:mapPeopleGroupsProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106030e1c

// -[SCGroupLocationSharingController _onLocationSharingPreferencesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060313a0

// -[SCGroupLocationSharingController _ensureLocationPreferencesFetched]
// Type encoding: v16@0:8
// Implementation: 0x106031404

// -[SCGroupLocationSharingController cellTypes]
// Type encoding: @16@0:8
// Implementation: 0x106031540

// -[SCGroupLocationSharingController _updateCellTypesAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106031624

// -[SCGroupLocationSharingController userIdsForFriendsWithLocations]
// Type encoding: @16@0:8
// Implementation: 0x106031714

// -[SCGroupLocationSharingController _topMostPresentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x106031880

// -[SCGroupLocationSharingController presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x106031934

// -[SCGroupLocationSharingController setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10603194c

// -[SCGroupLocationSharingController dataListener]
// Type encoding: @16@0:8
// Implementation: 0x106031958

// -[SCGroupLocationSharingController setDataListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106031970

// -[SCGroupLocationSharingController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10603197c

@end
