// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapProRPC
// Superclass: NSObject
// Address: 0x112bd09d8

@interface SCSnapProRPC


// -[SCSnapProRPC initWithNetworkServices:userId:userEmail:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100818678

// -[SCSnapProRPC _performRequestWithEndpointName:path:serviceConfig:request:responseClass:key:completionQueue:completion:]
// Type encoding: @80@0:8@16@24@32@40#48@56@64@?72
// Implementation: 0x108f246f4

// -[SCSnapProRPC _performRequestWithEndpointName:path:serviceConfig:request:responseClass:key:rpcLoggingInfo:completionQueue:completion:]
// Type encoding: @96@0:8@16@24@32@40#48@56{?=@#}64@80@?88
// Implementation: 0x108f24810

// -[SCSnapProRPC fetchManagedBusinessProfilesWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f24fa8

// -[SCSnapProRPC fetchManagedPublicProfilesWithRequest:userId:completionQueue:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x108f2520c

// -[SCSnapProRPC updateBusinessProfileWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f25414

// -[SCSnapProRPC updateBusinessProfileSettingsWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f255b0

// -[SCSnapProRPC fetchHasPendingRoleInvitesWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f2574c

// -[SCSnapProRPC fetchUserSettingsWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f258e8

// -[SCSnapProRPC updateUserSettingsWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f25a84

// -[SCSnapProRPC updateBusinessUserSettingsWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f25c20

// -[SCSnapProRPC fetchBusinessStoryManifestWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f25dbc

// -[SCSnapProRPC getBusinessProfileWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f26020

// -[SCSnapProRPC getPublicProfileWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f261bc

// -[SCSnapProRPC getBusinessProfilesWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f26358

// -[SCSnapProRPC fetchManifestForSnapIdsWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f264f4

// -[SCSnapProRPC getBusinessStorySnapWasPersistedWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f26690

// -[SCSnapProRPC reportHighlightWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f2682c

// -[SCSnapProRPC reportHighlightSnapWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f26988

// -[SCSnapProRPC getHighlightsWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f26ae4

// -[SCSnapProRPC fetchInsightsActiveStoryManifestWithRequest:completionQueue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108f26c40

// -[SCSnapProRPC highlightsServiceConfig]
// Type encoding: @16@0:8
// Implementation: 0x108f26d9c

// -[SCSnapProRPC lensServiceConfig]
// Type encoding: @16@0:8
// Implementation: 0x108f26da0

// -[SCSnapProRPC insightsServiceConfig]
// Type encoding: @16@0:8
// Implementation: 0x108f26da4

// -[SCSnapProRPC accountServiceConfig]
// Type encoding: @16@0:8
// Implementation: 0x108f26da8

// -[SCSnapProRPC storyServiceConfig]
// Type encoding: @16@0:8
// Implementation: 0x108f26db0

// -[SCSnapProRPC _beginLoggingWithEndpointName:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f26db8

// -[SCSnapProRPC _endLoggingResponseWithEndpointName:startTime:response:data:rpcLoggingInfo:]
// Type encoding: v64@0:8@16@24@32@40{?=@#}48
// Implementation: 0x108f26df4

// -[SCSnapProRPC _endLoggingErrorWithEndpointName:startTime:response:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108f26fa0

// -[SCSnapProRPC _computeExtraDataWithEndpointName:response:data:rpcLoggingInfo:]
// Type encoding: @56@0:8@16@24@32{?=@#}40
// Implementation: 0x108f270c0

// -[SCSnapProRPC .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f273c4

@end
