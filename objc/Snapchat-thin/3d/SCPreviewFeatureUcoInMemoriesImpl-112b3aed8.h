// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureUcoInMemoriesImpl
// Superclass: NSObject
// Address: 0x112b3aed8

@interface SCPreviewFeatureUcoInMemoriesImpl

// Property: delegate; attributes: T@"<SCPreviewFeatureUcoInMemoriesDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureUcoInMemoriesImpl initWithUcoDataFetcher:lensAssetContainer:imageProcessCommandsObservable:persistentStoreManager:lensCommandMetadata:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106e1a0dc

// -[SCPreviewFeatureUcoInMemoriesImpl initWithUcoDataFetcher:lensAssetContainer:imageProcessCommandsObservable:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106e1a228

// -[SCPreviewFeatureUcoInMemoriesImpl genericAssetFromVideoData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e1a31c

// -[SCPreviewFeatureUcoInMemoriesImpl genericAssetFromOriginalImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e1a37c

// -[SCPreviewFeatureUcoInMemoriesImpl snapOverlayContainsUco:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e1a400

// -[SCPreviewFeatureUcoInMemoriesImpl snapOverlayUcoFilterIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e1a440

// -[SCPreviewFeatureUcoInMemoriesImpl restoreUcoGallerySnapWithUcoAppliedImageContainer:overlayFormat:ucoFilterIds:performer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106e1a7b8

// -[SCPreviewFeatureUcoInMemoriesImpl restoreUcoGallerySnapWithUcoAppliedImageContainer:gallerySnap:ucoRawMediaCloudFile:ucoLensAssetCloudFile:encryptedContentManager:ucoFilterIds:performer:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106e1a858

// -[SCPreviewFeatureUcoInMemoriesImpl restoreUcoGallerySnapWithUcoAppliedVideoContainer:gallerySnap:ucoRawMediaCloudFile:ucoLensAssetCloudFile:contentDataProvider:ucoFilterIds:performer:timelineConfigurationUpdateHandler:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x106e1a9f4

// -[SCPreviewFeatureUcoInMemoriesImpl prefetchUcoFilterIds:performer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e1adec

// -[SCPreviewFeatureUcoInMemoriesImpl _requestSyncLensMetadataWithUcoAppliedLensAssetContainer:dataProvider:gallerySnap:ucoLensAssetCloudFile:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106e1adfc

// -[SCPreviewFeatureUcoInMemoriesImpl _fetchUcoFilterIds:performer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106e1afd8

// -[SCPreviewFeatureUcoInMemoriesImpl _imageForCloudFile:representation:encryptionHint:snap:url:encryptedContentManager:]
// Type encoding: @64@0:8@16@24q32@40@48@56
// Implementation: 0x106e1b070

// -[SCPreviewFeatureUcoInMemoriesImpl _croppedImage:toSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x106e1b254

// -[SCPreviewFeatureUcoInMemoriesImpl _fillImageContainer:withImage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e1b344

// -[SCPreviewFeatureUcoInMemoriesImpl _fillImageContainer:withImage:ucoFilterIds:performer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106e1b424

// -[SCPreviewFeatureUcoInMemoriesImpl _fetchAllUcoIdsFutureFromIds:withPerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e1b5d0

// -[SCPreviewFeatureUcoInMemoriesImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x106e1b848

// -[SCPreviewFeatureUcoInMemoriesImpl lensAssetData]
// Type encoding: @16@0:8
// Implementation: 0x106e1bb34

// -[SCPreviewFeatureUcoInMemoriesImpl lensCommandMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106e1bbd8

// -[SCPreviewFeatureUcoInMemoriesImpl _restoreInitalSerializedStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e1bc28

// -[SCPreviewFeatureUcoInMemoriesImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x106e1bc80

// -[SCPreviewFeatureUcoInMemoriesImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e1bc98

// -[SCPreviewFeatureUcoInMemoriesImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e1bca4

@end
