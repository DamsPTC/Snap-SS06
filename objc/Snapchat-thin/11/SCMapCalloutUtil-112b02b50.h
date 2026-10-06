// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapCalloutUtil
// Superclass: NSObject
// Address: 0x112b02b50

@interface SCMapCalloutUtil


// +[SCMapCalloutUtil preferredDistanceFormatter]
// Type encoding: @16@0:8
// Implementation: 0x106873f48

// +[SCMapCalloutUtil locationAccuracyStringForDistance:distanceFormatter:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x106873f7c

// +[SCMapCalloutUtil lastSeenLocationAccuracyStringForDistance:distanceFormatter:lastSeenDateString:]
// Type encoding: @40@0:8d16@24@32
// Implementation: 0x106874024

// +[SCMapCalloutUtil adjustedAccuracyDistanceForDistance:]
// Type encoding: i24@0:8d16
// Implementation: 0x1068740f0

// +[SCMapCalloutUtil calloutTitleFromPersonLocations:groupsProvider:friendsProvider:currentUserId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1068741c0

// +[SCMapCalloutUtil calloutSubtitleFromPersonLocations:currentUserSharingLocation:currentUserId:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x106874468

// +[SCMapCalloutUtil calloutTextFromPersonLocations:distanceFormatter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106874540

// +[SCMapCalloutUtil calloutTitleForMe]
// Type encoding: @16@0:8
// Implementation: 0x106874600

// +[SCMapCalloutUtil _calloutTitleFromPeople:currentUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106874644

// +[SCMapCalloutUtil _calloutTitleFromPerson:currentUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106874a28

// +[SCMapCalloutUtil _calloutSubtitleFromSinglePersonLocation:currentUserSharingLocation:currentUserId:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x106874ae0

// +[SCMapCalloutUtil _locationStringForPersonLocations:]
// Type encoding: @24@0:8@16
// Implementation: 0x106874cdc

@end
