// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerImagesDataStore
// Superclass: NSObject
// Address: 0x112aef258

@interface SCLensExplorerImagesDataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066bd81c

// -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1066bd918

// -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:lensExplorerPerformanceLogger:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1066bd9d4

// -[SCLensExplorerImagesDataStore initWithImagesDownloader:imagesCache:lensExplorerDependencyProvider:lensExplorerPerformanceLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1066bda5c

// -[SCLensExplorerImagesDataStore lensExplorerAnimationForLensItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066bdadc

// -[SCLensExplorerImagesDataStore lensExplorerImageForURL:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066bdddc

// -[SCLensExplorerImagesDataStore lensExplorerImageForStoryItem:type:preferredSize:]
// Type encoding: @48@0:8@16q24{CGSize=dd}32
// Implementation: 0x1066be25c

// -[SCLensExplorerImagesDataStore cancelOperationsForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066be648

// -[SCLensExplorerImagesDataStore cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066be778

// -[SCLensExplorerImagesDataStore downloadImageForURL:prefferedSize:type:promise:]
// Type encoding: v56@0:8@16{CGSize=dd}24q40@48
// Implementation: 0x1066be854

// -[SCLensExplorerImagesDataStore downloadAnimationForItem:prefferedSize:promise:]
// Type encoding: v48@0:8@16{CGSize=dd}24@40
// Implementation: 0x1066be908

// -[SCLensExplorerImagesDataStore downloadImageForStoryItem:type:preferredSize:promise:]
// Type encoding: v56@0:8@16q24{CGSize=dd}32@48
// Implementation: 0x1066bebb0

// -[SCLensExplorerImagesDataStore _handleImagePromise:url:prefferedSize:type:resultPromise:]
// Type encoding: v64@0:8@16@24{CGSize=dd}32q48@56
// Implementation: 0x1066bec80

// -[SCLensExplorerImagesDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066beebc

@end
