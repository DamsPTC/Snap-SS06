// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShareFriendActionManager
// Superclass: NSObject
// Address: 0x112a04a28

@interface SCShareFriendActionManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCShareFriendActionManagerDelegate>",W,N,V_delegate
// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController

// -[SCShareFriendActionManager initWithSnapchatter:businessProfile:imageDownloader:shareFriendWorkflowDelegate:snapchatterSender:conversationParser:shareMessageSender:offPlatformLinkGenerationService:legacySendToLauncher:externalLinkSendingService:removeProfileCardFromShareFlow:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72@80@88B96
// Implementation: 0x104ea44a4

// -[SCShareFriendActionManager setPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ea46ec

// -[SCShareFriendActionManager shareUsernameURL]
// Type encoding: v16@0:8
// Implementation: 0x104ea46f4

// -[SCShareFriendActionManager sendUsername]
// Type encoding: v16@0:8
// Implementation: 0x104ea4a78

// -[SCShareFriendActionManager legacySendToScopeDidDismiss:selectedItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ea4eb8

// -[SCShareFriendActionManager legacySendToScopeWillSend:sendToSelection:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ea4fec

// -[SCShareFriendActionManager _sendToDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104ea5178

// -[SCShareFriendActionManager _didDetachUIWithSendToSelection:shareSheetConfiguration:onSendTriggered:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ea51a4

// -[SCShareFriendActionManager _willSendToOnPlatformRecipientWithSendToSelection:]
// Type encoding: B24@0:8@16
// Implementation: 0x104ea5298

// -[SCShareFriendActionManager _didEndFeatureWithSendToSelection:shareSheetConfiguration:onSendTriggered:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104ea5384

// -[SCShareFriendActionManager _sendPublicUserNameToRecipients:storiesPostingConfig:businessIds:groups:additionalText:onSendTriggered:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x104ea5524

// -[SCShareFriendActionManager _sendUserNameToRecipients:groups:additionalText:onSendTriggered:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ea565c

// -[SCShareFriendActionManager _sendUserNameToSortedRecipients:additionalText:destinationInfo:onSendTriggered:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104ea589c

// -[SCShareFriendActionManager _sendSnapchatterMessageToArroyoConversations:additionalText:platformAnalytics:additionalTextPlatformAnalytics:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104ea5a44

// -[SCShareFriendActionManager _setPageViewNameOrForPresentingViewController]
// Type encoding: q16@0:8
// Implementation: 0x104ea5b18

// -[SCShareFriendActionManager _sendToPhoneNumbersWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ea5b94

// -[SCShareFriendActionManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x104ea5d08

// -[SCShareFriendActionManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ea5d20

// -[SCShareFriendActionManager presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x104ea5d2c

// -[SCShareFriendActionManager setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ea5d44

// -[SCShareFriendActionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ea5d50

@end
