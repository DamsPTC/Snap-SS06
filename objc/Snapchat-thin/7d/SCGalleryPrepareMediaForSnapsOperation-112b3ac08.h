// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryPrepareMediaForSnapsOperation
// Superclass: NSObject
// Address: 0x112b3ac08

@interface SCGalleryPrepareMediaForSnapsOperation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryPrepareMediaForSnapsOperation initWithGallerySnaps:entryAssets:snapDocEntryIds:containerViewController:showsProgressOverlay:sendItemsCounter:requiredSnapAssetTypes:cloudFS:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:snapDocDownloadingService:]
// Type encoding: @132@0:8@16@24@32@40B48@52@60@68@76@84@92@100@108@116@124
// Implementation: 0x106e06760

// -[SCGalleryPrepareMediaForSnapsOperation initWithGallerySnaps:entryAssets:snapDocEntryIds:containerViewController:showsProgressOverlay:sendItemsCounter:requiredSnapAssetTypes:cloudFS:onlyLoadBaseMediaCloudFile:encryptedContentManager:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:circumstanceEngine:snapDocDownloadingService:]
// Type encoding: @136@0:8@16@24@32@40B48@52@60@68B76@80@88@96@104@112@120@128
// Implementation: 0x106e067a4

// -[SCGalleryPrepareMediaForSnapsOperation isLongRunning]
// Type encoding: B16@0:8
// Implementation: 0x106e072c0

// -[SCGalleryPrepareMediaForSnapsOperation runWithProgressBlock:completionBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106e072c8

// -[SCGalleryPrepareMediaForSnapsOperation cancel]
// Type encoding: v16@0:8
// Implementation: 0x106e07614

// -[SCGalleryPrepareMediaForSnapsOperation progressOverlayViewDidCancel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e07684

// -[SCGalleryPrepareMediaForSnapsOperation _cloudFilesIsAvailableLocallyWithSnapId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e07688

// -[SCGalleryPrepareMediaForSnapsOperation _prepareMediaForIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e07810

// -[SCGalleryPrepareMediaForSnapsOperation _prepareSnapLevelSnapDocMap]
// Type encoding: v16@0:8
// Implementation: 0x106e07934

// -[SCGalleryPrepareMediaForSnapsOperation _prepareEntryLevelSnapDocMap]
// Type encoding: v16@0:8
// Implementation: 0x106e07bd0

// -[SCGalleryPrepareMediaForSnapsOperation _saveEntryLevelSnapDocToResultMap:entryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e07e04

// -[SCGalleryPrepareMediaForSnapsOperation _saveSnapLevelSnapDocToResultMap:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e07e0c

// -[SCGalleryPrepareMediaForSnapsOperation _prepareAllEntryAssets]
// Type encoding: v16@0:8
// Implementation: 0x106e07e14

// -[SCGalleryPrepareMediaForSnapsOperation _prepareAllSnapLevelSnapDocAssets]
// Type encoding: v16@0:8
// Implementation: 0x106e08098

// -[SCGalleryPrepareMediaForSnapsOperation _completeWithResult:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106e0814c

// -[SCGalleryPrepareMediaForSnapsOperation _downloadMediaForSnap:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e081a8

// -[SCGalleryPrepareMediaForSnapsOperation _checkIfSnapContainsUnavailableMusicIfNeeded:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e08530

// -[SCGalleryPrepareMediaForSnapsOperation _processNextSnapWithCurrentIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e087e4

// -[SCGalleryPrepareMediaForSnapsOperation _downloadFailedWithError:snap:downloadDuration:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x106e08830

// -[SCGalleryPrepareMediaForSnapsOperation _downloadSucceededWithSnap:snapIndex:downloadDuration:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x106e08964

// -[SCGalleryPrepareMediaForSnapsOperation _downloadSnapMediaWithSnap:snapIndex:resultHandler:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x106e089e8

// -[SCGalleryPrepareMediaForSnapsOperation _downloadAssetsWithAssetIndex:assetFilesToDownload:resultHandler:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x106e08c10

// -[SCGalleryPrepareMediaForSnapsOperation _downloadSnapDocAssetsWithSnapDocIndex:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x106e08f74

// -[SCGalleryPrepareMediaForSnapsOperation _updateProgress:]
// Type encoding: v20@0:8f16
// Implementation: 0x106e09700

// -[SCGalleryPrepareMediaForSnapsOperation _complete]
// Type encoding: v16@0:8
// Implementation: 0x106e0975c

// -[SCGalleryPrepareMediaForSnapsOperation _updateSmartShareLoggingWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e0989c

// -[SCGalleryPrepareMediaForSnapsOperation _updateDownloadedLoggingWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e09924

// -[SCGalleryPrepareMediaForSnapsOperation _log]
// Type encoding: v16@0:8
// Implementation: 0x106e09968

// -[SCGalleryPrepareMediaForSnapsOperation _downloadSnapMediaFromContentManagerIfRegistered:index:completionQueue:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x106e09a60

// -[SCGalleryPrepareMediaForSnapsOperation _moveToCloudFSAndCleanupIfNeeded:key:iv:data:success:contentKey:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x106e0a298

// -[SCGalleryPrepareMediaForSnapsOperation _moveToCloudFS:key:iv:data:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106e0a3a4

// -[SCGalleryPrepareMediaForSnapsOperation _moveDataAndReturnResultToCloudFSForSnap:encryptedMediaBlob:overlayCloudFSFile:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106e0a580

// -[SCGalleryPrepareMediaForSnapsOperation _startProgressSimulationTimer]
// Type encoding: v16@0:8
// Implementation: 0x106e0a73c

// -[SCGalleryPrepareMediaForSnapsOperation _stopProgressSimulatorTimer]
// Type encoding: v16@0:8
// Implementation: 0x106e0a7cc

// -[SCGalleryPrepareMediaForSnapsOperation _progressSimulatorTimerDidFire:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e0a808

// -[SCGalleryPrepareMediaForSnapsOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e0a888

@end
