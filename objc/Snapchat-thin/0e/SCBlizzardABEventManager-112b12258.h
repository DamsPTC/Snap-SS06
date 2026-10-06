// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardABEventManager
// Superclass: NSObject
// Address: 0x112b12258

@interface SCBlizzardABEventManager

// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",R,N,V_experimentProvider
// Property: eventsData; attributes: T@"NSMutableDictionary",&,N,V_eventsData

// -[SCBlizzardABEventManager initWithExperimentProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100363490

// -[SCBlizzardABEventManager shouldLogEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1004d02c4

// -[SCBlizzardABEventManager resetCache]
// Type encoding: v16@0:8
// Implementation: 0x106ae263c

// -[SCBlizzardABEventManager resetCacheWithUserGuid:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae2644

// -[SCBlizzardABEventManager storeCache]
// Type encoding: v16@0:8
// Implementation: 0x106ae2764

// -[SCBlizzardABEventManager _loadCache]
// Type encoding: v16@0:8
// Implementation: 0x100363620

// -[SCBlizzardABEventManager _validateEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1004d060c

// -[SCBlizzardABEventManager experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae27cc

// -[SCBlizzardABEventManager eventsData]
// Type encoding: @16@0:8
// Implementation: 0x100363b44

// -[SCBlizzardABEventManager setEventsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003637c4

// -[SCBlizzardABEventManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae27d4

@end
