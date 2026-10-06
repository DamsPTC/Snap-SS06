// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteApiModuleUriHandler
// Superclass: NSObject
// Address: 0x112a05f18

@interface SCLensRemoteApiModuleUriHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteApiModuleUriHandler initWithTokenManager:remoteApiLogger:apiServicePlugins:remoteApiRpcHandler:remoteApiLensMetadataProvider:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104ec25e0

// -[SCLensRemoteApiModuleUriHandler handleWithRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ec2760

// -[SCLensRemoteApiModuleUriHandler reset]
// Type encoding: v16@0:8
// Implementation: 0x104ec292c

// -[SCLensRemoteApiModuleUriHandler _shouldUseLensFromRequest]
// Type encoding: B16@0:8
// Implementation: 0x104ec2ae4

// -[SCLensRemoteApiModuleUriHandler _handleRequest:metadata:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ec2b34

// -[SCLensRemoteApiModuleUriHandler _checkOAuthStatus:uri:lensId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ec315c

// -[SCLensRemoteApiModuleUriHandler _startOAuthFlow:uri:lensId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ec3430

// -[SCLensRemoteApiModuleUriHandler _performRemoteApiCall:requestIdentifier:uri:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ec3770

// -[SCLensRemoteApiModuleUriHandler _handleAsRemoteApiWithRequest:uri:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ec3944

// -[SCLensRemoteApiModuleUriHandler _deleteTokens:uri:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ec4334

// -[SCLensRemoteApiModuleUriHandler _handleOnPlugInsRegistered:requestIdentifier:request:uri:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x104ec4b48

// -[SCLensRemoteApiModuleUriHandler _handleAsApiPlugin:uri:request:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ec4f54

// -[SCLensRemoteApiModuleUriHandler _apiRequestFromUriRequest:metadata:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ec53f4

// -[SCLensRemoteApiModuleUriHandler _isInternalRemoteApiModuleUsageRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x104ec5d88

// -[SCLensRemoteApiModuleUriHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ec5f44

// +[SCLensRemoteApiModuleUriHandler _showErrorDialogIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ec40e4

// +[SCLensRemoteApiModuleUriHandler _logOAuthFlowCompleteWithLogger:apiSpecId:lensId:error:success:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x104ec44e4

// +[SCLensRemoteApiModuleUriHandler _badRequestResponseWithURI:description:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ec4668

// +[SCLensRemoteApiModuleUriHandler _checkOAuthStatusResponseFromError:uri:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ec4700

// +[SCLensRemoteApiModuleUriHandler _startAuthResponseFromError:uri:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ec48c4

// +[SCLensRemoteApiModuleUriHandler _messageFromCode:userInfo:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x104ec4a88

@end
