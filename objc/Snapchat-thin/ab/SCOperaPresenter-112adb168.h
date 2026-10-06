// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPresenter
// Superclass: NSObject
// Address: 0x112adb168

@interface SCOperaPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCOperaPresenterDelegate>",W,N,V_delegate
// Property: operaSessionId; attributes: T@"NSString",R,C,N,V_operaSessionId
// Property: defaultTransitionAnimator; attributes: T@"<SCViewControllerTransitionAnimating>",&,N,V_defaultTransitionAnimator

// -[SCOperaPresenter initWithPresentingViewController:operaDeckContainer:operaConfigurationInitializer:operaDependencies:testsHelperPlugin:trackerService:mediaResolverService:operaSessionId:operaSessionContext:activeOperaPresenter:contentResolutionSignalCollector:]
// Type encoding: @104@0:8@16@24@?32@40@48@56@64@72@80@88@96
// Implementation: 0x10630eea8

// -[SCOperaPresenter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10630f264

// -[SCOperaPresenter transitionAnimator]
// Type encoding: @16@0:8
// Implementation: 0x10630f308

// -[SCOperaPresenter presentViewingSessionWithPlaylistFetcher:playlistPlugins:baseView:config:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10630f310

// -[SCOperaPresenter _setUpEventAnnouncerV2]
// Type encoding: v16@0:8
// Implementation: 0x10630f4b4

// -[SCOperaPresenter presentViewingSessionWithDataModels:firstDisplayGroupDataModel:playlistPlugins:baseView:config:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10630f5a4

// -[SCOperaPresenter _playlistItemPreparationCompleted:error:baseLayerType:initialViewModel:presentingConfig:]
// Type encoding: v56@0:8q16@24Q32@40@48
// Implementation: 0x10630fb24

// -[SCOperaPresenter _setupPlaylistViewCoordinatorWithItemGroupDataModels:firstDisplayGroupDataModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10630fdf0

// -[SCOperaPresenter _setupOperaConfigurationWithPresentingConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106310088

// -[SCOperaPresenter updateBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063102f8

// -[SCOperaPresenter updateBaseViewFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106310340

// -[SCOperaPresenter updatePlaylistWithGroupDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x106310348

// -[SCOperaPresenter updatePlaylistWithGroupDataModels:initialGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063103ac

// -[SCOperaPresenter _recoverFromPlaylistFetcherFailureWithGroupDataModels:firstDisplayGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106310430

// -[SCOperaPresenter logShakeToReportState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10631054c

// -[SCOperaPresenter itemIdFor:page:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106310918

// -[SCOperaPresenter _didFailToPresent:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106310a08

// -[SCOperaPresenter _reportOperaSessionFailed:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106310a68

// -[SCOperaPresenter _incrementOperaSessionFailedWithErrorType:pageName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106310b98

// -[SCOperaPresenter registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x106310c08

// -[SCOperaPresenter _startDeckDismissalIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106310e40

// -[SCOperaPresenter operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106310ed8

// -[SCOperaPresenter _sendDidFinishPresentingCallbackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10631144c

// -[SCOperaPresenter _teardown]
// Type encoding: v16@0:8
// Implementation: 0x1063114d4

// -[SCOperaPresenter isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x106311648

// -[SCOperaPresenter isPresentingOtherViewController]
// Type encoding: B16@0:8
// Implementation: 0x106311658

// -[SCOperaPresenter dismissWithAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x106311690

// -[SCOperaPresenter dismissWithInteractionType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106311698

// -[SCOperaPresenter overridePauseStateToResume]
// Type encoding: v16@0:8
// Implementation: 0x1063116f4

// -[SCOperaPresenter overridePauseStateToPause]
// Type encoding: v16@0:8
// Implementation: 0x1063117b4

// -[SCOperaPresenter pauseOpera]
// Type encoding: v16@0:8
// Implementation: 0x106311870

// -[SCOperaPresenter pauseOperaWithOverlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x106311878

// -[SCOperaPresenter resumeOpera]
// Type encoding: v16@0:8
// Implementation: 0x1063118bc

// -[SCOperaPresenter modalPresentationDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x1063118f0

// -[SCOperaPresenter modalDismissalDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106311924

// -[SCOperaPresenter cancelPresentingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106311958

// -[SCOperaPresenter _playlistFetcherIsInProcess]
// Type encoding: B16@0:8
// Implementation: 0x106311974

// -[SCOperaPresenter _updateLoadingViewModelForPlaylistFetcher]
// Type encoding: v16@0:8
// Implementation: 0x106311998

// -[SCOperaPresenter currentPlaylistItemGroupDataModel]
// Type encoding: @16@0:8
// Implementation: 0x106311a84

// -[SCOperaPresenter playlistItemGroupDataModels]
// Type encoding: @16@0:8
// Implementation: 0x106311af8

// -[SCOperaPresenter playlistViewCoordinator:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106311ba8

// -[SCOperaPresenter playlistViewCoordinator:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106311c04

// -[SCOperaPresenter playlistViewCoordinator:willEnterPlaylistGroupDataModel:prevGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106311c78

// -[SCOperaPresenter playlistViewCoordinator:didEnterPlaylistItemDataModel:groupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106311d20

// -[SCOperaPresenter playlistViewCoordinator:didFinishLoadingPlaylistItemDataModel:groupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106311dc8

// -[SCOperaPresenter playlistViewCoordinator:didStartPlayingPlaylistItemDataModel:groupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106311e70

// -[SCOperaPresenter playlistViewCoordinator:didExitPlayingPlaylistItemDataModel:groupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106311f18

// -[SCOperaPresenter loadingStateChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x106311fc0

// -[SCOperaPresenter _didStartToWaitForFirstPlaylistItemToDisplay]
// Type encoding: v16@0:8
// Implementation: 0x106312238

// -[SCOperaPresenter _addLoadingIndicatorToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106312270

// -[SCOperaPresenter _removeLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x106312324

// -[SCOperaPresenter activeOperaPresenter:didRegisterPageFeatureDataProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106312374

// -[SCOperaPresenter defaultTransitionAnimator]
// Type encoding: @16@0:8
// Implementation: 0x106312380

// -[SCOperaPresenter setDefaultTransitionAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106312388

// -[SCOperaPresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x1063123b8

// -[SCOperaPresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063123d0

// -[SCOperaPresenter operaSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1063123dc

// -[SCOperaPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063123e4

// +[SCOperaPresenter _dependenciesEnsuringInternalConfigProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10630f168

@end
