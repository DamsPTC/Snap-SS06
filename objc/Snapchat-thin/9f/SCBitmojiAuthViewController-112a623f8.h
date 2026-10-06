// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiAuthViewController
// Superclass: UIViewController
// Address: 0x112a623f8

@interface SCBitmojiAuthViewController


// -[SCBitmojiAuthViewController initWithAuthDeepLink:requestManager:eventLogger:userLinkingServices:avatarBuilderScopeExposer:userId:username:bitmojiAccountLinked:authFlowCompletion:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64B72@?76
// Implementation: 0x105781368

// -[SCBitmojiAuthViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x105781568

// -[SCBitmojiAuthViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1057817c4

// -[SCBitmojiAuthViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x10578180c

// -[SCBitmojiAuthViewController bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105781814

// -[SCBitmojiAuthViewController _showConfirmAuthorizationAlert]
// Type encoding: v16@0:8
// Implementation: 0x105781860

// -[SCBitmojiAuthViewController _didPressContinueWithIsForCreate:]
// Type encoding: v20@0:8B16
// Implementation: 0x105781c34

// -[SCBitmojiAuthViewController _didDenyAuthorization]
// Type encoding: v16@0:8
// Implementation: 0x105781ccc

// -[SCBitmojiAuthViewController _didConfirmAuthorization]
// Type encoding: v16@0:8
// Implementation: 0x105781d14

// -[SCBitmojiAuthViewController _verifyAuthRequest]
// Type encoding: v16@0:8
// Implementation: 0x105781d5c

// -[SCBitmojiAuthViewController _authRequestCompletedWithSuccess:approvalToken:isOriginAppSnapchat:errorMessage:]
// Type encoding: v40@0:8B16@20B28@32
// Implementation: 0x105781edc

// -[SCBitmojiAuthViewController _sendApprovalRequest]
// Type encoding: v16@0:8
// Implementation: 0x105781f88

// -[SCBitmojiAuthViewController _approvalRequestSentWithSuccess:serverRedirectUri:authCode:serverState:errorMessage:]
// Type encoding: v52@0:8B16@20@28@36@44
// Implementation: 0x105782130

// -[SCBitmojiAuthViewController _sendDenialRequest]
// Type encoding: v16@0:8
// Implementation: 0x1057821e0

// -[SCBitmojiAuthViewController _denialRequestSentWithClientRedirectUri:serverState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10578237c

// -[SCBitmojiAuthViewController _showErrorMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105782388

// -[SCBitmojiAuthViewController _openBitmojiRedirectUri:authCode:state:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105782588

// -[SCBitmojiAuthViewController _goToBitmojiApp]
// Type encoding: v16@0:8
// Implementation: 0x1057827d0

// -[SCBitmojiAuthViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057828b4

@end
