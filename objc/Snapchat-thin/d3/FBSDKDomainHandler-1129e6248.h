// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKDomainHandler
// Superclass: NSObject
// Address: 0x1129e6248

@interface FBSDKDomainHandler

// Property: domainConfigurationProvider; attributes: T@"<FBSDKDomainConfigurationProviding>",&,N,V_domainConfigurationProvider

// -[FBSDKDomainHandler init]
// Type encoding: @16@0:8
// Implementation: 0x104956ad4

// -[FBSDKDomainHandler configureWithGraphRequestFactory:settings:dataStore:graphRequestFactory:graphRequestConnectionFactory:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104956b64

// -[FBSDKDomainHandler loadDomainConfigurationWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104956c28

// -[FBSDKDomainHandler isGraphVideoRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x104956d18

// -[FBSDKDomainHandler getDefaultDomainPrefix:]
// Type encoding: @20@0:8B16
// Implementation: 0x104956e28

// -[FBSDKDomainHandler getAttOptInDomainPrefixForEndpoint:useAlternativeDefaultDomainPrefix:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104956f34

// -[FBSDKDomainHandler getAttOptOutDomainPrefixForEndpoint:useAlternativeDefaultDomainPrefix:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104957054

// -[FBSDKDomainHandler getATTScopeEndpointForGraphPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104957174

// -[FBSDKDomainHandler isDomainHandlingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104957300

// -[FBSDKDomainHandler getURLPrefixForSingleRequest:isAdvertiserTrackingEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1049574a8

// -[FBSDKDomainHandler getURLPrefixForBatchRequest:isAdvertiserTrackingEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104957680

// -[FBSDKDomainHandler domainConfigurationProvider]
// Type encoding: @16@0:8
// Implementation: 0x104957940

// -[FBSDKDomainHandler setDomainConfigurationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104957948

// -[FBSDKDomainHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104957954

// +[FBSDKDomainHandler sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x104956b08

// +[FBSDKDomainHandler isAuthenticatedForGamingDomain]
// Type encoding: B16@0:8
// Implementation: 0x104956c78

// +[FBSDKDomainHandler getCleanedGraphPathFromRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104957410

@end
