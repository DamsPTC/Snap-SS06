// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverVideoCatalogService
// Superclass: NSObject
// Address: 0x112b6ebe8

@interface SCDiscoverVideoCatalogService

// Property: listeners; attributes: T@"NSPointerArray",&,N,V_listeners
// Property: loadingCatalogs; attributes: T@"NSMutableSet",&,N,V_loadingCatalogs
// Property: videoCatalogMap; attributes: T@"NSMutableDictionary",&,N,V_videoCatalogMap
// Property: adVideoCatalogEndpoint; attributes: T@"NSString",R,D,N

// -[SCDiscoverVideoCatalogService initWithCircumstanceEngine:networkConnectivityAnnouncer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107aaeda4

// -[SCDiscoverVideoCatalogService updateEndpointFromCircumstanceEngine]
// Type encoding: v16@0:8
// Implementation: 0x107aaeed4

// -[SCDiscoverVideoCatalogService _setupAdServiceEndpointFromCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaef30

// -[SCDiscoverVideoCatalogService _adServiceEndpointFromCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaf070

// -[SCDiscoverVideoCatalogService fetchCatalogForAdWithVideoId:withListener:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aaf124

// -[SCDiscoverVideoCatalogService catalogForVideoId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aaf4f0

// -[SCDiscoverVideoCatalogService requestDidSucceed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107aaf578

// -[SCDiscoverVideoCatalogService propertiesForVideoId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aaf670

// -[SCDiscoverVideoCatalogService fetchPropertiesForPage:listener:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aaf674

// -[SCDiscoverVideoCatalogService adVideoCatalogEndpoint]
// Type encoding: @16@0:8
// Implementation: 0x107aaf730

// -[SCDiscoverVideoCatalogService listeners]
// Type encoding: @16@0:8
// Implementation: 0x107aaf878

// -[SCDiscoverVideoCatalogService setListeners:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaf880

// -[SCDiscoverVideoCatalogService loadingCatalogs]
// Type encoding: @16@0:8
// Implementation: 0x107aaf8b0

// -[SCDiscoverVideoCatalogService setLoadingCatalogs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaf8b8

// -[SCDiscoverVideoCatalogService videoCatalogMap]
// Type encoding: @16@0:8
// Implementation: 0x107aaf8e8

// -[SCDiscoverVideoCatalogService setVideoCatalogMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaf8f0

// -[SCDiscoverVideoCatalogService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aaf920

@end
