// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDynamicGeoFilterResource
// Superclass: NSObject
// Address: 0x112be8498

@interface SCDynamicGeoFilterResource

// Property: source; attributes: T@"NSString",C,N,V_source
// Property: resourceId; attributes: T@"NSString",C,N,V_resourceId
// Property: layout; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_layout
// Property: rotation; attributes: Td,N,V_rotation
// Property: filterId; attributes: T@"NSString",C,N,V_filterId
// Property: dynamicContextSource; attributes: Tq,V_dynamicContextSource
// Property: type; attributes: T@"NSString",R,C,N,V_type
// Property: minRefreshInterval; attributes: Td,N,V_minRefreshInterval

// -[SCDynamicGeoFilterResource hashableValuesFromDisplayParameters]
// Type encoding: @16@0:8
// Implementation: 0x109132a88

// -[SCDynamicGeoFilterResource initWithlayout:source:resourceId:rotation:minRefreshInterval:type:filterId:]
// Type encoding: @96@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56d64d72@80@88
// Implementation: 0x109133458

// -[SCDynamicGeoFilterResource initWithDictionary:filterId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091335c8

// -[SCDynamicGeoFilterResource initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091339ac

// -[SCDynamicGeoFilterResource encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x109133af0

// -[SCDynamicGeoFilterResource getUIImagesWithCanvasSize:completion:performerQueue:contextData:dynamicContextProperties:displayName:]
// Type encoding: v72@0:8{CGSize=dd}16@?32@40@48@56@64
// Implementation: 0x109133c14

// -[SCDynamicGeoFilterResource renderCacheComponentKeyWithContextData:dynamicContextProperties:userName:displayName:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x109133cd0

// -[SCDynamicGeoFilterResource resourceId]
// Type encoding: @16@0:8
// Implementation: 0x109133d1c

// -[SCDynamicGeoFilterResource setResourceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109133d24

// -[SCDynamicGeoFilterResource layout]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x109133d2c

// -[SCDynamicGeoFilterResource setLayout:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x109133d38

// -[SCDynamicGeoFilterResource rotation]
// Type encoding: d16@0:8
// Implementation: 0x109133d44

// -[SCDynamicGeoFilterResource setRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x109133d4c

// -[SCDynamicGeoFilterResource source]
// Type encoding: @16@0:8
// Implementation: 0x109133d54

// -[SCDynamicGeoFilterResource setSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x109133d5c

// -[SCDynamicGeoFilterResource dynamicContextSource]
// Type encoding: q16@0:8
// Implementation: 0x109133d64

// -[SCDynamicGeoFilterResource setDynamicContextSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x109133d6c

// -[SCDynamicGeoFilterResource type]
// Type encoding: @16@0:8
// Implementation: 0x109133d74

// -[SCDynamicGeoFilterResource filterId]
// Type encoding: @16@0:8
// Implementation: 0x109133d7c

// -[SCDynamicGeoFilterResource setFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109133d84

// -[SCDynamicGeoFilterResource minRefreshInterval]
// Type encoding: d16@0:8
// Implementation: 0x109133d8c

// -[SCDynamicGeoFilterResource setMinRefreshInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x109133d94

// -[SCDynamicGeoFilterResource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109133d9c

// +[SCDynamicGeoFilterResource resourceWithDictionary:filterId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109132bcc

// +[SCDynamicGeoFilterResource resourceWithCTPDynamicFilterContent:filterId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109132cc4

@end
