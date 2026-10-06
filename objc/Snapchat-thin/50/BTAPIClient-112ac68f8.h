// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTAPIClient
// Superclass: NSObject
// Address: 0x112ac68f8

@interface BTAPIClient

// Property: configurationQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_configurationQueue
// Property: tokenizationKey; attributes: T@"NSString",C,N,V_tokenizationKey
// Property: clientToken; attributes: T@"BTClientToken",&,N,V_clientToken
// Property: http; attributes: T@"BTHTTP",&,N,V_http
// Property: configurationHTTP; attributes: T@"BTHTTP",&,N,V_configurationHTTP
// Property: braintreeAPI; attributes: T@"BTAPIHTTP",&,N,V_braintreeAPI
// Property: graphQL; attributes: T@"BTGraphQLHTTP",&,N,V_graphQL
// Property: metadata; attributes: T@"BTClientMetadata",R,N,V_metadata

// -[BTAPIClient initWithAuthorization:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ebbb8

// -[BTAPIClient initWithAuthorization:sendAnalyticsEvent:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1060ebbc0

// -[BTAPIClient copyWithSource:integration:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x1060ec000

// -[BTAPIClient fetchPaymentMethodNonces:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1060ec898

// -[BTAPIClient fetchPaymentMethodNonces:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1060ec8a4

// -[BTAPIClient fetchOrReturnRemoteConfiguration:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1060ece14

// -[BTAPIClient metaParameters]
// Type encoding: @16@0:8
// Implementation: 0x1060ed6dc

// -[BTAPIClient graphQLMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1060ed764

// -[BTAPIClient metaParametersWithParameters:forHTTPType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1060ed7a8

// -[BTAPIClient GET:parameters:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060ed88c

// -[BTAPIClient POST:parameters:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060ed898

// -[BTAPIClient GET:parameters:httpType:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1060ed8a4

// -[BTAPIClient POST:parameters:httpType:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x1060ed9f4

// -[BTAPIClient httpForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1060edb70

// -[BTAPIClient init]
// Type encoding: @16@0:8
// Implementation: 0x1060edbbc

// -[BTAPIClient dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1060edbd4

// -[BTAPIClient configurationQueue]
// Type encoding: @16@0:8
// Implementation: 0x1060eddbc

// -[BTAPIClient setConfigurationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060eddc4

// -[BTAPIClient tokenizationKey]
// Type encoding: @16@0:8
// Implementation: 0x1060eddf4

// -[BTAPIClient setTokenizationKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060eddfc

// -[BTAPIClient clientToken]
// Type encoding: @16@0:8
// Implementation: 0x1060ede04

// -[BTAPIClient setClientToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ede0c

// -[BTAPIClient http]
// Type encoding: @16@0:8
// Implementation: 0x1060ede3c

// -[BTAPIClient setHttp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ede44

// -[BTAPIClient configurationHTTP]
// Type encoding: @16@0:8
// Implementation: 0x1060ede74

// -[BTAPIClient setConfigurationHTTP:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ede7c

// -[BTAPIClient braintreeAPI]
// Type encoding: @16@0:8
// Implementation: 0x1060edeac

// -[BTAPIClient setBraintreeAPI:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060edeb4

// -[BTAPIClient graphQL]
// Type encoding: @16@0:8
// Implementation: 0x1060edee4

// -[BTAPIClient setGraphQL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060edeec

// -[BTAPIClient metadata]
// Type encoding: @16@0:8
// Implementation: 0x1060edf1c

// -[BTAPIClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060edf24

// +[BTAPIClient authorizationTypeForAuthorization:]
// Type encoding: q24@0:8@16
// Implementation: 0x1060ebf58

// +[BTAPIClient baseURLFromTokenizationKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ec15c

// +[BTAPIClient schemeForEnvironmentString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ec490

// +[BTAPIClient hostForEnvironmentString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ec4ec

// +[BTAPIClient graphQLURLForEnvironment:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ec5d8

// +[BTAPIClient graphQLHostForEnvironmentString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ec770

// +[BTAPIClient clientApiBasePathForMerchantID:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ec828

@end
