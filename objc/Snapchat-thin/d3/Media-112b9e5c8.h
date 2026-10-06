// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: Media
// Superclass: NSObject
// Address: 0x112b9e5c8

@interface Media

// Property: cacheInfoDataSource; attributes: T@"<MediaCacheInfoDataSource>",W,N,V_cacheInfoDataSource
// Property: mediaDataToUpload; attributes: T@"NSData",&,N,V_mediaDataToUpload
// Property: delegate; attributes: T@"<MediaDelegate>",W,N,V_delegate
// Property: captionScreenPosition; attributes: T@"NSNumber",&,N,V_captionScreenPosition
// Property: captionOrientation; attributes: T@"NSNumber",&,N,V_captionOrientation
// Property: captionText; attributes: T@"NSString",&,N,V_captionText
// Property: storyCaptionInfo; attributes: T@"SOJUStoryCaption",&,N,V_storyCaptionInfo
// Property: attachmentUrl; attributes: T@"NSString",C,N,V_attachmentUrl
// Property: venueId; attributes: T@"NSString",C,N,V_venueId
// Property: overlayPresent; attributes: TB,N,V_overlayPresent
// Property: overlayDataToUpload; attributes: T@"NSData",&,N,V_overlayDataToUpload
// Property: uploadDelegate; attributes: T@"<MediaUploadDelegate>",W,N,V_uploadDelegate
// Property: imageProcessingDelegate; attributes: T@"<MediaImageProcessingDelegate>",W,N,V_imageProcessingDelegate
// Property: baseNoteMediaProcessingDelegate; attributes: T@"<BaseNoteMediaProcessingDelegate>",W,N,V_baseNoteMediaProcessingDelegate
// Property: loadContext; attributes: Tq,N,V_loadContext
// Property: isThumbnail; attributes: TB,N,V_isThumbnail
// Property: uploadURL; attributes: T@"SOJUMediaUrl",&,N,V_uploadURL
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: progress; attributes: Td,N,V_progress
// Property: mediaQualityLevel; attributes: Tq,N,V_mediaQualityLevel
// Property: updateAnnouncer; attributes: T@"MediaUpdateListenerAnnouncer",R,N
// Property: legacyStoryMediaCache; attributes: T@"<SCLegacyStoriesMediaCaching>",&,N,V_legacyStoryMediaCache
// Property: dataSource; attributes: T@"<MediaDataSource>",W,N,V_dataSource
// Property: storyCaptionMetadata; attributes: T@"SCSCORECaptionMetadata",R,N
// Property: numBytes; attributes: TQ,N,V_numBytes
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[Media upload]
// Type encoding: v16@0:8
// Implementation: 0x108456304

// -[Media _uploadValidatedDataWithMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084564ac

// -[Media _uploadDidSucceedWithMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108456cdc

// -[Media _uploadDidFailWithMediaId:reason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108456d60

// -[Media _saveLocalContentWithMediaData:mediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108456e04

// -[Media initWithJSONDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x108456f6c

// -[Media initWithJSONDictionary:legacyStoryMediaCache:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108456f74

// -[Media initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108457184

// -[Media didDecodeObject]
// Type encoding: v16@0:8
// Implementation: 0x1084573b0

// -[Media _mediaDidDecodeObject]
// Type encoding: v16@0:8
// Implementation: 0x1084573b4

// -[Media encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845758c

// -[Media updateAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x1084577a4

// -[Media legacyMediaCache]
// Type encoding: @16@0:8
// Implementation: 0x1084577f4

// -[Media hasSeparateCaption]
// Type encoding: B16@0:8
// Implementation: 0x1084578a4

// -[Media removeFromCache]
// Type encoding: v16@0:8
// Implementation: 0x1084578f0

// -[Media removeFromDisk]
// Type encoding: v16@0:8
// Implementation: 0x108457978

// -[Media removeFromDiskMP4]
// Type encoding: v16@0:8
// Implementation: 0x1084579b4

// -[Media removeFromDisk:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084579f0

// -[Media isLoaded]
// Type encoding: B16@0:8
// Implementation: 0x108457ad0

// -[Media mediaId]
// Type encoding: @16@0:8
// Implementation: 0x108457b88

// -[Media dataToUpload]
// Type encoding: @16@0:8
// Implementation: 0x108457bd4

// -[Media dataToUploadWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108457d44

// -[Media setMediaDataToUpload:]
// Type encoding: v24@0:8@16
// Implementation: 0x108457df8

// -[Media setOverlayDataToUpload:]
// Type encoding: v24@0:8@16
// Implementation: 0x108457e48

// -[Media setArchivedDataToUpload:]
// Type encoding: v24@0:8@16
// Implementation: 0x108457f48

// -[Media copyDataFromMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845801c

// -[Media unarchiveSnapAndOverlayFromData:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1084581c4

// -[Media _blobFromCacheWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108458508

// -[Media mediaFromCacheWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108458858

// -[Media mediaSeparatedOverlaysFromCacheWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1084589d0

// -[Media streamingMediaFromCacheWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108458b60

// -[Media saveDataToCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x108458cec

// -[Media saveDataToCache:alreadyEncrypted:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x108458d58

// -[Media _isStoryMedia]
// Type encoding: B16@0:8
// Implementation: 0x108458f5c

// -[Media _saveDataToSCCache:alreadyEncrypted:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x108458f98

// -[Media storyBundleFromSCCacheWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10845921c

// -[Media _blobFromSCCacheWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1084592c0

// -[Media encryptor]
// Type encoding: @16@0:8
// Implementation: 0x108459758

// -[Media writeVideoToURL:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108459828

// -[Media writeVideoToURL:callbackOnMainThread:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108459834

// -[Media thumbnailCacheId]
// Type encoding: @16@0:8
// Implementation: 0x1084599cc

// -[Media videoPath]
// Type encoding: @16@0:8
// Implementation: 0x108459a30

// -[Media videoPathMP4]
// Type encoding: @16@0:8
// Implementation: 0x108459a84

// -[Media overlayPath]
// Type encoding: @16@0:8
// Implementation: 0x108459b90

// -[Media imageFromCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108459c64

// -[Media blendOverlayIfNeededWithSnapData:overlayData:size:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x108459e90

// -[Media baseNoteMediaProcessingDone]
// Type encoding: v16@0:8
// Implementation: 0x108459fd8

// -[Media imageProcessingDone]
// Type encoding: v16@0:8
// Implementation: 0x10845a058

// -[Media requestKey]
// Type encoding: @16@0:8
// Implementation: 0x10845a0d8

// -[Media fetchMediaUserInitiated:forPrefetch:userSession:completion:]
// Type encoding: v40@0:8B16B20@24@?32
// Implementation: 0x10845a0dc

// -[Media isVideo]
// Type encoding: B16@0:8
// Implementation: 0x10845a3b0

// -[Media isSpectaclesVideo]
// Type encoding: B16@0:8
// Implementation: 0x10845a3ec

// -[Media isVideoWithSound]
// Type encoding: B16@0:8
// Implementation: 0x10845a428

// -[Media isVideoStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10845a464

// -[Media isImage]
// Type encoding: B16@0:8
// Implementation: 0x10845a4a0

// -[Media isSpectaclesImage]
// Type encoding: B16@0:8
// Implementation: 0x10845a4dc

// -[Media isCircularMedia]
// Type encoding: B16@0:8
// Implementation: 0x10845a518

// -[Media isOverlaySeparatedFromImageMedia]
// Type encoding: B16@0:8
// Implementation: 0x10845a554

// -[Media _fetchMediaSuccessCallbackWithCachedMediaId:request:downloadStartTime:completion:]
// Type encoding: @?48@0:8@16@24d32@?40
// Implementation: 0x10845a558

// -[Media _fetchMediaFailureCallbackWithCachedMediaId:downloadStartTime:completion:]
// Type encoding: @?40@0:8@16d24@?32
// Implementation: 0x10845aea0

// -[Media fetchMediaFailureHelper:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10845b1d8

// -[Media _fetchMediaInBackgroundQueueWithUserInitiated:withDownloadStartTime:userSession:completion:]
// Type encoding: v44@0:8B16d20@28@?36
// Implementation: 0x10845b3a4

// -[Media _storyMediaCache]
// Type encoding: @16@0:8
// Implementation: 0x10845bbf4

// -[Media uploadMediaId]
// Type encoding: @16@0:8
// Implementation: 0x10845bc34

// -[Media storyCaptionMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10845bd04

// -[Media dataSource]
// Type encoding: @16@0:8
// Implementation: 0x10845bf20

// -[Media setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845bf38

// -[Media numBytes]
// Type encoding: Q16@0:8
// Implementation: 0x10845bf44

// -[Media setNumBytes:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10845bf4c

// -[Media cacheInfoDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10845bf54

// -[Media setCacheInfoDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845bf6c

// -[Media mediaDataToUpload]
// Type encoding: @16@0:8
// Implementation: 0x10845bf78

// -[Media delegate]
// Type encoding: @16@0:8
// Implementation: 0x10845bf80

// -[Media setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845bf98

// -[Media captionScreenPosition]
// Type encoding: @16@0:8
// Implementation: 0x10845bfa4

// -[Media setCaptionScreenPosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845bfac

// -[Media captionOrientation]
// Type encoding: @16@0:8
// Implementation: 0x10845bfdc

// -[Media setCaptionOrientation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845bfe4

// -[Media captionText]
// Type encoding: @16@0:8
// Implementation: 0x10845c014

// -[Media setCaptionText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c01c

// -[Media storyCaptionInfo]
// Type encoding: @16@0:8
// Implementation: 0x10845c04c

// -[Media setStoryCaptionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c054

// -[Media attachmentUrl]
// Type encoding: @16@0:8
// Implementation: 0x10845c084

// -[Media setAttachmentUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c08c

// -[Media venueId]
// Type encoding: @16@0:8
// Implementation: 0x10845c094

// -[Media setVenueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c09c

// -[Media overlayPresent]
// Type encoding: B16@0:8
// Implementation: 0x10845c0a4

// -[Media setOverlayPresent:]
// Type encoding: v20@0:8B16
// Implementation: 0x10845c0ac

// -[Media overlayDataToUpload]
// Type encoding: @16@0:8
// Implementation: 0x10845c0b4

// -[Media uploadDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10845c0bc

// -[Media setUploadDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c0d4

// -[Media imageProcessingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10845c0e0

// -[Media setImageProcessingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c0f8

// -[Media baseNoteMediaProcessingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10845c104

// -[Media setBaseNoteMediaProcessingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c11c

// -[Media loadContext]
// Type encoding: q16@0:8
// Implementation: 0x10845c128

// -[Media setLoadContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x10845c130

// -[Media isThumbnail]
// Type encoding: B16@0:8
// Implementation: 0x10845c138

// -[Media setIsThumbnail:]
// Type encoding: v20@0:8B16
// Implementation: 0x10845c140

// -[Media uploadURL]
// Type encoding: @16@0:8
// Implementation: 0x10845c148

// -[Media setUploadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c150

// -[Media isLoading]
// Type encoding: B16@0:8
// Implementation: 0x10845c180

// -[Media progress]
// Type encoding: d16@0:8
// Implementation: 0x10845c188

// -[Media setProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x10845c190

// -[Media mediaQualityLevel]
// Type encoding: q16@0:8
// Implementation: 0x10845c198

// -[Media setMediaQualityLevel:]
// Type encoding: v24@0:8q16
// Implementation: 0x10845c1a0

// -[Media legacyStoryMediaCache]
// Type encoding: @16@0:8
// Implementation: 0x10845c1a8

// -[Media setLegacyStoryMediaCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10845c1b0

// -[Media .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10845c1e0

// +[Media videoPathWithMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108459b10

// +[Media overlayPathWithMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108459be4

// +[Media _submitRequestQueue]
// Type encoding: @16@0:8
// Implementation: 0x10845bc80

@end
