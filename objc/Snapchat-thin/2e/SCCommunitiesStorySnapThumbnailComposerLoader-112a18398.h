// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommunitiesStorySnapThumbnailComposerLoader
// Superclass: NSObject
// Address: 0x112a18398

@interface SCCommunitiesStorySnapThumbnailComposerLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommunitiesStorySnapThumbnailComposerLoader initWithMyStoriesDataCoordinator:storiesThumbnailCoordinator:storiesPlaybackDataProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100bd8af4

// -[SCCommunitiesStorySnapThumbnailComposerLoader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x105103760

// -[SCCommunitiesStorySnapThumbnailComposerLoader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1051037cc

// -[SCCommunitiesStorySnapThumbnailComposerLoader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x1051038d0

// -[SCCommunitiesStorySnapThumbnailComposerLoader _fetchSnapWithThumbnailParams:playbackSequence:completion:cancelableGroup:parameters:]
// Type encoding: v64@0:8@16@24@?32@40{SCValdiAssetRequestParameters=qq}48
// Implementation: 0x105103b0c

// -[SCCommunitiesStorySnapThumbnailComposerLoader _fetchSnapForAdditionalStoriesWithThumbnailParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x105103d48

// -[SCCommunitiesStorySnapThumbnailComposerLoader _loadThumbnailForSnap:parameters:completion:]
// Type encoding: v48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x105103f60

// -[SCCommunitiesStorySnapThumbnailComposerLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105104168

@end
