// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocManagerImpl
// Superclass: NSObject
// Address: 0x112b65098

@interface SCSnapDocManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocManagerImpl initWithContentDelivery:mediaContextTypeToTTLInDays:mediaContextTypeToIsFirstFrameRequired:circumstanceEngine:temporaryFileWriter:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107952488

// -[SCSnapDocManagerImpl queryPlaybackMediaStatusForKey:snapDoc:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x107952834

// -[SCSnapDocManagerImpl queryPlaybackMediaStatusForKey:snapDoc:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107952a6c

// -[SCSnapDocManagerImpl queryMediaStatusForKey:mediaMetadata:snapDoc:]
// Type encoding: q40@0:8@16@24@32
// Implementation: 0x107952de4

// -[SCSnapDocManagerImpl queryMediaStatusForKey:mediaMetadata:snapDoc:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107952f50

// -[SCSnapDocManagerImpl associatePlaybackMediaForKey:snapDoc:context:completePrefetch:completion:]
// Type encoding: @52@0:8@16@24@32B40@?44
// Implementation: 0x107953174

// -[SCSnapDocManagerImpl associateMediaForKey:mediaMetadata:snapDoc:context:completePrefetch:completion:]
// Type encoding: @60@0:8@16@24@32@40B48@?52
// Implementation: 0x1079534b0

// -[SCSnapDocManagerImpl retrievePlaybackMediaForKey:snapDoc:context:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10795381c

// -[SCSnapDocManagerImpl retrieveCachedPlaybackMediaForKey:snapDoc:pageInfo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107953b3c

// -[SCSnapDocManagerImpl retrieveMediaForKey:mediaMetadata:snapDoc:context:completion:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x107953da4

// -[SCSnapDocManagerImpl retrieveCachedMediaForKey:mediaMetadata:snapDoc:pageInfo:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107954450

// -[SCSnapDocManagerImpl monitorPlaybackMediaDownloadProgressForKey:snapDoc:onProgress:onError:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x107954668

// -[SCSnapDocManagerImpl monitorMediaDownloadProgressForKey:mediaId:snapDoc:onProgress:onError:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1079547f4

// -[SCSnapDocManagerImpl retrieveMediaForId:snapDoc:pageInfo:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10795493c

// -[SCSnapDocManagerImpl retrieveMediaForReference:mediaMetadata:pageInfo:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x107954cbc

// -[SCSnapDocManagerImpl createContentWriterForMediaContextType:error:]
// Type encoding: @32@0:8q16^@24
// Implementation: 0x107954f2c

// -[SCSnapDocManagerImpl createContentWriterForContentKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107954fbc

// -[SCSnapDocManagerImpl addMediaReferenceForKey:snapDoc:contentWriter:mediaType:error:]
// Type encoding: @52@0:8@16@24@32i40^@44
// Implementation: 0x107955028

// -[SCSnapDocManagerImpl addMediaReferenceForSnapDoc:mediaReference:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x107955200

// -[SCSnapDocManagerImpl updateMediaReferenceWithKey:snapDoc:contentWriter:mediaId:error:]
// Type encoding: v56@0:8@16@24@32@40^@48
// Implementation: 0x1079552d0

// -[SCSnapDocManagerImpl cloneAndUpdateMediaReferenceForSnapDoc:contentWriter:mediaListId:error:]
// Type encoding: @48@0:8@16@24Q32^@40
// Implementation: 0x1079552d4

// -[SCSnapDocManagerImpl cloneAndUpdateMediaReferenceForSnapDoc:mediaListId:newContentKey:error:]
// Type encoding: @48@0:8@16Q24@32^@40
// Implementation: 0x107955368

// -[SCSnapDocManagerImpl addMediaReferenceForKey:snapDoc:data:mediaType:error:]
// Type encoding: @52@0:8@16@24@32i40^@44
// Implementation: 0x1079553fc

// -[SCSnapDocManagerImpl addMediaReferenceForKey:fakeSnapDoc:existingContentKey:newLocalContentKey:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x10795551c

// -[SCSnapDocManagerImpl authClaimMediaWithKey:snapDoc:error:]
// Type encoding: v40@0:8@16@24^@32
// Implementation: 0x107955840

// -[SCSnapDocManagerImpl authClaimSingleMediaWithKey:mediaReference:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079558ac

// -[SCSnapDocManagerImpl authClaimMediaWithKey:mediaReferences:error:]
// Type encoding: v40@0:8@16@24^@32
// Implementation: 0x107955998

// -[SCSnapDocManagerImpl authClaimOrRegisterMediaWithKey:snapDoc:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107955b08

// -[SCSnapDocManagerImpl cloneAndReplaceMediaReferencesForSnapDoc:mediaContextType:mediaIdToContentRefMap:error:]
// Type encoding: @44@0:8@16i24@28^@36
// Implementation: 0x107956094

// -[SCSnapDocManagerImpl markClaimAsNonAuthoritativeForKey:snapDoc:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107956150

// -[SCSnapDocManagerImpl markClaimAsNonAuthoritativeForKey:mediaReferences:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079561b4

// -[SCSnapDocManagerImpl removeClaimForKey:snapDoc:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107956364

// -[SCSnapDocManagerImpl removeClaimForKey:mediaReferences:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1079563e0

// -[SCSnapDocManagerImpl authClaimMediaWithSnapDocKey:snapDoc:onComplete:onError:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x107956610

// -[SCSnapDocManagerImpl removeClaimForKeyWithSnapDocKey:snapDoc:onComplete:onError:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1079567f8

// -[SCSnapDocManagerImpl addMediaReferenceForKeyWithSnapDocKey:snapDoc:blob:mediaType:onComplete:onError:]
// Type encoding: v64@0:8@16@24@32d40@?48@?56
// Implementation: 0x107956a38

// -[SCSnapDocManagerImpl retrieveMediaForIdWithMediaId:snapDoc:requestContext:onComplete:onError:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x107956d2c

// -[SCSnapDocManagerImpl _maybeRegisterMediaForSnapDocKey:mediaReference:mediaMetadata:snapDoc:successBlock:failureBlock:]
// Type encoding: @64@0:8@16@24@32@40@?48@?56
// Implementation: 0x107957004

// -[SCSnapDocManagerImpl _maybeRegisterMediaForSnapDocKey:mediaReference:mediaMetadata:snapDoc:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1079571fc

// -[SCSnapDocManagerImpl _registerContentForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:featureMetadata:completion:]
// Type encoding: v76@0:8@16@24@32@40@48B56@60@?68
// Implementation: 0x1079579ac

// -[SCSnapDocManagerImpl _associateRequestForContentKey:completePrefetch:requestContext:completion:]
// Type encoding: @44@0:8@16B24@28@?36
// Implementation: 0x107957ad8

// -[SCSnapDocManagerImpl _retrieveContentResultForContentKey:requestContext:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x107957cc0

// -[SCSnapDocManagerImpl _retrieveCachedContentForKey:pageInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107957d64

// -[SCSnapDocManagerImpl _processRetrieveContentWithContentBundle:mediaMetadata:mediaReference:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107957e30

// -[SCSnapDocManagerImpl _decryptContentResult:key:iv:mediaType:]
// Type encoding: @44@0:8@16@24@32i40
// Implementation: 0x107958608

// -[SCSnapDocManagerImpl _shouldManuallyDecryptContentResult:mediaData:mediaType:]
// Type encoding: B36@0:8@16@24i32
// Implementation: 0x1079587ec

// -[SCSnapDocManagerImpl _headerDataForContentResult:mediaData:mediaType:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x1079588ac

// -[SCSnapDocManagerImpl _headerDataForMediaData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079589b8

// -[SCSnapDocManagerImpl _headerDataForFilePath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107958a14

// -[SCSnapDocManagerImpl _isPlaintextMediaHeaderData:forMediaType:contentResult:]
// Type encoding: B36@0:8@16i24@28
// Implementation: 0x107958b14

// -[SCSnapDocManagerImpl _supportsPlaintextMediaDetectionForMediaType:]
// Type encoding: B20@0:8i16
// Implementation: 0x107958bb8

// -[SCSnapDocManagerImpl _potentialMediaType:matchesExpectedMediaType:]
// Type encoding: B28@0:8Q16i24
// Implementation: 0x107958bf0

// -[SCSnapDocManagerImpl _decryptContentResultStreaming:key:iv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107958c5c

// -[SCSnapDocManagerImpl _streamingDecryptContentResult:inputFilePath:outputFilePath:key:iv:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107958f74

// -[SCSnapDocManagerImpl _decryptContentResultInMemoryOrDegrade:key:iv:totalSize:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x10795914c

// -[SCSnapDocManagerImpl _decryptContentResultInMemory:key:iv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107959238

// -[SCSnapDocManagerImpl _decryptFileStreaming:outputPath:key:iv:error:]
// Type encoding: B56@0:8@16@24@32@40^@48
// Implementation: 0x1079593e4

// -[SCSnapDocManagerImpl _decryptData:key:iv:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1079596c4

// -[SCSnapDocManagerImpl _updateMediaReferenceForSnapDoc:contentWriter:newContentKey:mediaListId:error:]
// Type encoding: B56@0:8@16@24@32Q40^@48
// Implementation: 0x107959768

// -[SCSnapDocManagerImpl _updateMediaReferenceWithKey:snapDoc:contentWriter:mediaId:error:]
// Type encoding: B56@0:8@16@24@32@40^@48
// Implementation: 0x107959998

// -[SCSnapDocManagerImpl _computeAndMergeResultsForSnapDoc:snapDocKey:apiType:singleResultComputeBlock:mergeResultsBlock:]
// Type encoding: @56@0:8@16@24q32@?40@?48
// Implementation: 0x107959bb0

// -[SCSnapDocManagerImpl _computeAndMergeResultsAsyncForSnapDoc:snapDocKey:apiType:singleResultComputeBlock:mergeResultsBlock:completion:]
// Type encoding: @64@0:8@16@24q32@?40@?48@?56
// Implementation: 0x107959cc4

// -[SCSnapDocManagerImpl _handleSingleResultCompletionForSingleResult:resultList:multipleTasksCompletionCallback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10795a0ec

// -[SCSnapDocManagerImpl _mediaMetadataListForSnapDoc:snapDocKey:apiType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10795a180

// -[SCSnapDocManagerImpl _logErrorForMethod:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10795a4ec

// -[SCSnapDocManagerImpl _invalidSnapDocErrorWithDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x10795a4f0

// -[SCSnapDocManagerImpl _reportError:contentKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10795a510

// -[SCSnapDocManagerImpl _validateAndGetMediaReferenceForKey:snapDoc:mediaId:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10795a57c

// -[SCSnapDocManagerImpl _validateSnapDocPlaybackMediaForKey:snapDoc:error:]
// Type encoding: v40@0:8@16@24^@32
// Implementation: 0x10795a6d8

// -[SCSnapDocManagerImpl _contentKeyForSnapDocKey:mediaReference:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10795aa3c

// -[SCSnapDocManagerImpl _addMediaReferenceForLocalContentKey:localCacheKey:snapDoc:mediaType:newMediaListIdCounter:]
// Type encoding: @52@0:8@16@24@32i40Q44
// Implementation: 0x10795ab74

// -[SCSnapDocManagerImpl _linkAndReplaceMediaRefForMediaIdToContentRefMap:snapDoc:mediaContextType:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x10795acac

// -[SCSnapDocManagerImpl _firstFrameMediaMetadataIfPresentForSnapDoc:mediaContextType:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x10795b1b8

// -[SCSnapDocManagerImpl _addToInMemoryCacheForData:contentKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10795b1e8

// -[SCSnapDocManagerImpl _authClaimInMemoryDataWithKey:mediaReference:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10795b28c

// -[SCSnapDocManagerImpl _dataFromInMemoryCacheForString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10795b3fc

// -[SCSnapDocManagerImpl _dataFromInMemoryCacheForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10795b474

// -[SCSnapDocManagerImpl _removeFromInMemoryCacheForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10795b50c

// -[SCSnapDocManagerImpl _emptyToNilForString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10795b594

// -[SCSnapDocManagerImpl _emptyToNilForData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10795b5dc

// -[SCSnapDocManagerImpl _createContentBundle:]
// Type encoding: @24@0:8@16
// Implementation: 0x10795b624

// -[SCSnapDocManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10795b7bc

@end
