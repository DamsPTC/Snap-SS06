// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChannelVerificationWorkflow
// Superclass: NSObject
// Address: 0x1129f3d18

@interface SCChannelVerificationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChannelVerificationWorkflow initWithVerification:router:channelVerificationService:loginService:logger:delegate:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104cc6a48

// -[SCChannelVerificationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104cc6b94

// -[SCChannelVerificationWorkflow channelVerificationLandingFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cc6bfc

// -[SCChannelVerificationWorkflow channelVerificationLandingExited]
// Type encoding: v16@0:8
// Implementation: 0x104cc6d74

// -[SCChannelVerificationWorkflow codeVerificationFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cc6e08

// -[SCChannelVerificationWorkflow codeVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104cc6ef4

// -[SCChannelVerificationWorkflow codeVerificationExitedWithUnretryableError]
// Type encoding: v16@0:8
// Implementation: 0x104cc6f0c

// -[SCChannelVerificationWorkflow requestCodeResendWithSuccessBlock:failureBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x104cc6fbc

// -[SCChannelVerificationWorkflow verifyCodeWithCode:isAutofill:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x104cc7274

// -[SCChannelVerificationWorkflow _requestVerificationCodeSuccess:successBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104cc754c

// -[SCChannelVerificationWorkflow _requestVerificationCodeFailure:networkRequestId:grpcStatusCode:protoStatusCode:failureBlock:]
// Type encoding: v56@0:8@16@24q32q40@?48
// Implementation: 0x104cc760c

// -[SCChannelVerificationWorkflow _verifyVerificationCodeSuccess:networkRequestId:successBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104cc7804

// -[SCChannelVerificationWorkflow _verifyVerificationCodeFailure:networkRequestId:failureBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104cc7900

// -[SCChannelVerificationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cc801c

@end
