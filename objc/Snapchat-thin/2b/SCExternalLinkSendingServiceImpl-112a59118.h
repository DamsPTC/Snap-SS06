// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExternalLinkSendingServiceImpl
// Superclass: NSObject
// Address: 0x112a59118

@interface SCExternalLinkSendingServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExternalLinkSendingServiceImpl initWithSocialSmsSender:socialLinkCreator:offPlatformLinkGenerationService:notificationPool:performerProvider:circumstanceEngine:userInfoServices:grapheneRegistry:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1056d37ac

// -[SCExternalLinkSendingServiceImpl sendPublicContentLinkWithPhoneNumbers:publicContentLink:sharingMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056d3924

// -[SCExternalLinkSendingServiceImpl sendFriendInviteLinkWithPhoneNumbers:featureType:completion:]
// Type encoding: v36@0:8@16i24@?28
// Implementation: 0x1056d3bf4

// -[SCExternalLinkSendingServiceImpl isPublicLinkSendingExperimentEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1056d3e20

// -[SCExternalLinkSendingServiceImpl _metadataWithPublicContentLink:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056d3e5c

// -[SCExternalLinkSendingServiceImpl _showSendInitiatedNotification]
// Type encoding: v16@0:8
// Implementation: 0x1056d404c

// -[SCExternalLinkSendingServiceImpl _showSendCompletedNotification:isForFriendInvite:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1056d4158

// -[SCExternalLinkSendingServiceImpl _getSocialSmsFeatureTypeFromInvitesApiFeature:]
// Type encoding: q20@0:8i16
// Implementation: 0x1056d42cc

// -[SCExternalLinkSendingServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056d42f0

@end
