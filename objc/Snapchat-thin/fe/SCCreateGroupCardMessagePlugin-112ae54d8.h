// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreateGroupCardMessagePlugin
// Superclass: NSObject
// Address: 0x112ae54d8

@interface SCCreateGroupCardMessagePlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: chatPresenter; attributes: T@"<SCMessagePluginChatPresenting>",W,N,V_chatPresenter
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCCreateGroupCardMessagePlugin initWithCurrentUserId:groupLinkHandler:groupsDataFetcher:groupsDataCreator:groupsDataTracker:messagingExperimentService:addToGroupScopeExposer:addToGroupScopeServices:conversationUpdatesPublisher:navigationDelegate:standardExternalContentShareScopeExposer:groupProfileScopeExposer:friendProfileScopeExposer:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x106560588

// -[SCCreateGroupCardMessagePlugin _handleTapInviteLink]
// Type encoding: v16@0:8
// Implementation: 0x1065608b0

// -[SCCreateGroupCardMessagePlugin _handleTapAddMember]
// Type encoding: v16@0:8
// Implementation: 0x106560be0

// -[SCCreateGroupCardMessagePlugin _handleTapOpenGroupProfile]
// Type encoding: v16@0:8
// Implementation: 0x106560dcc

// -[SCCreateGroupCardMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106560efc

// -[SCCreateGroupCardMessagePlugin readAllMessagesCardComposerContextParamsForConversationParticipants:]
// Type encoding: @24@0:8@16
// Implementation: 0x106560f8c

// -[SCCreateGroupCardMessagePlugin _valdiContextParamsForMessage:cacheId:userReadAllMessages:conversationParticipants:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x106560fa4

// -[SCCreateGroupCardMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x1065614ec

// -[SCCreateGroupCardMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x10656151c

// -[SCCreateGroupCardMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106561524

// -[SCCreateGroupCardMessagePlugin _getOrCreateUsersSubjectForCacheId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106561688

// -[SCCreateGroupCardMessagePlugin _getOrCreateConversationEnableInviteActionsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106561724

// -[SCCreateGroupCardMessagePlugin _getOrCreateConversationIsCommunityObservable]
// Type encoding: @16@0:8
// Implementation: 0x106561894

// -[SCCreateGroupCardMessagePlugin _handleConversationChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065619b0

// -[SCCreateGroupCardMessagePlugin _didSucceedWithGroup:deeplink:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106561a40

// -[SCCreateGroupCardMessagePlugin _presentOffPlatformShareSheetWithGroup:deeplink:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106561a44

// -[SCCreateGroupCardMessagePlugin _presentOffPlatformShareSheetWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106561cf4

// -[SCCreateGroupCardMessagePlugin _didFailWithError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106561de4

// -[SCCreateGroupCardMessagePlugin _handleNoGroupName]
// Type encoding: v16@0:8
// Implementation: 0x106561dfc

// -[SCCreateGroupCardMessagePlugin _handleMaxParticipants]
// Type encoding: v16@0:8
// Implementation: 0x106562014

// -[SCCreateGroupCardMessagePlugin _presentAlert:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065622a0

// -[SCCreateGroupCardMessagePlugin createChatSelectionScopeWantsToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065622e8

// -[SCCreateGroupCardMessagePlugin createChatSelectionScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106562320

// -[SCCreateGroupCardMessagePlugin createChatSelectionScope:wantsToDismissWithNewChat:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106562368

// -[SCCreateGroupCardMessagePlugin handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x1065623a0

// -[SCCreateGroupCardMessagePlugin shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x1065623a8

// -[SCCreateGroupCardMessagePlugin groupProfileWillDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065623f0

// -[SCCreateGroupCardMessagePlugin groupProfileDidDimiss:withRequestedFriendshipProfile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10656247c

// -[SCCreateGroupCardMessagePlugin groupProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106562568

// -[SCCreateGroupCardMessagePlugin friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065625c8

// -[SCCreateGroupCardMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x106562610

// -[SCCreateGroupCardMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x106562684

// -[SCCreateGroupCardMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x10656268c

// -[SCCreateGroupCardMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106562694

// -[SCCreateGroupCardMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x1065626c4

// -[SCCreateGroupCardMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065626dc

// -[SCCreateGroupCardMessagePlugin chatPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1065626e8

// -[SCCreateGroupCardMessagePlugin setChatPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x106562700

// -[SCCreateGroupCardMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10656270c

@end
