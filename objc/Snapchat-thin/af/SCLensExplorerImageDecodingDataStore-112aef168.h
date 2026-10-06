// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerImageDecodingDataStore
// Superclass: NSObject
// Address: 0x112aef168

@interface SCLensExplorerImageDecodingDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerImageDecodingDataStore initWithImageDataStore:operationTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066bc008

// -[SCLensExplorerImageDecodingDataStore initWithImageDataStore:operationTracker:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1066bc0a4

// -[SCLensExplorerImageDecodingDataStore lensExplorerAnimationForLensItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066bc170

// -[SCLensExplorerImageDecodingDataStore lensExplorerImageForURL:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bc5fc

// -[SCLensExplorerImageDecodingDataStore lensExplorerImageForStoryItem:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bc6a0

// -[SCLensExplorerImageDecodingDataStore cancelOperationsForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066bc760

// -[SCLensExplorerImageDecodingDataStore cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066bc768

// -[SCLensExplorerImageDecodingDataStore _decodeImage:imageUrl:size:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x1066bc770

// -[SCLensExplorerImageDecodingDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066bca38

@end
