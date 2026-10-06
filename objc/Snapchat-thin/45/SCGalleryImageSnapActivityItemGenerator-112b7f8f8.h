// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryImageSnapActivityItemGenerator
// Superclass: NSObject
// Address: 0x112b7f8f8

@interface SCGalleryImageSnapActivityItemGenerator

// Property: delegate; attributes: T@"<SCActivityItemGeneratingDelegate>",W,N,V_delegate
// Property: progress; attributes: Tf,?,R,N
// Property: item; attributes: T@,?,R,N
// Property: itemCount; attributes: TQ,?,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryImageSnapActivityItemGenerator initWithGallerySnap:dataObjectContext:cachingMediaManager:memoriesCloudFS:memoriesTranscodingHelper:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107d8b9a4

// -[SCGalleryImageSnapActivityItemGenerator itemId]
// Type encoding: @16@0:8
// Implementation: 0x107d8bb1c

// -[SCGalleryImageSnapActivityItemGenerator itemDuration]
// Type encoding: q16@0:8
// Implementation: 0x107d8bb24

// -[SCGalleryImageSnapActivityItemGenerator primarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107d8bb60

// -[SCGalleryImageSnapActivityItemGenerator secondarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107d8bb68

// -[SCGalleryImageSnapActivityItemGenerator estimatedMediaSize]
// Type encoding: Q16@0:8
// Implementation: 0x107d8bb70

// -[SCGalleryImageSnapActivityItemGenerator generateItemForActivityType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8bb7c

// -[SCGalleryImageSnapActivityItemGenerator _generateItemWithCloudFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8bcf8

// -[SCGalleryImageSnapActivityItemGenerator _generateAnimatedImage:snapDetail:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d8bfd8

// -[SCGalleryImageSnapActivityItemGenerator generateThumbnailForExport:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107d8c4e0

// -[SCGalleryImageSnapActivityItemGenerator cancel]
// Type encoding: v16@0:8
// Implementation: 0x107d8c4f0

// -[SCGalleryImageSnapActivityItemGenerator delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d8c4f4

// -[SCGalleryImageSnapActivityItemGenerator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8c50c

// -[SCGalleryImageSnapActivityItemGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d8c518

@end
