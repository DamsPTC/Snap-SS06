// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInviteContactActionHandler
// Superclass: NSObject
// Address: 0x112b09298

@interface SCInviteContactActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: addFriendsActionEventObservable; attributes: T@"SCObservable",&,N,V_addFriendsActionEventObservable

// -[SCInviteContactActionHandler initWithPresentingViewController:deeplinkCoordinator:stateTracker:userTrackedLogger:inviteContactSectionLogger:userName:externalLinkSendingService:contactsInviter:shortLinkEncodingService:enableTwilioInvites:circumstanceEngine:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72@80B88@92
// Implementation: 0x1069a3b2c

// -[SCInviteContactActionHandler initWithPresentingUIContainer:deeplinkCoordinator:stateTracker:userTrackedLogger:inviteContactSectionLogger:userName:externalLinkSendingService:contactsInviter:shortLinkEncodingService:featureSettingsService:enableTwilioInvites:enablePrivacyAlertDialog:circumstanceEngine:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88B96B100@104
// Implementation: 0x1069a3cb4

// -[SCInviteContactActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1069a3f60

// -[SCInviteContactActionHandler _handleActionWithActionData:pendingFriendRequestEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1069a41e4

// -[SCInviteContactActionHandler _fetchFriendDeeplinkForFriendWithActionData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a4380

// -[SCInviteContactActionHandler _emitActionEventWithActionData:state:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1069a4444

// -[SCInviteContactActionHandler didStartFetchingFriendDeeplinkForPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a4554

// -[SCInviteContactActionHandler didEndFetchingFriendDeeplinkForPhoneNumber:deeplink:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1069a4558

// -[SCInviteContactActionHandler didEndInvitingFriendWithPhoneNumber:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1069a4714

// -[SCInviteContactActionHandler messageComposeViewController:didFinishWithResult:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1069a4718

// -[SCInviteContactActionHandler _presentSMSAndLogShareForPhoneNumber:shortLinkURL:deeplink:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069a47b0

// -[SCInviteContactActionHandler _presentSMSForPhoneNumber:deeplink:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069a48bc

// -[SCInviteContactActionHandler _logOffPlatformShareMetricWithDeepLink:shortLinkURL:phoneNumber:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069a4a94

// -[SCInviteContactActionHandler _sendInviteMessageForActionData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069a4c20

// -[SCInviteContactActionHandler _sendInviteOrAddByPhoneNumberRequestWithActionData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069a4e88

// -[SCInviteContactActionHandler _showPrivacyAlertWithCompletion:pendingFriendRequestEnabled:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x1069a50f4

// -[SCInviteContactActionHandler addFriendsActionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1069a5328

// -[SCInviteContactActionHandler setAddFriendsActionEventObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069a5330

// -[SCInviteContactActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069a5360

@end
