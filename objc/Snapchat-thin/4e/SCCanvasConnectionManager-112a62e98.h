// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCanvasConnectionManager
// Superclass: NSObject
// Address: 0x112a62e98

@interface SCCanvasConnectionManager

// Property: delegate; attributes: T@"<SCCanvasConnectionManagerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCanvasConnectionManager initWithHttpMetadataService:httpRequestModifier:cognacUserContextTokenProvider:currentUserId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10578c768

// -[SCCanvasConnectionManager submitAuthRequestToOAuthServiceWithAuthRequest:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10578c944

// -[SCCanvasConnectionManager submitOAuthApprovalRequestWithApprovalToken:scopesApprovedArray:OAuthClientId:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10578cb60

// -[SCCanvasConnectionManager submitCreateConnectionRequestWithOAuthClientId:features:termsVersion:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10578cee0

// -[SCCanvasConnectionManager listConnectionsForSettingsWithForceFetchFromServer:completionQueue:completionBlock:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x10578d458

// -[SCCanvasConnectionManager listConnectionsWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10578d5bc

// -[SCCanvasConnectionManager checkConnectionWithApplicationId:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10578d630

// -[SCCanvasConnectionManager deleteConnectionWithApplicationId:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10578d980

// -[SCCanvasConnectionManager deleteConnectionWithApplicationId:isAppConnected:appHasPrivateStorageData:requestedDataDeletion:completionQueue:completionBlock:]
// Type encoding: v52@0:8@16B24B28B32@36@?44
// Implementation: 0x10578d998

// -[SCCanvasConnectionManager updateConnectionWithApplicationId:scopes:features:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10578dcb8

// -[SCCanvasConnectionManager resetConnection]
// Type encoding: v16@0:8
// Implementation: 0x10578e048

// -[SCCanvasConnectionManager connectionsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10578e050

// -[SCCanvasConnectionManager _extendedScopesList]
// Type encoding: @16@0:8
// Implementation: 0x10578e058

// -[SCCanvasConnectionManager _filterAllExceptBasicScopes:]
// Type encoding: @24@0:8@16
// Implementation: 0x10578e1f0

// -[SCCanvasConnectionManager _submitConnectionManagementServiceRequestWithEndpoint:protoRequest:method:requestId:responseClass:completionQueue:completionBlock:]
// Type encoding: v72@0:8@16@24q32@40#48@56@?64
// Implementation: 0x10578e2a8

// -[SCCanvasConnectionManager _submitOAuthServiceRequestWithEndpoint:protoRequest:method:requestId:responseClass:completionQueue:completionBlock:]
// Type encoding: v72@0:8@16@24q32@40#48@56@?64
// Implementation: 0x10578e524

// -[SCCanvasConnectionManager _submitRequest:requestId:responseClass:maxRequestAttempts:completionQueue:completionBlock:]
// Type encoding: v64@0:8@16@24#32@40@48@?56
// Implementation: 0x10578e788

// -[SCCanvasConnectionManager _handleListConnectionsOnDataAccessQueueWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10578eaa0

// -[SCCanvasConnectionManager _fetchConnectionListFromEndpoint:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10578ec20

// -[SCCanvasConnectionManager _handleDidFetchConnectionsWithResponse:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10578ee8c

// -[SCCanvasConnectionManager _handleDidUpdateConnectionWithResponse:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10578f048

// -[SCCanvasConnectionManager _handleDidDeleteConnectionWithApplicationId:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10578f178

// -[SCCanvasConnectionManager _announceObservableEventWithConnections:]
// Type encoding: v24@0:8@16
// Implementation: 0x10578f264

// -[SCCanvasConnectionManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x10578f2c8

// -[SCCanvasConnectionManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10578f2e0

// -[SCCanvasConnectionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10578f2ec

@end
