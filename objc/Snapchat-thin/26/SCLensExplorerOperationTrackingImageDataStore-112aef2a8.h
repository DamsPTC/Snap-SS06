// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerOperationTrackingImageDataStore
// Superclass: NSObject
// Address: 0x112aef2a8

@interface SCLensExplorerOperationTrackingImageDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerOperationTrackingImageDataStore initWithImageDataStore:operationTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066bef10

// -[SCLensExplorerOperationTrackingImageDataStore cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066befb4

// -[SCLensExplorerOperationTrackingImageDataStore cancelOperationsForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066befbc

// -[SCLensExplorerOperationTrackingImageDataStore lensExplorerAnimationForLensItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066bf00c

// -[SCLensExplorerOperationTrackingImageDataStore lensExplorerImageForStoryItem:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bf0c4

// -[SCLensExplorerOperationTrackingImageDataStore lensExplorerImageForURL:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bf184

// -[SCLensExplorerOperationTrackingImageDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066bf22c

@end
