// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceItemWidgetPaginationProvider
// Superclass: NSObject
// Address: 0x1129fbc48

@interface SCCommerceItemWidgetPaginationProvider

// Property: showcaseFetcher; attributes: T@"<SCCommerceShowcaseFetching>",&,N,V_showcaseFetcher
// Property: itemWidget; attributes: T@"SCCommercePDPWidgetInfo",&,N,V_itemWidget
// Property: multiMerchantEnabled; attributes: TB,N,V_multiMerchantEnabled
// Property: pdpEntrySource; attributes: T@"SCCommercePDPEntrySource",&,N,V_pdpEntrySource
// Property: paginationCursor; attributes: T@"NSData",&,N,V_paginationCursor
// Property: hasMorePages; attributes: TB,N,V_hasMorePages
// Property: commerceOrigin; attributes: T@"SCCommerceProductCatalogSource",&,N,V_commerceOrigin
// Property: configProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_configProvider
// Property: widgetProducts; attributes: T@"NSMutableOrderedSet",&,N,V_widgetProducts
// Property: inProgressItemQueryContext; attributes: T@"NSData",&,V_inProgressItemQueryContext

// -[SCCommerceItemWidgetPaginationProvider initWithShowcaseFetcher:itemWidget:multiMerchantEnabled:pdpEntrySource:commerceOrigin:configProvider:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x104de262c

// -[SCCommerceItemWidgetPaginationProvider loadNextPageWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104de2770

// -[SCCommerceItemWidgetPaginationProvider _finishLoadingNextPageWithRecommendedProducts:paginationCursor:error:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104de2a00

// -[SCCommerceItemWidgetPaginationProvider _mapModels:]
// Type encoding: @24@0:8@16
// Implementation: 0x104de2b5c

// -[SCCommerceItemWidgetPaginationProvider hasMorePages]
// Type encoding: B16@0:8
// Implementation: 0x104de31c4

// -[SCCommerceItemWidgetPaginationProvider setHasMorePages:]
// Type encoding: v20@0:8B16
// Implementation: 0x104de31cc

// -[SCCommerceItemWidgetPaginationProvider itemWidget]
// Type encoding: @16@0:8
// Implementation: 0x104de31d4

// -[SCCommerceItemWidgetPaginationProvider setItemWidget:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de31dc

// -[SCCommerceItemWidgetPaginationProvider widgetProducts]
// Type encoding: @16@0:8
// Implementation: 0x104de320c

// -[SCCommerceItemWidgetPaginationProvider setWidgetProducts:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de3214

// -[SCCommerceItemWidgetPaginationProvider showcaseFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104de3244

// -[SCCommerceItemWidgetPaginationProvider setShowcaseFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de324c

// -[SCCommerceItemWidgetPaginationProvider multiMerchantEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104de327c

// -[SCCommerceItemWidgetPaginationProvider setMultiMerchantEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104de3284

// -[SCCommerceItemWidgetPaginationProvider pdpEntrySource]
// Type encoding: @16@0:8
// Implementation: 0x104de328c

// -[SCCommerceItemWidgetPaginationProvider setPdpEntrySource:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de3294

// -[SCCommerceItemWidgetPaginationProvider paginationCursor]
// Type encoding: @16@0:8
// Implementation: 0x104de32c4

// -[SCCommerceItemWidgetPaginationProvider setPaginationCursor:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de32cc

// -[SCCommerceItemWidgetPaginationProvider commerceOrigin]
// Type encoding: @16@0:8
// Implementation: 0x104de32fc

// -[SCCommerceItemWidgetPaginationProvider setCommerceOrigin:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de3304

// -[SCCommerceItemWidgetPaginationProvider configProvider]
// Type encoding: @16@0:8
// Implementation: 0x104de3334

// -[SCCommerceItemWidgetPaginationProvider setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de333c

// -[SCCommerceItemWidgetPaginationProvider inProgressItemQueryContext]
// Type encoding: @16@0:8
// Implementation: 0x104de336c

// -[SCCommerceItemWidgetPaginationProvider setInProgressItemQueryContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x104de3378

// -[SCCommerceItemWidgetPaginationProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104de3380

@end
