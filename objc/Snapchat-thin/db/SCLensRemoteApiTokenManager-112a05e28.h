// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteApiTokenManager
// Superclass: NSObject
// Address: 0x112a05e28

@interface SCLensRemoteApiTokenManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteApiTokenManager initWithDataProvider:rpcHandler:authHandler:remoteApiLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104ec0530

// -[SCLensRemoteApiTokenManager deleteDataForSpecId:withCompletionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ec062c

// -[SCLensRemoteApiTokenManager checkOAuthStatusForSpecId:lensId:withCompletionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ec06b4

// -[SCLensRemoteApiTokenManager startOAuthFlowForSpecId:lensId:withCompletionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ec0f94

// -[SCLensRemoteApiTokenManager reset]
// Type encoding: v16@0:8
// Implementation: 0x104ec149c

// -[SCLensRemoteApiTokenManager _handleAuthFlowWithSpecId:uri:lensId:withCompletionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x104ec14d0

// -[SCLensRemoteApiTokenManager _performTokenExchangeWithSpecId:authCode:withCompletionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ec17f4

// -[SCLensRemoteApiTokenManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ec1ca4

// +[SCLensRemoteApiTokenManager earlyReturn:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ec1b58

// +[SCLensRemoteApiTokenManager _logAuthFlowFailureWithLogger:specId:lensId:error:isUserCancelled:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x104ec1bf0

@end
