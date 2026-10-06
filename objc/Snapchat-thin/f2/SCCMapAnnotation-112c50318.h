// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCMapAnnotation
// Superclass: SCValdiMarshallableObject
// Address: 0x112c50318

@interface SCCMapAnnotation

// Property: clusterIdentifier; attributes: T@"NSString",R,C,N
// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},R,N
// Property: clusterVisibilityPriority; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: identifier; attributes: T@"NSString",C,D,N
// Property: lat; attributes: Td,D,N
// Property: lng; attributes: Td,D,N
// Property: styleIdentifier; attributes: T@"NSString",C,D,N
// Property: imageUrl; attributes: T@"NSString",C,D,N
// Property: clusterPriority; attributes: T@"NSNumber",&,D,N
// Property: ancillaries; attributes: T@"NSArray",C,D,N
// Property: metadata; attributes: T@"NSDictionary",C,D,N

// -[SCCMapAnnotation isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105effdb8

// -[SCCMapAnnotation coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x105effd3c

// -[SCCMapAnnotation clusterIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105effd78

// -[SCCMapAnnotation clusterVisibilityPriority]
// Type encoding: q16@0:8
// Implementation: 0x105effd7c

// -[SCCMapAnnotation initWithIdentifier:lat:lng:styleIdentifier:]
// Type encoding: @48@0:8@16d24d32@40
// Implementation: 0x10b02c590

// +[SCCMapAnnotation valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b02c5d0

@end
