// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerImageBlurringDataStore
// Superclass: NSObject
// Address: 0x112aef118

@interface SCLensExplorerImageBlurringDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerImageBlurringDataStore initWithImageDataStore:imagesCache:operationTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1066bb514

// -[SCLensExplorerImageBlurringDataStore initWithImageDataStore:imagesCache:operationTracker:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066bb5d0

// -[SCLensExplorerImageBlurringDataStore lensExplorerAnimationForLensItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066bb6f4

// -[SCLensExplorerImageBlurringDataStore lensExplorerImageForURL:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bb6fc

// -[SCLensExplorerImageBlurringDataStore lensExplorerImageForStoryItem:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bbfa8

// -[SCLensExplorerImageBlurringDataStore cancelOperationsForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066bbfb0

// -[SCLensExplorerImageBlurringDataStore cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066bbfb8

// -[SCLensExplorerImageBlurringDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066bbfc0

@end
