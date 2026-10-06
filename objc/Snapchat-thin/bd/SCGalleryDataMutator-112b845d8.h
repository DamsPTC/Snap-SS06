// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryDataMutator
// Superclass: NSObject
// Address: 0x112b845d8

@interface SCGalleryDataMutator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dreamsSessionService; attributes: T@"SCDreamsSessionService",R,N,V_dreamsSessionService

// -[SCGalleryDataMutator createStoryWithSnaps:photoAssets:photoAssetMediaURLs:photoAssetOrientations:storyDisplayName:isPrivate:userContext:completionHandler:]
// Type encoding: v76@0:8@16@24@32@40@48B56@60@?68
// Implementation: 0x107e1fea8

// -[SCGalleryDataMutator saveStoryWithId:storyDisplayName:entrySource:storySnaps:isPrivate:isFromSavedMetadataMap:userContext:completionHandler:]
// Type encoding: v76@0:8@16@24q32@40B48@52@60@?68
// Implementation: 0x107e2117c

// -[SCGalleryDataMutator _saveStoriesWithStoriesId:storyDisplayName:entrySource:storySnaps:isPrivate:isFromSavedMetadataMap:userContext:completionHandler:]
// Type encoding: v76@0:8@16@24q32@40B48@52@60@?68
// Implementation: 0x107e21634

// -[SCGalleryDataMutator _extendStoriesForEntry:storySnaps:isPrivate:userContext:completionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x107e21ea0

// -[SCGalleryDataMutator _snapsToAppendForAllSnaps:entrySnaps:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e224a8

// -[SCGalleryDataMutator _populateFieldsForSnapsToAppend:isPrivate:addSnapEntities:mutationInfo:dataVaultEncryption:userContext:completionHandler:]
// Type encoding: v68@0:8@16B24@28@36@44@52@?60
// Implementation: 0x107e226e4

// -[SCGalleryDataMutator _attemptToLoadVideoAtrributions:retryCount:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107e233b8

// -[SCGalleryDataMutator appendToDayStory:snapPlaceholder:userContext:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e1e544

// -[SCGalleryDataMutator _generateEncryptedDayStorySnapFromPlaceholder:dataVaultEncryption:mutationInfo:metadata:]
// Type encoding: @48@0:8@16^@24@32@40
// Implementation: 0x107e1f264

// -[SCGalleryDataMutator _assetMediasForContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x107e1fbe8

// -[SCGalleryDataMutator _createTicketForBadMediaWithMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e1fdfc

// -[SCGalleryDataMutator addSnapDocBasedSnapWithSnapDoc:source:saveSource:mediaAssets:additionalSaveData:orientation:location:isInfiniteDuration:cameraFrontFacing:createTimeOfFirstSnap:sojuMediaType:snapsOrder:userContext:completionHandler:]
// Type encoding: v116@0:8@16Q24Q32@40@48q56@64B72B76@80i88@92@100@?108
// Implementation: 0x107e1a8f0

// -[SCGalleryDataMutator _appendSnapDocBaseMultiAssetEntryOperationForSnapDoc:addSnapEntity:snapIdToReplace:snapsOrder:entryPlaceHolder:dataVaultEncryption:userContext:approximateTotalMediaSizeInBytes:completionHandler:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64Q72@?80
// Implementation: 0x107e1b644

// -[SCGalleryDataMutator _persistLocallyWithAddSnapEntity:entryPlaceHolder:additionalSaveData:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e1b9c0

// -[SCGalleryDataMutator _createEntryPlaceholderWithSnap:entryId:externalId:autosaveTimeUtc:featuredExpirationTimeUtc:captureMode:viewType:seenInCarousel:snapsViewed:folderType:additionalSaveData:]
// Type encoding: @92@0:8@16@24@32@40@48i56Q60B68i72@76@84
// Implementation: 0x107e1c1d4

// -[SCGalleryDataMutator _createSnapDocBasedSnapWithSnapId:snapDocData:captureMode:duration:height:width:source:overlayFormat:overlay:sojuMediaType:cameraRollId:sharedSnapId:multiSnapGroupId:attribution:deviceFirmwareInfo:deviceId:captureTimeUtc:createTimeUtc:orientation:location:isInfiniteDuration:cameraFrontFacing:isTemporary:createdFromSnapIds:createdFromCameraRollItemIds:clientProcessingBitMaskType:collageUCOLensId:templateId:groupName:snapEncryption:]
// Type encoding: @228@0:8@16@24i32d36i44i48Q52@60@68i76@80@88@96@104@112@120@128@136q144@152B160B164B168@172@180Q188@196@204@212@220
// Implementation: 0x107e1c680

// -[SCGalleryDataMutator _creationSnapDocBasedSnapWithSnapId:snapDocData:captureMode:duration:height:width:source:overlayFormat:overlay:sojuMediaType:cameraRollId:sharedSnapId:multiSnapGroupId:attribution:deviceFirmwareInfo:deviceId:captureTimeUtc:createTimeUtc:orientation:location:isInfiniteDuration:cameraFrontFacing:isTemporary:createdFromSnapIds:createdFromCameraRollItemIds:snapClientProcessingType:collageUCOLensId:templateId:groupName:]
// Type encoding: @220@0:8@16@24i32d36i44i48Q52@60@68i76@80@88@96@104@112@120@128@136q144@152B160B164B168@172@180Q188@196@204@212
// Implementation: 0x107e1ca7c

// -[SCGalleryDataMutator _updateEncryptionDataWithSnapDoc:snapId:mediaAssets:isPrivate:location:approximateTotalMediaSizeInBytesRef:snapEncryptionRef:]
// Type encoding: @68@0:8@16@24@32B40@44^Q52^@60
// Implementation: 0x107e1d048

// -[SCGalleryDataMutator _updateSnapDocWithReusedSnapDocAsset:snapDoc:snapId:key:iv:mediaListId:]
// Type encoding: @64@0:8@16@24@32@40@48q56
// Implementation: 0x107e1d9a4

// -[SCGalleryDataMutator _encyptMediaContentAndUpdateSnapDocMediaMetadataWithSnapDoc:snapId:assetData:isPrivate:location:key:IV:masterKey:mediaListId:]
// Type encoding: @84@0:8@16@24@32B40@44@52@60@68q76
// Implementation: 0x107e1db00

// -[SCGalleryDataMutator _saveSnapDocBasedEntryCompleteSuccessWithEntryId:isEdit:isClientGenSnapSaving:contextMenuSource:additionalSaveData:completionHandler:]
// Type encoding: v56@0:8@16B24B28@32@40@?48
// Implementation: 0x107e1de04

// -[SCGalleryDataMutator _sendGenAiAnalyticsIfApplicable:snaps:additionalSaveData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107e1e074

// -[SCGalleryDataMutator saveStoryImageSnap:sojuMediaType:servletMediaFormat:source:captureTimeUtc:createTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:entrySource:entryType:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:userContext:completionHandler:]
// Type encoding: v168@0:8@16q24@32Q40@48@56q64d72@80@88@96@104B112q116q124Q132B140B144B148@152@?160
// Implementation: 0x107e19014

// -[SCGalleryDataMutator saveStoryVideoSnap:videoProvider:sojuMediaType:servletMediaFormat:source:storySnapId:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:entrySource:entryType:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:userContext:completionHandler:]
// Type encoding: v176@0:8@16@24q32@40Q48@56@64@72q80@88@96@104@112B120q124q132Q140B148B152B156@160@?168
// Implementation: 0x107e19840

// -[SCGalleryDataMutator _addEntryFromSnap:createTimeUtc:orientation:isPrivate:entrySource:entryType:isFromSavedMetadata:dataVaultEncryption:mediaSize:mutationInfo:userContext:completionHandler:]
// Type encoding: v104@0:8@16@24q32B40q44q52B60@64Q72@80@88@?96
// Implementation: 0x107e1a130

// -[SCGalleryDataMutator reorderEntry:entryTitle:snapsOrder:userContext:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x107e18990

// -[SCGalleryDataMutator updatePrivacyForEntries:isPrivate:userContext:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107e17a00

// -[SCGalleryDataMutator addMobMultiSnapWithVideoUrls:sojuMediaType:servletMediaFormat:orientation:overlayFormats:overlays:assetMedias:location:isPrivate:isInfiniteDuration:userContext:externalId:displayName:entrySource:cameraFrontFacing:createTimeOfFirstSnap:timeRanges:completionHandler:]
// Type encoding: v148@0:8@16q24@32q40@48@56@64@72B80B84@88@96@104q112B120@124@132@?140
// Implementation: 0x107e1641c

// -[SCGalleryDataMutator addMultiSnapWithVideoUrls:metadataItems:sojuMediaType:servletMediaFormat:orientation:overlayFormats:overlays:assetMedias:location:isPrivate:isAutosave:isInfiniteDuration:cameraFrontFacing:createTimeOfFirstSnap:timeRanges:userContext:currentEntry:completionHandler:]
// Type encoding: v144@0:8@16@24q32@40q48@56@64@72@80B88B92B96B100@104@112@120@128@?136
// Implementation: 0x107e16b98

// -[SCGalleryDataMutator _addMultiSnapWithVideoUrls:metadataItems:sojuMediaType:servletMediaFormat:orientation:overlayFormats:overlays:assetMedias:location:isPrivate:isInfiniteDuration:userContext:entryType:entrySource:currentEntry:externalId:title:attribution:cameraFrontFacing:isAutoSave:createTimeOfFirstSnap:timeRanges:completionHandler:]
// Type encoding: v184@0:8@16@24q32@40q48@56@64@72@80B88B92@96Q104q112@120@128@136@144B152B156@160@168@?176
// Implementation: 0x107e16c0c

// -[SCGalleryDataMutator saveTemporaryStory:reorderedSnaps:userContext:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e15674

// -[SCGalleryDataMutator toggleFavoriteStateForSnap:userContext:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e13964

// -[SCGalleryDataMutator toggleFavoriteStateForSnaps:withInEntry:userContext:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e13c78

// -[SCGalleryDataMutator changeFavoriteStateForSnaps:entries:needFavorited:userContext:completionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x107e14430

// -[SCGalleryDataMutator _favoritedSnapIds:entry:snapIdsToAddHighlight:snapIdsToDeleteHighlight:userContext:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x107e15298

// -[SCGalleryDataMutator replaceVideoSnap:videoProvider:metadataItems:videoTimeRanges:shouldForceReencode:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:]
// Type encoding: v128@0:8@16@24@32@40B48@52@60@68@76@84@92B100@104@112@?120
// Implementation: 0x107e0cdfc

// -[SCGalleryDataMutator replaceVideoSnap:newVideoBaseMediaData:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:origin:newThumbnailDownloadURL:newOverlayDownloadURL:loggingParams:completionHandler:]
// Type encoding: v128@0:8@16@24@32@40@48@56@64@72B80@84i92@96@104@112@?120
// Implementation: 0x107e0ce4c

// -[SCGalleryDataMutator replaceVideoSnap:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:]
// Type encoding: v100@0:8@16@24@32@40@48@56@64B72@76@84@?92
// Implementation: 0x107e0ceb4

// -[SCGalleryDataMutator replaceVideoSnap:rawMediaAssetCloudFile:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:]
// Type encoding: v108@0:8@16@24@32@40@48@56@64@72B80@84@92@?100
// Implementation: 0x107e0cf0c

// -[SCGalleryDataMutator replacePhotoSnap:photo:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:]
// Type encoding: v116@0:8@16@24@32@40d48B56@60@68@76@84@92@100@?108
// Implementation: 0x107e0cf68

// -[SCGalleryDataMutator replacePhotoSnap:rawMediaAssetCloudFile:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:]
// Type encoding: v116@0:8@16@24@32@40d48B56@60@68@76@84@92@100@?108
// Implementation: 0x107e0cfb0

// -[SCGalleryDataMutator replacePhotoSnap:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:]
// Type encoding: v108@0:8@16@24@32d40B48@52@60@68@76@84@92@?100
// Implementation: 0x107e0cffc

// -[SCGalleryDataMutator createSnapFrom:cloudFile:overlayFormat:overlay:isInfiniteDuration:isPrivate:createTimeUtc:userContext:completionHandler:]
// Type encoding: v80@0:8@16@24@32@40B48B52@56@64@?72
// Implementation: 0x107e0d048

// -[SCGalleryDataMutator updateEntry:title:userContext:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e0e2fc

// -[SCGalleryDataMutator updateEntry:addSnaps:addPhotoAssets:userContext:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107e0e81c

// -[SCGalleryDataMutator updateEntry:addSnaps:updateOrder:userContext:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107e0ea18

// -[SCGalleryDataMutator _updateEntry:isStoryEditorFlow:addSnaps:updateOrder:addPhotoAssets:userContext:completionHandler:]
// Type encoding: v68@0:8@16B24@28@36@44@52@?60
// Implementation: 0x107e0ec80

// -[SCGalleryDataMutator _replaceVideoSnap:videoProvider:metadataItems:videoTimeRanges:shouldForceReencode:rawMediaAssetCloudFile:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:loggingParams:completionHandler:]
// Type encoding: v136@0:8@16@24@32@40B48@52@60@68@76@84@92@100B108@112@120@?128
// Implementation: 0x107e10138

// -[SCGalleryDataMutator _replaceVideoSnap:videoData:metadataItems:rawMediaAssetCloudFile:originalSnapCloudFile:entry:overlayFormat:overlay:snapAssets:assetMedias:isInfiniteDuration:userContext:origin:newThumbnailDownloadURL:newOverlayDownloadURL:loggingParams:completionHandler:]
// Type encoding: v144@0:8@16@24@32@40@48@56@64@72@80@88B96@100i108@112@120@128@?136
// Implementation: 0x107e1057c

// -[SCGalleryDataMutator _replacePhotoSnap:photo:rawMediaAssetCloudFile:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:userContext:loggingParams:completionHandler:]
// Type encoding: v124@0:8@16@24@32@40@48d56B64@68@76@84@92@100@108@?116
// Implementation: 0x107e120d4

// -[SCGalleryDataMutator _transientCloudFSContentFromContentData:dataVaultEncryption:masterKey:errorPtr:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x107e135a8

// -[SCGalleryDataMutator _getSnapIdsToAddHighlightForReplaceSnapOperationsWithOriginalSnapId:editedSnapId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e137cc

// -[SCGalleryDataMutator _getUpdatedSnapsOrderForReplaceSnapOperationsWithOriginalSnapId:editedSnapId:existingSnapsOrder:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107e13898

// -[SCGalleryDataMutator deleteEntries:prioritized:userContext:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107e092a0

// -[SCGalleryDataMutator deleteSnap:fromEntry:userContext:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e093a0

// -[SCGalleryDataMutator deleteSnaps:fromEntry:userContext:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107e09d24

// -[SCGalleryDataMutator detachSnaps:fromEntry:userContext:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e0a25c

// -[SCGalleryDataMutator _deleteSnaps:fromEntry:userContext:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107e0b070

// -[SCGalleryDataMutator _deleteEntries:prioritized:userContext:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107e0b468

// -[SCGalleryDataMutator _queueIndividualDeleteOperationsForGalleryEntryIds:entryIdsToSnapIdsMap:entryIdsToSnapsMap:snapIdToEntryMap:entryIdToEntryMap:prioritized:userContext:completionHandler:]
// Type encoding: v76@0:8@16@24@32@40@48B56@60@?68
// Implementation: 0x107e0bdf8

// -[SCGalleryDataMutator _queueBatchDeleteOperationForGalleryEntryIds:entryIdToSnapIdsMap:snapIdToEntryMap:deletedSnaps:prioritized:userContext:completionHandler:]
// Type encoding: v68@0:8@16@24@32@40B48@52@?60
// Implementation: 0x107e0c8d4

// -[SCGalleryDataMutator addMobBatchCaptureStoryWithVideoUrlsOrImages:servletMediaFormats:orientations:overlayFormats:overlays:assetMedias:locations:isPrivate:isInfiniteDuration:userContext:externalId:displayName:entrySource:cameraFrontFacings:createTimes:timeRanges:completionHandler:]
// Type encoding: v144@0:8@16@24@32@40@48@56@64B72B76@80@88@96q104@112@120@128@?136
// Implementation: 0x107e06a44

// -[SCGalleryDataMutator addBatchCaptureStoryWithVideoUrlsOrImages:servletMediaFormats:orientations:overlayFormats:overlays:assetMedias:locations:isPrivate:isAutosave:isInfiniteDuration:cameraFrontFacings:createTimes:timeRanges:userContext:currentEntry:saveAsStory:completionHandler:]
// Type encoding: v136@0:8@16@24@32@40@48@56@64B72B76B80@84@92@100@108@116B124@?128
// Implementation: 0x107e072ac

// -[SCGalleryDataMutator _addBatchCaptureStoryWithVideoUrlsOrImages:servletMediaFormats:orientations:overlayFormats:overlays:assetMedias:locations:isPrivate:isAutosave:isInfiniteDuration:userContext:entrySource:currentEntry:saveAsStory:externalId:title:attribution:cameraFrontFacings:createTimes:timeRanges:completionHandler:]
// Type encoding: v168@0:8@16@24@32@40@48@56@64B72B76B80@84q92@100B108@112@120@128@136@144@152@?160
// Implementation: 0x107e07318

// -[SCGalleryDataMutator _prepareAutoSavePlaceHolderEntryWithAddSnapEntity:entryType:entrySource:isPrivate:]
// Type encoding: @44@0:8@16Q24q32B40
// Implementation: 0x107e08924

// -[SCGalleryDataMutator _appendAutoSaveWithAddSnapEntities:dataVaultEncryption:entryType:entrySource:isPrivate:savingEventUuid:userContext:completionHandler:]
// Type encoding: v76@0:8@16@24Q32q40B48@52@60@?68
// Implementation: 0x107e08aa0

// -[SCGalleryDataMutator retryFailedSnap:userContext:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e055e4

// -[SCGalleryDataMutator retryFailedEntry:userContext:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e057d8

// -[SCGalleryDataMutator _retryFailedEntry:userContext:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e058cc

// -[SCGalleryDataMutator deleteFailedEntries:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107e06788

// -[SCGalleryDataMutator addAutosavedMobPhoto:captureTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:userContext:externalId:displayName:entrySource:cameraFrontFacing:completionHandler:]
// Type encoding: v132@0:8@16@24q32d40@48@56@64@72B80B84@88@96@104q112B120@?124
// Implementation: 0x107e024d8

// -[SCGalleryDataMutator addAutosavedMyStoryPhoto:captureTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:cameraFrontFacing:entrySource:userContext:completionHandler:]
// Type encoding: v116@0:8@16@24q32d40@48@56@64@72B80B84B88q92@100@?108
// Implementation: 0x107e02c44

// -[SCGalleryDataMutator _addAutosavedPhoto:captureTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:autosavedEntry:entryType:entrySource:externalId:title:attribution:cameraFrontFacing:userContext:completionHandler:]
// Type encoding: v156@0:8@16@24q32d40@48@56@64@72B80B84@88Q96q104@112@120@128B136@140@?148
// Implementation: 0x107e02eac

// -[SCGalleryDataMutator addAutosavedMobVideoProvider:sojuMediaType:captureTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:isFromCameraRoll:userContext:externalId:displayName:entrySource:cameraFrontFacing:completionHandler:]
// Type encoding: v132@0:8@16i24@28q36@44@52@60@68B76B80B84@88@96@104q112B120@?124
// Implementation: 0x107e03ca0

// -[SCGalleryDataMutator addAutosavedMyStoryVideoProvider:sojuMediaType:captureTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:isFromCameraRoll:cameraFrontFacing:userContext:completionHandler:]
// Type encoding: v108@0:8@16i24@28q36@44@52@60@68B76B80B84B88@92@?100
// Implementation: 0x107e04418

// -[SCGalleryDataMutator _addAutosavedVideoProvider:sojuMediaType:captureTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:isInfiniteDuration:isFromCameraRoll:autosavedEntry:entryType:entrySource:externalId:title:attribution:cameraFrontFacing:userContext:completionHandler:]
// Type encoding: v156@0:8@16i24@28q36@44@52@60@68B76B80B84@88Q96q104@112@120@128B136@140@?148
// Implementation: 0x107e04674

// -[SCGalleryDataMutator _getAttribution]
// Type encoding: @16@0:8
// Implementation: 0x107e0548c

// -[SCGalleryDataMutator addVideoProvider:metadataItems:sojuMediaType:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:externalMetadata:deviceFirmwareInfo:deviceId:userContext:completionHandler:]
// Type encoding: v180@0:8@16@24i32Q36@44@52@60@68q76@84@92@100@108B116Q120B128B132B136@140@148@156@164@?172
// Implementation: 0x107e01334

// -[SCGalleryDataMutator addVideoProvider:videoTimeRanges:shouldForceReencode:metadataItems:sojuMediaType:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:encryptedMediaFile:externalMetadata:deviceFirmwareInfo:deviceId:userContext:mediaOrigin:entrySource:completionHandler:]
// Type encoding: v212@0:8@16@24B32@36i44Q48@56@64@72@80q88@96@104@112@120B128Q132B140B144B148@152@160@168@176@184i192q196@?204
// Implementation: 0x107e013d8

// -[SCGalleryDataMutator addVideoData:metadataItems:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:userContext:completionHandler:]
// Type encoding: v164@0:8@16@24i32@36Q44@52@60@68@76q84@92@100@108@116B124Q128B136B140B144@148@?156
// Implementation: 0x107e01a10

// -[SCGalleryDataMutator addPhoto:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:externalMetadata:userContext:mediaOrigin:entrySource:completionHandler:]
// Type encoding: v184@0:8@16i24@28Q36@44@52@60@68q76d84@92@100@108@116B124Q128B136B140B144@148@156i164q168@?176
// Implementation: 0x107e01eb4

// -[SCGalleryDataMutator addPhoto:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:captureTimeUtc:createTimeUtc:orientation:duration:overlayFormat:overlay:assetMedias:location:isPrivate:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:externalMetadata:userContext:mediaOrigin:entrySource:successCompletionHandler:]
// Type encoding: v184@0:8@16i24@28Q36@44@52@60@68q76d84@92@100@108@116B124Q128B136B140B144@148@156i164q168@?176
// Implementation: 0x107e02384

// -[SCGalleryDataMutator initWithUserSession:dataObjectContext:profile:cloudSync:userBlizzard:cloudFS:snapDocManager:keyService:galleryEncryptedDatabase:encryptedContentManager:memoriesSnapDocEncryptionManager:gallerySavingLogger:gallerySearch:gallerySearchIndexer:userId:memoriesMergedDataSource:memoriesSearchDatabase:galleryLogger:crashLogger:overlayFormatServices:userInfoServices:memoriesCachingMediaHelper:spectaclesServices:spectaclesAuxiliaryContentServices:featureSettingsService:memoriesExperimentService:memoriesFeaturedStoryDataMutator:performer:dreamsSessionService:circumstanceEngine:backupDependencyEntriesResolver:memoriesCSAMKeyIvSaver:backgroundTaskWrapper:unifiedAnalyticsService:memoriesStorageQuotaManager:]
// Type encoding: @296@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288
// Implementation: 0x107e234e0

// -[SCGalleryDataMutator _generateEncryptedVideoSnap:metadataItems:sojuMediaType:servletMediaFormat:overlayFormat:overlay:assetMedias:timeScale:source:cameraRollId:sharedSnapId:attribution:captureTimeUtc:createTimeUtc:orientation:location:isPrivate:isInfiniteDuration:dataVaultEncryption:mutationInfo:cameraFrontFacing:externalMetadata:userContext:fireMemoriesSaveGrapheneEvents:]
// Type encoding: @188@0:8@16@24i32@36@44@52@60d68Q76@84@92@100@108@116q124@132B140B144@148@156B164@168@176B184
// Implementation: 0x107e23bec

// -[SCGalleryDataMutator _isOKToUseEncryptedMediaFile:isPrivate:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x107e23ca8

// -[SCGalleryDataMutator _shouldApplyFastStartOperation:isOKToUseEncryptedMediaFile:]
// Type encoding: B24@0:8B16B20
// Implementation: 0x107e23d94

// -[SCGalleryDataMutator _startBgTaskIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x107e23da0

// -[SCGalleryDataMutator _endBgTaskIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e23df0

// -[SCGalleryDataMutator _generateEncryptedVideoSnap:metadataItems:sojuMediaType:servletMediaFormat:overlayFormat:overlay:assetMedias:timeScale:source:cameraRollId:sharedSnapId:multiSnapGroupId:attribution:captureTimeUtc:createTimeUtc:orientation:location:isPrivate:isInfiniteDuration:dataVaultEncryption:mutationInfo:cameraFrontFacing:encryptedMediaFile:hasOptimizedForNetworkUse:externalMetadata:deviceFirmwareInfo:deviceId:userContext:mediaOrigin:fireMemoriesSaveGrapheneEvents:]
// Type encoding: @228@0:8@16@24i32@36@44@52@60d68Q76@84@92@100@108@116@124q132@140B148B152@156@164B172@176B184@188@196@204@212i220B224
// Implementation: 0x107e23e60

// -[SCGalleryDataMutator _addVideo:metadataItems:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:externalId:title:entryType:entrySource:autosaveTimeUtc:captureTimeUtc:createTimeUtc:orientation:overlayFormat:overlay:assetMedias:location:isPrivate:autosave:saveSource:isInfiniteDuration:isFromSavedMetadata:cameraFrontFacing:encryptedMediaFile:hasOptimizedForNetworkUse:externalMetadata:deviceFirmwareInfo:deviceId:userContext:mediaOrigin:completionHandler:]
// Type encoding: v248@0:8@16@24i32@36Q44@52@60@68@76Q84q92@100@108@116q124@132@140@148@156B164B168Q172B180B184B188@192B200@204@212@220@228i236@?240
// Implementation: 0x107e253c8

// -[SCGalleryDataMutator _generateEncryptedPhotoSnap:sojuMediaType:servletMediaFormat:overlayFormat:overlay:assetMedias:source:cameraRollId:sharedSnapId:attribution:captureTimeUtc:createTimeUtc:orientation:duration:location:isPrivate:isInfiniteDuration:dataVaultEncryption:mutationInfo:cameraFrontFacing:fireMemoriesSaveGrapheneEvents:mediaOrigin:externalMetadata:]
// Type encoding: @176@0:8@16i24@28@36@44@52Q60@68@76@84@92@100q108d116@124B132B136@140@148B156B160i164@168
// Implementation: 0x107e26104

// -[SCGalleryDataMutator _addPhoto:sojuMediaType:servletMediaFormat:source:cameraRollId:attribution:externalId:title:entryType:entrySource:autosaveTimeUtc:captureTimeUtc:createTimeUtc:orientation:duration:isInfiniteDuration:overlayFormat:overlay:assetMedias:location:isPrivate:autosave:saveSource:isFromSavedMetadata:cameraFrontFacing:externalMetadata:userContext:mediaOrigin:completionHandler:]
// Type encoding: v220@0:8@16i24@28Q36@44@52@60@68Q76q84@92@100@108q116d124B132@136@144@152@160B168B172Q176B184B188@192@200i208@?212
// Implementation: 0x107e275e4

// -[SCGalleryDataMutator _addEntryWithEntryId:externalId:title:autosaveTimeUtc:entryType:entrySource:viewType:addSnapEntities:snapsOrder:seenInCarousel:snapsViewed:isPrivate:dataVaultEncryption:userContext:completionHandler:]
// Type encoding: v124@0:8@16@24@32@40Q48q56Q64@72@80B88i92B96@100@108@?116
// Implementation: 0x107e28260

// -[SCGalleryDataMutator _placeholderForPhotoAsset:mediaURL:orientation:creationDate:isPrivate:creatorUserId:sharedSnapId:multiSnapGroupId:attribution:source:dataVaultEncryption:mutationInfo:userContext:]
// Type encoding: @116@0:8@16@24q32@40B48@52@60@68@76Q84@92@100@108
// Implementation: 0x107e285bc

// -[SCGalleryDataMutator _appendByteSizeOperationsForEntry:addSnapEntities:fromFailedEntry:dataVaultEncryption:snapsOrder:userContext:completionHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x107e289b8

// -[SCGalleryDataMutator _createSnapWithSnapId:mediaId:duration:source:height:width:overlayFormat:overlay:sojuMediaType:servletMediaFormat:sojuMediaFormat:cameraRollId:sharedSnapId:multiSnapGroupId:attribution:deviceFirmwareInfo:deviceId:captureTimeUtc:createTimeUtc:orientation:location:isInfiniteDuration:cameraFrontFacing:assetMedias:mediaOrigin:externalMetadata:snapEncryption:]
// Type encoding: @208@0:8@16@24d32Q40i48i52@56@64i72@76q84@92@100@108@116@124@132@140@148q156@164B172B176@180i188@192@200
// Implementation: 0x107e28ff4

// -[SCGalleryDataMutator _checkServletMediaFormat:sojuMediaType:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x107e296b4

// -[SCGalleryDataMutator _sojuMediaFormatFromServletMediaFormat:]
// Type encoding: q24@0:8@16
// Implementation: 0x107e29720

// -[SCGalleryDataMutator _checkSnapMediaType:servletMediaFormat:isSavingVideo:userContext:]
// Type encoding: v40@0:8i16@20B28@32
// Implementation: 0x107e29748

// -[SCGalleryDataMutator _isFutureDate:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e29800

// -[SCGalleryDataMutator _shouldSendS2R]
// Type encoding: B16@0:8
// Implementation: 0x107e29880

// -[SCGalleryDataMutator dreamsSessionService]
// Type encoding: @16@0:8
// Implementation: 0x107e29888

// -[SCGalleryDataMutator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e29890

@end
