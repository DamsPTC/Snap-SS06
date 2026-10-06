// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSocialSmsGrpcSender
// Superclass: NSObject
// Address: 0x112a59988

@interface SCSocialSmsGrpcSender

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSocialSmsGrpcSender initWithCurrentUserId:unifiedGRPCClientFactory:performerProvider:logger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1056d7da0

// -[SCSocialSmsGrpcSender sendSocialSmsRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056d7f6c

// -[SCSocialSmsGrpcSender sendSocialSmsRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056d7f74

// -[SCSocialSmsGrpcSender updateSocialLinkWithRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056d8378

// -[SCSocialSmsGrpcSender sendGetLinkDataRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056d867c

// -[SCSocialSmsGrpcSender deleteSocialLinkWithLinkId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056d8938

// -[SCSocialSmsGrpcSender _handleGetLinkDataResponse:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056d8a34

// -[SCSocialSmsGrpcSender sendSocialLinkCreateRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056d8c3c

// -[SCSocialSmsGrpcSender _handleSendSocialSmsResponseWithError:isSocialLinkCreation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1056d8fc8

// -[SCSocialSmsGrpcSender _socialSmsCallOptionBuilder]
// Type encoding: @16@0:8
// Implementation: 0x1056d9044

// -[SCSocialSmsGrpcSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056d9050

@end
