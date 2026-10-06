// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2ActionsHandler
// Superclass: NSObject
// Address: 0x112ae0b68

@interface SCContextV2ActionsHandler

// Property: delegate; attributes: T@"<SCContextV2ActionsHandlerDelegate>",W,N,V_delegate
// Property: expansionStateDelegate; attributes: T@"<SCContextV2ActionsHandlerExpansionStateDelegate>",W,N,V_expansionStateDelegate
// Property: presentingModalContent; attributes: TB,R,N,V_presentingModalContent
// Property: baseViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_baseViewController
// Property: contextSessionParams; attributes: T@"SCContextSessionParams",R,N,V_contextSessionParams
// Property: contextLogger; attributes: T@"<SCContextLogging>",R,N,V_contextLogger
// Property: suggestedFriendsService; attributes: T@"SCLazy",R,N,V_suggestedFriendsService
// Property: gameLauncher; attributes: T@"<SCCGameLaunching>",&,N,V_gameLauncher
// Property: actionHandler; attributes: T@"<SCContextValdiActionHandler>",&,N,V_actionHandler
// Property: myAstrologyUserInfo; attributes: T@"SCContextCardsAstrologyProfileUserInfo",&,N,V_myAstrologyUserInfo
// Property: musicFavoritesService; attributes: T@"<SCComposerMusicFavoritesService>",&,N,V_musicFavoritesService
// Property: musicNotificationPresenter; attributes: T@"<SCComposerMusicNotificationPresenting>",&,N,V_musicNotificationPresenter
// Property: alertPresenter; attributes: T@"<SCComposerFoundationAlertPresenting>",&,N,V_alertPresenter
// Property: musicFeatureSettings; attributes: T@"<SCComposerMusicFeatureSettings>",&,N,V_musicFeatureSettings
// Property: placeCardV2Context; attributes: T@"SCPlaceContextCardV2Context",&,N,V_placeCardV2Context
// Property: itemInstanceViewFactory; attributes: T@"<SCValdiViewFactory>",&,N,V_itemInstanceViewFactory
// Property: mentionSigBottomButtonsEnabled; attributes: T@"NSNumber",&,N,V_mentionSigBottomButtonsEnabled
// Property: storyPlayer; attributes: T@"<SCCStoryPlayerPlaying>",&,N,V_storyPlayer
// Property: networkingClient; attributes: T@"<SCComposerNetworkingClientProtocol>",&,N,V_networkingClient
// Property: allowRelatedStories; attributes: T@"NSNumber",&,N,V_allowRelatedStories
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: favoritesProductHandler; attributes: T@"<SCCCommerceFavoriteProductIFavoriteProduct>",?,&,N

// -[SCContextV2ActionsHandler initWithSessionParams:logger:baseViewController:v3ActionHandlerProvider:actionParams:v3ActionHandler:appStartExperimentReader:contextStoryPlaybackScopeExposer:contextMenuType:birthdayProvider:bitmojiAvatarProvider:musicServices:musicFavoritesComposerServices:alertPresenterFactory:circumstanceEngine:placesContextCardContextCreator:composerRuntime:ctpItemViewService:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72q80@88@96@104@112@120@128@136@144@152
// Implementation: 0x106478ad8

// -[SCContextV2ActionsHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106479128

// -[SCContextV2ActionsHandler setBaseViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647916c

// -[SCContextV2ActionsHandler logMusicFavoriteWithTrackId:favorited:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1064791b0

// -[SCContextV2ActionsHandler performActionWithAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106479244

// -[SCContextV2ActionsHandler isMusicPrivateWithAction:]
// Type encoding: B24@0:8@16
// Implementation: 0x106479964

// -[SCContextV2ActionsHandler playStoryWithToken:baseView:onLoadFinished:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1064799dc

// -[SCContextV2ActionsHandler playUserStoryWithUsername:userId:baseView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064799e0

// -[SCContextV2ActionsHandler presentRemoteDocumentModallyWithInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106479bdc

// -[SCContextV2ActionsHandler shouldCardsBeInitiallyCollapsed]
// Type encoding: B16@0:8
// Implementation: 0x106479be0

// -[SCContextV2ActionsHandler registerExpansionStateListenerWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106479c24

// -[SCContextV2ActionsHandler wantsToExpandFromCollapsedState]
// Type encoding: v16@0:8
// Implementation: 0x106479c80

// -[SCContextV2ActionsHandler dismissModal:]
// Type encoding: v24@0:8@16
// Implementation: 0x106479cb8

// -[SCContextV2ActionsHandler itemInstanceViewFactory]
// Type encoding: @16@0:8
// Implementation: 0x106479cbc

// -[SCContextV2ActionsHandler _getContextLoggingActionSource]
// Type encoding: @16@0:8
// Implementation: 0x106479e04

// -[SCContextV2ActionsHandler setPresentingModalContent:source:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106479e70

// -[SCContextV2ActionsHandler contextStoryPlaybackScopeDidStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x106479eec

// -[SCContextV2ActionsHandler contextStoryPlaybackScopeDidComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x106479f34

// -[SCContextV2ActionsHandler shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106479fb0

// -[SCContextV2ActionsHandler pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106479fb8

// -[SCContextV2ActionsHandler getOverridePlaceholderIconTtlMs]
// Type encoding: d16@0:8
// Implementation: 0x106479fc4

// -[SCContextV2ActionsHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x106479fcc

// -[SCContextV2ActionsHandler expansionStateDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106479fe4

// -[SCContextV2ActionsHandler setExpansionStateDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106479ffc

// -[SCContextV2ActionsHandler presentingModalContent]
// Type encoding: B16@0:8
// Implementation: 0x10647a008

// -[SCContextV2ActionsHandler baseViewController]
// Type encoding: @16@0:8
// Implementation: 0x10647a010

// -[SCContextV2ActionsHandler contextSessionParams]
// Type encoding: @16@0:8
// Implementation: 0x10647a028

// -[SCContextV2ActionsHandler contextLogger]
// Type encoding: @16@0:8
// Implementation: 0x10647a030

// -[SCContextV2ActionsHandler suggestedFriendsService]
// Type encoding: @16@0:8
// Implementation: 0x10647a038

// -[SCContextV2ActionsHandler gameLauncher]
// Type encoding: @16@0:8
// Implementation: 0x10647a040

// -[SCContextV2ActionsHandler setGameLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a048

// -[SCContextV2ActionsHandler actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x10647a078

// -[SCContextV2ActionsHandler setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a080

// -[SCContextV2ActionsHandler myAstrologyUserInfo]
// Type encoding: @16@0:8
// Implementation: 0x10647a0b0

// -[SCContextV2ActionsHandler setMyAstrologyUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a0b8

// -[SCContextV2ActionsHandler musicFavoritesService]
// Type encoding: @16@0:8
// Implementation: 0x10647a0e8

// -[SCContextV2ActionsHandler setMusicFavoritesService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a0f0

// -[SCContextV2ActionsHandler musicNotificationPresenter]
// Type encoding: @16@0:8
// Implementation: 0x10647a120

// -[SCContextV2ActionsHandler setMusicNotificationPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a128

// -[SCContextV2ActionsHandler alertPresenter]
// Type encoding: @16@0:8
// Implementation: 0x10647a158

// -[SCContextV2ActionsHandler setAlertPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a160

// -[SCContextV2ActionsHandler musicFeatureSettings]
// Type encoding: @16@0:8
// Implementation: 0x10647a190

// -[SCContextV2ActionsHandler setMusicFeatureSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a198

// -[SCContextV2ActionsHandler placeCardV2Context]
// Type encoding: @16@0:8
// Implementation: 0x10647a1c8

// -[SCContextV2ActionsHandler setPlaceCardV2Context:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a1d0

// -[SCContextV2ActionsHandler setItemInstanceViewFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a200

// -[SCContextV2ActionsHandler mentionSigBottomButtonsEnabled]
// Type encoding: @16@0:8
// Implementation: 0x10647a230

// -[SCContextV2ActionsHandler setMentionSigBottomButtonsEnabled:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a238

// -[SCContextV2ActionsHandler storyPlayer]
// Type encoding: @16@0:8
// Implementation: 0x10647a268

// -[SCContextV2ActionsHandler setStoryPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a270

// -[SCContextV2ActionsHandler networkingClient]
// Type encoding: @16@0:8
// Implementation: 0x10647a2a0

// -[SCContextV2ActionsHandler setNetworkingClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a2a8

// -[SCContextV2ActionsHandler allowRelatedStories]
// Type encoding: @16@0:8
// Implementation: 0x10647a2d8

// -[SCContextV2ActionsHandler setAllowRelatedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647a2e0

// -[SCContextV2ActionsHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10647a310

@end
