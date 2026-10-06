// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSessionParams
// Superclass: NSObject
// Address: 0x112c79718

@interface SCContextSessionParams

// Property: sessionId; attributes: T@"NSString",R,C,N,V_sessionId
// Property: memoryDeepLink; attributes: T@"NSString",R,C,N,V_memoryDeepLink
// Property: configuration; attributes: T@"SCContextSessionConfigurationParams",R,C,N,V_configuration
// Property: contextClientInfo; attributes: T@"NSObject<NSCopying>",R,C,N,V_contextClientInfo
// Property: content; attributes: T@"SCContextSessionContentInfo",R,C,N,V_content
// Property: user; attributes: T@"SCContextUserParams",R,C,N,V_user
// Property: featureParams; attributes: T@"SCContextSessionFeatureParams",R,C,N,V_featureParams
// Property: launchSource; attributes: Tq,R,N,V_launchSource
// Property: storyParams; attributes: T@"SCContextStoryParams",R,C,N,V_storyParams
// Property: storyId; attributes: T@"NSString",R,C,N,V_storyId
// Property: storySnapId; attributes: T@"NSString",R,C,N,V_storySnapId
// Property: viewLocation; attributes: Tq,R,N,V_viewLocation
// Property: existingBoostMetadata; attributes: T@"SCBoostMetadata",R,C,N,V_existingBoostMetadata
// Property: unifiedMediaType; attributes: Tq,R,N,V_unifiedMediaType
// Property: subscriptionParams; attributes: T@"SCContextSubscriptionParams",R,C,N,V_subscriptionParams
// Property: reactionReplyParams; attributes: T@"SCContextReactionReplyParams",R,C,N,V_reactionReplyParams

// -[SCContextSessionParams initWithSessionId:memoryDeepLink:configuration:contextClientInfo:content:user:featureParams:launchSource:storyParams:storyId:storySnapId:viewLocation:existingBoostMetadata:unifiedMediaType:subscriptionParams:reactionReplyParams:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64q72@80@88@96q104@112q120@128@136
// Implementation: 0x10b605c8c

// -[SCContextSessionParams copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b605f88

// -[SCContextSessionParams hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b605fac

// -[SCContextSessionParams isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6060c8

// -[SCContextSessionParams sessionId]
// Type encoding: @16@0:8
// Implementation: 0x10b6062a8

// -[SCContextSessionParams memoryDeepLink]
// Type encoding: @16@0:8
// Implementation: 0x10b6062b0

// -[SCContextSessionParams configuration]
// Type encoding: @16@0:8
// Implementation: 0x10b6062b8

// -[SCContextSessionParams contextClientInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b6062c0

// -[SCContextSessionParams content]
// Type encoding: @16@0:8
// Implementation: 0x10b6062c8

// -[SCContextSessionParams user]
// Type encoding: @16@0:8
// Implementation: 0x10b6062d0

// -[SCContextSessionParams featureParams]
// Type encoding: @16@0:8
// Implementation: 0x10b6062d8

// -[SCContextSessionParams launchSource]
// Type encoding: q16@0:8
// Implementation: 0x10b6062e0

// -[SCContextSessionParams storyParams]
// Type encoding: @16@0:8
// Implementation: 0x10b6062e8

// -[SCContextSessionParams storyId]
// Type encoding: @16@0:8
// Implementation: 0x10b6062f0

// -[SCContextSessionParams storySnapId]
// Type encoding: @16@0:8
// Implementation: 0x10b6062f8

// -[SCContextSessionParams viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x10b606300

// -[SCContextSessionParams existingBoostMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b606308

// -[SCContextSessionParams unifiedMediaType]
// Type encoding: q16@0:8
// Implementation: 0x10b606310

// -[SCContextSessionParams subscriptionParams]
// Type encoding: @16@0:8
// Implementation: 0x10b606318

// -[SCContextSessionParams reactionReplyParams]
// Type encoding: @16@0:8
// Implementation: 0x10b606320

// -[SCContextSessionParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b606328

// +[SCContextSessionParams paramsWithStory:friendStories:properties:isStoryShare:userSession:enabledSpotlightReplies:]
// Type encoding: @56@0:8@16@24@32B40@44B52
// Implementation: 0x1071e8460

// +[SCContextSessionParams paramsWithChatMedia:message:isGroupConversation:recipientDisplayName:recipientUserId:properties:userSession:viewLocation:messageProperties:circumstanceEngine:isRemixable:isUserOnDweb:]
// Type encoding: @100@0:8@16@24B32@36@44@52@60q68@76@84B92B96
// Implementation: 0x1070bd7c4

// +[SCContextSessionParams paramsWithSnapDoc:isGroupConversation:conversationId:chatMessageId:intendedRecipientUserId:]
// Type encoding: @52@0:8@16B24@28@36@44
// Implementation: 0x1070bdf6c

// +[SCContextSessionParams paramsWithGallerySnapId:contextClientInfo:isPrivateSnap:mediaId:snapDetailId:overlay:ctItems:lensId:musicTrackId:userSession:launchSource:circumstanceEngine:stickerInjector:]
// Type encoding: @116@0:8@16@24B32@36@44@52@60@68@76@84q92@100@108
// Implementation: 0x106e1564c

// +[SCContextSessionParams paramsWithGalleryItemIdentifier:launchSource:lensId:musicTrackId:circumstanceEngine:]
// Type encoding: @56@0:8@16q24@32@40@48
// Implementation: 0x106e16904

// +[SCContextSessionParams _extractUnlockableSnapInfoFromOverlay:snapEditorLensIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e16ac8

// +[SCContextSessionParams _previewLensIdsFromFilters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e16ff8

// +[SCContextSessionParams _lensIdsFromCtItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e170e0

@end
