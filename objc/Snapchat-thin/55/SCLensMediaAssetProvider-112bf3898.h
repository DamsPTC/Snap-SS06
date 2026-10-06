// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMediaAssetProvider
// Superclass: NSObject
// Address: 0x112bf3898

@interface SCLensMediaAssetProvider

// Property: delegate; attributes: T@"<SCLensSubPickerImageProviderDelegate>",W,N,V_delegate
// Property: mediaAssetManager; attributes: T@"<SCLensMediaAssetManagerProtocol>",&,N,V_mediaAssetManager
// Property: faceDetector; attributes: T@"CIDetector",&,N,V_faceDetector
// Property: performer; attributes: T@"SCQueuePerformer",&,N,V_performer
// Property: processedImageCount; attributes: Tq,N,V_processedImageCount
// Property: requestedImageCount; attributes: Tq,N,V_requestedImageCount
// Property: croppedFaceImageIds; attributes: T@"NSArray",&,N,V_croppedFaceImageIds
// Property: imageCache; attributes: T@"SCCache",&,N,V_imageCache
// Property: groupedCroppedFaceImageIds; attributes: T@"NSMutableArray",&,N,V_groupedCroppedFaceImageIds
// Property: sentinel; attributes: T@"SCSentinel",&,N,V_sentinel
// Property: mediaType; attributes: TQ,R,N,V_mediaType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMediaAssetProvider initWithMediaType:maxVideoDuration:photoPermissionCoordinator:batchSize:pushForwardMultipleFacePhotosInsideBatch:studySettingsProvider:mediaAssetManager:]
// Type encoding: @68@0:8Q16d24@32Q40B48@52@60
// Implementation: 0x1091cc838

// -[SCLensMediaAssetProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091ccb68

// -[SCLensMediaAssetProvider handlePhotoImageManagerDidUpdateNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091ccc04

// -[SCLensMediaAssetProvider reloadAssetsIfNeededOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x1091ccffc

// -[SCLensMediaAssetProvider reloadAssetsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091cd05c

// -[SCLensMediaAssetProvider reloadAssetsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091cd0c0

// -[SCLensMediaAssetProvider resetRequestedImagesCountButKeepIndexes]
// Type encoding: v16@0:8
// Implementation: 0x1091cd368

// -[SCLensMediaAssetProvider warmupWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091cd370

// -[SCLensMediaAssetProvider reloadAssetsIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091cd494

// -[SCLensMediaAssetProvider cooldown]
// Type encoding: v16@0:8
// Implementation: 0x1091cd550

// -[SCLensMediaAssetProvider processMoreImagesIfPossibleWithSize:count:]
// Type encoding: v40@0:8{CGSize=dd}16Q32
// Implementation: 0x1091cd554

// -[SCLensMediaAssetProvider canProcessMoreImages]
// Type encoding: B16@0:8
// Implementation: 0x1091cd814

// -[SCLensMediaAssetProvider imageCount]
// Type encoding: Q16@0:8
// Implementation: 0x1091cd89c

// -[SCLensMediaAssetProvider rawImageCount]
// Type encoding: Q16@0:8
// Implementation: 0x1091cd8d8

// -[SCLensMediaAssetProvider imageIdentifierAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1091cd914

// -[SCLensMediaAssetProvider indexOfImageWithIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1091cd9a4

// -[SCLensMediaAssetProvider getPreviewImageAtIndex:targetSize:completion:]
// Type encoding: @48@0:8Q16{CGSize=dd}24@?40
// Implementation: 0x1091cda2c

// -[SCLensMediaAssetProvider getOriginalImageAtIndex:completion:]
// Type encoding: @32@0:8Q16@?24
// Implementation: 0x1091cdbb4

// -[SCLensMediaAssetProvider getVideoAssetAtIndex:completion:]
// Type encoding: @32@0:8Q16@?24
// Implementation: 0x1091cdde8

// -[SCLensMediaAssetProvider cancelAssetLoadingWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091cdf64

// -[SCLensMediaAssetProvider assetTypeAtIndex:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1091cdfb8

// -[SCLensMediaAssetProvider videoDurationAtIndex:]
// Type encoding: d24@0:8Q16
// Implementation: 0x1091ce018

// -[SCLensMediaAssetProvider getCroppedImagIdsFromGroupedImageRepresentation:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091ce080

// -[SCLensMediaAssetProvider getThumbnailImageFromCameraWithCroppedImageId:targetSize:completion:]
// Type encoding: v48@0:8@16{CGSize=dd}24@?40
// Implementation: 0x1091ce0f8

// -[SCLensMediaAssetProvider getThumbnailImageFromCacheWithCroppedImageId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1091ce378

// -[SCLensMediaAssetProvider imageIdFromCroppedImageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091ce768

// -[SCLensMediaAssetProvider normalizedRectsFromCroppedImageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091ce7dc

// -[SCLensMediaAssetProvider _assetIndexForCroppedImageIndex:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1091ce8c0

// -[SCLensMediaAssetProvider _assetIndexForCroppedImageId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1091ce908

// -[SCLensMediaAssetProvider processImagesInsertingAtIndexes:size:]
// Type encoding: v40@0:8@16{CGSize=dd}24
// Implementation: 0x1091ce970

// -[SCLensMediaAssetProvider processImagesRemovingAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091cf0fc

// -[SCLensMediaAssetProvider getCroppedThumbnailsFromCameraRollAndCache:size:completion:]
// Type encoding: v48@0:8Q16{CGSize=dd}24@?40
// Implementation: 0x1091cf480

// -[SCLensMediaAssetProvider _detectFaceFeaturesInImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091cf8fc

// -[SCLensMediaAssetProvider _processFaceDetectionAndCacheImage:imageId:imageIndex:completion:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x1091cfa30

// -[SCLensMediaAssetProvider _cacheCroppedImages:croppedImageIds:originalImageIndex:completion:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x1091d045c

// -[SCLensMediaAssetProvider isPresetImageAtIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1091d06f0

// -[SCLensMediaAssetProvider _minSquareRectThatContainRects:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x1091d06f8

// -[SCLensMediaAssetProvider _flattenIdentifiersFromGroupedIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091d0890

// -[SCLensMediaAssetProvider _flattenIdentifiersFromGroupedIdentifiersWithMultipleFacesPush:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091d09b0

// -[SCLensMediaAssetProvider _pushedMultipleFacesPhotosForward:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091d0ac8

// -[SCLensMediaAssetProvider _normalizedRectForFaceFeature:imageSize:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}40@0:8@16{CGSize=dd}24
// Implementation: 0x1091d0cbc

// -[SCLensMediaAssetProvider _faceRectForFaceFeature:imageSize:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}40@0:8@16{CGSize=dd}24
// Implementation: 0x1091d0d5c

// -[SCLensMediaAssetProvider _cropImage:rect:]
// Type encoding: @56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x1091d0e30

// -[SCLensMediaAssetProvider mediaType]
// Type encoding: Q16@0:8
// Implementation: 0x1091d0efc

// -[SCLensMediaAssetProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091d0f04

// -[SCLensMediaAssetProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d0f1c

// -[SCLensMediaAssetProvider mediaAssetManager]
// Type encoding: @16@0:8
// Implementation: 0x1091d0f28

// -[SCLensMediaAssetProvider setMediaAssetManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d0f30

// -[SCLensMediaAssetProvider faceDetector]
// Type encoding: @16@0:8
// Implementation: 0x1091d0f60

// -[SCLensMediaAssetProvider setFaceDetector:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d0f68

// -[SCLensMediaAssetProvider performer]
// Type encoding: @16@0:8
// Implementation: 0x1091d0f98

// -[SCLensMediaAssetProvider setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d0fa0

// -[SCLensMediaAssetProvider processedImageCount]
// Type encoding: q16@0:8
// Implementation: 0x1091d0fd0

// -[SCLensMediaAssetProvider setProcessedImageCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091d0fd8

// -[SCLensMediaAssetProvider requestedImageCount]
// Type encoding: q16@0:8
// Implementation: 0x1091d0fe0

// -[SCLensMediaAssetProvider setRequestedImageCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091d0fe8

// -[SCLensMediaAssetProvider croppedFaceImageIds]
// Type encoding: @16@0:8
// Implementation: 0x1091d0ff0

// -[SCLensMediaAssetProvider setCroppedFaceImageIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d0ff8

// -[SCLensMediaAssetProvider imageCache]
// Type encoding: @16@0:8
// Implementation: 0x1091d1028

// -[SCLensMediaAssetProvider setImageCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d1030

// -[SCLensMediaAssetProvider groupedCroppedFaceImageIds]
// Type encoding: @16@0:8
// Implementation: 0x1091d1060

// -[SCLensMediaAssetProvider setGroupedCroppedFaceImageIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d1068

// -[SCLensMediaAssetProvider sentinel]
// Type encoding: @16@0:8
// Implementation: 0x1091d1098

// -[SCLensMediaAssetProvider setSentinel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d10a0

// -[SCLensMediaAssetProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091d10d0

// +[SCLensMediaAssetProvider assetManagerMediaTypeFromProviderMediaType:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1091ccbb4

// +[SCLensMediaAssetProvider _createFaceDetector]
// Type encoding: @16@0:8
// Implementation: 0x1091cf800

@end
