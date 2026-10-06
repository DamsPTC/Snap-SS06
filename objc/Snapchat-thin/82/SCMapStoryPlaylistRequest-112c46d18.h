// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapStoryPlaylistRequest
// Superclass: NSObject
// Address: 0x112c46d18

@interface SCMapStoryPlaylistRequest


// -[SCMapStoryPlaylistRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10afe0f84

// -[SCMapStoryPlaylistRequest hash]
// Type encoding: Q16@0:8
// Implementation: 0x10afe0fa8

// -[SCMapStoryPlaylistRequest internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10afe1128

// -[SCMapStoryPlaylistRequest isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10afe116c

// -[SCMapStoryPlaylistRequest matchPoiPlaylistRequest:localityPlaylistRequest:placePlaylistRequest:heatmapPlaylistRequest:layerPlaylistRequest:chatSnapPlaylistRequest:]
// Type encoding: v64@0:8@?16@?24@?32@?40@?48@?56
// Implementation: 0x10afe141c

// -[SCMapStoryPlaylistRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10afe159c

// +[SCMapStoryPlaylistRequest chatSnapPlaylistRequestWithSnapId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10afe0c08

// +[SCMapStoryPlaylistRequest heatmapPlaylistRequestWithLatitude:longitude:radiusMeters:maximumFuzzRadius:zoomLevel:]
// Type encoding: @56@0:8d16d24d32d40d48
// Implementation: 0x10afe0c74

// +[SCMapStoryPlaylistRequest layerPlaylistRequestWithLayerId:flavor:playlistId:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x10afe0cf8

// +[SCMapStoryPlaylistRequest localityPlaylistRequestWithVerrazanoId:localizedLocality:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10afe0d9c

// +[SCMapStoryPlaylistRequest placePlaylistRequestWithVerrazanoId:providerPhotos:useGooglePhotos:useAlternateRanking:requestId:source:]
// Type encoding: @56@0:8@16@24B32B36@40Q48
// Implementation: 0x10afe0e34

// +[SCMapStoryPlaylistRequest poiPlaylistRequestWithPoiId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10afe0f20

@end
