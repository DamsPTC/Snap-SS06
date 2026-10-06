// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerDelayingImageDataStore
// Superclass: NSObject
// Address: 0x112aef0c8

@interface SCLensExplorerDelayingImageDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerDelayingImageDataStore initWithBaseDataStore:animationLoadingDelay:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1066baddc

// -[SCLensExplorerDelayingImageDataStore cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066bae80

// -[SCLensExplorerDelayingImageDataStore cancelOperationsForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066baea4

// -[SCLensExplorerDelayingImageDataStore lensExplorerAnimationForLensItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066baee8

// -[SCLensExplorerDelayingImageDataStore lensExplorerImageForStoryItem:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066baf24

// -[SCLensExplorerDelayingImageDataStore lensExplorerImageForURL:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066baf2c

// -[SCLensExplorerDelayingImageDataStore _cancelAllScheduledFetches]
// Type encoding: v16@0:8
// Implementation: 0x1066baf34

// -[SCLensExplorerDelayingImageDataStore _cancelScheduledFetchesForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066bb06c

// -[SCLensExplorerDelayingImageDataStore _delayedAnimationForLensItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066bb1dc

// -[SCLensExplorerDelayingImageDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066bb4e4

@end
