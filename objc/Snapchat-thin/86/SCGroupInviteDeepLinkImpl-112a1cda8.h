// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupInviteDeepLinkImpl
// Superclass: NSObject
// Address: 0x112a1cda8

@interface SCGroupInviteDeepLinkImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: identifier; attributes: T@"NSString",R
// Property: priority; attributes: Tq,R

// -[SCGroupInviteDeepLinkImpl initWithNavigationDelegate:inviteService:notificationPool:userTrackedLogger:groupsDataFetcher:modularCallLauncher:friendsFeedFetcher:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10516ac48

// -[SCGroupInviteDeepLinkImpl identifier]
// Type encoding: @16@0:8
// Implementation: 0x10516add8

// -[SCGroupInviteDeepLinkImpl priority]
// Type encoding: q16@0:8
// Implementation: 0x10516adec

// -[SCGroupInviteDeepLinkImpl canProvideProcessorForFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x10516adf4

// -[SCGroupInviteDeepLinkImpl isValidDeepLink:]
// Type encoding: B24@0:8@16
// Implementation: 0x10516ae08

// -[SCGroupInviteDeepLinkImpl makeDeepLinkProcessor]
// Type encoding: @16@0:8
// Implementation: 0x10516ae54

// -[SCGroupInviteDeepLinkImpl processDeepLinkURL:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10516ae58

// -[SCGroupInviteDeepLinkImpl shouldForceNavigation]
// Type encoding: B16@0:8
// Implementation: 0x10516b17c

// -[SCGroupInviteDeepLinkImpl processDeepLinkResolutionResult:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10516b184

// -[SCGroupInviteDeepLinkImpl _modalContainer]
// Type encoding: @16@0:8
// Implementation: 0x10516b188

// -[SCGroupInviteDeepLinkImpl _presentJoinGroupByInviteConfirmAlertWithUrl:isCalling:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10516b204

// -[SCGroupInviteDeepLinkImpl _presentErrorAlertViewWithTitle:description:image:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10516b778

// -[SCGroupInviteDeepLinkImpl _presentJoinGroupByInviteFailureAlertView]
// Type encoding: v16@0:8
// Implementation: 0x10516ba2c

// -[SCGroupInviteDeepLinkImpl _presentJoinGroupByInviteGroupFullAlertView]
// Type encoding: v16@0:8
// Implementation: 0x10516bb64

// -[SCGroupInviteDeepLinkImpl _presentJoinGroupByInviteCreatorNotPresentAlertView]
// Type encoding: v16@0:8
// Implementation: 0x10516bcb4

// -[SCGroupInviteDeepLinkImpl _showNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10516be4c

// -[SCGroupInviteDeepLinkImpl _isDeepLinkPayloadValid:groupInviteId:isCalling:]
// Type encoding: B36@0:8@16@24B32
// Implementation: 0x10516beac

// -[SCGroupInviteDeepLinkImpl _joinGroupProcessWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10516bf2c

// -[SCGroupInviteDeepLinkImpl _handleGroupJoinSuccessWithGroupId:groupInviteId:isCalling:shouldLogSuccess:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x10516c1ac

// -[SCGroupInviteDeepLinkImpl _navigateOnGroupJoinWithGroupId:isCalling:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10516c430

// -[SCGroupInviteDeepLinkImpl _handleGroupJoinFailureWithResponseType:isCalling:error:]
// Type encoding: v36@0:8q16B24@28
// Implementation: 0x10516c720

// -[SCGroupInviteDeepLinkImpl _deepLinkProcessingCompleteWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10516c7c0

// -[SCGroupInviteDeepLinkImpl _deepLinkProcessingNavigationComplete]
// Type encoding: v16@0:8
// Implementation: 0x10516c808

// -[SCGroupInviteDeepLinkImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10516c854

@end
