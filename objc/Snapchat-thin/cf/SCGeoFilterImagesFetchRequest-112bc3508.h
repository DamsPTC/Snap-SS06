// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGeoFilterImagesFetchRequest
// Superclass: NSObject
// Address: 0x112bc3508

@interface SCGeoFilterImagesFetchRequest


// -[SCGeoFilterImagesFetchRequest initWithGeoFilters:skipLensContent:updateBlock:completeBlock:]
// Type encoding: @44@0:8@16B24@?28@?36
// Implementation: 0x108e05b0c

// -[SCGeoFilterImagesFetchRequest fetchWithFilterContext:userSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e05d18

// -[SCGeoFilterImagesFetchRequest _getDisplayNameAndfetchImageWithFilterContext:userSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e05f44

// -[SCGeoFilterImagesFetchRequest _fetchImageWithFilterContext:userSession:displayName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108e060d4

// -[SCGeoFilterImagesFetchRequest _ucoDataFetcherWithContext:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e06290

// -[SCGeoFilterImagesFetchRequest _fetchImageWithFilterContext:userSession:displayName:ucoDataFetcher:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x108e064ac

// -[SCGeoFilterImagesFetchRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x108e0695c

// -[SCGeoFilterImagesFetchRequest _updateCallbackWithGeoFilterImage:geoFilterAppearanceSetting:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e06980

// -[SCGeoFilterImagesFetchRequest _completeCallbackWithSucceeded:cancelled:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108e0699c

// -[SCGeoFilterImagesFetchRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e069f0

@end
