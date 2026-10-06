// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommercePixelMetricsLoggerImpl
// Superclass: NSObject
// Address: 0x112a69518

@interface SCCommercePixelMetricsLoggerImpl

// Property: grapheneNetworkLogger; attributes: T@"SCCommerceGrapheneNetworkLogger",&,N,V_grapheneNetworkLogger
// Property: blockEventSending; attributes: TB,N,VblockEventSending
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommercePixelMetricsLoggerImpl initWithRequestManager:userInfoServices:grapheneRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057b2460

// -[SCCommercePixelMetricsLoggerImpl logViewContentWithPixelId:pixelItemId:currency:priceAmount:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1057b2560

// -[SCCommercePixelMetricsLoggerImpl logAddToCartWithWithPixelId:pixelItemId:currency:priceAmount:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1057b278c

// -[SCCommercePixelMetricsLoggerImpl logAddBillingWithItemIds:pixelId:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1057b29b8

// -[SCCommercePixelMetricsLoggerImpl logStartCheckoutWithPixelId:itemIds:hasPaymentMethods:currency:priceAmount:transactionId:numItems:]
// Type encoding: v68@0:8@16@24B32@36d44@52Q60
// Implementation: 0x1057b2bd4

// -[SCCommercePixelMetricsLoggerImpl logViewShowcaseWithProductSetId:serveItemId:pixelId:itemIds:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1057b2e64

// -[SCCommercePixelMetricsLoggerImpl _sendPixelRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057b327c

// -[SCCommercePixelMetricsLoggerImpl _buildShowcasePixelDataWithPixelId:serveItemId:productSetId:itemIds:conversionType:eventType:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1057b32e8

// -[SCCommercePixelMetricsLoggerImpl _dictionaryToEncodedData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057b3608

// -[SCCommercePixelMetricsLoggerImpl blockEventSending]
// Type encoding: B16@0:8
// Implementation: 0x1057b3804

// -[SCCommercePixelMetricsLoggerImpl setBlockEventSending:]
// Type encoding: v20@0:8B16
// Implementation: 0x1057b380c

// -[SCCommercePixelMetricsLoggerImpl grapheneNetworkLogger]
// Type encoding: @16@0:8
// Implementation: 0x1057b3814

// -[SCCommercePixelMetricsLoggerImpl setGrapheneNetworkLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057b381c

// -[SCCommercePixelMetricsLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057b384c

@end
