// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSendMediaGroup
// Superclass: NSObject
// Address: 0x112b6f908

@interface SCMemoriesSendMediaGroup

// Property: UUID; attributes: T@"NSString",R,N,V_UUID
// Property: galleryMedias; attributes: T@"NSArray",R,N,V_galleryMedias
// Property: groupType; attributes: TQ,R,N,V_groupType
// Property: storyEntry; attributes: T@"<SCGalleryEntry>",R,N,V_storyEntry
// Property: isEntryLevelSnapDocBased; attributes: TB,R,N
// Property: imageCount; attributes: TQ,R,N,V_imageCount
// Property: specsImageCount; attributes: TQ,R,N,V_specsImageCount
// Property: normalVideoCount; attributes: TQ,R,N,V_normalVideoCount
// Property: specsVideoCount; attributes: TQ,R,N,V_specsVideoCount
// Property: meoCount; attributes: TQ,R,N,V_meoCount
// Property: totalDuration; attributes: Td,R,N,V_totalDuration
// Property: containsLagunaSnap; attributes: TB,R,N,V_containsLagunaSnap
// Property: containsPsychomantisSnap; attributes: TB,R,N,V_containsPsychomantisSnap

// -[SCMemoriesSendMediaGroup initPrivateWithGalleryMedias:]
// Type encoding: @24@0:8@16
// Implementation: 0x107add69c

// -[SCMemoriesSendMediaGroup _populateCountsWithDataObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107add72c

// -[SCMemoriesSendMediaGroup initWithStoryGroupWithGalleryMedias:storyEntry:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107adda3c

// -[SCMemoriesSendMediaGroup initWithMultiSnapGalleryMedias:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107addac8

// -[SCMemoriesSendMediaGroup initWithBatchGroupWithGalleryMedias:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107addb30

// -[SCMemoriesSendMediaGroup initWithStitchedMultiSnap:isPrivate:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107addb98

// -[SCMemoriesSendMediaGroup storyEntry]
// Type encoding: @16@0:8
// Implementation: 0x107addd58

// -[SCMemoriesSendMediaGroup isEntryLevelSnapDocBased]
// Type encoding: B16@0:8
// Implementation: 0x107addd80

// -[SCMemoriesSendMediaGroup UUID]
// Type encoding: @16@0:8
// Implementation: 0x107adddd4

// -[SCMemoriesSendMediaGroup galleryMedias]
// Type encoding: @16@0:8
// Implementation: 0x107addddc

// -[SCMemoriesSendMediaGroup groupType]
// Type encoding: Q16@0:8
// Implementation: 0x107addde4

// -[SCMemoriesSendMediaGroup imageCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adddec

// -[SCMemoriesSendMediaGroup specsImageCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adddf4

// -[SCMemoriesSendMediaGroup normalVideoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adddfc

// -[SCMemoriesSendMediaGroup specsVideoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adde04

// -[SCMemoriesSendMediaGroup meoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adde0c

// -[SCMemoriesSendMediaGroup totalDuration]
// Type encoding: d16@0:8
// Implementation: 0x107adde14

// -[SCMemoriesSendMediaGroup containsLagunaSnap]
// Type encoding: B16@0:8
// Implementation: 0x107adde1c

// -[SCMemoriesSendMediaGroup containsPsychomantisSnap]
// Type encoding: B16@0:8
// Implementation: 0x107adde24

// -[SCMemoriesSendMediaGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107adde2c

@end
