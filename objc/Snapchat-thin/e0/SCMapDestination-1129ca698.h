// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDestination
// Superclass: NSObject
// Address: 0x1129ca698

@interface SCMapDestination

// Property: description; attributes: T@"NSString",N,R

// -[SCMapDestination description]
// Type encoding: @16@0:8
// Implementation: 0x1045197ac

// -[SCMapDestination init]
// Type encoding: @16@0:8
// Implementation: 0x104519850

// -[SCMapDestination copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104519898

// -[SCMapDestination matchDefaultViewport:friend:customGroup:coordinate:place:placeDiscovery:drop:address:systemSettings:arrivalNotifications:externalMusic:]
// Type encoding: v104@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88@?96
// Implementation: 0x10451a284

// -[SCMapDestination .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10451a790

// +[SCMapDestination defaultViewport]
// Type encoding: @16@0:8
// Implementation: 0x1045198b4

// +[SCMapDestination friendWithUserId:reactionEmojis:reactions:viewSource:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x1045198d0

// +[SCMapDestination customGroupWithUserIds:name:source:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x104519984

// +[SCMapDestination coordinateWithCenter:zoomLevel:]
// Type encoding: @40@0:8{CLLocationCoordinate2D=dd}16d32
// Implementation: 0x104519a00

// +[SCMapDestination placeWithBoundingNE:boundingSW:placeType:placeId:openSource:sourceType:sourceSessionId:placeLinkButtonData:]
// Type encoding: @96@0:8{CLLocationCoordinate2D=dd}16{CLLocationCoordinate2D=dd}32q48@56@64@72@80@88
// Implementation: 0x104519a18

// +[SCMapDestination placeDiscoveryWithPlaceLocation:placeId:userId:pivotName:placePivotType:attributeId:pivotEmojiUnicode:localizedResultsHeader:source:sourceSessionId:]
// Type encoding: @104@0:8{CLLocationCoordinate2D=dd}16@32@40@48@56@64@72@80@88@96
// Implementation: 0x104519b58

// +[SCMapDestination dropWithDrop:openSource:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x104519d64

// +[SCMapDestination addressWithAddress:senderID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104519da4

// +[SCMapDestination systemSettingsWithNotificationID:notificationType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104519db0

// +[SCMapDestination arrivalNotifications]
// Type encoding: @16@0:8
// Implementation: 0x104519e2c

// +[SCMapDestination externalMusic]
// Type encoding: @16@0:8
// Implementation: 0x104519e44

@end
