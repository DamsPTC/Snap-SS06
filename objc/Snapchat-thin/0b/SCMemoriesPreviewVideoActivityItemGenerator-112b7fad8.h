// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesPreviewVideoActivityItemGenerator
// Superclass: NSObject
// Address: 0x112b7fad8

@interface SCMemoriesPreviewVideoActivityItemGenerator

// Property: delegate; attributes: T@"<SCActivityItemGeneratingDelegate>",W,N,V_delegate
// Property: progress; attributes: Tf,?,R,N
// Property: item; attributes: T@,?,R,N
// Property: itemCount; attributes: TQ,?,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesPreviewVideoActivityItemGenerator initWithPreviewVideoFilter:previewConfiguration:outputUrl:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107d8e6f8

// -[SCMemoriesPreviewVideoActivityItemGenerator generateItemForActivityType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8e938

// -[SCMemoriesPreviewVideoActivityItemGenerator _updateProgress:]
// Type encoding: v20@0:8f16
// Implementation: 0x107d8eb40

// -[SCMemoriesPreviewVideoActivityItemGenerator _videoCompletedWithUrl:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d8eb88

// -[SCMemoriesPreviewVideoActivityItemGenerator generateThumbnailForExport:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107d8eeb8

// -[SCMemoriesPreviewVideoActivityItemGenerator itemId]
// Type encoding: @16@0:8
// Implementation: 0x107d8efe0

// -[SCMemoriesPreviewVideoActivityItemGenerator itemDuration]
// Type encoding: q16@0:8
// Implementation: 0x107d8f008

// -[SCMemoriesPreviewVideoActivityItemGenerator estimatedMediaSize]
// Type encoding: Q16@0:8
// Implementation: 0x107d8f014

// -[SCMemoriesPreviewVideoActivityItemGenerator cancel]
// Type encoding: v16@0:8
// Implementation: 0x107d8f064

// -[SCMemoriesPreviewVideoActivityItemGenerator primarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107d8f06c

// -[SCMemoriesPreviewVideoActivityItemGenerator secondarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107d8f094

// -[SCMemoriesPreviewVideoActivityItemGenerator delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d8f0bc

// -[SCMemoriesPreviewVideoActivityItemGenerator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8f0d4

// -[SCMemoriesPreviewVideoActivityItemGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d8f0e0

@end
