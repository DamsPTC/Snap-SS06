// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceDeepLink
// Superclass: NSObject
// Address: 0x112b36978

@interface SCCommerceDeepLink

// Property: type; attributes: Tq,R,N,V_type
// Property: source; attributes: Tq,R,N,V_source
// Property: productId; attributes: T@"NSString",R,N,V_productId
// Property: storeId; attributes: T@"NSString",R,N,V_storeId
// Property: categoryId; attributes: T@"NSString",R,N,V_categoryId
// Property: assetIds; attributes: T@"NSArray",R,N,V_assetIds
// Property: sourceId; attributes: T@"NSString",&,N,V_sourceId
// Property: sourceSessionId; attributes: T@"NSString",&,N,V_sourceSessionId
// Property: topic; attributes: T@"NSString",&,N,V_topic
// Property: imageUrl; attributes: T@"NSString",&,N,V_imageUrl

// -[SCCommerceDeepLink initPDPDeepLinkWithSource:productId:storeId:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x106d571f4

// -[SCCommerceDeepLink initStoreDeepLinkWithSource:storeId:categoryId:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x106d5728c

// -[SCCommerceDeepLink initScreenshopDeepLinkWithSource:assetIds:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x106d57324

// -[SCCommerceDeepLink initTopicDeepLinkWithSource:topic:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x106d57394

// -[SCCommerceDeepLink initTryStickerDeepLinkWithSource:productId:storeId:imageUrl:]
// Type encoding: @48@0:8q16@24@32@40
// Implementation: 0x106d57404

// -[SCCommerceDeepLink _initWithSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x106d574cc

// -[SCCommerceDeepLink deepLinkURLWithSourceApplication:internal:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106d57514

// -[SCCommerceDeepLink type]
// Type encoding: q16@0:8
// Implementation: 0x106d58344

// -[SCCommerceDeepLink source]
// Type encoding: q16@0:8
// Implementation: 0x106d5834c

// -[SCCommerceDeepLink productId]
// Type encoding: @16@0:8
// Implementation: 0x106d58354

// -[SCCommerceDeepLink storeId]
// Type encoding: @16@0:8
// Implementation: 0x106d5835c

// -[SCCommerceDeepLink categoryId]
// Type encoding: @16@0:8
// Implementation: 0x106d58364

// -[SCCommerceDeepLink assetIds]
// Type encoding: @16@0:8
// Implementation: 0x106d5836c

// -[SCCommerceDeepLink sourceId]
// Type encoding: @16@0:8
// Implementation: 0x106d58374

// -[SCCommerceDeepLink setSourceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d5837c

// -[SCCommerceDeepLink sourceSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106d583ac

// -[SCCommerceDeepLink setSourceSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d583b4

// -[SCCommerceDeepLink topic]
// Type encoding: @16@0:8
// Implementation: 0x106d583e4

// -[SCCommerceDeepLink setTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d583ec

// -[SCCommerceDeepLink imageUrl]
// Type encoding: @16@0:8
// Implementation: 0x106d5841c

// -[SCCommerceDeepLink setImageUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d58424

// -[SCCommerceDeepLink .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d58454

// +[SCCommerceDeepLink commerceDeepLinkFromDeepLinkURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d57a64

@end
