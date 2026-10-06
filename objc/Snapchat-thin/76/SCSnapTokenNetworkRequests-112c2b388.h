// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenNetworkRequests
// Superclass: NSObject
// Address: 0x112c2b388

@interface SCSnapTokenNetworkRequests

// Property: requestsProvider; attributes: T@"<SCSnapTokenAuthenticatedRequestsProvider>",R,N,V_requestsProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapTokenNetworkRequests initWithAuthenticatedRequestsProvider:logger:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10029c53c

// -[SCSnapTokenNetworkRequests fetchAccessTokensForServerScopeNames:refreshToken:needsCloud1TLToken:op:completionPerformer:successBlock:failureBlock:]
// Type encoding: v68@0:8@16@24B32@36@44@?52@?60
// Implementation: 0x10af7d518

// -[SCSnapTokenNetworkRequests _buildRequestAndSubmitAccessTokenFetchWithServerScopeNames:refreshToken:needsCloud1TLToken:op:completionPerformer:successBlock:failureBlock:]
// Type encoding: v68@0:8@16@24B32@36@44@?52@?60
// Implementation: 0x10af7d7a0

// -[SCSnapTokenNetworkRequests _accessTokenHttpSuccessWithResponseData:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10af7dc6c

// -[SCSnapTokenNetworkRequests _accessTokenSuccessWithResponse:successBlock:failureBlock:]
// Type encoding: v40@0:8r^v16@?24@?32
// Implementation: 0x10af7ddc0

// -[SCSnapTokenNetworkRequests _buildAccessTokenRequestForRefreshToken:serverScopeNames:needsCloud1TLToken:]
// Type encoding: {SnapAccessTokensRequest=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{RepeatedField<int>=ii^v}{CachedSize=i}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}BB{CachedSize=i}})}36@0:8@16@24B32
// Implementation: 0x10af7debc

// -[SCSnapTokenNetworkRequests _shouldAddAttestationOnAccessTokenRefresh]
// Type encoding: B16@0:8
// Implementation: 0x10af7e4c8

// -[SCSnapTokenNetworkRequests _generateAttestationRequestToken]
// Type encoding: @16@0:8
// Implementation: 0x10af7e54c

// -[SCSnapTokenNetworkRequests _getAttestationPayloadWithRequestToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af7e608

// -[SCSnapTokenNetworkRequests requestsProvider]
// Type encoding: @16@0:8
// Implementation: 0x10af7e860

// -[SCSnapTokenNetworkRequests .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af7e868

@end
