// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhotoMetadata
// Superclass: NSObject
// Address: 0x1129a6470

@interface SCPhotoMetadata

// Property: readPhotoFileMetadata; attributes: TB,N,R,VreadPhotoFileMetadata
// Property: timestamp; attributes: T@"NSNumber",N,R,Vtimestamp
// Property: longitude; attributes: T@"NSNumber",N,R,Vlongitude
// Property: latitude; attributes: T@"NSNumber",N,R,Vlatitude
// Property: altitude; attributes: T@"NSNumber",N,R,Valtitude
// Property: description; attributes: T@"NSString",N,R

// -[SCPhotoMetadata readPhotoFileMetadata]
// Type encoding: B16@0:8
// Implementation: 0x1043904f4

// -[SCPhotoMetadata timestamp]
// Type encoding: @16@0:8
// Implementation: 0x104390504

// -[SCPhotoMetadata longitude]
// Type encoding: @16@0:8
// Implementation: 0x104390514

// -[SCPhotoMetadata latitude]
// Type encoding: @16@0:8
// Implementation: 0x104390524

// -[SCPhotoMetadata altitude]
// Type encoding: @16@0:8
// Implementation: 0x104390534

// -[SCPhotoMetadata initWithReadPhotoFileMetadata:timestamp:longitude:latitude:altitude:]
// Type encoding: @52@0:8B16@20@28@36@44
// Implementation: 0x1043905e0

// -[SCPhotoMetadata copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104390728

// -[SCPhotoMetadata description]
// Type encoding: @16@0:8
// Implementation: 0x10439072c

// -[SCPhotoMetadata init]
// Type encoding: @16@0:8
// Implementation: 0x104390748

// -[SCPhotoMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1043907c4

@end
