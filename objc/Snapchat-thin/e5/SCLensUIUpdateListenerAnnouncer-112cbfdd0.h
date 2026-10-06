// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUIUpdateListenerAnnouncer
// Superclass: NSObject
// Address: 0x112cbfdd0

@interface SCLensUIUpdateListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensUIUpdateListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10b75d118

// -[SCLensUIUpdateListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x100804f80

// -[SCLensUIUpdateListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b75d2f4

// -[SCLensUIUpdateListenerAnnouncer willShowLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b75d524

// -[SCLensUIUpdateListenerAnnouncer didHideLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b75d5fc

// -[SCLensUIUpdateListenerAnnouncer didUpdateActiveLensOrder:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b75d6d4

// -[SCLensUIUpdateListenerAnnouncer didActivateLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b75d7c8

// -[SCLensUIUpdateListenerAnnouncer didSelectLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b75d8bc

// -[SCLensUIUpdateListenerAnnouncer willDisplayLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b75d9b0

// -[SCLensUIUpdateListenerAnnouncer didUpdateDisplayedLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b75daa4

// -[SCLensUIUpdateListenerAnnouncer didEndDisplayingLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b75db98

// -[SCLensUIUpdateListenerAnnouncer didDrawIcon:forLens:atIndex:withContext:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x10b75dc8c

// -[SCLensUIUpdateListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b75ddb0

// -[SCLensUIUpdateListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1005e07b8

@end
