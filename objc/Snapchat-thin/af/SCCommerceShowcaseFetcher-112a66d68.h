// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceShowcaseFetcher
// Superclass: NSObject
// Address: 0x112a66d68

@interface SCCommerceShowcaseFetcher

// Property: grapheneNetworkLogger; attributes: T@"SCCommerceGrapheneNetworkLogger",&,N,V_grapheneNetworkLogger
// Property: showcaseGRPCService; attributes: T@"SCLazy",&,N,V_showcaseGRPCService
// Property: countryCodeProvider; attributes: T@"SCLazy",&,N,V_countryCodeProvider
// Property: configProvider; attributes: T@"SCLazy",&,N,V_configProvider

// -[SCCommerceShowcaseFetcher initWithGrapheneRegistry:showcaseGrpcService:countryCodeProvider:configProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10579e108

// -[SCCommerceShowcaseFetcher getCatalogWithQuery:limit:cursor:filter:completionBlock:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x10579e214

// -[SCCommerceShowcaseFetcher getProductDetails:source:completionBlock:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x10579e5c8

// -[SCCommerceShowcaseFetcher getWidgetProductsWithWidgetContext:source:limit:cursor:completionBlock:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x10579e8ec

// -[SCCommerceShowcaseFetcher getItemVariantData:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10579ec90

// -[SCCommerceShowcaseFetcher getStoresForUser:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10579eeb4

// -[SCCommerceShowcaseFetcher getStoreWithId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10579f0f0

// -[SCCommerceShowcaseFetcher _didGetShowcaseResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10579f348

// -[SCCommerceShowcaseFetcher _didGetProductDetailsResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10579f5e8

// -[SCCommerceShowcaseFetcher _didGetRecommendationsResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10579f840

// -[SCCommerceShowcaseFetcher _didGetStoresForUserResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10579fae0

// -[SCCommerceShowcaseFetcher _didGetStoresWithIdResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10579fc54

// -[SCCommerceShowcaseFetcher _didGetVariantDataResponse:error:request:startTimestamp:completion:]
// Type encoding: v56@0:8@16@24@32d40@?48
// Implementation: 0x10579fda8

// -[SCCommerceShowcaseFetcher _showcaseContextForSource:]
// Type encoding: @24@0:8@16
// Implementation: 0x10579ffdc

// -[SCCommerceShowcaseFetcher _checkForErrorWithResponse:grpcError:responseError:requestId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1057a01c0

// -[SCCommerceShowcaseFetcher _logRequestMetricForService:additionalContext:request:response:startTimestamp:responseError:grpcError:]
// Type encoding: v72@0:8Q16@24@32@40d48@56@64
// Implementation: 0x1057a034c

// -[SCCommerceShowcaseFetcher _vendGRPCCallBuilder]
// Type encoding: @16@0:8
// Implementation: 0x1057a04d4

// -[SCCommerceShowcaseFetcher _vendDeviceContext]
// Type encoding: @16@0:8
// Implementation: 0x1057a0678

// -[SCCommerceShowcaseFetcher _showcaseRoutingHeader]
// Type encoding: @16@0:8
// Implementation: 0x1057a06d8

// -[SCCommerceShowcaseFetcher grapheneNetworkLogger]
// Type encoding: @16@0:8
// Implementation: 0x1057a0738

// -[SCCommerceShowcaseFetcher setGrapheneNetworkLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a0740

// -[SCCommerceShowcaseFetcher showcaseGRPCService]
// Type encoding: @16@0:8
// Implementation: 0x1057a0770

// -[SCCommerceShowcaseFetcher setShowcaseGRPCService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a0778

// -[SCCommerceShowcaseFetcher countryCodeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1057a07a8

// -[SCCommerceShowcaseFetcher setCountryCodeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a07b0

// -[SCCommerceShowcaseFetcher configProvider]
// Type encoding: @16@0:8
// Implementation: 0x1057a07e0

// -[SCCommerceShowcaseFetcher setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a07e8

// -[SCCommerceShowcaseFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057a0818

@end
