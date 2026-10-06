// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryStorySaver
// Superclass: NSObject
// Address: 0x112b60a98

@interface SCGalleryStorySaver

// Property: isMemTwoStorySaveEnabled; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryStorySaver initWithUserSession:storiesMediaCoordinator:snapchatterFetcher:memoriesSaveManager:snapDocManager:activeVideoPaths:overlayFormatServices:featureSettingsService:memoriesSharedStoryMutator:memoriesTweaksServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10721436c

// -[SCGalleryStorySaver storeStoryWithClientID:originalPhoto:overlayFormat:sojuOverlay:assetMedias:sojuMediaType:servletMediaFormat:completion:]
// Type encoding: v76@0:8@16@24@32@40@48i56@60@?68
// Implementation: 0x1072146bc

// -[SCGalleryStorySaver storeStoryWithClientID:storyData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107214ae4

// -[SCGalleryStorySaver storeStoryWithClientID:originalVideo:overlayFormat:sojuOverlay:assetMedias:sojuMediaType:servletMediaFormat:completion:]
// Type encoding: v76@0:8@16@24@32@40@48i56@60@?68
// Implementation: 0x107214d44

// -[SCGalleryStorySaver _flattenVideoFromMedia:requestContexts:isSpectaclesVideo:isCircular:completionBlock:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x10721516c

// -[SCGalleryStorySaver _flattenVideoData:overlayImage:isSpectaclesVideo:isCircular:isOverlayPreblended:completionBlock:]
// Type encoding: v52@0:8@16@24B32B36B40@?44
// Implementation: 0x10721540c

// -[SCGalleryStorySaver _galleryTempAssetURLForClientIdSnapComponent:]
// Type encoding: @24@0:8@16
// Implementation: 0x107215890

// -[SCGalleryStorySaver _galleryTempOverlayURLForClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107215964

// -[SCGalleryStorySaver _galleryTempURLForClientId:type:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x107215a38

// -[SCGalleryStorySaver generateLegacyStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107215b2c

// -[SCGalleryStorySaver _handleFetchedStoryData:story:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107215dcc

// -[SCGalleryStorySaver generateStorySnap:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1072173e4

// -[SCGalleryStorySaver _generateStorySnapWithData:storySnap:storyId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1072175b8

// -[SCGalleryStorySaver _generateStorySnapWithData:storySnap:storyId:builder:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107217a48

// -[SCGalleryStorySaver _generateStorySnapWithGalleryStoryData:storySnap:mediaUrl:overlayUrl:builder:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x107218700

// -[SCGalleryStorySaver _generateStorySnapFromImageSnap:storyId:mediaUrl:builder:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107218dd0

// -[SCGalleryStorySaver _generateStorySnapFromVideoData:url:storySnap:storyId:mediaUrl:overlayUrl:builder:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x1072190cc

// -[SCGalleryStorySaver _generateStorySnapFromVideoSnap:storyId:mediaUrl:overlayUrl:builder:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x107219498

// -[SCGalleryStorySaver cleanupStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107219a80

// -[SCGalleryStorySaver _creationDateForSavedCopyOfStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x107219b14

// -[SCGalleryStorySaver _reassembleAssetDataPackageWithAssetMedias:]
// Type encoding: @24@0:8@16
// Implementation: 0x107219c44

// -[SCGalleryStorySaver saveStorySnapToMemoriesWithStorySnap:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107219df8

// -[SCGalleryStorySaver saveStorySnapToMemTwoWithStorySnap:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107219eb0

// -[SCGalleryStorySaver isMemTwoStorySaveEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10721a090

// -[SCGalleryStorySaver saveStoryToMemTwoWithTitle:snapIds:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10721a0d0

// -[SCGalleryStorySaver _saveStorySnap:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10721a2b0

// -[SCGalleryStorySaver saveStorySnapToMemoriesWithStorySnap:prefetchedMediaData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10721a4e4

// -[SCGalleryStorySaver _onFetchedSavedStoryImage:storySnap:storyId:snapComponentId:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10721a6a8

// -[SCGalleryStorySaver _queryImageForStorySnap:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10721aad8

// -[SCGalleryStorySaver _onImageQueriedForStorySnap:image:snapComponentId:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10721ad2c

// -[SCGalleryStorySaver _saveImageStorySnap:galleryData:image:overlayFormat:overlay:assetMedias:isFromSavedMetadata:userContext:completionHandler:]
// Type encoding: v84@0:8@16@24@32@40@48@56B64@68@?76
// Implementation: 0x10721aef8

// -[SCGalleryStorySaver _onFetchedSavedStoryVideo:storySnap:storyId:snapComponentId:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10721b468

// -[SCGalleryStorySaver _onVideoFlattenedForStorySnap:data:videoURL:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10721ba2c

// -[SCGalleryStorySaver _saveVideoStorySnap:galleryData:data:videoProvider:storySnapId:overlayFormat:overlay:assetMedias:isFromSavedMetadata:userContext:completionHandler:]
// Type encoding: v100@0:8@16@24@32@40@48@56@64@72B80@84@?92
// Implementation: 0x10721bd20

// -[SCGalleryStorySaver _saveVideoStorySnapViaLegacyMutator:galleryData:data:videoProvider:storySnapId:overlayFormat:overlay:assetMedias:isFromSavedMetadata:userContext:completionHandler:]
// Type encoding: v100@0:8@16@24@32@40@48@56@64@72B80@84@?92
// Implementation: 0x10721c478

// -[SCGalleryStorySaver _memTwoSaveFutureForVideoAsset:storySnap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10721c7b8

// -[SCGalleryStorySaver _videoOverlayImageFromOverlayFormat:videoAsset:isCircular:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10721c974

// -[SCGalleryStorySaver _bridgeMemTwoSaveFuture:toCompletionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10721caa4

// -[SCGalleryStorySaver _videoAssetFromData:videoProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10721cce4

// -[SCGalleryStorySaver _flattenedImageForImage:overlayFormat:isCircular:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10721cd70

// -[SCGalleryStorySaver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10721cfb8

@end
