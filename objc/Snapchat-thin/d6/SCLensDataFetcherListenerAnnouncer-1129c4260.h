// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataFetcherListenerAnnouncer
// Superclass: NSObject
// Address: 0x1129c4260

@interface SCLensDataFetcherListenerAnnouncer


// -[SCLensDataFetcherListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x100bbcf4c

// -[SCLensDataFetcherListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1044e1054

// -[SCLensDataFetcherListenerAnnouncer willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x1044e1198

// -[SCLensDataFetcherListenerAnnouncer willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x1044e127c

// -[SCLensDataFetcherListenerAnnouncer didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x1044e132c

// -[SCLensDataFetcherListenerAnnouncer willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x1044e148c

// -[SCLensDataFetcherListenerAnnouncer didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x1044e15c8

// -[SCLensDataFetcherListenerAnnouncer willStartLoadingAsset:lens:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1044e1718

// -[SCLensDataFetcherListenerAnnouncer didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x1044e1870

// -[SCLensDataFetcherListenerAnnouncer willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1044e1a60

// -[SCLensDataFetcherListenerAnnouncer didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1044e1b68

// -[SCLensDataFetcherListenerAnnouncer init]
// Type encoding: @16@0:8
// Implementation: 0x100bb6650

// -[SCLensDataFetcherListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044e1c40

@end
