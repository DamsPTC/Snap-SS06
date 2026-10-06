// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBAllocationTrackerManager
// Superclass: NSObject
// Address: 0x112b13630

@interface FBAllocationTrackerManager


// -[FBAllocationTrackerManager isAllocationTrackerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106af5878

// -[FBAllocationTrackerManager startTrackingAllocations]
// Type encoding: v16@0:8
// Implementation: 0x106af5880

// -[FBAllocationTrackerManager stopTrackingAllocations]
// Type encoding: v16@0:8
// Implementation: 0x106af5884

// -[FBAllocationTrackerManager enableGenerations]
// Type encoding: v16@0:8
// Implementation: 0x106af5888

// -[FBAllocationTrackerManager disableGenerations]
// Type encoding: v16@0:8
// Implementation: 0x106af588c

// -[FBAllocationTrackerManager markGeneration]
// Type encoding: v16@0:8
// Implementation: 0x106af5890

// -[FBAllocationTrackerManager currentAllocationSummary]
// Type encoding: @16@0:8
// Implementation: 0x106af5894

// -[FBAllocationTrackerManager currentSummaryForGenerations]
// Type encoding: @16@0:8
// Implementation: 0x106af589c

// -[FBAllocationTrackerManager instancesForClass:inGeneration:]
// Type encoding: @32@0:8#16q24
// Implementation: 0x106af58a4

// -[FBAllocationTrackerManager instancesOfClasses:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af58ac

// -[FBAllocationTrackerManager trackedClasses]
// Type encoding: @16@0:8
// Implementation: 0x106af58b4

// +[FBAllocationTrackerManager sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x106af5870

@end
