// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceAPIGatewayPaymentInfoProvider
// Superclass: NSObject
// Address: 0x112a692e8

@interface SCCommerceAPIGatewayPaymentInfoProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceAPIGatewayPaymentInfoProvider initWithHttpMetadataService:httpRequestModifier:paymentTokenizer:userId:deviceId:]
// Type encoding: @56@0:8@16@24@32@40Q48
// Implementation: 0x1057ae980

// -[SCCommerceAPIGatewayPaymentInfoProvider fetchPaymentMethodsCompletionQueue:context:completionBlock:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1057aead4

// -[SCCommerceAPIGatewayPaymentInfoProvider addPaymentMethod:context:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1057aec9c

// -[SCCommerceAPIGatewayPaymentInfoProvider updatePaymentMethod:paymentIdentifier:context:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x1057aee38

// -[SCCommerceAPIGatewayPaymentInfoProvider deletePaymentMethod:context:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1057af004

// -[SCCommerceAPIGatewayPaymentInfoProvider _submitRequestWithData:endpoint:completionHelperBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057af1e4

// -[SCCommerceAPIGatewayPaymentInfoProvider _handlePaymentResponse:outcome:data:error:completionHelperBlock:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x1057af588

// -[SCCommerceAPIGatewayPaymentInfoProvider _handleFetchPaymentResponseData:error:completion:completionQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1057af658

// -[SCCommerceAPIGatewayPaymentInfoProvider _handleUpdatePaymentResponseData:error:completion:completionQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1057af8dc

// -[SCCommerceAPIGatewayPaymentInfoProvider _handleDeletePaymentResponseData:error:completion:completionQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1057afb40

// -[SCCommerceAPIGatewayPaymentInfoProvider _handleTokenizedCard:paymentIdentifier:error:endpoint:completionQueue:completionBlock:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1057afc70

// -[SCCommerceAPIGatewayPaymentInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057aff14

@end
