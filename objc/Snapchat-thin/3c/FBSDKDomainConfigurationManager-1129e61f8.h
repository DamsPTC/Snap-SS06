// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKDomainConfigurationManager
// Superclass: NSObject
// Address: 0x1129e61f8

@interface FBSDKDomainConfigurationManager

// Property: completionBlocks; attributes: T@"NSMutableArray",&,N,V_completionBlocks
// Property: domainConfiguration; attributes: T@"FBSDKDomainConfiguration",&,N,V_domainConfiguration
// Property: loadingDomainConfiguration; attributes: TB,N,V_loadingDomainConfiguration
// Property: domainConfigurationError; attributes: T@"NSError",&,N,V_domainConfigurationError
// Property: domainConfigurationErrorTimestamp; attributes: T@"NSDate",&,N,V_domainConfigurationErrorTimestamp
// Property: requeryFinishedForAppStart; attributes: TB,N,V_requeryFinishedForAppStart
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: graphRequestConnectionFactory; attributes: T@"<FBSDKGraphRequestConnectionFactory>",&,N,V_graphRequestConnectionFactory
// Property: settings; attributes: T@"<FBSDKSettings>",&,N,V_settings
// Property: dataStore; attributes: T@"<FBSDKDataPersisting>",&,N,V_dataStore

// -[FBSDKDomainConfigurationManager init]
// Type encoding: @16@0:8
// Implementation: 0x104955b08

// -[FBSDKDomainConfigurationManager initWithDomainConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x104955b10

// -[FBSDKDomainConfigurationManager configureWithSettings:dataStore:graphRequestFactory:graphRequestConnectionFactory:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104955c00

// -[FBSDKDomainConfigurationManager cachedDomainConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104955ca0

// -[FBSDKDomainConfigurationManager loadDomainConfigurationWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104955d44

// -[FBSDKDomainConfigurationManager processLoadRequestResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1049561ac

// -[FBSDKDomainConfigurationManager requestToLoadDomainConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x10495651c

// -[FBSDKDomainConfigurationManager _didProcessConfigurationFromNetwork:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104956648

// -[FBSDKDomainConfigurationManager _domainConfigurationTimestampIsValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x1049568c4

// -[FBSDKDomainConfigurationManager clearCache]
// Type encoding: v16@0:8
// Implementation: 0x10495693c

// -[FBSDKDomainConfigurationManager graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x10495699c

// -[FBSDKDomainConfigurationManager setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049569a4

// -[FBSDKDomainConfigurationManager graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x1049569b0

// -[FBSDKDomainConfigurationManager setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049569b8

// -[FBSDKDomainConfigurationManager settings]
// Type encoding: @16@0:8
// Implementation: 0x1049569c4

// -[FBSDKDomainConfigurationManager setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049569cc

// -[FBSDKDomainConfigurationManager dataStore]
// Type encoding: @16@0:8
// Implementation: 0x1049569d8

// -[FBSDKDomainConfigurationManager setDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049569e0

// -[FBSDKDomainConfigurationManager completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x1049569ec

// -[FBSDKDomainConfigurationManager setCompletionBlocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049569f4

// -[FBSDKDomainConfigurationManager domainConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104956a00

// -[FBSDKDomainConfigurationManager setDomainConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104956a08

// -[FBSDKDomainConfigurationManager loadingDomainConfiguration]
// Type encoding: B16@0:8
// Implementation: 0x104956a14

// -[FBSDKDomainConfigurationManager setLoadingDomainConfiguration:]
// Type encoding: v20@0:8B16
// Implementation: 0x104956a1c

// -[FBSDKDomainConfigurationManager domainConfigurationError]
// Type encoding: @16@0:8
// Implementation: 0x104956a24

// -[FBSDKDomainConfigurationManager setDomainConfigurationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104956a2c

// -[FBSDKDomainConfigurationManager domainConfigurationErrorTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104956a38

// -[FBSDKDomainConfigurationManager setDomainConfigurationErrorTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104956a40

// -[FBSDKDomainConfigurationManager requeryFinishedForAppStart]
// Type encoding: B16@0:8
// Implementation: 0x104956a4c

// -[FBSDKDomainConfigurationManager setRequeryFinishedForAppStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x104956a54

// -[FBSDKDomainConfigurationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104956a5c

// +[FBSDKDomainConfigurationManager sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x104955ba4

@end
