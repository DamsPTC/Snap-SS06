// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesVideoSnapActivityItemGenerator
// Superclass: NSObject
// Address: 0x112b7fb28

@interface SCMemoriesVideoSnapActivityItemGenerator

// Property: delegate; attributes: T@"<SCActivityItemGeneratingDelegate>",W,N,V_delegate
// Property: progress; attributes: Tf,?,R,N
// Property: item; attributes: T@,?,R,N
// Property: itemCount; attributes: TQ,?,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesVideoSnapActivityItemGenerator initWithGallerySnap:dataObjectContext:cachingMediaManager:snapVideoFilterScopeExposer:memoriesCloudFS:memoriesTranscodingHelper:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107d8f154

// -[SCMemoriesVideoSnapActivityItemGenerator itemId]
// Type encoding: @16@0:8
// Implementation: 0x107d8f2d8

// -[SCMemoriesVideoSnapActivityItemGenerator itemDuration]
// Type encoding: q16@0:8
// Implementation: 0x107d8f2e0

// -[SCMemoriesVideoSnapActivityItemGenerator primarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107d8f31c

// -[SCMemoriesVideoSnapActivityItemGenerator secondarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107d8f324

// -[SCMemoriesVideoSnapActivityItemGenerator estimatedMediaSize]
// Type encoding: Q16@0:8
// Implementation: 0x107d8f32c

// -[SCMemoriesVideoSnapActivityItemGenerator generateItemForActivityType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8f338

// -[SCMemoriesVideoSnapActivityItemGenerator _updateProgress:]
// Type encoding: v20@0:8f16
// Implementation: 0x107d8f4a4

// -[SCMemoriesVideoSnapActivityItemGenerator _generatedItem:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d8f4ec

// -[SCMemoriesVideoSnapActivityItemGenerator _generateItemWithCloudFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8f610

// -[SCMemoriesVideoSnapActivityItemGenerator generateThumbnailForExport:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107d8f9c4

// -[SCMemoriesVideoSnapActivityItemGenerator cancel]
// Type encoding: v16@0:8
// Implementation: 0x107d8f9d4

// -[SCMemoriesVideoSnapActivityItemGenerator delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d8f9dc

// -[SCMemoriesVideoSnapActivityItemGenerator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8f9f4

// -[SCMemoriesVideoSnapActivityItemGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d8fa00

@end
