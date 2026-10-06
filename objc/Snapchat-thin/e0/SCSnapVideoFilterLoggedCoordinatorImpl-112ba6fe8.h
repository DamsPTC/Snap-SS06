// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapVideoFilterLoggedCoordinatorImpl
// Superclass: NSObject
// Address: 0x112ba6fe8

@interface SCSnapVideoFilterLoggedCoordinatorImpl


// -[SCSnapVideoFilterLoggedCoordinatorImpl initWithSnapVideoFilterCoordinator:grapheneRegistryLazy:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108550b28

// -[SCSnapVideoFilterLoggedCoordinatorImpl filterVideoAndCreateThumbnailUsingSnapVideoFilter:withMediaId:skipTranscodingIfPossible:crossPostToStoryInfo:completion:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x108550bcc

// -[SCSnapVideoFilterLoggedCoordinatorImpl filterVideoUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:skipTranscodingIfPossible:crossPostToStoryInfo:completion:]
// Type encoding: v76@0:8@16@24q32{CGSize=dd}40B56@60@?68
// Implementation: 0x108551040

// -[SCSnapVideoFilterLoggedCoordinatorImpl filterVideoFragmentedUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:segmentOutputBlock:crossPostToStoryInfo:completion:]
// Type encoding: v80@0:8@16@24q32{CGSize=dd}40@?56@64@?72
// Implementation: 0x1085512b8

// -[SCSnapVideoFilterLoggedCoordinatorImpl retryTranscodingForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108551540

// -[SCSnapVideoFilterLoggedCoordinatorImpl resetTranscodingForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108551760

// -[SCSnapVideoFilterLoggedCoordinatorImpl transcodingRegisteredForMediaId:]
// Type encoding: B24@0:8@16
// Implementation: 0x108551768

// -[SCSnapVideoFilterLoggedCoordinatorImpl persistSnapVideoFilter:forMediaId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108551770

// -[SCSnapVideoFilterLoggedCoordinatorImpl retrieveCachedSnapVideoFilterForMediaId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108551778

// -[SCSnapVideoFilterLoggedCoordinatorImpl removeCachedSnapVideoFilterForMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108551780

// -[SCSnapVideoFilterLoggedCoordinatorImpl setTranscodeStatusReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x108551788

// -[SCSnapVideoFilterLoggedCoordinatorImpl setChainedTranscodeFiringBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108551790

// -[SCSnapVideoFilterLoggedCoordinatorImpl fireCrossPostToStoryTranscodeWithData:overlayData:url:isImage:crossPostToStoryInfo:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x108551798

// -[SCSnapVideoFilterLoggedCoordinatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085517a0

@end
