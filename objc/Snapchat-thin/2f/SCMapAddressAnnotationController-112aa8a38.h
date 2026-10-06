// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapAddressAnnotationController
// Superclass: NSObject
// Address: 0x112aa8a38

@interface SCMapAddressAnnotationController

// Property: delegate; attributes: T@"<SCMapAddressAnnotationControllerDelegate>",W,N,V_delegate
// Property: feature; attributes: Tq,R,N
// Property: touchPriority; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapAddressAnnotationController initWithGestureManager:mapViewport:mapView:useAppTriggerForAddressPins:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105ec52e4

// -[SCMapAddressAnnotationController placeAnnotationsAtAddresses:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec55f4

// -[SCMapAddressAnnotationController removeAnnotationsAtAddresses:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec576c

// -[SCMapAddressAnnotationController configureMap]
// Type encoding: v16@0:8
// Implementation: 0x105ec58b4

// -[SCMapAddressAnnotationController centerViewportOnAddress:edgeInsets:]
// Type encoding: v56@0:8@16{UIEdgeInsets=dddd}24
// Implementation: 0x105ec58b8

// -[SCMapAddressAnnotationController _flyToCoordinate:edgeInsets:]
// Type encoding: v64@0:8{CLLocationCoordinate2D=dd}16{UIEdgeInsets=dddd}32
// Implementation: 0x105ec5b58

// -[SCMapAddressAnnotationController feature]
// Type encoding: q16@0:8
// Implementation: 0x105ec5bf4

// -[SCMapAddressAnnotationController touchPriority]
// Type encoding: q16@0:8
// Implementation: 0x105ec5bfc

// -[SCMapAddressAnnotationController didLongPressOnMapAtPoint:featureDescriptors:]
// Type encoding: {SCMapTouchResponderResult=BB}40@0:8{CGPoint=dd}16@32
// Implementation: 0x105ec5c04

// -[SCMapAddressAnnotationController didTouchDownOnMapAtPoint:featureDescriptors:]
// Type encoding: {SCMapTouchResponderResult=BB}40@0:8{CGPoint=dd}16@32
// Implementation: 0x105ec5c0c

// -[SCMapAddressAnnotationController didTouchUpOnMapAtPoint:touchWorldLocation:featureDescriptors:]
// Type encoding: {SCMapTouchResponderResult=BB}56@0:8{CGPoint=dd}16{CLLocationCoordinate2D=dd}32@48
// Implementation: 0x105ec5c14

// -[SCMapAddressAnnotationController priorResponderDidHandleTouch:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec5f70

// -[SCMapAddressAnnotationController didCancelTouchOnMapWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec5f74

// -[SCMapAddressAnnotationController _addressEntryToSDKFeature:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ec5f78

// -[SCMapAddressAnnotationController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105ec60f4

// -[SCMapAddressAnnotationController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec610c

// -[SCMapAddressAnnotationController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ec6118

@end
