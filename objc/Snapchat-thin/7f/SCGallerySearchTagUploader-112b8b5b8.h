// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySearchTagUploader
// Superclass: NSObject
// Address: 0x112b8b5b8

@interface SCGallerySearchTagUploader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySearchTagUploader initWithMemoriesSearchDatabase:networker:dataObjectContext:docObjectContext:coreConfigProvider:galleryProfile:faceTaggingDataProvider:faceTaggingPermissionsManager:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107f28240

// -[SCGallerySearchTagUploader dedicatedQueue]
// Type encoding: @16@0:8
// Implementation: 0x107f28504

// -[SCGallerySearchTagUploader runWithServiceTerm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f2850c

// -[SCGallerySearchTagUploader _submitUploadTagsRequestWithSnapTagsList:existingSnapTagsList:syncedSnapIds:serviceTerm:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x107f28ab8

// -[SCGallerySearchTagUploader _retryWaitForFaceProcessedWithServiceTerm:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107f29340

// -[SCGallerySearchTagUploader _tagsStringBySettingFaceTag:inTagsJsonString:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f299c0

// -[SCGallerySearchTagUploader _handleFaceDataForEnqueueSnapId:tagsInOneSnapBuilder:faceDataValue:memDataIds:tagVersion:backupStatus:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x107f29ba4

// -[SCGallerySearchTagUploader _addSnapTagsToUploadWithSnapId:memDataIds:tagVersion:tagsString:backupStatus:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107f29de4

// -[SCGallerySearchTagUploader _base64StringFromFaceDataArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f29f74

// -[SCGallerySearchTagUploader enqueueSnap:entryId:memDataIds:locationTags:timeTags:metaTags:visualTagToConfidenceMap:tagVersion:languageId:tagClusterName:locationClusterName:caption:tinyClipCaptionToConfidenceMaps:tinyClipModelVersion:]
// Type encoding: v124@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112i120
// Implementation: 0x107f2a544

// -[SCGallerySearchTagUploader invalidate]
// Type encoding: v16@0:8
// Implementation: 0x107f2af74

// -[SCGallerySearchTagUploader regularScheduleNotifier]
// Type encoding: @16@0:8
// Implementation: 0x107f2af7c

// -[SCGallerySearchTagUploader defaultNotifierWithLowPowerMode]
// Type encoding: @16@0:8
// Implementation: 0x107f2af90

// -[SCGallerySearchTagUploader filterIneligibleSnapsFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f2af9c

// -[SCGallerySearchTagUploader _isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x107f2b1fc

// -[SCGallerySearchTagUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f2b21c

@end
