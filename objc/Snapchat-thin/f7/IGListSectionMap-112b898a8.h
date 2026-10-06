// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: IGListSectionMap
// Superclass: NSObject
// Address: 0x112b898a8

@interface IGListSectionMap

// Property: objectToSectionControllerMap; attributes: T@"NSMapTable",R,N,V_objectToSectionControllerMap
// Property: sectionControllerToSectionMap; attributes: T@"NSMapTable",R,N,V_sectionControllerToSectionMap
// Property: mObjects; attributes: T@"NSMutableArray",&,N,V_mObjects
// Property: objects; attributes: T@"NSArray",R,N

// -[IGListSectionMap debugDescriptionLines]
// Type encoding: @16@0:8
// Implementation: 0x107ea1cb4

// -[IGListSectionMap initWithMapTable:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ea1cd0

// -[IGListSectionMap objects]
// Type encoding: @16@0:8
// Implementation: 0x107ea1d90

// -[IGListSectionMap sectionForSectionController:]
// Type encoding: q24@0:8@16
// Implementation: 0x107ea1dcc

// -[IGListSectionMap sectionControllerForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x107ea1e58

// -[IGListSectionMap updateWithObjects:sectionControllers:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ea1ed4

// -[IGListSectionMap sectionControllerForObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ea210c

// -[IGListSectionMap objectForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x107ea2178

// -[IGListSectionMap sectionForObject:]
// Type encoding: q24@0:8@16
// Implementation: 0x107ea21dc

// -[IGListSectionMap reset]
// Type encoding: v16@0:8
// Implementation: 0x107ea223c

// -[IGListSectionMap updateObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea22ec

// -[IGListSectionMap enumerateUsingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ea23f8

// -[IGListSectionMap copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107ea24f0

// -[IGListSectionMap objectToSectionControllerMap]
// Type encoding: @16@0:8
// Implementation: 0x107ea25b8

// -[IGListSectionMap sectionControllerToSectionMap]
// Type encoding: @16@0:8
// Implementation: 0x107ea25c0

// -[IGListSectionMap mObjects]
// Type encoding: @16@0:8
// Implementation: 0x107ea25c8

// -[IGListSectionMap setMObjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ea25d0

// -[IGListSectionMap .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ea2600

@end
