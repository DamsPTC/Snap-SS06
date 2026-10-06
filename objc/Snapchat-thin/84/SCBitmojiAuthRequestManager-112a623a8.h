// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiAuthRequestManager
// Superclass: NSObject
// Address: 0x112a623a8

@interface SCBitmojiAuthRequestManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiAuthRequestManager initWithNetworkServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x105780334

// -[SCBitmojiAuthRequestManager verifyAuthRequestForURL:userId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057803d4

// -[SCBitmojiAuthRequestManager sendApprovalRequestWithToken:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105780530

// -[SCBitmojiAuthRequestManager sendDenialRequestWithApprovalToken:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10578063c

// -[SCBitmojiAuthRequestManager _verifyAuthRequestWithKey:params:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105780748

// -[SCBitmojiAuthRequestManager _handleVerificationWithParams:data:response:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057809bc

// -[SCBitmojiAuthRequestManager _sendApprovalWithKey:params:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105780b6c

// -[SCBitmojiAuthRequestManager _handleApprovalWithResponseJSON:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105780e20

// -[SCBitmojiAuthRequestManager _sendDenialWithKey:params:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105780f68

// -[SCBitmojiAuthRequestManager _handleDenialWithData:response:error:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057811c4

// -[SCBitmojiAuthRequestManager _oAuthURLWithEndpoint:]
// Type encoding: @24@0:8@16
// Implementation: 0x105781298

// -[SCBitmojiAuthRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105781338

@end
