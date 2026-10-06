// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBAllocationTrackerManager
// Superclass: NSObject
// Address: 0xad94c8

@interface FBAllocationTrackerManager


// -[FBAllocationTrackerManager isAllocationTrackerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x4b4748

// -[FBAllocationTrackerManager startTrackingAllocations]
// Type encoding: v16@0:8
// Implementation: 0x4b4750

// -[FBAllocationTrackerManager stopTrackingAllocations]
// Type encoding: v16@0:8
// Implementation: 0x4b4754

// -[FBAllocationTrackerManager enableGenerations]
// Type encoding: v16@0:8
// Implementation: 0x4b4758

// -[FBAllocationTrackerManager disableGenerations]
// Type encoding: v16@0:8
// Implementation: 0x4b475c

// -[FBAllocationTrackerManager markGeneration]
// Type encoding: v16@0:8
// Implementation: 0x4b4760

// -[FBAllocationTrackerManager currentAllocationSummary]
// Type encoding: @16@0:8
// Implementation: 0x4b4764

// -[FBAllocationTrackerManager currentSummaryForGenerations]
// Type encoding: @16@0:8
// Implementation: 0x4b476c

// -[FBAllocationTrackerManager instancesForClass:inGeneration:]
// Type encoding: @32@0:8#16q24
// Implementation: 0x4b4774

// -[FBAllocationTrackerManager instancesOfClasses:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b477c

// -[FBAllocationTrackerManager trackedClasses]
// Type encoding: @16@0:8
// Implementation: 0x4b4784

// +[FBAllocationTrackerManager sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x4b4740

@end
