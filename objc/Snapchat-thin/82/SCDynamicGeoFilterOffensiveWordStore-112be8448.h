// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDynamicGeoFilterOffensiveWordStore
// Superclass: NSObject
// Address: 0x112be8448

@interface SCDynamicGeoFilterOffensiveWordStore

// Property: simpleContentFetcher; attributes: T@"SCLazy",W,N,V_simpleContentFetcher

// -[SCDynamicGeoFilterOffensiveWordStore initWithSimpleContentFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x109131e24

// -[SCDynamicGeoFilterOffensiveWordStore offensiveWordInText:]
// Type encoding: B24@0:8@16
// Implementation: 0x109131fe4

// -[SCDynamicGeoFilterOffensiveWordStore _isOffensiveSubstringInNormalizedText:languageCode:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x109132398

// -[SCDynamicGeoFilterOffensiveWordStore _isOffensiveExactWordInNormalizedText:languageCode:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091324c0

// -[SCDynamicGeoFilterOffensiveWordStore _getDictFromData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091325e8

// -[SCDynamicGeoFilterOffensiveWordStore _loadOffensiveWordStore]
// Type encoding: v16@0:8
// Implementation: 0x1091326a4

// -[SCDynamicGeoFilterOffensiveWordStore simpleContentFetcher]
// Type encoding: @16@0:8
// Implementation: 0x109132a14

// -[SCDynamicGeoFilterOffensiveWordStore setSimpleContentFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x109132a2c

// -[SCDynamicGeoFilterOffensiveWordStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109132a38

// +[SCDynamicGeoFilterOffensiveWordStore sharedInstanceWithSimpleContentFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x109131ec0

// +[SCDynamicGeoFilterOffensiveWordStore sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x109131fdc

@end
