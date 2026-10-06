// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceAccountsProvider
// Superclass: NSObject
// Address: 0x112a68ca8

@interface SCCommerceAccountsProvider

// Property: grapheneNetworkLogger; attributes: T@"SCCommerceGrapheneNetworkLogger",&,N,V_grapheneNetworkLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceAccountsProvider initWithUserSession:userInfoServices:grapheneRegistry:unifiedGRPCClientFactory:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1057ac72c

// -[SCCommerceAccountsProvider _vendCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x1057ac9c8

// -[SCCommerceAccountsProvider prefillPhone]
// Type encoding: @16@0:8
// Implementation: 0x1057acab4

// -[SCCommerceAccountsProvider prefillPhoneCode]
// Type encoding: @16@0:8
// Implementation: 0x1057acb54

// -[SCCommerceAccountsProvider prefillEmail]
// Type encoding: @16@0:8
// Implementation: 0x1057acb9c

// -[SCCommerceAccountsProvider prefillUserInfoFromUserAccount:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057acbe4

// -[SCCommerceAccountsProvider _handleAccountInfoResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057acc8c

// -[SCCommerceAccountsProvider fetchAccountInfoCompletionQueue:context:completionBlock:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1057ace34

// -[SCCommerceAccountsProvider _updateContactDetailsHelper:completion:error:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1057ad168

// -[SCCommerceAccountsProvider updateContactDetails:context:completionQueue:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1057ad24c

// -[SCCommerceAccountsProvider _handleAddShippingResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057ad614

// -[SCCommerceAccountsProvider addShippingAddress:context:completionQueue:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1057ad6f8

// -[SCCommerceAccountsProvider _handleUpdateShippingResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057ada70

// -[SCCommerceAccountsProvider updateShippingAddress:context:completionQueue:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1057adb54

// -[SCCommerceAccountsProvider _handleDeleteShippingResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057adecc

// -[SCCommerceAccountsProvider deleteShippingAddress:context:completionQueue:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x1057adfac

// -[SCCommerceAccountsProvider grapheneNetworkLogger]
// Type encoding: @16@0:8
// Implementation: 0x1057ae328

// -[SCCommerceAccountsProvider setGrapheneNetworkLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057ae330

// -[SCCommerceAccountsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057ae360

@end
