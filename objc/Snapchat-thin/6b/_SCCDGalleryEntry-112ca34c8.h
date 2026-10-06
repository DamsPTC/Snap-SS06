// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: _SCCDGalleryEntry
// Superclass: NSManagedObject
// Address: 0x112ca34c8

@interface _SCCDGalleryEntry

// Property: objectID; attributes: T@"SCCDGalleryEntryID",R,N
// Property: autosaveTimeUtc; attributes: T@"NSDate",&,D,N
// Property: bitmojiComicId; attributes: T@"NSString",&,D,N
// Property: clientGenStoryItemOrders; attributes: T@"NSArray",&,D,N
// Property: clientGenStoryRetryCount; attributes: T@"NSDictionary",&,D,N
// Property: clientProcessingBitMaskType; attributes: T@"NSNumber",&,D,N
// Property: clientProcessingBitMaskTypeValue; attributes: Ti
// Property: clientProcessingType; attributes: T@"NSNumber",&,D,N
// Property: clientProcessingTypeValue; attributes: Ti
// Property: collageUCOLensId; attributes: T@"NSString",&,D,N
// Property: collectionAttributes; attributes: T@"SOJUGalleryServletCollectionsGalleryCollectionAttributes",&,D,N
// Property: createTimeUtc; attributes: T@"NSDate",&,D,N
// Property: creatorUserId; attributes: T@"NSString",&,D,N
// Property: dataVaultEncryption; attributes: T@"NSDictionary",&,D,N
// Property: duplicateTimeUtc; attributes: T@"NSDate",&,D,N
// Property: earliestSnapCreateTimeUtc; attributes: T@"NSDate",&,D,N
// Property: encryption; attributes: T@"SCMemoriesSnapEncryption",&,D,N
// Property: entryId; attributes: T@"NSString",&,D,N
// Property: entrySource; attributes: T@"NSNumber",&,D,N
// Property: entrySourceValue; attributes: Ti
// Property: expectedClientGenSnapsCount; attributes: T@"NSNumber",&,D,N
// Property: expectedClientGenSnapsCountValue; attributes: Ti
// Property: externalId; attributes: T@"NSString",&,D,N
// Property: fallbackFeaturedStoryCategory; attributes: T@"NSNumber",&,D,N
// Property: fallbackFeaturedStoryCategoryValue; attributes: Ti
// Property: featuredExpirationTimeUtc; attributes: T@"NSDate",&,D,N
// Property: featuredStoryActivationDateUtc; attributes: T@"NSDate",&,D,N
// Property: featuredStoryLoggingInfo; attributes: T@"NSString",&,D,N
// Property: featuredStoryTemplateName; attributes: T@"NSString",&,D,N
// Property: folderType; attributes: T@"NSNumber",&,D,N
// Property: galleryType; attributes: T@"NSNumber",&,D,N
// Property: galleryTypeValue; attributes: Ti
// Property: isAutoClusterPrototype; attributes: T@"NSNumber",&,D,N
// Property: isAutoClusterPrototypeValue; attributes: TB
// Property: isHidden; attributes: T@"NSNumber",&,D,N
// Property: isHiddenValue; attributes: TB
// Property: isPrivate; attributes: T@"NSNumber",&,D,N
// Property: isPrivateValue; attributes: TB
// Property: isTemporary; attributes: T@"NSNumber",&,D,N
// Property: isTemporaryValue; attributes: TB
// Property: latestSnapCaptureTimeUtc; attributes: T@"NSDate",&,D,N
// Property: memDataId; attributes: T@"SOJUGalleryServletMemDataId",&,D,N
// Property: pendingSyncs; attributes: T@"NSNumber",&,D,N
// Property: pendingSyncsValue; attributes: Ti
// Property: priority; attributes: T@"NSNumber",&,D,N
// Property: priorityValue; attributes: Ti
// Property: retryFromEntryId; attributes: T@"NSString",&,D,N
// Property: saverUserId; attributes: T@"NSString",&,D,N
// Property: seenInCarousel; attributes: T@"NSNumber",&,D,N
// Property: seenInCarouselValue; attributes: TB
// Property: seqNum; attributes: T@"NSNumber",&,D,N
// Property: seqNumValue; attributes: Tq
// Property: snapFeedViewedItemIds; attributes: T@"NSArray",&,D,N
// Property: snapsHash; attributes: T@"NSString",&,D,N
// Property: snapsInfo; attributes: T@"NSDictionary",&,D,N
// Property: snapsOrder; attributes: T@"NSDictionary",&,D,N
// Property: snapsViewed; attributes: T@"NSNumber",&,D,N
// Property: snapsViewedValue; attributes: Ti
// Property: sources; attributes: T@"NSNumber",&,D,N
// Property: sourcesValue; attributes: Ti
// Property: subtitle; attributes: T@"NSString",&,D,N
// Property: syncedAutosaveTimeUtc; attributes: T@"NSDate",&,D,N
// Property: syncedIsPrivate; attributes: T@"NSNumber",&,D,N
// Property: syncedIsPrivateValue; attributes: TB
// Property: syncedTitle; attributes: T@"NSString",&,D,N
// Property: templateId; attributes: T@"NSString",&,D,N
// Property: thumbnailEncrypted; attributes: T@"NSNumber",&,D,N
// Property: thumbnailEncryptedValue; attributes: TB
// Property: thumbnailUrl; attributes: T@"NSString",&,D,N
// Property: thumbnailUrlType; attributes: T@"NSNumber",&,D,N
// Property: thumbnailUrlTypeValue; attributes: Ti
// Property: title; attributes: T@"NSString",&,D,N
// Property: titleOverlayUrl; attributes: T@"NSString",&,D,N
// Property: titleOverlayUrlType; attributes: T@"NSNumber",&,D,N
// Property: titleOverlayUrlTypeValue; attributes: Ti
// Property: viewType; attributes: T@"NSNumber",&,D,N
// Property: viewTypeValue; attributes: Ti
// Property: entryAssets; attributes: T@"NSOrderedSet",&,D,N
// Property: highlightedSnaps; attributes: T@"NSOrderedSet",&,D,N
// Property: owner; attributes: T@"SCCDGalleryProfile",&,D,N
// Property: ownerDeleted; attributes: T@"SCCDGalleryProfile",&,D,N
// Property: ownerFailed; attributes: T@"SCCDGalleryProfile",&,D,N
// Property: snapDoc; attributes: T@"SCCDGallerySnapDoc",&,D,N
// Property: snaps; attributes: T@"NSOrderedSet",&,D,N
// Property: syncedEntryAssets; attributes: T@"NSOrderedSet",&,D,N
// Property: syncedHighlightedSnaps; attributes: T@"NSOrderedSet",&,D,N
// Property: syncedSnapDoc; attributes: T@"SCCDGallerySnapDoc",&,D,N
// Property: syncedSnaps; attributes: T@"NSOrderedSet",&,D,N

// -[_SCCDGalleryEntry addSyncedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a887c

// -[_SCCDGalleryEntry removeSyncedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a88cc

// -[_SCCDGalleryEntry addSyncedSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a891c

// -[_SCCDGalleryEntry removeSyncedSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a896c

// -[_SCCDGalleryEntry insertObject:inSyncedSnapsAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6a89bc

// -[_SCCDGalleryEntry removeObjectFromSyncedSnapsAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b6a8b04

// -[_SCCDGalleryEntry insertSyncedSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a8c24

// -[_SCCDGalleryEntry removeSyncedSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a8d4c

// -[_SCCDGalleryEntry replaceObjectInSyncedSnapsAtIndex:withObject:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b6a8e5c

// -[_SCCDGalleryEntry replaceSyncedSnapsAtIndexes:withSyncedSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a8fa4

// -[_SCCDGalleryEntry addSyncedHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a802c

// -[_SCCDGalleryEntry removeSyncedHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a807c

// -[_SCCDGalleryEntry addSyncedHighlightedSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a80cc

// -[_SCCDGalleryEntry removeSyncedHighlightedSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a811c

// -[_SCCDGalleryEntry insertObject:inSyncedHighlightedSnapsAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6a816c

// -[_SCCDGalleryEntry removeObjectFromSyncedHighlightedSnapsAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b6a82b4

// -[_SCCDGalleryEntry insertSyncedHighlightedSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a83d4

// -[_SCCDGalleryEntry removeSyncedHighlightedSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a84fc

// -[_SCCDGalleryEntry replaceObjectInSyncedHighlightedSnapsAtIndex:withObject:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b6a860c

// -[_SCCDGalleryEntry replaceSyncedHighlightedSnapsAtIndexes:withSyncedHighlightedSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a8754

// -[_SCCDGalleryEntry addSyncedEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a77dc

// -[_SCCDGalleryEntry removeSyncedEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a782c

// -[_SCCDGalleryEntry addSyncedEntryAssetsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a787c

// -[_SCCDGalleryEntry removeSyncedEntryAssetsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a78cc

// -[_SCCDGalleryEntry insertObject:inSyncedEntryAssetsAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6a791c

// -[_SCCDGalleryEntry removeObjectFromSyncedEntryAssetsAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b6a7a64

// -[_SCCDGalleryEntry insertSyncedEntryAssets:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a7b84

// -[_SCCDGalleryEntry removeSyncedEntryAssetsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a7cac

// -[_SCCDGalleryEntry replaceObjectInSyncedEntryAssetsAtIndex:withObject:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b6a7dbc

// -[_SCCDGalleryEntry replaceSyncedEntryAssetsAtIndexes:withSyncedEntryAssets:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a7f04

// -[_SCCDGalleryEntry addSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a6f8c

// -[_SCCDGalleryEntry removeSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a6fdc

// -[_SCCDGalleryEntry addSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a702c

// -[_SCCDGalleryEntry removeSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a707c

// -[_SCCDGalleryEntry insertObject:inSnapsAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6a70cc

// -[_SCCDGalleryEntry removeObjectFromSnapsAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b6a7214

// -[_SCCDGalleryEntry insertSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a7334

// -[_SCCDGalleryEntry removeSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a745c

// -[_SCCDGalleryEntry replaceObjectInSnapsAtIndex:withObject:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b6a756c

// -[_SCCDGalleryEntry replaceSnapsAtIndexes:withSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a76b4

// -[_SCCDGalleryEntry addHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a673c

// -[_SCCDGalleryEntry removeHighlightedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a678c

// -[_SCCDGalleryEntry addHighlightedSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a67dc

// -[_SCCDGalleryEntry removeHighlightedSnapsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a682c

// -[_SCCDGalleryEntry insertObject:inHighlightedSnapsAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6a687c

// -[_SCCDGalleryEntry removeObjectFromHighlightedSnapsAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b6a69c4

// -[_SCCDGalleryEntry insertHighlightedSnaps:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a6ae4

// -[_SCCDGalleryEntry removeHighlightedSnapsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a6c0c

// -[_SCCDGalleryEntry replaceObjectInHighlightedSnapsAtIndex:withObject:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b6a6d1c

// -[_SCCDGalleryEntry replaceHighlightedSnapsAtIndexes:withHighlightedSnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a6e64

// -[_SCCDGalleryEntry addEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a5eec

// -[_SCCDGalleryEntry removeEntryAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a5f3c

// -[_SCCDGalleryEntry addEntryAssetsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a5f8c

// -[_SCCDGalleryEntry removeEntryAssetsObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a5fdc

// -[_SCCDGalleryEntry insertObject:inEntryAssetsAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6a602c

// -[_SCCDGalleryEntry removeObjectFromEntryAssetsAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b6a6174

// -[_SCCDGalleryEntry insertEntryAssets:atIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a6294

// -[_SCCDGalleryEntry removeEntryAssetsAtIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6a63bc

// -[_SCCDGalleryEntry replaceObjectInEntryAssetsAtIndex:withObject:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b6a64cc

// -[_SCCDGalleryEntry replaceEntryAssetsAtIndexes:withEntryAssets:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b6a6614

// -[_SCCDGalleryEntry objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6a437c

// -[_SCCDGalleryEntry clientProcessingBitMaskTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a47c4

// -[_SCCDGalleryEntry setClientProcessingBitMaskTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4800

// -[_SCCDGalleryEntry primitiveClientProcessingBitMaskTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4844

// -[_SCCDGalleryEntry setPrimitiveClientProcessingBitMaskTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4880

// -[_SCCDGalleryEntry clientProcessingTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a48c4

// -[_SCCDGalleryEntry setClientProcessingTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4900

// -[_SCCDGalleryEntry primitiveClientProcessingTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4944

// -[_SCCDGalleryEntry setPrimitiveClientProcessingTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4980

// -[_SCCDGalleryEntry entrySourceValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a49c4

// -[_SCCDGalleryEntry setEntrySourceValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4a00

// -[_SCCDGalleryEntry primitiveEntrySourceValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4a44

// -[_SCCDGalleryEntry setPrimitiveEntrySourceValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4a80

// -[_SCCDGalleryEntry expectedClientGenSnapsCountValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4ac4

// -[_SCCDGalleryEntry setExpectedClientGenSnapsCountValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4b00

// -[_SCCDGalleryEntry primitiveExpectedClientGenSnapsCountValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4b44

// -[_SCCDGalleryEntry setPrimitiveExpectedClientGenSnapsCountValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4b80

// -[_SCCDGalleryEntry fallbackFeaturedStoryCategoryValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4bc4

// -[_SCCDGalleryEntry setFallbackFeaturedStoryCategoryValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4c00

// -[_SCCDGalleryEntry primitiveFallbackFeaturedStoryCategoryValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4c44

// -[_SCCDGalleryEntry setPrimitiveFallbackFeaturedStoryCategoryValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4c80

// -[_SCCDGalleryEntry galleryTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4cc4

// -[_SCCDGalleryEntry setGalleryTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4d00

// -[_SCCDGalleryEntry primitiveGalleryTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a4d44

// -[_SCCDGalleryEntry setPrimitiveGalleryTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a4d80

// -[_SCCDGalleryEntry isAutoClusterPrototypeValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a4dc4

// -[_SCCDGalleryEntry setIsAutoClusterPrototypeValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a4e00

// -[_SCCDGalleryEntry primitiveIsAutoClusterPrototypeValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a4e44

// -[_SCCDGalleryEntry setPrimitiveIsAutoClusterPrototypeValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a4e80

// -[_SCCDGalleryEntry isHiddenValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a4ec4

// -[_SCCDGalleryEntry setIsHiddenValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a4f00

// -[_SCCDGalleryEntry primitiveIsHiddenValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a4f44

// -[_SCCDGalleryEntry setPrimitiveIsHiddenValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a4f80

// -[_SCCDGalleryEntry isPrivateValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a4fc4

// -[_SCCDGalleryEntry setIsPrivateValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5000

// -[_SCCDGalleryEntry primitiveIsPrivateValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a5044

// -[_SCCDGalleryEntry setPrimitiveIsPrivateValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5080

// -[_SCCDGalleryEntry isTemporaryValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a50c4

// -[_SCCDGalleryEntry setIsTemporaryValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5100

// -[_SCCDGalleryEntry primitiveIsTemporaryValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a5144

// -[_SCCDGalleryEntry setPrimitiveIsTemporaryValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5180

// -[_SCCDGalleryEntry pendingSyncsValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a51c4

// -[_SCCDGalleryEntry setPendingSyncsValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5200

// -[_SCCDGalleryEntry primitivePendingSyncsValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5244

// -[_SCCDGalleryEntry setPrimitivePendingSyncsValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5280

// -[_SCCDGalleryEntry priorityValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a52c4

// -[_SCCDGalleryEntry setPriorityValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5300

// -[_SCCDGalleryEntry primitivePriorityValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5344

// -[_SCCDGalleryEntry setPrimitivePriorityValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5380

// -[_SCCDGalleryEntry seenInCarouselValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a53c4

// -[_SCCDGalleryEntry setSeenInCarouselValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5400

// -[_SCCDGalleryEntry primitiveSeenInCarouselValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a5444

// -[_SCCDGalleryEntry setPrimitiveSeenInCarouselValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5480

// -[_SCCDGalleryEntry seqNumValue]
// Type encoding: q16@0:8
// Implementation: 0x10b6a54c4

// -[_SCCDGalleryEntry setSeqNumValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6a5500

// -[_SCCDGalleryEntry primitiveSeqNumValue]
// Type encoding: q16@0:8
// Implementation: 0x10b6a5544

// -[_SCCDGalleryEntry setPrimitiveSeqNumValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6a5580

// -[_SCCDGalleryEntry snapsViewedValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a55c4

// -[_SCCDGalleryEntry setSnapsViewedValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5600

// -[_SCCDGalleryEntry primitiveSnapsViewedValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5644

// -[_SCCDGalleryEntry setPrimitiveSnapsViewedValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5680

// -[_SCCDGalleryEntry sourcesValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a56c4

// -[_SCCDGalleryEntry setSourcesValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5700

// -[_SCCDGalleryEntry primitiveSourcesValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5744

// -[_SCCDGalleryEntry setPrimitiveSourcesValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5780

// -[_SCCDGalleryEntry syncedIsPrivateValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a57c4

// -[_SCCDGalleryEntry setSyncedIsPrivateValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5800

// -[_SCCDGalleryEntry primitiveSyncedIsPrivateValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a5844

// -[_SCCDGalleryEntry setPrimitiveSyncedIsPrivateValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5880

// -[_SCCDGalleryEntry thumbnailEncryptedValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a58c4

// -[_SCCDGalleryEntry setThumbnailEncryptedValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5900

// -[_SCCDGalleryEntry primitiveThumbnailEncryptedValue]
// Type encoding: B16@0:8
// Implementation: 0x10b6a5944

// -[_SCCDGalleryEntry setPrimitiveThumbnailEncryptedValue:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b6a5980

// -[_SCCDGalleryEntry thumbnailUrlTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a59c4

// -[_SCCDGalleryEntry setThumbnailUrlTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5a00

// -[_SCCDGalleryEntry primitiveThumbnailUrlTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5a44

// -[_SCCDGalleryEntry setPrimitiveThumbnailUrlTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5a80

// -[_SCCDGalleryEntry titleOverlayUrlTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5ac4

// -[_SCCDGalleryEntry setTitleOverlayUrlTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5b00

// -[_SCCDGalleryEntry primitiveTitleOverlayUrlTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5b44

// -[_SCCDGalleryEntry setPrimitiveTitleOverlayUrlTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5b80

// -[_SCCDGalleryEntry viewTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5bc4

// -[_SCCDGalleryEntry setViewTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5c00

// -[_SCCDGalleryEntry primitiveViewTypeValue]
// Type encoding: i16@0:8
// Implementation: 0x10b6a5c44

// -[_SCCDGalleryEntry setPrimitiveViewTypeValue:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b6a5c80

// -[_SCCDGalleryEntry entryAssetsSet]
// Type encoding: @16@0:8
// Implementation: 0x10b6a5cc4

// -[_SCCDGalleryEntry highlightedSnapsSet]
// Type encoding: @16@0:8
// Implementation: 0x10b6a5d20

// -[_SCCDGalleryEntry snapsSet]
// Type encoding: @16@0:8
// Implementation: 0x10b6a5d7c

// -[_SCCDGalleryEntry syncedEntryAssetsSet]
// Type encoding: @16@0:8
// Implementation: 0x10b6a5dd8

// -[_SCCDGalleryEntry syncedHighlightedSnapsSet]
// Type encoding: @16@0:8
// Implementation: 0x10b6a5e34

// -[_SCCDGalleryEntry syncedSnapsSet]
// Type encoding: @16@0:8
// Implementation: 0x10b6a5e90

// +[_SCCDGalleryEntry insertInManagedObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6a4340

// +[_SCCDGalleryEntry entityName]
// Type encoding: @16@0:8
// Implementation: 0x10b6a4358

// +[_SCCDGalleryEntry entityInManagedObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6a4364

// +[_SCCDGalleryEntry keyPathsForValuesAffectingValueForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6a43b8

@end
