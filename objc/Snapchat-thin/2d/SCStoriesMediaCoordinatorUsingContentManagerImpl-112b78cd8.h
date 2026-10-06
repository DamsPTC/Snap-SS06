// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesMediaCoordinatorUsingContentManagerImpl
// Superclass: NSObject
// Address: 0x112b78cd8

@interface SCStoriesMediaCoordinatorUsingContentManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl initWithContentDelivery:circumstanceEngine:storiesGrapheneMetricsEmitter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10093881c

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryMediaStateForMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc2b84

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl mediaStateForMedia:]
// Type encoding: q24@0:8@16
// Implementation: 0x107cc2cdc

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryNonStreamingCachedDataLocallyForMediaInfo:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc2d40

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryNonStreamingMediaDataForMediaInfo:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc2dc4

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryCachedDataLocallyForMediaInfo:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc2f30

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl batchQueryLocallyCachedDataForClientIds:storyType:completionQueue:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x107cc2fb4

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl batchQueryMediaStateForMediaInfos:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc3354

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryForMediaInfo:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc36d0

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl deleteAllMediaFromCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107cc3760

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryLocalMediaDataToUploadWithCacheKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc38c8

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryMediaForMediaInfo:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc38d0

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10093aaac

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc3be0

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceDidUpdateMediaStateChangeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc3be8

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceDidUpdateMediaStateIdempotencyRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc3c20

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceDidUpdateStoriesMediaAddedRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc3c58

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceForceableDeletionsForCacheKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc3c90

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl fetchMediaForMediaInfo:userInitiated:completePrefetch:contexts:trigger:batchId:completion:]
// Type encoding: @64@0:8@16B24B28@32q40@48@?56
// Implementation: 0x107cc3dc0

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl forceFetchMediaForMediaInfo:userInitiated:completePrefetch:contexts:trigger:batchId:completion:]
// Type encoding: v64@0:8@16B24B28@32q40@48@?56
// Implementation: 0x107cc3de8

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _requestInfoForMedia:userInitiated:contexts:batchId:]
// Type encoding: @44@0:8@16B24@28@36
// Implementation: 0x107cc3e18

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl deleteMediaForMediaInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc3ed4

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl saveStoriesMediaForMediaInfo:decryptedMedia:shouldGenerateThumbnails:completionQueue:completion:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x107cc3fe4

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl releaseLocalAuthoritativeStoriesMediaForCacheKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cc42d0

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _announceOperationAndStateIdempotencyForAlreadyExistingCacheKey:contentStatus:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107cc42d8

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _queryCachedDataLocallyForMediaInfo:contexts:queryNonStreaming:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x107cc4358

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _retrieveMediaDataForMediaInfo:userInitiated:contexts:trigger:queryNonStreaming:completion:]
// Type encoding: v56@0:8@16B24@28q36B44@?48
// Implementation: 0x107cc46a4

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _retrieveNonStreamingDownloadedContentForMedia:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc4bac

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _retrieveDownloadedContentForMedia:contexts:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc4c6c

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _mediaStateFromContentStatus:]
// Type encoding: q24@0:8q16
// Implementation: 0x107cc4d74

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _fetchMediaForMediaInfo:userInitiated:completePrefetch:contexts:trigger:forceFetch:batchId:completion:]
// Type encoding: @68@0:8@16B24B28@32q40B48@52@?60
// Implementation: 0x107cc4d98

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl _reportFSNBlobInfo:callSite:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107cc5318

// -[SCStoriesMediaCoordinatorUsingContentManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cc5410

@end
