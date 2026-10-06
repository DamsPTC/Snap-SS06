// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryEntryChangeRequest
// Superclass: NSObject
// Address: 0x112ca41e8

@interface SCGalleryEntryChangeRequest

// Property: placeholderForCreatedGalleryEntry; attributes: T@"SCObjectPlaceholder",R,N
// Property: objectID; attributes: T@"NSString",R,C,N
// Property: autosaveTimeUtc; attributes: T@"NSDate",C,N
// Property: bitmojiComicId; attributes: T@"NSString",C,N
// Property: clientGenStoryItemOrders; attributes: T@"NSArray",C,N
// Property: clientGenStoryRetryCount; attributes: T@"NSDictionary",C,N
// Property: clientProcessingBitMaskType; attributes: Ti,N
// Property: clientProcessingType; attributes: Ti,N
// Property: collageUCOLensId; attributes: T@"NSString",C,N
// Property: collectionAttributes; attributes: T@"SOJUGalleryServletCollectionsGalleryCollectionAttributes",C,N
// Property: createTimeUtc; attributes: T@"NSDate",C,N
// Property: creatorUserId; attributes: T@"NSString",C,N
// Property: dataVaultEncryption; attributes: T@"NSDictionary",C,N
// Property: duplicateTimeUtc; attributes: T@"NSDate",C,N
// Property: earliestSnapCreateTimeUtc; attributes: T@"NSDate",C,N
// Property: encryption; attributes: T@"SCMemoriesSnapEncryption",C,N
// Property: entryId; attributes: T@"NSString",C,N
// Property: entrySource; attributes: Ti,N
// Property: expectedClientGenSnapsCount; attributes: Ti,N
// Property: externalId; attributes: T@"NSString",C,N
// Property: fallbackFeaturedStoryCategory; attributes: Ti,N
// Property: featuredExpirationTimeUtc; attributes: T@"NSDate",C,N
// Property: featuredStoryActivationDateUtc; attributes: T@"NSDate",C,N
// Property: featuredStoryLoggingInfo; attributes: T@"NSString",C,N
// Property: featuredStoryTemplateName; attributes: T@"NSString",C,N
// Property: folderType; attributes: T@"NSNumber",C,N
// Property: galleryType; attributes: Ti,N
// Property: isAutoClusterPrototype; attributes: TB,N
// Property: isHidden; attributes: TB,N
// Property: isPrivate; attributes: TB,N
// Property: isTemporary; attributes: TB,N
// Property: latestSnapCaptureTimeUtc; attributes: T@"NSDate",C,N
// Property: memDataId; attributes: T@"SOJUGalleryServletMemDataId",C,N
// Property: pendingSyncs; attributes: Ti,N
// Property: priority; attributes: Ti,N
// Property: retryFromEntryId; attributes: T@"NSString",C,N
// Property: saverUserId; attributes: T@"NSString",C,N
// Property: seenInCarousel; attributes: TB,N
// Property: seqNum; attributes: Tq,N
// Property: snapFeedViewedItemIds; attributes: T@"NSArray",C,N
// Property: snapsHash; attributes: T@"NSString",C,N
// Property: snapsInfo; attributes: T@"NSDictionary",C,N
// Property: snapsOrder; attributes: T@"NSDictionary",C,N
// Property: snapsViewed; attributes: Ti,N
// Property: sources; attributes: Ti,N
// Property: subtitle; attributes: T@"NSString",C,N
// Property: syncedAutosaveTimeUtc; attributes: T@"NSDate",C,N
// Property: syncedIsPrivate; attributes: TB,N
// Property: syncedTitle; attributes: T@"NSString",C,N
// Property: templateId; attributes: T@"NSString",C,N
// Property: thumbnailEncrypted; attributes: TB,N
// Property: thumbnailUrl; attributes: T@"NSString",C,N
// Property: thumbnailUrlType; attributes: Ti,N
// Property: title; attributes: T@"NSString",C,N
// Property: titleOverlayUrl; attributes: T@"NSString",C,N
// Property: titleOverlayUrlType; attributes: Ti,N
// Property: viewType; attributes: Ti,N

// -[SCGalleryEntryChangeRequest updateDateRangeWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e3b14

// -[SCGalleryEntryChangeRequest setDateRangeWithSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e3d18

// -[SCGalleryEntryChangeRequest _dateFromServletTime:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b6e3ef8

// -[SCGalleryEntryChangeRequest setDateRangeWithServletGallerySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6e3f14

// -[SCGalleryEntryChangeRequest initWithGalleryEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6d2470

// -[SCGalleryEntryChangeRequest addEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d315c

// -[SCGalleryEntryChangeRequest removeEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d3408

// -[SCGalleryEntryChangeRequest insertEntryAssets:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d36b4

// -[SCGalleryEntryChangeRequest removeEntryAssetsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d3980

// -[SCGalleryEntryChangeRequest replaceEntryAssetsAtIndexes:withEntryAssets:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d39e4

// -[SCGalleryEntryChangeRequest addHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d3cac

// -[SCGalleryEntryChangeRequest removeHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d3f58

// -[SCGalleryEntryChangeRequest insertHighlightedSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d4204

// -[SCGalleryEntryChangeRequest removeHighlightedSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d44d0

// -[SCGalleryEntryChangeRequest replaceHighlightedSnapsAtIndexes:withHighlightedSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d4534

// -[SCGalleryEntryChangeRequest setOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d47fc

// -[SCGalleryEntryChangeRequest setOwnerDeleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d4998

// -[SCGalleryEntryChangeRequest setOwnerFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d4b34

// -[SCGalleryEntryChangeRequest setSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d4cd0

// -[SCGalleryEntryChangeRequest addSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d4e6c

// -[SCGalleryEntryChangeRequest removeSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d5118

// -[SCGalleryEntryChangeRequest insertSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d53c4

// -[SCGalleryEntryChangeRequest removeSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d5690

// -[SCGalleryEntryChangeRequest replaceSnapsAtIndexes:withSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d56f4

// -[SCGalleryEntryChangeRequest addSyncedEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d59bc

// -[SCGalleryEntryChangeRequest removeSyncedEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d5c68

// -[SCGalleryEntryChangeRequest insertSyncedEntryAssets:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d5f14

// -[SCGalleryEntryChangeRequest removeSyncedEntryAssetsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d61e0

// -[SCGalleryEntryChangeRequest replaceSyncedEntryAssetsAtIndexes:withSyncedEntryAssets:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d6244

// -[SCGalleryEntryChangeRequest addSyncedHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d650c

// -[SCGalleryEntryChangeRequest removeSyncedHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d67b8

// -[SCGalleryEntryChangeRequest insertSyncedHighlightedSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d6a64

// -[SCGalleryEntryChangeRequest removeSyncedHighlightedSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d6d30

// -[SCGalleryEntryChangeRequest replaceSyncedHighlightedSnapsAtIndexes:withSyncedHighlightedSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d6d94

// -[SCGalleryEntryChangeRequest setSyncedSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d705c

// -[SCGalleryEntryChangeRequest addSyncedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d71f8

// -[SCGalleryEntryChangeRequest removeSyncedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d74a4

// -[SCGalleryEntryChangeRequest insertSyncedSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d7750

// -[SCGalleryEntryChangeRequest removeSyncedSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d7a1c

// -[SCGalleryEntryChangeRequest replaceSyncedSnapsAtIndexes:withSyncedSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6d7a80

// -[SCGalleryEntryChangeRequest placeholderForCreatedGalleryEntry]
// Type encoding: @16@0:8
// Implementation: 0x10b6d7d48

// -[SCGalleryEntryChangeRequest objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6d7dc8

// -[SCGalleryEntryChangeRequest setWithGalleryEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d7e30

// -[SCGalleryEntryChangeRequest autosaveTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d855c

// -[SCGalleryEntryChangeRequest setAutosaveTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8564

// -[SCGalleryEntryChangeRequest bitmojiComicId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d856c

// -[SCGalleryEntryChangeRequest setBitmojiComicId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8574

// -[SCGalleryEntryChangeRequest clientGenStoryItemOrders]
// Type encoding: @16@0:8
// Implementation: 0x10b6d857c

// -[SCGalleryEntryChangeRequest setClientGenStoryItemOrders:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8584

// -[SCGalleryEntryChangeRequest clientGenStoryRetryCount]
// Type encoding: @16@0:8
// Implementation: 0x10b6d858c

// -[SCGalleryEntryChangeRequest setClientGenStoryRetryCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8594

// -[SCGalleryEntryChangeRequest clientProcessingBitMaskType]
// Type encoding: i16@0:8
// Implementation: 0x10b6d859c

// -[SCGalleryEntryChangeRequest setClientProcessingBitMaskType:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d85a4

// -[SCGalleryEntryChangeRequest clientProcessingType]
// Type encoding: i16@0:8
// Implementation: 0x10b6d85ac

// -[SCGalleryEntryChangeRequest setClientProcessingType:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d85b4

// -[SCGalleryEntryChangeRequest collageUCOLensId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d85bc

// -[SCGalleryEntryChangeRequest setCollageUCOLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d85c4

// -[SCGalleryEntryChangeRequest collectionAttributes]
// Type encoding: @16@0:8
// Implementation: 0x10b6d85cc

// -[SCGalleryEntryChangeRequest setCollectionAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d85d4

// -[SCGalleryEntryChangeRequest createTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d85dc

// -[SCGalleryEntryChangeRequest setCreateTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d85e4

// -[SCGalleryEntryChangeRequest creatorUserId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d85ec

// -[SCGalleryEntryChangeRequest setCreatorUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d85f4

// -[SCGalleryEntryChangeRequest dataVaultEncryption]
// Type encoding: @16@0:8
// Implementation: 0x10b6d85fc

// -[SCGalleryEntryChangeRequest setDataVaultEncryption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8604

// -[SCGalleryEntryChangeRequest duplicateTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d860c

// -[SCGalleryEntryChangeRequest setDuplicateTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8614

// -[SCGalleryEntryChangeRequest earliestSnapCreateTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d861c

// -[SCGalleryEntryChangeRequest setEarliestSnapCreateTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8624

// -[SCGalleryEntryChangeRequest encryption]
// Type encoding: @16@0:8
// Implementation: 0x10b6d862c

// -[SCGalleryEntryChangeRequest setEncryption:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8634

// -[SCGalleryEntryChangeRequest entryId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d863c

// -[SCGalleryEntryChangeRequest setEntryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8644

// -[SCGalleryEntryChangeRequest entrySource]
// Type encoding: i16@0:8
// Implementation: 0x10b6d864c

// -[SCGalleryEntryChangeRequest setEntrySource:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d8654

// -[SCGalleryEntryChangeRequest expectedClientGenSnapsCount]
// Type encoding: i16@0:8
// Implementation: 0x10b6d865c

// -[SCGalleryEntryChangeRequest setExpectedClientGenSnapsCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d8664

// -[SCGalleryEntryChangeRequest externalId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d866c

// -[SCGalleryEntryChangeRequest setExternalId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8674

// -[SCGalleryEntryChangeRequest fallbackFeaturedStoryCategory]
// Type encoding: i16@0:8
// Implementation: 0x10b6d867c

// -[SCGalleryEntryChangeRequest setFallbackFeaturedStoryCategory:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d8684

// -[SCGalleryEntryChangeRequest featuredExpirationTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d868c

// -[SCGalleryEntryChangeRequest setFeaturedExpirationTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8694

// -[SCGalleryEntryChangeRequest featuredStoryActivationDateUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d869c

// -[SCGalleryEntryChangeRequest setFeaturedStoryActivationDateUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d86a4

// -[SCGalleryEntryChangeRequest featuredStoryLoggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b6d86ac

// -[SCGalleryEntryChangeRequest setFeaturedStoryLoggingInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d86b4

// -[SCGalleryEntryChangeRequest featuredStoryTemplateName]
// Type encoding: @16@0:8
// Implementation: 0x10b6d86bc

// -[SCGalleryEntryChangeRequest setFeaturedStoryTemplateName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d86c4

// -[SCGalleryEntryChangeRequest folderType]
// Type encoding: @16@0:8
// Implementation: 0x10b6d86cc

// -[SCGalleryEntryChangeRequest setFolderType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d86d4

// -[SCGalleryEntryChangeRequest galleryType]
// Type encoding: i16@0:8
// Implementation: 0x10b6d86dc

// -[SCGalleryEntryChangeRequest setGalleryType:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d86e4

// -[SCGalleryEntryChangeRequest isAutoClusterPrototype]
// Type encoding: B16@0:8
// Implementation: 0x10b6d86ec

// -[SCGalleryEntryChangeRequest setIsAutoClusterPrototype:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6d86f4

// -[SCGalleryEntryChangeRequest isHidden]
// Type encoding: B16@0:8
// Implementation: 0x10b6d86fc

// -[SCGalleryEntryChangeRequest setIsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6d8704

// -[SCGalleryEntryChangeRequest isPrivate]
// Type encoding: B16@0:8
// Implementation: 0x10b6d870c

// -[SCGalleryEntryChangeRequest setIsPrivate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6d8714

// -[SCGalleryEntryChangeRequest isTemporary]
// Type encoding: B16@0:8
// Implementation: 0x10b6d871c

// -[SCGalleryEntryChangeRequest setIsTemporary:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6d8724

// -[SCGalleryEntryChangeRequest latestSnapCaptureTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d872c

// -[SCGalleryEntryChangeRequest setLatestSnapCaptureTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8734

// -[SCGalleryEntryChangeRequest memDataId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d873c

// -[SCGalleryEntryChangeRequest setMemDataId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8744

// -[SCGalleryEntryChangeRequest pendingSyncs]
// Type encoding: i16@0:8
// Implementation: 0x10b6d874c

// -[SCGalleryEntryChangeRequest setPendingSyncs:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d8754

// -[SCGalleryEntryChangeRequest priority]
// Type encoding: i16@0:8
// Implementation: 0x10b6d875c

// -[SCGalleryEntryChangeRequest setPriority:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d8764

// -[SCGalleryEntryChangeRequest retryFromEntryId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d876c

// -[SCGalleryEntryChangeRequest setRetryFromEntryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8774

// -[SCGalleryEntryChangeRequest saverUserId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d877c

// -[SCGalleryEntryChangeRequest setSaverUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8784

// -[SCGalleryEntryChangeRequest seenInCarousel]
// Type encoding: B16@0:8
// Implementation: 0x10b6d878c

// -[SCGalleryEntryChangeRequest setSeenInCarousel:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6d8794

// -[SCGalleryEntryChangeRequest seqNum]
// Type encoding: q16@0:8
// Implementation: 0x10b6d879c

// -[SCGalleryEntryChangeRequest setSeqNum:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6d87a4

// -[SCGalleryEntryChangeRequest snapFeedViewedItemIds]
// Type encoding: @16@0:8
// Implementation: 0x10b6d87ac

// -[SCGalleryEntryChangeRequest setSnapFeedViewedItemIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d87b4

// -[SCGalleryEntryChangeRequest snapsHash]
// Type encoding: @16@0:8
// Implementation: 0x10b6d87bc

// -[SCGalleryEntryChangeRequest setSnapsHash:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d87c4

// -[SCGalleryEntryChangeRequest snapsInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b6d87cc

// -[SCGalleryEntryChangeRequest setSnapsInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d87d4

// -[SCGalleryEntryChangeRequest snapsOrder]
// Type encoding: @16@0:8
// Implementation: 0x10b6d87dc

// -[SCGalleryEntryChangeRequest setSnapsOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d87e4

// -[SCGalleryEntryChangeRequest snapsViewed]
// Type encoding: i16@0:8
// Implementation: 0x10b6d87ec

// -[SCGalleryEntryChangeRequest setSnapsViewed:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d87f4

// -[SCGalleryEntryChangeRequest sources]
// Type encoding: i16@0:8
// Implementation: 0x10b6d87fc

// -[SCGalleryEntryChangeRequest setSources:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d8804

// -[SCGalleryEntryChangeRequest subtitle]
// Type encoding: @16@0:8
// Implementation: 0x10b6d880c

// -[SCGalleryEntryChangeRequest setSubtitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8814

// -[SCGalleryEntryChangeRequest syncedAutosaveTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x10b6d881c

// -[SCGalleryEntryChangeRequest setSyncedAutosaveTimeUtc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8824

// -[SCGalleryEntryChangeRequest syncedIsPrivate]
// Type encoding: B16@0:8
// Implementation: 0x10b6d882c

// -[SCGalleryEntryChangeRequest setSyncedIsPrivate:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6d8834

// -[SCGalleryEntryChangeRequest syncedTitle]
// Type encoding: @16@0:8
// Implementation: 0x10b6d883c

// -[SCGalleryEntryChangeRequest setSyncedTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8844

// -[SCGalleryEntryChangeRequest templateId]
// Type encoding: @16@0:8
// Implementation: 0x10b6d884c

// -[SCGalleryEntryChangeRequest setTemplateId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8854

// -[SCGalleryEntryChangeRequest thumbnailEncrypted]
// Type encoding: B16@0:8
// Implementation: 0x10b6d885c

// -[SCGalleryEntryChangeRequest setThumbnailEncrypted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6d8864

// -[SCGalleryEntryChangeRequest thumbnailUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b6d886c

// -[SCGalleryEntryChangeRequest setThumbnailUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8874

// -[SCGalleryEntryChangeRequest thumbnailUrlType]
// Type encoding: i16@0:8
// Implementation: 0x10b6d887c

// -[SCGalleryEntryChangeRequest setThumbnailUrlType:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d8884

// -[SCGalleryEntryChangeRequest title]
// Type encoding: @16@0:8
// Implementation: 0x10b6d888c

// -[SCGalleryEntryChangeRequest setTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d8894

// -[SCGalleryEntryChangeRequest titleOverlayUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b6d889c

// -[SCGalleryEntryChangeRequest setTitleOverlayUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d88a4

// -[SCGalleryEntryChangeRequest titleOverlayUrlType]
// Type encoding: i16@0:8
// Implementation: 0x10b6d88ac

// -[SCGalleryEntryChangeRequest setTitleOverlayUrlType:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d88b4

// -[SCGalleryEntryChangeRequest viewType]
// Type encoding: i16@0:8
// Implementation: 0x10b6d88bc

// -[SCGalleryEntryChangeRequest setViewType:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6d88c4

// -[SCGalleryEntryChangeRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6d88cc

// +[SCGalleryEntryChangeRequest changeRequestForGalleryEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6d24e4

// +[SCGalleryEntryChangeRequest creationRequestWithGalleryEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6d2630

// +[SCGalleryEntryChangeRequest deleteGalleryEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6d2e0c

// +[SCGalleryEntryChangeRequest deleteAllGalleryEntries]
// Type encoding: v16@0:8
// Implementation: 0x10b6d2fe0

@end
