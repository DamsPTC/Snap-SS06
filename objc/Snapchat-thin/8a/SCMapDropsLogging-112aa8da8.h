// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDropsLogging
// Superclass: NSObject
// Address: 0x112aa8da8

@interface SCMapDropsLogging

// Property: mapSessionId; attributes: TQ,R,N,V_mapSessionID

// -[SCMapDropsLogging initWithUserBlizzardServices:mapSession:mapViewport:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105ed0e20

// -[SCMapDropsLogging logDropWithDropScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed0f04

// -[SCMapDropsLogging logDropTrayFromDropScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed1004

// -[SCMapDropsLogging logDropTrayAction:dropScope:placeId:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x105ed10e8

// -[SCMapDropsLogging getVenueStoryAnalyticsForDropId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ed121c

// -[SCMapDropsLogging _shouldLogDropPinFromSource:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105ed133c

// -[SCMapDropsLogging _blizzardSourceFromDropsScope:]
// Type encoding: q24@0:8@16
// Implementation: 0x105ed134c

// -[SCMapDropsLogging _blizzardActionFromDropsAction:]
// Type encoding: q24@0:8Q16
// Implementation: 0x105ed1384

// -[SCMapDropsLogging mapSessionId]
// Type encoding: Q16@0:8
// Implementation: 0x105ed13a4

// -[SCMapDropsLogging .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ed13ac

@end
