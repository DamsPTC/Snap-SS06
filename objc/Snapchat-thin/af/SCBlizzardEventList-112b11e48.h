// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEventList
// Superclass: NSObject
// Address: 0x112b11e48

@interface SCBlizzardEventList

// Property: mutableEvents; attributes: T@"NSMutableArray",&,N,V_mutableEvents
// Property: count; attributes: TQ,R,N
// Property: allEvents; attributes: T@"NSArray",R,N
// Property: blizzardFrameStart; attributes: T@"SCBlizzardFrameStart",&,N,V_blizzardFrameStart

// -[SCBlizzardEventList initWithEvents:]
// Type encoding: @24@0:8@16
// Implementation: 0x100322cc8

// -[SCBlizzardEventList addEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f65dc

// -[SCBlizzardEventList getEvents:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1004c4054

// -[SCBlizzardEventList removeEarliestEvents:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10078149c

// -[SCBlizzardEventList highestPriority]
// Type encoding: Q16@0:8
// Implementation: 0x10057f21c

// -[SCBlizzardEventList count]
// Type encoding: Q16@0:8
// Implementation: 0x1004c40b8

// -[SCBlizzardEventList allEvents]
// Type encoding: @16@0:8
// Implementation: 0x1004c404c

// -[SCBlizzardEventList isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ada2e4

// -[SCBlizzardEventList isEqualToEventList:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ada370

// -[SCBlizzardEventList hash]
// Type encoding: Q16@0:8
// Implementation: 0x106ada460

// -[SCBlizzardEventList blizzardFrameStart]
// Type encoding: @16@0:8
// Implementation: 0x1003eb968

// -[SCBlizzardEventList setBlizzardFrameStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003ec1c4

// -[SCBlizzardEventList mutableEvents]
// Type encoding: @16@0:8
// Implementation: 0x1003f662c

// -[SCBlizzardEventList setMutableEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ada49c

// -[SCBlizzardEventList .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100367d10

@end
