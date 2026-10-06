// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSearchDatabase
// Superclass: NSObject
// Address: 0x112b916e8

@interface SCMemoriesSearchDatabase


// -[SCMemoriesSearchDatabase initWithUserId:circumstanceEngine:grapheneRegistry:experimentService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107fea180

// -[SCMemoriesSearchDatabase perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107fea364

// -[SCMemoriesSearchDatabase performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107fea408

// -[SCMemoriesSearchDatabase isInsideDatabasePerformer]
// Type encoding: B16@0:8
// Implementation: 0x107fea4a8

// -[SCMemoriesSearchDatabase removeAllData]
// Type encoding: v16@0:8
// Implementation: 0x107fea4b0

// -[SCMemoriesSearchDatabase deleteSnapWithSnapIds:docObjectContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fea5b4

// -[SCMemoriesSearchDatabase conceptCountsWithQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107feac7c

// -[SCMemoriesSearchDatabase conceptCountsSynchronously]
// Type encoding: @16@0:8
// Implementation: 0x107feac90

// -[SCMemoriesSearchDatabase conceptCountsWithMaxConfidenceSnapIdSynchronously]
// Type encoding: @16@0:8
// Implementation: 0x107feadb0

// -[SCMemoriesSearchDatabase locationCountsWithQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107feb038

// -[SCMemoriesSearchDatabase locationCountsSynchronously]
// Type encoding: @16@0:8
// Implementation: 0x107feb04c

// -[SCMemoriesSearchDatabase timeTagCountsWithQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107feb154

// -[SCMemoriesSearchDatabase primaryYearCountsSynchronously]
// Type encoding: @16@0:8
// Implementation: 0x107feb168

// -[SCMemoriesSearchDatabase primaryYearCountsWithQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107feb274

// -[SCMemoriesSearchDatabase primaryLocationCountsWithQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107feb3e4

// -[SCMemoriesSearchDatabase primaryMonthCountsWithQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107feb554

// -[SCMemoriesSearchDatabase snapIdsByYear:queue:completionHandler:]
// Type encoding: v36@0:8i16@20@?28
// Implementation: 0x107feb6c4

// -[SCMemoriesSearchDatabase snapIdsByNormalizedYearMonthKey:queue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107feb848

// -[SCMemoriesSearchDatabase snapIdsByNormalizedYearMonthKeys:queue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107feb9e8

// -[SCMemoriesSearchDatabase snapIdsByLocationComponent:queue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107febb88

// -[SCMemoriesSearchDatabase _executePrimaryYearCountsQuery]
// Type encoding: @16@0:8
// Implementation: 0x107febd28

// -[SCMemoriesSearchDatabase _executePrimaryMonthCountsQuery]
// Type encoding: @16@0:8
// Implementation: 0x107febef8

// -[SCMemoriesSearchDatabase _executePrimaryLocationCountsQuery]
// Type encoding: @16@0:8
// Implementation: 0x107fec0c8

// -[SCMemoriesSearchDatabase _executeSnapIdsByYear:]
// Type encoding: @20@0:8i16
// Implementation: 0x107feca48

// -[SCMemoriesSearchDatabase _executeSnapIdsByNormalizedYearMonthKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fecc04

// -[SCMemoriesSearchDatabase _executeSnapIdsByNormalizedYearMonthKeys:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fecdec

// -[SCMemoriesSearchDatabase _executeSnapIdsByLocationComponent:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fed158

// -[SCMemoriesSearchDatabase fetchAllSnapIdToTagVersionMapWithQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107fed388

// -[SCMemoriesSearchDatabase fetchTagAndConfForSnapId:synchronous:completionQueue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107fed680

// -[SCMemoriesSearchDatabase fetchLocationNameForSnapId:synchronous:queue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107fedb0c

// -[SCMemoriesSearchDatabase fetchLocationTagsForSnapId:synchronous:queue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107fedfdc

// -[SCMemoriesSearchDatabase fetchAllSnapIdForFaceRelatedTagWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107fee4b4

// -[SCMemoriesSearchDatabase insertTinyClipDataWithDocObjectContext:snapId:tinyClipResult:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107fee774

// -[SCMemoriesSearchDatabase insertIndexingResultServerBackupStatusWithDocObjectContext:snapIdToServerBackupStatus:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107fee8dc

// -[SCMemoriesSearchDatabase fetchAllSnapIndexingResultServerBackupStatusWithDocObjectContext:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107feeb34

// -[SCMemoriesSearchDatabase mobileClipCaptionCountsWithMaxConfidenceSnapIdSynchronously]
// Type encoding: @16@0:8
// Implementation: 0x107feeb8c

// -[SCMemoriesSearchDatabase insertMobileClipCaptionsForSnapId:captionToConfidenceMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107feee2c

// -[SCMemoriesSearchDatabase snapIdToConfidenceForMobileClipCaption:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fef084

// -[SCMemoriesSearchDatabase _executeDictionaryQueryWithStatement:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fef370

// -[SCMemoriesSearchDatabase _performDictionaryQueryWithStatement:synchronous:completionQueue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107fef524

// -[SCMemoriesSearchDatabase _rowidsForSnapId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fef7ec

// -[SCMemoriesSearchDatabase errorMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fef9c4

// -[SCMemoriesSearchDatabase _isColumnWithName:InTable:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107fefa98

// -[SCMemoriesSearchDatabase _setupEGODBWithDBURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fefc74

// -[SCMemoriesSearchDatabase _setupDatabase]
// Type encoding: v16@0:8
// Implementation: 0x107fefdf8

// -[SCMemoriesSearchDatabase _databaseURL]
// Type encoding: @16@0:8
// Implementation: 0x107ff0850

// -[SCMemoriesSearchDatabase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ff09c8

// +[SCMemoriesSearchDatabase _yearLikeBoundsForYear:]
// Type encoding: @20@0:8i16
// Implementation: 0x107fec780

// +[SCMemoriesSearchDatabase _isCanonicalYearMonthKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x107fec858

// +[SCMemoriesSearchDatabase _monthLikeBoundsForYearMonthKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fec96c

@end
