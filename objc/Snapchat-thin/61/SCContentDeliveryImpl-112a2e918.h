// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContentDeliveryImpl
// Superclass: NSObject
// Address: 0x112a2e918

@interface SCContentDeliveryImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContentDeliveryImpl initWithContentManager:cacheScope:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105397798

// -[SCContentDeliveryImpl initWithContentManager:cacheScope:grapheneRegistry:userBlizzard:useStreamingRequestHandle:applicationLifecycleEvents:]
// Type encoding: @60@0:8@16q24@32@40B48@52
// Implementation: 0x105397854

// -[SCContentDeliveryImpl claimExistingContentWithContentBundle:newContentKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105397aac

// -[SCContentDeliveryImpl claimExistingContent:newContentKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105397af4

// -[SCContentDeliveryImpl linkContentForExistingCacheKey:contentReference:mediaContextType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x105397bcc

// -[SCContentDeliveryImpl registerBoltContent:contentKey:mediaType:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:serializedFeatureMetadata:completion:]
// Type encoding: v84@0:8@16@24q32@40@48@56B64@68@?76
// Implementation: 0x105397c14

// -[SCContentDeliveryImpl registerContentForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:completion:]
// Type encoding: v68@0:8@16@24@32@40@48B56@?60
// Implementation: 0x105397c20

// -[SCContentDeliveryImpl registerContentWithTransformParamsForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:transformParams:serializedFeatureMetadata:completion:]
// Type encoding: v84@0:8@16@24@32@40@48B56@60@68@?76
// Implementation: 0x105397c44

// -[SCContentDeliveryImpl registerIfRequiredAndRetrieveContentForContentKey:request:encryptionKey:encryptionIV:pageInfo:expirationDate:isEligibleForStreaming:completion:]
// Type encoding: @76@0:8@16@24@32@40@48@56B64@?68
// Implementation: 0x105397ddc

// -[SCContentDeliveryImpl retrieveContentWithContentBundle:pageInfo:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x105398024

// -[SCContentDeliveryImpl retrieveContentDataForContentKey:pageInfo:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10539833c

// -[SCContentDeliveryImpl retrieveContentDataForContentKey:requestContext:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x105398468

// -[SCContentDeliveryImpl retrieveContentResultForContentKey:pageInfo:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1053986c4

// -[SCContentDeliveryImpl retrieveContentResultForContentKey:pageInfo:switchBoardKey:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1053986d0

// -[SCContentDeliveryImpl retrieveContentResultForContentKey:requestContext:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1053987b0

// -[SCContentDeliveryImpl retrieveContentResultForContentKey:prefetchSignals:requestContext:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1053987c0

// -[SCContentDeliveryImpl retrieveCachedContentForKey:pageInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105398cfc

// -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:serializedFeatureMetadata:completion:]
// Type encoding: @92@0:8@16@24@32@40B48@52B60B64@68@76@?84
// Implementation: 0x105398d04

// -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:completion:]
// Type encoding: @84@0:8@16@24@32@40B48@52B60B64@68@?76
// Implementation: 0x105398f88

// -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:transformParams:serializedFeatureMetadata:completion:]
// Type encoding: @100@0:8@16@24@32@40B48@52B60B64@68@76@84@?92
// Implementation: 0x105398fc0

// -[SCContentDeliveryImpl downloadBoltContentForContentKey:contentObject:key:iv:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:mediaType:expirationDate:serializedFeatureMetadata:completion:]
// Type encoding: @100@0:8@16@24@32@40B48@52B60B64q68@76@84@?92
// Implementation: 0x105399258

// -[SCContentDeliveryImpl downloadBoltContentForContentKey:contentObject:key:iv:userInitiated:requestContext:isEligibleForStreaming:completePrefetch:mediaType:expirationDate:completion:]
// Type encoding: @92@0:8@16@24@32@40B48@52B60B64q68@76@?84
// Implementation: 0x10539951c

// -[SCContentDeliveryImpl downloadContentForContentKey:key:iv:request:requestContext:isEligibleForStreaming:completePrefetch:expirationDate:transformParams:serializedFeatureMetadata:completion:]
// Type encoding: @96@0:8@16@24@32@40@48B56B60@64@72@80@?88
// Implementation: 0x105399558

// -[SCContentDeliveryImpl downloadBoltContentForContentKey:contentObject:key:iv:requestContext:isEligibleForStreaming:completePrefetch:mediaType:expirationDate:serializedFeatureMetadata:completion:]
// Type encoding: @96@0:8@16@24@32@40@48B56B60q64@72@80@?88
// Implementation: 0x1053997e0

// -[SCContentDeliveryImpl saveLocalContent:contentKey:expirationDate:isAuthoritative:serializedFeatureMetadata:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x105399a98

// -[SCContentDeliveryImpl saveLocalContent:contentKey:expirationDate:isAuthoritative:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x105399bc8

// -[SCContentDeliveryImpl queryContentStatusForContentKey:]
// Type encoding: q24@0:8@16
// Implementation: 0x105399bd4

// -[SCContentDeliveryImpl queryZipEntryContentStatusFor:zipEntryNamePrefixes:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x105399c20

// -[SCContentDeliveryImpl queryContentStatusForContentKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105399c8c

// -[SCContentDeliveryImpl queryZipEntryContentStatusAsyncFor:zipEntryNamePrefixes:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105399d6c

// -[SCContentDeliveryImpl removeContentForContentKeys:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105399e6c

// -[SCContentDeliveryImpl removeAllContentForContextType:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x105399f50

// -[SCContentDeliveryImpl associateRequestForContentKey:prefetchSignals:requestContext:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10539a020

// -[SCContentDeliveryImpl associateRequestForContentKey:prefetchSignals:requestContext:contentResultCompletion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10539a184

// -[SCContentDeliveryImpl releaseLocalAuthoritativeContentForContentKey:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10539a348

// -[SCContentDeliveryImpl refreshContentAvailabilityForContentKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x10539a430

// -[SCContentDeliveryImpl appStateChangedToBackground]
// Type encoding: v16@0:8
// Implementation: 0x10539a530

// -[SCContentDeliveryImpl stopObservingApplicationLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x10539a53c

// -[SCContentDeliveryImpl createContentWriterForContentKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10539a568

// -[SCContentDeliveryImpl createContentWriterForMediaContextType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10539a5c0

// -[SCContentDeliveryImpl monitorDownloadProgressForKey:onProgress:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10539a5cc

// -[SCContentDeliveryImpl queryCachedContentMetadata:onSuccess:onError:]
// Type encoding: v40@0:8q16@?24@?32
// Implementation: 0x10539a668

// -[SCContentDeliveryImpl queryCachedContentMetadataWithAttribution:contentAttribution:onSuccess:onError:]
// Type encoding: v44@0:8q16i24@?28@?36
// Implementation: 0x10539a6f4

// -[SCContentDeliveryImpl retrieveCompleteContentForStreamingResult:serialCallbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10539a788

// -[SCContentDeliveryImpl logConsumedForContentKey:useCase:bytesRange:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10539a798

// -[SCContentDeliveryImpl _registerCallbackFromCompletion:contentKey:]
// Type encoding: @32@0:8@?16@24
// Implementation: 0x10539a800

// -[SCContentDeliveryImpl _downloadContentForContentKey:userInitiated:completePrefetch:requestContext:cancelableGroup:completion:]
// Type encoding: v56@0:8@16B24B28@32@40@?48
// Implementation: 0x10539a8d0

// -[SCContentDeliveryImpl _downloadContentForContentKey:completePrefetch:requestContext:cancelableGroup:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x10539ab2c

// -[SCContentDeliveryImpl _registerBoltContent:contentKey:mediaType:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:serializedFeatureMetadata:completion:]
// Type encoding: v84@0:8@16@24q32@40@48@56B64@68@?76
// Implementation: 0x10539aca0

// -[SCContentDeliveryImpl _registerContentForContentKey:request:encryptionKey:encryptionIv:expirationDate:isEligibleForStreaming:serializedFeatureMetadata:completion:]
// Type encoding: v76@0:8@16@24@32@40@48B56@60@?68
// Implementation: 0x10539ae1c

// -[SCContentDeliveryImpl _handleRegistrationCompletionForContentKey:regSuccess:pageInfo:cancelableGroup:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x10539af98

// -[SCContentDeliveryImpl _temporaryAssertionForMemoriesWithContextType:mdpCommonTrigger:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10539b12c

// -[SCContentDeliveryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10539b130

// +[SCContentDeliveryImpl _resolvedSuccessWithStatus:]
// Type encoding: B24@0:8q16
// Implementation: 0x10539b120

@end
