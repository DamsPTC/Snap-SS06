// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesOAuth2
// Superclass: NSObject
// Address: 0x112a84a48

@interface SCSpectaclesOAuth2

// Property: invalidated; attributes: TB,V_invalidated
// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: performer; attributes: T@"SCQueuePerformer",R,N,V_performer
// Property: serverMetadataFetcher; attributes: T@"SCLazy",R,N,V_serverMetadataFetcher

// -[SCSpectaclesOAuth2 initWithUserId:serverMetadataFetcher:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c5b7c4

// -[SCSpectaclesOAuth2 invalidate]
// Type encoding: v16@0:8
// Implementation: 0x105a4d024

// -[SCSpectaclesOAuth2 fetchNewTokensWithClientId:completionPerformer:successBlock:failureBlock:isPreHermosa:scopes:]
// Type encoding: v60@0:8@16@24@?32@?40B48@52
// Implementation: 0x105a4d02c

// -[SCSpectaclesOAuth2 fetchRefreshTokenWithClientId:authzCode:codeVerifier:redirectUri:completionPerformer:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x105a4d760

// -[SCSpectaclesOAuth2 _requestScopesIsPreHermosa:]
// Type encoding: @20@0:8B16
// Implementation: 0x105a4dd84

// -[SCSpectaclesOAuth2 _requestRedirectURLIsPreHermosa:]
// Type encoding: @20@0:8B16
// Implementation: 0x105a4de1c

// -[SCSpectaclesOAuth2 _handleOAuth2NetworkErrorForEndpoint:errorCode:completionPerformer:error:failureBlock:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x105a4de58

// -[SCSpectaclesOAuth2 _implicitApprovalForApprovalToken:state:codeVerifier:redirectUri:completionPerformer:successBlock:failureBlock:isPreHermosa:scopes:]
// Type encoding: v84@0:8@16@24@32@40@48@?56@?64B72@76
// Implementation: 0x105a4df94

// -[SCSpectaclesOAuth2 _handleOAuth2NetworkErrorForEndpoint:errorCode:completionPerformer:responseData:error:failureBlock:]
// Type encoding: v64@0:8@16Q24@32@40@48@?56
// Implementation: 0x105a4e660

// -[SCSpectaclesOAuth2 invalidated]
// Type encoding: B16@0:8
// Implementation: 0x105a4e838

// -[SCSpectaclesOAuth2 setInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a4e844

// -[SCSpectaclesOAuth2 userId]
// Type encoding: @16@0:8
// Implementation: 0x105a4e84c

// -[SCSpectaclesOAuth2 performer]
// Type encoding: @16@0:8
// Implementation: 0x105a4e854

// -[SCSpectaclesOAuth2 serverMetadataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x105a4e85c

// -[SCSpectaclesOAuth2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a4e864

@end
