// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAuxiliaryContentStore
// Superclass: NSObject
// Address: 0x112b4aa18

@interface SCSpectaclesAuxiliaryContentStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: spectaclesManager; attributes: T@"<SCSpectaclesManaging>",R,N,V_spectaclesManager
// Property: directoryPath; attributes: T@"NSString",R,N,V_directoryPath
// Property: announcer; attributes: T@"SCSpectaclesAuxiliaryContentStoreListenerAnnouncer",R,N,V_announcer
// Property: deviceManifest; attributes: T@"NSMutableDictionary",&,V_deviceManifest
// Property: mediaManifest; attributes: T@"NSMutableDictionary",&,V_mediaManifest
// Property: extractions; attributes: T@"NSMutableDictionary",R,N,V_extractions
// Property: depthQueue; attributes: T@"SCSpectaclesDepthPreparationQueue",R,N,V_depthQueue
// Property: lookupTables; attributes: T@"NSMapTable",R,N,V_lookupTables
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: mediaRetriever; attributes: T@"SCLazy",R,N,V_mediaRetriever
// Property: auxiliaryContentProvider; attributes: T@"<SCSpectaclesAuxiliaryContentProvider>",R,N,V_auxiliaryContentProvider
// Property: dataGraphFactory; attributes: T@"SCSpectaclesAuxiliaryMetadataGraphFactory",R,N,V_dataGraphFactory
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesAuxiliaryContentStore _serialNumberForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5a8c0

// -[SCSpectaclesAuxiliaryContentStore isCalibrationAvailableForGallerySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5a8c8

// -[SCSpectaclesAuxiliaryContentStore requestLookupTableForGallerySnap:primaryCamera:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x106f5a910

// -[SCSpectaclesAuxiliaryContentStore requestLookupTableForGallerySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f5a9f8

// -[SCSpectaclesAuxiliaryContentStore lookupTableForGallerySnap:primaryCamera:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f5aa60

// -[SCSpectaclesAuxiliaryContentStore lookupTableForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5ab34

// -[SCSpectaclesAuxiliaryContentStore primaryCameraForGallerySnap:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106f5ab90

// -[SCSpectaclesAuxiliaryContentStore flightModeForGallerySnap:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106f5ac60

// -[SCSpectaclesAuxiliaryContentStore extractMetadataForGallerySnap:fromAsset:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f5acac

// -[SCSpectaclesAuxiliaryContentStore extractMetadataForGallerySnap:fromImageData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f5af6c

// -[SCSpectaclesAuxiliaryContentStore areBothDepthsAvailableForGallerySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5b22c

// -[SCSpectaclesAuxiliaryContentStore isPrimaryDepthAvailableForGallerySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5b288

// -[SCSpectaclesAuxiliaryContentStore isPrimaryDepthAvailableForAllGallerySnaps:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5b31c

// -[SCSpectaclesAuxiliaryContentStore isSecondaryDepthAvailableForGallerySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5b3b8

// -[SCSpectaclesAuxiliaryContentStore isDepthFailedForSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5b44c

// -[SCSpectaclesAuxiliaryContentStore totalSizeOfDepthForGallerySnap:]
// Type encoding: q24@0:8@16
// Implementation: 0x106f5b498

// -[SCSpectaclesAuxiliaryContentStore loadDepthAvailabilityForGallerySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f5b4e4

// -[SCSpectaclesAuxiliaryContentStore prepareDepthForGallerySnap:image:immediate:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x106f5b770

// -[SCSpectaclesAuxiliaryContentStore prepareDepthForGallerySnap:videoProvider:depthPart:immediate:progress:completion:]
// Type encoding: v60@0:8@16@24Q32B40@?44@?52
// Implementation: 0x106f5b944

// -[SCSpectaclesAuxiliaryContentStore prioritizeDepthForGallerySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f5bb70

// -[SCSpectaclesAuxiliaryContentStore awaitDepthForGallerySnaps:depthPart:progress:completion:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x106f5bc24

// -[SCSpectaclesAuxiliaryContentStore imuDataSetForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5c034

// -[SCSpectaclesAuxiliaryContentStore metadataForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5c2ac

// -[SCSpectaclesAuxiliaryContentStore metadataforSavingTrimmedSnap:timeRange:]
// Type encoding: @72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x106f5c2b4

// -[SCSpectaclesAuxiliaryContentStore populateMetadataForContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5c368

// -[SCSpectaclesAuxiliaryContentStore _imuDataForSavingTrimmedSnap:timeRange:]
// Type encoding: @72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x106f5c48c

// -[SCSpectaclesAuxiliaryContentStore _metadataForGallerySnap:imuData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f5c644

// -[SCSpectaclesAuxiliaryContentStore isValidImuAvailableForGallerySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5c850

// -[SCSpectaclesAuxiliaryContentStore isRenderingMetadataAvailableForSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5c90c

// -[SCSpectaclesAuxiliaryContentStore requestImageForGhostmantisSnap:cloudFile:synchronous:queue:encryptedContentManager:resultHandler:]
// Type encoding: v60@0:8@16@24B32@36@44@?52
// Implementation: 0x106f5c970

// -[SCSpectaclesAuxiliaryContentStore trimmedSixDofData:forMediaType:timeRange:]
// Type encoding: @80@0:8@16Q24{?={?=qiIq}{?=qiIq}}32
// Implementation: 0x106f5cbc8

// -[SCSpectaclesAuxiliaryContentStore listenOnDataSourceIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f5cd80

// -[SCSpectaclesAuxiliaryContentStore _snapUsesSkyClassifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5cdf4

// -[SCSpectaclesAuxiliaryContentStore dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106f5ce18

// -[SCSpectaclesAuxiliaryContentStore _rectificationKeyForCamera:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106f59548

// -[SCSpectaclesAuxiliaryContentStore rectificationConfigForSnap:camera:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f59584

// -[SCSpectaclesAuxiliaryContentStore rectificationConfigForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f596d8

// -[SCSpectaclesAuxiliaryContentStore _lookupTableForForSnap:primaryCamera:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f59790

// -[SCSpectaclesAuxiliaryContentStore _stabilizationFramesForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f599a4

// -[SCSpectaclesAuxiliaryContentStore _stabilizationFramesForSnap:focalLength:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x106f599ac

// -[SCSpectaclesAuxiliaryContentStore _imuDataFutureForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f59bd4

// -[SCSpectaclesAuxiliaryContentStore _sixDofDataFutureForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f59d44

// -[SCSpectaclesAuxiliaryContentStore _retrieveWithSnapId:progressHandler:representation:]
// Type encoding: @40@0:8@16@?24@32
// Implementation: 0x106f59de4

// -[SCSpectaclesAuxiliaryContentStore _spectaclesLensMetadataForSnaps:depthEnabled:depthRequired:magicMomentEnabled:]
// Type encoding: @36@0:8@16B24B28B32
// Implementation: 0x106f5a230

// -[SCSpectaclesAuxiliaryContentStore magicMomentLensMetadataForSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5a6dc

// -[SCSpectaclesAuxiliaryContentStore lensMetadataForSnaps:depthEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106f5a840

// -[SCSpectaclesAuxiliaryContentStore depthQualityProviderForSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5a898

// -[SCSpectaclesAuxiliaryContentStore fileTypeForMediaType:]
// Type encoding: Q20@0:8i16
// Implementation: 0x106f5935c

// -[SCSpectaclesAuxiliaryContentStore lutFileTypeForContentType:camera:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x106f59380

// -[SCSpectaclesAuxiliaryContentStore _extensionForFileType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106f593c4

// -[SCSpectaclesAuxiliaryContentStore urlForIdentifier:fileType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f593ec

// -[SCSpectaclesAuxiliaryContentStore _urlForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5943c

// -[SCSpectaclesAuxiliaryContentStore pathForIdentifier:fileType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f594d0

// -[SCSpectaclesAuxiliaryContentStore initWithContentsOfDirectory:spectaclesManager:mediaRetriever:auxiliaryContentProvider:dataGraphFactory:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106f5d27c

// -[SCSpectaclesAuxiliaryContentStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f5d410

// -[SCSpectaclesAuxiliaryContentStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f5d460

// -[SCSpectaclesAuxiliaryContentStore maximumCacheSize]
// Type encoding: q16@0:8
// Implementation: 0x106f5d4b0

// -[SCSpectaclesAuxiliaryContentStore totalSizeOfCacheFilesWithQueue:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f5d4b8

// -[SCSpectaclesAuxiliaryContentStore cleanUpCacheWithQueue:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f5d618

// -[SCSpectaclesAuxiliaryContentStore _resetCachedValues]
// Type encoding: v16@0:8
// Implementation: 0x106f5d980

// -[SCSpectaclesAuxiliaryContentStore _trimCacheIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f5da34

// -[SCSpectaclesAuxiliaryContentStore _trimCacheWithCurrentSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x106f5db88

// -[SCSpectaclesAuxiliaryContentStore updateAccessDateForMediaIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f5e664

// -[SCSpectaclesAuxiliaryContentStore _loadManifests]
// Type encoding: v16@0:8
// Implementation: 0x106f5e7dc

// -[SCSpectaclesAuxiliaryContentStore _saveManifests]
// Type encoding: v16@0:8
// Implementation: 0x106f5ed64

// -[SCSpectaclesAuxiliaryContentStore _deviceManifestPath]
// Type encoding: @16@0:8
// Implementation: 0x106f5ef84

// -[SCSpectaclesAuxiliaryContentStore _mediaManifestPath]
// Type encoding: @16@0:8
// Implementation: 0x106f5ef94

// -[SCSpectaclesAuxiliaryContentStore _createDeviceEntryIfNecessaryForSerialNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f5efa4

// -[SCSpectaclesAuxiliaryContentStore spectaclesDeviceDidPair:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f5f090

// -[SCSpectaclesAuxiliaryContentStore isCalibrationAvailableForSerialNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5f0f4

// -[SCSpectaclesAuxiliaryContentStore calibrationPathForSerialNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5f184

// -[SCSpectaclesAuxiliaryContentStore isImuAvailableForMediaIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5f264

// -[SCSpectaclesAuxiliaryContentStore pathForImuWithMediaIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5f2f4

// -[SCSpectaclesAuxiliaryContentStore writeDataGraph:forMediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f5f3e0

// -[SCSpectaclesAuxiliaryContentStore dataGraphForMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f5f480

// -[SCSpectaclesAuxiliaryContentStore fetchDataForMediaId:key:progress:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x106f5f4e4

// -[SCSpectaclesAuxiliaryContentStore fetchDataForMediaId:key:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f5f604

// -[SCSpectaclesAuxiliaryContentStore hasCachedDataForMediaId:key:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106f5f7bc

// -[SCSpectaclesAuxiliaryContentStore hasCachedDataForMediaId:key:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106f5f900

// -[SCSpectaclesAuxiliaryContentStore primaryCameraForMediaIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106f5fa0c

// -[SCSpectaclesAuxiliaryContentStore flightModeForMediaIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106f5fa8c

// -[SCSpectaclesAuxiliaryContentStore isAssetMetadataAvailableForMediaId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f5fb0c

// -[SCSpectaclesAuxiliaryContentStore writeAssetMetadata:forMediaIdentifier:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106f5fb8c

// -[SCSpectaclesAuxiliaryContentStore _writeCalibrationData:forSerialNumber:overwrite:error:]
// Type encoding: B44@0:8@16@24B32^@36
// Implementation: 0x106f601f4

// -[SCSpectaclesAuxiliaryContentStore requestLookupTableForSerialNumber:mediaType:camera:completion:]
// Type encoding: v44@0:8@16i24Q28@?36
// Implementation: 0x106f60454

// -[SCSpectaclesAuxiliaryContentStore _extractLookupTablesForSerialNumber:contentType:overwrite:]
// Type encoding: @36@0:8@16Q24B32
// Implementation: 0x106f60890

// -[SCSpectaclesAuxiliaryContentStore spectaclesDevice:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106f60c9c

// -[SCSpectaclesAuxiliaryContentStore spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106f60e4c

// -[SCSpectaclesAuxiliaryContentStore isPrimaryDepthAvailableForMediaIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f61074

// -[SCSpectaclesAuxiliaryContentStore isSecondaryDepthAvailableForMediaIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f61104

// -[SCSpectaclesAuxiliaryContentStore isDepthFailedForMediaIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x106f61184

// -[SCSpectaclesAuxiliaryContentStore totalSizeOfDepthForMediaIdentifier:]
// Type encoding: q24@0:8@16
// Implementation: 0x106f61204

// -[SCSpectaclesAuxiliaryContentStore _pathForDepthWithMediaIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f6125c

// -[SCSpectaclesAuxiliaryContentStore depthFileHandlersForMediaIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f612f8

// -[SCSpectaclesAuxiliaryContentStore depthFileHandlerForMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f61364

// -[SCSpectaclesAuxiliaryContentStore loadPrimaryDepthAvailabilityForMediaIdentifier:snapId:mediaType:completion:]
// Type encoding: v44@0:8@16@24i32@?36
// Implementation: 0x106f61408

// -[SCSpectaclesAuxiliaryContentStore prepareDepthForMediaIdentifier:snapId:depthPart:data:mediaType:immediate:progress:completion:]
// Type encoding: v72@0:8@16@24Q32@40i48B52@?56@?64
// Implementation: 0x106f61670

// -[SCSpectaclesAuxiliaryContentStore prioritizeDepthForMediaIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f61a74

// -[SCSpectaclesAuxiliaryContentStore awaitDepthForMediaIdentifiers:depthPart:progress:completion:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x106f61c48

// -[SCSpectaclesAuxiliaryContentStore _awaitDepthForMediaIdentifier:depthPart:progress:completion:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x106f62090

// -[SCSpectaclesAuxiliaryContentStore _downloadBlockForMediaId:depthFileHandler:depthPart:snapId:]
// Type encoding: @?48@0:8@16@24Q32@40
// Implementation: 0x106f62360

// -[SCSpectaclesAuxiliaryContentStore _extractionBlockForMediaId:depthFileHandler:data:]
// Type encoding: @?40@0:8@16@24@32
// Implementation: 0x106f62588

// -[SCSpectaclesAuxiliaryContentStore _depthExtractionCallbackForMediaId:depthFileHandler:depthPart:extractBothSides:completion:]
// Type encoding: @?52@0:8@16@24Q32B40@?44
// Implementation: 0x106f6299c

// -[SCSpectaclesAuxiliaryContentStore skyClassifierPath]
// Type encoding: @16@0:8
// Implementation: 0x106f631a0

// -[SCSpectaclesAuxiliaryContentStore performer]
// Type encoding: @16@0:8
// Implementation: 0x106f631e4

// -[SCSpectaclesAuxiliaryContentStore mediaRetriever]
// Type encoding: @16@0:8
// Implementation: 0x106f631ec

// -[SCSpectaclesAuxiliaryContentStore auxiliaryContentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106f631f4

// -[SCSpectaclesAuxiliaryContentStore dataGraphFactory]
// Type encoding: @16@0:8
// Implementation: 0x106f631fc

// -[SCSpectaclesAuxiliaryContentStore spectaclesManager]
// Type encoding: @16@0:8
// Implementation: 0x106f63204

// -[SCSpectaclesAuxiliaryContentStore directoryPath]
// Type encoding: @16@0:8
// Implementation: 0x106f6320c

// -[SCSpectaclesAuxiliaryContentStore announcer]
// Type encoding: @16@0:8
// Implementation: 0x106f63214

// -[SCSpectaclesAuxiliaryContentStore deviceManifest]
// Type encoding: @16@0:8
// Implementation: 0x106f6321c

// -[SCSpectaclesAuxiliaryContentStore setDeviceManifest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f63228

// -[SCSpectaclesAuxiliaryContentStore mediaManifest]
// Type encoding: @16@0:8
// Implementation: 0x106f63230

// -[SCSpectaclesAuxiliaryContentStore setMediaManifest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f6323c

// -[SCSpectaclesAuxiliaryContentStore extractions]
// Type encoding: @16@0:8
// Implementation: 0x106f63244

// -[SCSpectaclesAuxiliaryContentStore depthQueue]
// Type encoding: @16@0:8
// Implementation: 0x106f6324c

// -[SCSpectaclesAuxiliaryContentStore lookupTables]
// Type encoding: @16@0:8
// Implementation: 0x106f63254

// -[SCSpectaclesAuxiliaryContentStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f6325c

@end
