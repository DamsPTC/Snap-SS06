// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCDNSelectionManager
// Superclass: NSObject
// Address: 0x112c72418

@interface SCCDNSelectionManager

// Property: cachedCDNClientConfigurationString; attributes: T@"NSString",&,V_cachedCDNClientConfigurationString
// Property: cdnClientConfig; attributes: T@"SOJUCdnCdnClientConfig",&,V_cdnClientConfig
// Property: mappedCofConfig; attributes: T@"SCMappedCdnClientConfig",&,N,V_mappedCofConfig

// -[SCCDNSelectionManager init]
// Type encoding: @16@0:8
// Implementation: 0x100106de0

// -[SCCDNSelectionManager updateHostnameForUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005a25c0

// -[SCCDNSelectionManager setCofInstance:]
// Type encoding: v24@0:8@16
// Implementation: 0x100107df8

// -[SCCDNSelectionManager _updateToLatestCOFConfigs:]
// Type encoding: v24@0:8@16
// Implementation: 0x100184bb8

// -[SCCDNSelectionManager _createPredicatesIfNil]
// Type encoding: v16@0:8
// Implementation: 0x10b275f10

// -[SCCDNSelectionManager _cdnRoutingRuleReachability]
// Type encoding: q16@0:8
// Implementation: 0x1005a27b0

// -[SCCDNSelectionManager _getDestinationHostWithReachability:routingRules:cdnInfos:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x10b2761ec

// -[SCCDNSelectionManager _getDestinationHostForCdnId:cdnInfos:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b276418

// -[SCCDNSelectionManager resetUrlMappingCaches]
// Type encoding: v16@0:8
// Implementation: 0x10b27659c

// -[SCCDNSelectionManager getCacheKeyForUrlString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005a2730

// -[SCCDNSelectionManager getUrlFromCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005a26e0

// -[SCCDNSelectionManager setUrlToCache:url:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1005a7f38

// -[SCCDNSelectionManager cachedCDNClientConfigurationString]
// Type encoding: @16@0:8
// Implementation: 0x10b2765a4

// -[SCCDNSelectionManager setCachedCDNClientConfigurationString:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2765b0

// -[SCCDNSelectionManager cdnClientConfig]
// Type encoding: @16@0:8
// Implementation: 0x10b2765b8

// -[SCCDNSelectionManager setCdnClientConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2765c4

// -[SCCDNSelectionManager mappedCofConfig]
// Type encoding: @16@0:8
// Implementation: 0x1005a2b14

// -[SCCDNSelectionManager setMappedCofConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2765cc

// -[SCCDNSelectionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2765fc

@end
