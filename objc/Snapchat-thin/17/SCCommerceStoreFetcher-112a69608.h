// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceStoreFetcher
// Superclass: NSObject
// Address: 0x112a69608

@interface SCCommerceStoreFetcher


// -[SCCommerceStoreFetcher initWithUserId:configProvider:grapheneRegistry:unifiedGRPCClientFactory:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1057b43dc

// -[SCCommerceStoreFetcher _vendCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x1057b46c4

// -[SCCommerceStoreFetcher _getSingleProductResponseHandler:request:startTimeStamp:error:completionBlock:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x1057b47b0

// -[SCCommerceStoreFetcher getSingleProductInfoWithId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057b4a94

// -[SCCommerceStoreFetcher _storeInfoResponseHandler:request:startTimeStamp:error:completionBlock:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x1057b4da0

// -[SCCommerceStoreFetcher getStoreInfoWithStoreId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057b5084

// -[SCCommerceStoreFetcher _getStoreProductsResponseHandler:request:startTimeStamp:error:completionBlock:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x1057b5384

// -[SCCommerceStoreFetcher getStoreProductsWithId:categoryId:limit:offset:query:completionBlock:]
// Type encoding: v64@0:8@16@24Q32Q40@48@?56
// Implementation: 0x1057b56a8

// -[SCCommerceStoreFetcher attachmentToolEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1057b5a64

// -[SCCommerceStoreFetcher _merchantInfoResponseHandler:request:startTimeStamp:error:completionBlock:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x1057b5aa4

// -[SCCommerceStoreFetcher fetchMerchantInfoWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1057b5d9c

// -[SCCommerceStoreFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057b6008

@end
