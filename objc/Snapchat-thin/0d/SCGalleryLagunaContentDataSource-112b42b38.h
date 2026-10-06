// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryLagunaContentDataSource
// Superclass: NSObject
// Address: 0x112b42b38

@interface SCGalleryLagunaContentDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCGalleryLagunaContentDataSourceDelegate>",W,N,V_delegate

// -[SCGalleryLagunaContentDataSource initWithSpectaclesServices:userPreferenceTimeProvider:spectaclesDataMutator:spectaclesAuxiliaryContentServices:dataObjectContext:cloudFS:cloudSync:encryptedContentManager:galleryLogger:userPreferences:userInfoServices:circumstanceEngine:appStatusProvider:filterDataProviderFactory:memoriesBackupManager:locationProvider:temporaryFileWriter:applicationLifecycleEvents:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x100c52204

// -[SCGalleryLagunaContentDataSource setupIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e7ffa8

// -[SCGalleryLagunaContentDataSource entryShouldUseLagunaContentDataSource:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e80008

// -[SCGalleryLagunaContentDataSource recentlyAddedMediaIds]
// Type encoding: @16@0:8
// Implementation: 0x106e80100

// -[SCGalleryLagunaContentDataSource contentLoaderForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e8036c

// -[SCGalleryLagunaContentDataSource clearLocationsCache]
// Type encoding: v16@0:8
// Implementation: 0x106e80414

// -[SCGalleryLagunaContentDataSource _fetchLagunaContentSnapsForEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e80444

// -[SCGalleryLagunaContentDataSource _contentGroupedByIdFromContentList:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e80848

// -[SCGalleryLagunaContentDataSource fetchLagunaContentSnapsForEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e80ab0

// -[SCGalleryLagunaContentDataSource countOfLagunaContentSnapsForEntry:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106e80bf8

// -[SCGalleryLagunaContentDataSource countOfLagunaContentSnapsForEntryHighlighted:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106e80cb8

// -[SCGalleryLagunaContentDataSource fetchLagunaContentSnapsForEntryHighlighted:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e80d54

// -[SCGalleryLagunaContentDataSource _fetchLagunaEntryForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e80df8

// -[SCGalleryLagunaContentDataSource fetchLagunaEntryForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e81004

// -[SCGalleryLagunaContentDataSource observe:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x106e8114c

// -[SCGalleryLagunaContentDataSource entryPlaceholdersForLagunaContentWithExistingEntries:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e81154

// -[SCGalleryLagunaContentDataSource invalidate]
// Type encoding: v16@0:8
// Implementation: 0x106e812d0

// -[SCGalleryLagunaContentDataSource _isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x106e812d8

// -[SCGalleryLagunaContentDataSource _setupIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e812f8

// -[SCGalleryLagunaContentDataSource _observeMemoriesBackupChange]
// Type encoding: v16@0:8
// Implementation: 0x106e81380

// -[SCGalleryLagunaContentDataSource _handleBackupServiceStatusUpdate:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e81690

// -[SCGalleryLagunaContentDataSource _handleBackupServiceDidUploadMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e81714

// -[SCGalleryLagunaContentDataSource _setupOnCloudSyncReady]
// Type encoding: v16@0:8
// Implementation: 0x106e81868

// -[SCGalleryLagunaContentDataSource spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e81924

// -[SCGalleryLagunaContentDataSource spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e81a34

// -[SCGalleryLagunaContentDataSource filterDidUpdateVisibleContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e81b1c

// -[SCGalleryLagunaContentDataSource bucketer:didUpdateSnapsForEntryIds:shouldAppend:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106e81d14

// -[SCGalleryLagunaContentDataSource entryOrPlaceholderForEntryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e81e3c

// -[SCGalleryLagunaContentDataSource _handleContentUpdate:contentComponent:updateType:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x106e81e44

// -[SCGalleryLagunaContentDataSource _appendSpectaclesContentForEntryIdIfAllTransferred:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e81f88

// -[SCGalleryLagunaContentDataSource _appendSpectaclesContentList:toEntry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e82280

// -[SCGalleryLagunaContentDataSource _appendSpectaclesContent:toEntry:withSnap:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e824f4

// -[SCGalleryLagunaContentDataSource _logDirectSnapCreate:content:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e82b04

// -[SCGalleryLagunaContentDataSource _spectaclesMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x106e82ca4

// -[SCGalleryLagunaContentDataSource _initializeSpectaclesMetadataProviderIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e82cd4

// -[SCGalleryLagunaContentDataSource snapNeedsToRegenerateThumbnailImport:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e82d64

// -[SCGalleryLagunaContentDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x106e82e8c

// -[SCGalleryLagunaContentDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5ccdc

// -[SCGalleryLagunaContentDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e82ea4

@end
