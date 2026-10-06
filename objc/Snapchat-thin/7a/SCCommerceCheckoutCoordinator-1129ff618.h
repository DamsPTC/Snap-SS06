// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceCheckoutCoordinator
// Superclass: NSObject
// Address: 0x1129ff618

@interface SCCommerceCheckoutCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceCheckoutCoordinator initWithUserId:grapheneRegistry:unifiedGRPCClientFactory:deviceInfoService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104e08f50

// -[SCCommerceCheckoutCoordinator _vendCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x104e09150

// -[SCCommerceCheckoutCoordinator _createCheckoutHelper:request:checkoutDataModel:startTimeStamp:error:completion:]
// Type encoding: v64@0:8@16@24@32d40@48@?56
// Implementation: 0x104e0923c

// -[SCCommerceCheckoutCoordinator createCheckout:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e09468

// -[SCCommerceCheckoutCoordinator _updateCheckoutHelper:request:checkoutDataModel:error:startTimestamp:completion:]
// Type encoding: v64@0:8@16@24@32@40d48@?56
// Implementation: 0x104e096d4

// -[SCCommerceCheckoutCoordinator updateCheckout:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e09900

// -[SCCommerceCheckoutCoordinator _finalizeCheckoutHelper:request:error:startTimeStamp:completion:]
// Type encoding: v56@0:8@16@24@32d40@?48
// Implementation: 0x104e09b6c

// -[SCCommerceCheckoutCoordinator finalizeCheckout:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e09d80

// -[SCCommerceCheckoutCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e0a0c8

@end
