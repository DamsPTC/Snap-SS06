// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesTimelineSnapDocParser
// Superclass: NSObject
// Address: 0x112b87d28

@interface SCMemoriesTimelineSnapDocParser

// Property: snapDoc; attributes: T@"SDMSnapDoc",R,N,V_snapDoc

// -[SCMemoriesTimelineSnapDocParser timelineConfigurationWithBlizzardLogger:usageType:segmentsEditable:tinsel:completion:]
// Type encoding: v52@0:8@16q24B32@36@?44
// Implementation: 0x10703b4e4

// -[SCMemoriesTimelineSnapDocParser _timelineConfigurationFromAssetURLs:mediaMetadatas:timeRanges:creativeEditTags:usageType:snapSource:segmentsEditable:blizzardLogger:tinsel:completion:]
// Type encoding: v92@0:8@16@24@32@40q48q56B64@68@76@?84
// Implementation: 0x10703bac0

// -[SCMemoriesTimelineSnapDocParser _addSegmentAtIndex:assetURLs:mediaMetadatas:timeRanges:creativeEditTags:snapSource:toTimelineConfiguration:completion:]
// Type encoding: v76@0:8i16@20@28@36@44q52@60@?68
// Implementation: 0x10703bbf0

// -[SCMemoriesTimelineSnapDocParser _addSegmentForImage:imageURL:timeRange:creativeEditTag:snapSource:toTimelineConfiguration:completion:]
// Type encoding: v72@0:8@16@24@32@40q48@56@?64
// Implementation: 0x10703c1d0

// -[SCMemoriesTimelineSnapDocParser _addSegmentForVideoURL:toTimelineConfiguration:mediaDurationMs:timeRange:creativeEditTag:snapSource:externalMediaSource:completion:]
// Type encoding: v72@0:8@16@24I32@36@44q52i60@?64
// Implementation: 0x10703c498

// -[SCMemoriesTimelineSnapDocParser initWithSnapDocManager:snapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e58be0

// -[SCMemoriesTimelineSnapDocParser retrieveCTItemRenderEffects]
// Type encoding: @16@0:8
// Implementation: 0x107e58d58

// -[SCMemoriesTimelineSnapDocParser retrieveBaseMediaRenderEffects]
// Type encoding: @16@0:8
// Implementation: 0x107e597f0

// -[SCMemoriesTimelineSnapDocParser retrieveBaseMediasWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e5a274

// -[SCMemoriesTimelineSnapDocParser retrieveFirstSegmentMetadataWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e5b198

// -[SCMemoriesTimelineSnapDocParser retrieveMultipleSegmentMetadataWithFullBaseMediaDownload:completionBlock:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x107e5b8c8

// -[SCMemoriesTimelineSnapDocParser retrieveGlobalSOJUEditsSynchronouslyWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x107e5c844

// -[SCMemoriesTimelineSnapDocParser retrieveLocalSOJUEditsSynchronouslyWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x107e5ccec

// -[SCMemoriesTimelineSnapDocParser retrieveSegmentTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x107e5d184

// -[SCMemoriesTimelineSnapDocParser retrieveSegmentCreativeEditTags]
// Type encoding: @16@0:8
// Implementation: 0x107e5d840

// -[SCMemoriesTimelineSnapDocParser retrieveGlobalOverlayFormatWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e5d978

// -[SCMemoriesTimelineSnapDocParser retrieveGlobalGenericAssetWithAssetType:completionBlock:]
// Type encoding: v28@0:8i16@?20
// Implementation: 0x107e5de70

// -[SCMemoriesTimelineSnapDocParser retrieveMultipleGlobalGenericAssetsWithAssetType:completionBlock:]
// Type encoding: v28@0:8i16@?20
// Implementation: 0x107e5e35c

// -[SCMemoriesTimelineSnapDocParser _keyForMedia:inSnapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107e5edcc

// -[SCMemoriesTimelineSnapDocParser _retrieveSegmentWithMediaMetadata:baseMediaRenderEffect:overlayImageMetadata:sojuEditsData:genericAssetsMetadata:fullyLoadBaseMedia:isForThumbnail:completion:]
// Type encoding: v72@0:8@16@24@32@40@48B56B60@?64
// Implementation: 0x107e5ee3c

// -[SCMemoriesTimelineSnapDocParser snapDoc]
// Type encoding: @16@0:8
// Implementation: 0x107e5fedc

// -[SCMemoriesTimelineSnapDocParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e5fee4

@end
