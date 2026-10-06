// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapLocation
// Superclass: NSObject
// Address: 0x112b40388

@interface SCMemoriesSnapLocation

// Property: snapId; attributes: T@"NSString",R,C,N,V_snapId
// Property: location; attributes: T{CLLocationCoordinate2D=dd},R,N,V_location
// Property: captureTimeUtc; attributes: Td,R,N,V_captureTimeUtc
// Property: placeId; attributes: T@"NSString",R,C,N,V_placeId

// -[SCMemoriesSnapLocation initWithSnapId:location:captureTimeUtc:placeId:]
// Type encoding: @56@0:8@16{CLLocationCoordinate2D=dd}24d40@48
// Implementation: 0x106e707b8

// -[SCMemoriesSnapLocation hash]
// Type encoding: Q16@0:8
// Implementation: 0x106e70888

// -[SCMemoriesSnapLocation isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e7095c

// -[SCMemoriesSnapLocation snapId]
// Type encoding: @16@0:8
// Implementation: 0x106e70a68

// -[SCMemoriesSnapLocation location]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x106e70a70

// -[SCMemoriesSnapLocation captureTimeUtc]
// Type encoding: d16@0:8
// Implementation: 0x106e70a78

// -[SCMemoriesSnapLocation placeId]
// Type encoding: @16@0:8
// Implementation: 0x106e70a80

// -[SCMemoriesSnapLocation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e70a88

@end
