// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerImageDownsamplingDataStore
// Superclass: NSObject
// Address: 0x112aef1b8

@interface SCLensExplorerImageDownsamplingDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerImageDownsamplingDataStore initWithImageDataStore:operationTracker:imageScale:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x1066bca74

// -[SCLensExplorerImageDownsamplingDataStore initWithImageDataStore:operationTracker:imageScale:performer:]
// Type encoding: @48@0:8@16@24d32@40
// Implementation: 0x1066bcb20

// -[SCLensExplorerImageDownsamplingDataStore lensExplorerAnimationForLensItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066bcc38

// -[SCLensExplorerImageDownsamplingDataStore lensExplorerImageForURL:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bd09c

// -[SCLensExplorerImageDownsamplingDataStore lensExplorerImageForStoryItem:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bd140

// -[SCLensExplorerImageDownsamplingDataStore cancelOperationsForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066bd200

// -[SCLensExplorerImageDownsamplingDataStore cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066bd208

// -[SCLensExplorerImageDownsamplingDataStore _downsampleImage:imageUrl:size:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x1066bd210

// -[SCLensExplorerImageDownsamplingDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066bd498

@end
