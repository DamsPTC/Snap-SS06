// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryLagunaContentLoader
// Superclass: NSObject
// Address: 0x112b42fe8

@interface SCGalleryLagunaContentLoader

// Property: snap; attributes: T@"<SCGallerySnap>",R,N,V_snap
// Property: contentUUID; attributes: T@"NSString",R,N
// Property: snapId; attributes: T@"NSString",R,N
// Property: isGenericAssetDownloadComplete; attributes: TB,R,N,V_isGenericAssetDownloadComplete
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryLagunaContentLoader initWithSnap:content:performer:spectaclesServices:spectaclesAuxiliaryContentServices:dataObjectContext:cloudFS:encryptedContentManager:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106e8b1fc

// -[SCGalleryLagunaContentLoader dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106e8b43c

// -[SCGalleryLagunaContentLoader _device]
// Type encoding: @16@0:8
// Implementation: 0x106e8b54c

// -[SCGalleryLagunaContentLoader contentUUID]
// Type encoding: @16@0:8
// Implementation: 0x106e8b73c

// -[SCGalleryLagunaContentLoader snapId]
// Type encoding: @16@0:8
// Implementation: 0x106e8b744

// -[SCGalleryLagunaContentLoader isComponentsBeingTransferred:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106e8b74c

// -[SCGalleryLagunaContentLoader transferProgressForComponents:]
// Type encoding: d24@0:8Q16
// Implementation: 0x106e8b828

// -[SCGalleryLagunaContentLoader isAvailableLocallyForContentComponent:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106e8ba08

// -[SCGalleryLagunaContentLoader downloadThumbnailWithQueue:resultHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x106e8baa8

// -[SCGalleryLagunaContentLoader _ensureAuxiliaryContentStorePopulated]
// Type encoding: v16@0:8
// Implementation: 0x106e8bcdc

// -[SCGalleryLagunaContentLoader requestImageForContentComponent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106e8bd40

// -[SCGalleryLagunaContentLoader requestAVAssetWithAutomaticallyLoadedAssetKeys:queue:resultHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e8bdcc

// -[SCGalleryLagunaContentLoader _requestAVAssetWithSnap:automaticallyLoadedAssetKeys:cloudFile:queue:resultHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106e8bee8

// -[SCGalleryLagunaContentLoader didReceiveDataForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106e8c23c

// -[SCGalleryLagunaContentLoader didFinishDownloadForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106e8c244

// -[SCGalleryLagunaContentLoader didPauseForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106e8c494

// -[SCGalleryLagunaContentLoader didInterruptDownloadForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106e8c49c

// -[SCGalleryLagunaContentLoader didCancelDownloadForContentComponent:forContent:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106e8c4a4

// -[SCGalleryLagunaContentLoader removeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e8c4ac

// -[SCGalleryLagunaContentLoader addLagunaContentListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e8c4f4

// -[SCGalleryLagunaContentLoader removeLagunaContentListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e8c4fc

// -[SCGalleryLagunaContentLoader isGenericAssetDownloadComplete]
// Type encoding: B16@0:8
// Implementation: 0x106e8c504

// -[SCGalleryLagunaContentLoader snap]
// Type encoding: @16@0:8
// Implementation: 0x106e8c50c

// -[SCGalleryLagunaContentLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e8c514

@end
