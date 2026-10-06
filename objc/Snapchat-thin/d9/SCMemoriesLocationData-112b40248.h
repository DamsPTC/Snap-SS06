// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesLocationData
// Superclass: NSObject
// Address: 0x112b40248

@interface SCMemoriesLocationData

// Property: memoriesId; attributes: T@"NSString",R,C,N,V_memoriesId
// Property: location; attributes: T{CLLocationCoordinate2D=dd},R,N,V_location
// Property: captureTimeUtc; attributes: Td,R,N,V_captureTimeUtc
// Property: placeId; attributes: T@"NSString",R,C,N,V_placeId

// -[SCMemoriesLocationData initWithMemoriesId:location:captureTimeUtc:placeId:]
// Type encoding: @56@0:8@16{CLLocationCoordinate2D=dd}24d40@48
// Implementation: 0x106e70498

// -[SCMemoriesLocationData memoriesId]
// Type encoding: @16@0:8
// Implementation: 0x106e70568

// -[SCMemoriesLocationData location]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x106e70570

// -[SCMemoriesLocationData captureTimeUtc]
// Type encoding: d16@0:8
// Implementation: 0x106e70578

// -[SCMemoriesLocationData placeId]
// Type encoding: @16@0:8
// Implementation: 0x106e70580

// -[SCMemoriesLocationData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e70588

@end
