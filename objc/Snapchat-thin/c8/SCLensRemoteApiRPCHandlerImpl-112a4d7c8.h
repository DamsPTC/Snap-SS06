// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteApiRPCHandlerImpl
// Superclass: NSObject
// Address: 0x112a4d7c8

@interface SCLensRemoteApiRPCHandlerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteApiRPCHandlerImpl initWithUnifiedGRPCServices:dataProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055daa14

// -[SCLensRemoteApiRPCHandlerImpl handleApiRequestWithApiSpecId:endpointId:lensId:isStudioDev:parameters:body:linkedResources:completion:]
// Type encoding: v76@0:8@16@24@32B40@44@52@60@?68
// Implementation: 0x1055dac0c

// -[SCLensRemoteApiRPCHandlerImpl handleHttpRequestWithUri:remoteApiId:method:metadata:data:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1055db2a0

// -[SCLensRemoteApiRPCHandlerImpl performTokenExchangeWithSpecId:authCode:codeVerifier:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1055db538

// -[SCLensRemoteApiRPCHandlerImpl refreshTokenWithSpecId:refreshToken:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1055db848

// -[SCLensRemoteApiRPCHandlerImpl getOAuth2InfoWithSpecId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1055dbb24

// -[SCLensRemoteApiRPCHandlerImpl _grpcCallOptions]
// Type encoding: @16@0:8
// Implementation: 0x1055dbd24

// -[SCLensRemoteApiRPCHandlerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055dc198

// +[SCLensRemoteApiRPCHandlerImpl methodFromString:]
// Type encoding: i24@0:8@16
// Implementation: 0x1055dbe80

// +[SCLensRemoteApiRPCHandlerImpl errorFromTokenResponseError:isRefreshSequence:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1055dbf20

// +[SCLensRemoteApiRPCHandlerImpl grantTypeFromResponse:]
// Type encoding: q20@0:8i16
// Implementation: 0x1055dc078

// +[SCLensRemoteApiRPCHandlerImpl optionallyAddAuthCodeToParams:remoteApiId:dataProvider:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1055dc088

@end
