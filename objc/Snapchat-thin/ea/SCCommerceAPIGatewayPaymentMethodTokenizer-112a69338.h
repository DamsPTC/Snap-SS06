// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceAPIGatewayPaymentMethodTokenizer
// Superclass: NSObject
// Address: 0x112a69338

@interface SCCommerceAPIGatewayPaymentMethodTokenizer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceAPIGatewayPaymentMethodTokenizer initWithHttpMetadataService:httpRequestModifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1057aff74

// -[SCCommerceAPIGatewayPaymentMethodTokenizer tokenizePaymentCard:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1057b0080

// -[SCCommerceAPIGatewayPaymentMethodTokenizer tokenizePaymentCard:braintreeClientToken:completion:completionQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1057b0220

// -[SCCommerceAPIGatewayPaymentMethodTokenizer _cardClientWithClientToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057b0300

// -[SCCommerceAPIGatewayPaymentMethodTokenizer _fetchBrainTreeToken:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057b0398

// -[SCCommerceAPIGatewayPaymentMethodTokenizer _handleBraintreeResponse:outcome:data:error:completion:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x1057b0724

// -[SCCommerceAPIGatewayPaymentMethodTokenizer _tokenizeCardWithBraintreeCardClient:paymentCard:error:completion:completionQueue:]
// Type encoding: v56@0:8@16@24@32@?40@48
// Implementation: 0x1057b08f8

// -[SCCommerceAPIGatewayPaymentMethodTokenizer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057b0bd8

@end
