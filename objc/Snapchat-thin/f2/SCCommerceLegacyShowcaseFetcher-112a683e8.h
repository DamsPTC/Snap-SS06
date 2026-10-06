// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceLegacyShowcaseFetcher
// Superclass: NSObject
// Address: 0x112a683e8

@interface SCCommerceLegacyShowcaseFetcher

// Property: grapheneNetworkLogger; attributes: T@"SCCommerceGrapheneNetworkLogger",&,N,V_grapheneNetworkLogger
// Property: requestManager; attributes: T@"<SCRequestManager>",&,N,V_requestManager
// Property: queuePerformer; attributes: T@"SCQueuePerformer",&,N,V_queuePerformer
// Property: snapTokenProvider; attributes: T@"SCLazy",&,N,V_snapTokenProvider
// Property: configProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_configProvider

// -[SCCommerceLegacyShowcaseFetcher initWithRequestManager:grapheneRegistry:configProvider:snapTokenProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1057a2430

// -[SCCommerceLegacyShowcaseFetcher getPCSProductSetWithProductSetId:adId:limit:cursor:completionBlock:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x1057a25a8

// -[SCCommerceLegacyShowcaseFetcher _makeCommerceRequestWithModel:success:failure:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1057a28a0

// -[SCCommerceLegacyShowcaseFetcher _didGetSnapToken:forRequestModel:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057a2b78

// -[SCCommerceLegacyShowcaseFetcher _didGetShowcaseProductSetResponse:data:request:commerceRequestModel:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1057a2e94

// -[SCCommerceLegacyShowcaseFetcher _showcaseRoutingHeader]
// Type encoding: @16@0:8
// Implementation: 0x1057a3200

// -[SCCommerceLegacyShowcaseFetcher grapheneNetworkLogger]
// Type encoding: @16@0:8
// Implementation: 0x1057a323c

// -[SCCommerceLegacyShowcaseFetcher setGrapheneNetworkLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a3244

// -[SCCommerceLegacyShowcaseFetcher requestManager]
// Type encoding: @16@0:8
// Implementation: 0x1057a3274

// -[SCCommerceLegacyShowcaseFetcher setRequestManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a327c

// -[SCCommerceLegacyShowcaseFetcher queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1057a32ac

// -[SCCommerceLegacyShowcaseFetcher setQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a32b4

// -[SCCommerceLegacyShowcaseFetcher snapTokenProvider]
// Type encoding: @16@0:8
// Implementation: 0x1057a32e4

// -[SCCommerceLegacyShowcaseFetcher setSnapTokenProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a32ec

// -[SCCommerceLegacyShowcaseFetcher configProvider]
// Type encoding: @16@0:8
// Implementation: 0x1057a331c

// -[SCCommerceLegacyShowcaseFetcher setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a3324

// -[SCCommerceLegacyShowcaseFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057a3354

@end
