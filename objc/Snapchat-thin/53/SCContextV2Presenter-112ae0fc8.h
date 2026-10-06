// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2Presenter
// Superclass: NSObject
// Address: 0x112ae0fc8

@interface SCContextV2Presenter

// Property: baseViewController; attributes: T@"UIViewController<SCContextOperaLayerViewControlling>",R,W,N,V_baseViewController
// Property: placeholderCards; attributes: T@"SnapContextPlaceholderCards",&,N,V_placeholderCards
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: contextActionSource; attributes: T@"SCContextLoggingActionSource",&,N,V_contextActionSource
// Property: delegate; attributes: T@"<SCContextPresenterDelegate>",W,N,V_delegate
// Property: swipeUpContentPresented; attributes: TB,R,N
// Property: swipeUpHandler; attributes: T@"<SCContextSwipeUpActionHandling>",&,N,V_swipeUpHandler
// Property: pairedMusicDataProvider; attributes: T@"SCContextPairedMusicDataProvider",&,N,V_pairedMusicDataProvider

// -[SCContextV2Presenter initWithSessionParams:logger:baseViewController:messagingScopeExposer:chatLogger:actionHandlingProvider:operaNavigationStyle:operaEventAnnouncer:operaPage:operaPageObservable:birthdayProvider:bitmojiAvatarProvider:imageDownloader:storiesFetcher:contextStoryPlaybackScopeExposer:cardsDataFetcher:composerRuntime:alertPresenterFactory:musicServices:musicFavoritesComposerServices:snapchatterServices:userSession:circumstanceEngine:placesContextCardContextCreator:boostCoordinator:contextExperimentService:bloopsContextServices:contextDrivenSwipePresentationEnabled:ctpItemViewService:pageLauncher:valdiRuntimeProvider:snapProServices:repliesSubscribeUpsellScopeExposer:repliesSubscribeUpsellScopeServices:bitmojiSelfieFetcher:imageFetchingService:gestureTracker:appStartExperimentReader:]
// Type encoding: @316@0:8@16@24@32@40@48@56q64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224B232@236@244@252@260@268@276@284@292@300@308
// Implementation: 0x10648c704

// -[SCContextV2Presenter actionParamsForOperaPage:eventAnnouncer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10648d484

// -[SCContextV2Presenter contextV2Logger]
// Type encoding: @16@0:8
// Implementation: 0x10648da2c

// -[SCContextV2Presenter snapViewMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10648da54

// -[SCContextV2Presenter contextSessionParams]
// Type encoding: @16@0:8
// Implementation: 0x10648da5c

// -[SCContextV2Presenter dismissSwipeUpContentIfNecessaryAnimated:withCompletion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10648da84

// -[SCContextV2Presenter viewControllerToPresentViaSwipeUpGesture:source:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10648db9c

// -[SCContextV2Presenter baseViewControllerForSwipeUpPresentation:]
// Type encoding: @24@0:8@16
// Implementation: 0x10648dc34

// -[SCContextV2Presenter swipeUpGestureDidPresent:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10648dc38

// -[SCContextV2Presenter swipeUpGestureDidDismiss:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10648dca4

// -[SCContextV2Presenter willSwipeToContextCards]
// Type encoding: B16@0:8
// Implementation: 0x10648dd10

// -[SCContextV2Presenter gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10648dd4c

// -[SCContextV2Presenter gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10648dd54

// -[SCContextV2Presenter gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10648dd5c

// -[SCContextV2Presenter isSwipeUpAllowed]
// Type encoding: B16@0:8
// Implementation: 0x10648dd60

// -[SCContextV2Presenter contextV3ActionHandlerProvider]
// Type encoding: @16@0:8
// Implementation: 0x10648dda4

// -[SCContextV2Presenter setCardsPresented:source:animated:completion:]
// Type encoding: v40@0:8B16@20B28@?32
// Implementation: 0x10648ddcc

// -[SCContextV2Presenter cardsPresented]
// Type encoding: B16@0:8
// Implementation: 0x10648dde0

// -[SCContextV2Presenter attachSwipeUpGestureToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648de18

// -[SCContextV2Presenter detatchSwipeUpGestureFromView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648df68

// -[SCContextV2Presenter attachActionBarPanGestureToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648dfdc

// -[SCContextV2Presenter detachActionBarPanGestureToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e060

// -[SCContextV2Presenter setSwipeUpHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e0e4

// -[SCContextV2Presenter _updatePlainSwipeUpGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x10648e11c

// -[SCContextV2Presenter _plainSwipeUpRecognized:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e18c

// -[SCContextV2Presenter setPlaceholderCards:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e284

// -[SCContextV2Presenter canLaunchChat]
// Type encoding: B16@0:8
// Implementation: 0x10648e2f4

// -[SCContextV2Presenter _didPresentCardsWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e314

// -[SCContextV2Presenter _didDismissCardsWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e4d0

// -[SCContextV2Presenter createSwipeUpPresentableReplyCameraVC]
// Type encoding: @16@0:8
// Implementation: 0x10648e538

// -[SCContextV2Presenter chatWillPresentFullscreen]
// Type encoding: v16@0:8
// Implementation: 0x10648e540

// -[SCContextV2Presenter notifySwipeUpMenuPresentedWithType:source:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10648e544

// -[SCContextV2Presenter _notifySwipeUpMenuDismissedWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e5a8

// -[SCContextV2Presenter swipeUpContentPresented]
// Type encoding: B16@0:8
// Implementation: 0x10648e684

// -[SCContextV2Presenter contextActionsHandlerDidPresentModalContent:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10648e68c

// -[SCContextV2Presenter contextActionsHandlerDidDismissModalContent:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10648e694

// -[SCContextV2Presenter contextActionsHandlerDidBeginPresentingMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e69c

// -[SCContextV2Presenter contextActionsHandlerDidFinishPresentingMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648e6d0

// -[SCContextV2Presenter _doHapticFeedbackIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x10648e704

// -[SCContextV2Presenter _topMostPresentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x10648e740

// -[SCContextV2Presenter contextLayerWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x10648e860

// -[SCContextV2Presenter createSwipeUpViewController]
// Type encoding: @16@0:8
// Implementation: 0x10648e89c

// -[SCContextV2Presenter createCardsViewWithBaseViewController:menuType:expansionStateDelegate:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10648ec54

// -[SCContextV2Presenter cardsDataProvider:didErrorWithRetryBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10648ef2c

// -[SCContextV2Presenter cardsDataProvider:didGeneratePlaceholderCards:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10648ef7c

// -[SCContextV2Presenter cardsDataProvider:didReceiveContent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10648f000

// -[SCContextV2Presenter messagingForSwipeUpViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x10648f050

// -[SCContextV2Presenter _swipeUpMessagingController]
// Type encoding: @16@0:8
// Implementation: 0x10648f144

// -[SCContextV2Presenter _swipeUpMessagingControllerWithContextActionParams:parentViewController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10648f150

// -[SCContextV2Presenter presentChatWithSource:inputItemDeeplink:contextActionParams:parentViewController:isRepliesSubscribeUpsellEnabled:completion:]
// Type encoding: v60@0:8@16@24@32@40B48@?52
// Implementation: 0x10648f348

// -[SCContextV2Presenter _presentChatWithSource:inputItemDeeplink:contextActionParams:parentViewController:isRepliesSubscribeUpsellEnabled:completion:]
// Type encoding: v60@0:8@16@24@32@40B48@?52
// Implementation: 0x10648f49c

// -[SCContextV2Presenter _logChatFieldPresented]
// Type encoding: v16@0:8
// Implementation: 0x10648f734

// -[SCContextV2Presenter presentCardsWithSource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10648f988

// -[SCContextV2Presenter topMostPresentedViewControllerForMessagingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x10648fbd4

// -[SCContextV2Presenter messagingScopeWillTransitionToFullScreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648fbd8

// -[SCContextV2Presenter messagingScopeDidLeaveFullScreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648fcbc

// -[SCContextV2Presenter messagingScope:didChangeFullscreenViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10648fd88

// -[SCContextV2Presenter messagingScopeDidWillBeginPresentingSnapAccessoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648fd8c

// -[SCContextV2Presenter messagingScopeDidFinishPresentingSnapAccessoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648fe0c

// -[SCContextV2Presenter contextActionsHandlerCardsShouldBeCollapsed:]
// Type encoding: B24@0:8@16
// Implementation: 0x10648fea4

// -[SCContextV2Presenter contextActionsHandler:wantsToRegisterExpansionStateListener:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10648feac

// -[SCContextV2Presenter contextActionsHandlerWantsToExpandFromCollapsedState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10648feb0

// -[SCContextV2Presenter contextLogger:didLogActionWithTypeString:cardType:cardId:filterLensId:actionType:contextMenuType:interactionContext:contextLabelType:]
// Type encoding: v88@0:8@16@24@32@40@48q56q64q72q80
// Implementation: 0x10648feb4

// -[SCContextV2Presenter _createSnapchatterActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x106490414

// -[SCContextV2Presenter _newOpenChatActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x106490538

// -[SCContextV2Presenter _newOpenCameraActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x1064905d8

// -[SCContextV2Presenter _replyOptionsFromActionParams:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106490644

// -[SCContextV2Presenter _isReplyEnabledForActionParams:]
// Type encoding: B24@0:8@16
// Implementation: 0x1064906c4

// -[SCContextV2Presenter _configureRepliesSubscribeUpsellDataManagerWithParams:source:inputItemDeeplink:parentViewController:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106490794

// -[SCContextV2Presenter _logPresentChatWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106490dcc

// -[SCContextV2Presenter dismissRepliesSubscribeUpsellScopeWithDidSubscribe:]
// Type encoding: v20@0:8B16
// Implementation: 0x106490e3c

// -[SCContextV2Presenter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106490ef8

// -[SCContextV2Presenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x106490f80

// -[SCContextV2Presenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106490f98

// -[SCContextV2Presenter pairedMusicDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x106490fa4

// -[SCContextV2Presenter setPairedMusicDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106490fac

// -[SCContextV2Presenter swipeUpHandler]
// Type encoding: @16@0:8
// Implementation: 0x106490fdc

// -[SCContextV2Presenter contextActionSource]
// Type encoding: @16@0:8
// Implementation: 0x106490fe4

// -[SCContextV2Presenter setContextActionSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106490fec

// -[SCContextV2Presenter baseViewController]
// Type encoding: @16@0:8
// Implementation: 0x10649101c

// -[SCContextV2Presenter placeholderCards]
// Type encoding: @16@0:8
// Implementation: 0x106491034

// -[SCContextV2Presenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10649103c

@end
