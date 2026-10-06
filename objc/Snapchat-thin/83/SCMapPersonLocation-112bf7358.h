// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPersonLocation
// Superclass: NSObject
// Address: 0x112bf7358

@interface SCMapPersonLocation

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: clusterCoordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_clusterCoordinate
// Property: horizontalAccuracy; attributes: Td,R,N,V_horizontalAccuracy
// Property: date; attributes: T@"NSDate",R,C,N,V_date
// Property: lastActiveDate; attributes: T@"NSDate",R,C,N,V_lastActiveDate
// Property: locality; attributes: T@"NSString",R,C,N,V_locality
// Property: venueName; attributes: T@"NSString",R,C,N,V_venueName
// Property: sticker; attributes: T@"SCMapBitmojiSticker",R,C,N,V_sticker
// Property: status; attributes: T@"SCMapPersonStatus",R,C,N,V_status
// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_coordinate
// Property: context; attributes: TQ,R,N,V_context
// Property: venueId; attributes: T@"NSString",R,C,N,V_venueId
// Property: batteryLevel; attributes: Tf,R,N,V_batteryLevel
// Property: accessories; attributes: T@"NSArray",R,C,N,V_accessories
// Property: isSharingBackgroundLocation; attributes: TB,R,N,V_isSharingBackgroundLocation

// -[SCMapPersonLocation statusIfLive]
// Type encoding: @16@0:8
// Implementation: 0x106b1ec20

// -[SCMapPersonLocation initWithUserId:clusterCoordinate:horizontalAccuracy:date:lastActiveDate:locality:venueName:sticker:status:coordinate:context:venueId:batteryLevel:accessories:isSharingBackgroundLocation:]
// Type encoding: @144@0:8@16{CLLocationCoordinate2D=dd}24d40@48@56@64@72@80@88{CLLocationCoordinate2D=dd}96Q112@120f128@132B140
// Implementation: 0x109220e58

// -[SCMapPersonLocation copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1092210ac

// -[SCMapPersonLocation hash]
// Type encoding: Q16@0:8
// Implementation: 0x1092210d0

// -[SCMapPersonLocation isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109221264

// -[SCMapPersonLocation userId]
// Type encoding: @16@0:8
// Implementation: 0x1092214a0

// -[SCMapPersonLocation clusterCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x1092214a8

// -[SCMapPersonLocation horizontalAccuracy]
// Type encoding: d16@0:8
// Implementation: 0x1092214b0

// -[SCMapPersonLocation date]
// Type encoding: @16@0:8
// Implementation: 0x1092214b8

// -[SCMapPersonLocation lastActiveDate]
// Type encoding: @16@0:8
// Implementation: 0x1092214c0

// -[SCMapPersonLocation locality]
// Type encoding: @16@0:8
// Implementation: 0x1092214c8

// -[SCMapPersonLocation venueName]
// Type encoding: @16@0:8
// Implementation: 0x1092214d0

// -[SCMapPersonLocation sticker]
// Type encoding: @16@0:8
// Implementation: 0x1092214d8

// -[SCMapPersonLocation status]
// Type encoding: @16@0:8
// Implementation: 0x1092214e0

// -[SCMapPersonLocation coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x1092214e8

// -[SCMapPersonLocation context]
// Type encoding: Q16@0:8
// Implementation: 0x1092214f0

// -[SCMapPersonLocation venueId]
// Type encoding: @16@0:8
// Implementation: 0x1092214f8

// -[SCMapPersonLocation batteryLevel]
// Type encoding: f16@0:8
// Implementation: 0x109221500

// -[SCMapPersonLocation accessories]
// Type encoding: @16@0:8
// Implementation: 0x109221508

// -[SCMapPersonLocation isSharingBackgroundLocation]
// Type encoding: B16@0:8
// Implementation: 0x109221510

// -[SCMapPersonLocation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109221518

@end
