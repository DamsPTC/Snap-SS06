// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapVideoFilterCoordinatorImpl
// Superclass: NSObject
// Address: 0x112ba6f48

@interface SCSnapVideoFilterCoordinatorImpl


// -[SCSnapVideoFilterCoordinatorImpl initWithMediaOverlayCoordinator:retryLimit:persistConverter:stateValidator:lensProcessingLauncher:cache:logger:appLifeCycleManager:diskPerformer:circumstanceEngine:]
// Type encoding: @96@0:8@16Q24@32@40@48@56@64@72@80@88
// Implementation: 0x10854c130

// -[SCSnapVideoFilterCoordinatorImpl filterVideoAndCreateThumbnailUsingSnapVideoFilter:withMediaId:skipTranscodingIfPossible:crossPostToStoryInfo:completion:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x10854c3cc

// -[SCSnapVideoFilterCoordinatorImpl filterVideoUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:skipTranscodingIfPossible:crossPostToStoryInfo:completion:]
// Type encoding: v76@0:8@16@24q32{CGSize=dd}40B56@60@?68
// Implementation: 0x10854c548

// -[SCSnapVideoFilterCoordinatorImpl filterVideoFragmentedUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:segmentOutputBlock:crossPostToStoryInfo:completion:]
// Type encoding: v80@0:8@16@24q32{CGSize=dd}40@?56@64@?72
// Implementation: 0x10854c808

// -[SCSnapVideoFilterCoordinatorImpl retryTranscodingForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10854cb50

// -[SCSnapVideoFilterCoordinatorImpl resetTranscodingForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10854d04c

// -[SCSnapVideoFilterCoordinatorImpl _fetchAndRetryWithMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10854d2a4

// -[SCSnapVideoFilterCoordinatorImpl _retryWithMediaId:videoFilter:retryDataSource:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x10854d4a8

// -[SCSnapVideoFilterCoordinatorImpl _setupLensProcessingIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x10854d9e0

// -[SCSnapVideoFilterCoordinatorImpl _resetLensProcessingWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10854da54

// -[SCSnapVideoFilterCoordinatorImpl transcodingRegisteredForMediaId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10854dab0

// -[SCSnapVideoFilterCoordinatorImpl persistSnapVideoFilter:forMediaId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10854db48

// -[SCSnapVideoFilterCoordinatorImpl retrieveCachedSnapVideoFilterForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10854dbe8

// -[SCSnapVideoFilterCoordinatorImpl removeCachedSnapVideoFilterForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10854dbec

// -[SCSnapVideoFilterCoordinatorImpl _fetchCachedVideoFilterForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10854dbf0

// -[SCSnapVideoFilterCoordinatorImpl _kickOffTranscodeAndThumbnailAttemptWithSnapVideoFilter:retryCount:mediaId:skipTranscodingIfPossible:completion:]
// Type encoding: v52@0:8@16q24@32B40@?44
// Implementation: 0x10854df88

// -[SCSnapVideoFilterCoordinatorImpl _kickOffTranscodeAttemptWithSnapVideoFilter:retryCount:mediaId:outputBitrate:videoTargetSize:skipTranscodingIfPossible:completion:]
// Type encoding: v76@0:8@16q24@32q40{CGSize=dd}48B64@?68
// Implementation: 0x10854e504

// -[SCSnapVideoFilterCoordinatorImpl _kickOffFragmentedTranscodeAttemptWithSnapVideoFilter:retryCount:mediaId:outputBitrate:videoTargetSize:segmentOutputBlock:completion:]
// Type encoding: v80@0:8@16q24@32q40{CGSize=dd}48@?64@?72
// Implementation: 0x10854eb20

// -[SCSnapVideoFilterCoordinatorImpl _persistSnapVideoFilter:forMediaId:retryCount:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x10854f014

// -[SCSnapVideoFilterCoordinatorImpl _evictInMemorySnapVideoFilterForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10854f69c

// -[SCSnapVideoFilterCoordinatorImpl _isCancelledTranscodeError:]
// Type encoding: B24@0:8@16
// Implementation: 0x10854f704

// -[SCSnapVideoFilterCoordinatorImpl _removeSnapVideoFilterForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10854f788

// -[SCSnapVideoFilterCoordinatorImpl setChainedTranscodeFiringBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10854f934

// -[SCSnapVideoFilterCoordinatorImpl setTranscodeStatusReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10854f9ac

// -[SCSnapVideoFilterCoordinatorImpl _attachStatusReportingToFilter:mediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10854f9b8

// -[SCSnapVideoFilterCoordinatorImpl fireCrossPostToStoryTranscodeWithData:overlayData:url:isImage:crossPostToStoryInfo:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x10854fcec

// -[SCSnapVideoFilterCoordinatorImpl _storeCrossPostToStoryInfo:forMediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10854fd10

// -[SCSnapVideoFilterCoordinatorImpl _fireChainedTranscodeIfNeededWithMediaId:data:overlayData:url:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10854fd18

// -[SCSnapVideoFilterCoordinatorImpl _fireChainedTranscodeWithInfo:data:overlayData:url:isImage:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10854fe00

// -[SCSnapVideoFilterCoordinatorImpl _retrievalErrorWithRetrievedModel:]
// Type encoding: q24@0:8@16
// Implementation: 0x10854ff20

// -[SCSnapVideoFilterCoordinatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108550044

@end
