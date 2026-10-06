// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPinVisibilityEvent
// Superclass: NSObject
// Address: 0x112997330

@interface SCPinVisibilityEvent

// Property: placeId; attributes: T@"NSString",N,R
// Property: visible; attributes: TB,N,R,Vvisible
// Property: invisibleReason; attributes: T@"SCInvisibleReason",N,R,VinvisibleReason
// Property: occlusionLayerGroups; attributes: T@"NSArray",N,R
// Property: zoomLevel; attributes: Tq,N,R,VzoomLevel
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCPinVisibilityEvent placeId]
// Type encoding: @16@0:8
// Implementation: 0x1042f95d4

// -[SCPinVisibilityEvent visible]
// Type encoding: B16@0:8
// Implementation: 0x1042f9620

// -[SCPinVisibilityEvent invisibleReason]
// Type encoding: @16@0:8
// Implementation: 0x1042f9630

// -[SCPinVisibilityEvent occlusionLayerGroups]
// Type encoding: @16@0:8
// Implementation: 0x1042f9640

// -[SCPinVisibilityEvent zoomLevel]
// Type encoding: q16@0:8
// Implementation: 0x1042f9688

// -[SCPinVisibilityEvent initWithPlaceId:visible:invisibleReason:occlusionLayerGroups:zoomLevel:]
// Type encoding: @52@0:8@16B24@28@36q44
// Implementation: 0x1042f9744

// -[SCPinVisibilityEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x1042f98d8

// -[SCPinVisibilityEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1042f9b9c

// -[SCPinVisibilityEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1042fa6ac

// -[SCPinVisibilityEvent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1042f9de8

// -[SCPinVisibilityEvent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1042fa208

// -[SCPinVisibilityEvent description]
// Type encoding: @16@0:8
// Implementation: 0x1042fa230

// -[SCPinVisibilityEvent init]
// Type encoding: @16@0:8
// Implementation: 0x1042fa28c

// -[SCPinVisibilityEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1042fa308

@end
