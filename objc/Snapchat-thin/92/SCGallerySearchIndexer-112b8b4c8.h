// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySearchIndexer
// Superclass: NSObject
// Address: 0x112b8b4c8

@interface SCGallerySearchIndexer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySearchIndexer debugInfoFromSearchIndexer:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107f27f2c

// -[SCGallerySearchIndexer initWithDataObjectContext:cloudFS:encryptedContentManager:galleryEncryptedDatabase:gallerySearch:galleryProfile:memoriesSearchDatabase:networker:appTerminator:percMLModelProvider:applicationLifecycleEvents:coreConfigProvider:aserConfigProvider:circumstanceEngine:docObjectContext:cachingMediaManager:memoriesVisualTagAnalyzer:faceTaggingDataProvider:faceTaggingPermissionsManager:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x107f200f4

// -[SCGallerySearchIndexer resumeServiceWithCloudSyncIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f208cc

// -[SCGallerySearchIndexer suspendServiceIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107f209e8

// -[SCGallerySearchIndexer dedicatedQueue]
// Type encoding: @16@0:8
// Implementation: 0x107f20a90

// -[SCGallerySearchIndexer runWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f20a98

// -[SCGallerySearchIndexer defaultNotifierWithLowPowerMode]
// Type encoding: @16@0:8
// Implementation: 0x107f20c4c

// -[SCGallerySearchIndexer defaultLongRunningNotifier]
// Type encoding: @16@0:8
// Implementation: 0x107f20c9c

// -[SCGallerySearchIndexer indexGallerySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f20ca8

// -[SCGallerySearchIndexer indexDuplicateSnap:fromSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f20e38

// -[SCGallerySearchIndexer insertTagsForSnapId:locationTags:timeTags:metaTags:visualTagToConfidenceMap:tagVersion:languageId:tagCluster:locationCluster:caption:creationDate:tinyClipCaptionToConfidenceMaps:tinyClipEmbeddings:tinyClipModelVersion:fromServer:shouldNotifyListener:]
// Type encoding: v136@0:8@16@24@32@40@48q56@64@72@80@88@96@104@112q120B128B132
// Implementation: 0x107f20fec

// -[SCGallerySearchIndexer addressTitleForGallerySnap:queue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107f21ea4

// -[SCGallerySearchIndexer fetchTagsWithSnapId:database:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f2244c

// -[SCGallerySearchIndexer _fetchTagsWithSnapId:fromRowid:database:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x107f22508

// -[SCGallerySearchIndexer deleteSnapWithSnapIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f22f30

// -[SCGallerySearchIndexer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f23038

// -[SCGallerySearchIndexer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f23228

// -[SCGallerySearchIndexer _transitToState:serviceTerm:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107f23230

// -[SCGallerySearchIndexer _indexSnapsWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f23410

// -[SCGallerySearchIndexer _adjustPendingSnapsWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f234f8

// -[SCGallerySearchIndexer _setupDatabase:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f235dc

// -[SCGallerySearchIndexer _indexDuplicateSnap:fromSnap:serviceTerm:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f239b0

// -[SCGallerySearchIndexer _rowid:forGallerySnapId:languageId:database:]
// Type encoding: B48@0:8^q16@24@32@40
// Implementation: 0x107f23d94

// -[SCGallerySearchIndexer _addOneRowInEachTableForGallerySnapId:languageId:tagVersion:database:]
// Type encoding: q48@0:8@16@24q32@40
// Implementation: 0x107f23eb0

// -[SCGallerySearchIndexer _updateSnapInfoAtDocid:snap:fromSnap:cloudFile:duplicateDocid:commonlanguageId:database:serviceTerm:]
// Type encoding: v80@0:8q16@24@32@40q48@56@64@72
// Implementation: 0x107f24094

// -[SCGallerySearchIndexer _shouldForceFetchSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f26b04

// -[SCGallerySearchIndexer _normalizeString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f26b90

// -[SCGallerySearchIndexer _tokenize:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f27114

// -[SCGallerySearchIndexer _joinTags:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f271ec

// -[SCGallerySearchIndexer _tagsRecoveredFromJoinedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f27250

// -[SCGallerySearchIndexer _saveTagClusterWithSnapId:clusterName:database:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f272cc

// -[SCGallerySearchIndexer _saveLocationClusterWithSnapId:clusterName:database:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f273b0

// -[SCGallerySearchIndexer _saveDateTagWithSnapId:dateTag:database:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f27494

// -[SCGallerySearchIndexer _updateLanguageIdWithSnapId:languageId:database:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107f27578

// -[SCGallerySearchIndexer _updateTagVersionBySnapId:languageId:tagVersion:database:]
// Type encoding: B48@0:8@16@24q32@40
// Implementation: 0x107f2765c

// -[SCGallerySearchIndexer _replaceVisualTagsConfidenceWithSnapId:visualTags:database:shouldNotifyListener:]
// Type encoding: B44@0:8@16@24@32B40
// Implementation: 0x107f27774

// -[SCGallerySearchIndexer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x107f27b38

// -[SCGallerySearchIndexer _isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x107f27b98

// -[SCGallerySearchIndexer _addSnapToRetryIfNeededWithSnap:fromSnap:indexer:shouldUpload:]
// Type encoding: v48@0:8@16@24@32^B40
// Implementation: 0x107f27bb8

// -[SCGallerySearchIndexer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f27ccc

@end
