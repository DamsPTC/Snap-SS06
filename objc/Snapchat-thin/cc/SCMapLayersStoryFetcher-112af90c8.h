// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLayersStoryFetcher
// Superclass: NSObject
// Address: 0x112af90c8

@interface SCMapLayersStoryFetcher


// -[SCMapLayersStoryFetcher initWithCircumstanceEngine:grpcFactory:workerQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106772eac

// -[SCMapLayersStoryFetcher fetchLayerPlaylistWithLayerId:flavor:playlistId:storyId:storyType:blockedUserIds:completion:]
// Type encoding: v72@0:8Q16@24@32@40q48@56@?64
// Implementation: 0x106772fcc

// -[SCMapLayersStoryFetcher fetchHeatmapPlaylistWithCoordinate:radius:maximumFuzzRadius:zoomLevel:storyId:blockedUserIds:completion:]
// Type encoding: v80@0:8{CLLocationCoordinate2D=dd}16d32d40d48@56@64@?72
// Implementation: 0x106773474

// -[SCMapLayersStoryFetcher _didFinishFetchingManifest:storyId:storyType:blockedUserIds:error:completion:]
// Type encoding: v64@0:8@16@24q32@40@48@?56
// Implementation: 0x106773a44

// -[SCMapLayersStoryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106773b44

@end
