// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceMLLensPresenter
// Superclass: NSObject
// Address: 0x112a1ece8

@interface SCVoiceMLLensPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVoiceMLLensPresenter initWithFeatureContainerView:lensCarouselManager:didLoadEffectObservable:lensPerformerProvider:vmlNotificationsPresenter:vmlBitmojiFetcher:vmlFeatureSettings:vmlLogger:infoCardsScopeOnCameraObservable:deeplinkSendToScopeObservable:lensModalObservable:onboardingListener:circumstanceEngine:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10519030c

// -[SCVoiceMLLensPresenter begin]
// Type encoding: v16@0:8
// Implementation: 0x105190638

// -[SCVoiceMLLensPresenter end]
// Type encoding: v16@0:8
// Implementation: 0x10519065c

// -[SCVoiceMLLensPresenter _didLoadEffectId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051906ac

// -[SCVoiceMLLensPresenter _didReceiveSelectedLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051906e4

// -[SCVoiceMLLensPresenter _didReceiveInfoCardsScopeOnCameraEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10519084c

// -[SCVoiceMLLensPresenter _didReceiveDeeplinkSendToScopeEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105190954

// -[SCVoiceMLLensPresenter _didReceiveLensModalEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105190a5c

// -[SCVoiceMLLensPresenter _toggleVoiceServices:]
// Type encoding: v20@0:8B16
// Implementation: 0x105190b64

// -[SCVoiceMLLensPresenter _subscribeOnSelectedLensChangedUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105190cbc

// -[SCVoiceMLLensPresenter _subscribeOnDidLoadEffectEvents]
// Type encoding: v16@0:8
// Implementation: 0x105190e80

// -[SCVoiceMLLensPresenter _subscribeOnInfoCardsScopeOnCameraLifecycleUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1051910b4

// -[SCVoiceMLLensPresenter _subscribeOnDeeplinkSendToScopeLifecycleUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10519124c

// -[SCVoiceMLLensPresenter _subscribeOnLensModalLifecycleUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1051913ec

// -[SCVoiceMLLensPresenter _unsubscribeObservables]
// Type encoding: v16@0:8
// Implementation: 0x10519158c

// -[SCVoiceMLLensPresenter _reportOnboardingLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105191594

// -[SCVoiceMLLensPresenter _reportOnboardingBegan]
// Type encoding: v16@0:8
// Implementation: 0x1051915e4

// -[SCVoiceMLLensPresenter _reportOnboardingEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105191654

// -[SCVoiceMLLensPresenter instantiateLazyVariablesWithLensPerformerProvider:featureContainerView:tooltipDelegate:bitmojiFetcher:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105191698

// -[SCVoiceMLLensPresenter _isVoiceMLLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x105191b60

// -[SCVoiceMLLensPresenter _onboardingFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x105191b74

// -[SCVoiceMLLensPresenter _enableVoiceServices]
// Type encoding: v16@0:8
// Implementation: 0x105191b78

// -[SCVoiceMLLensPresenter _dismissVoiceServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105191ba8

// -[SCVoiceMLLensPresenter _notifyListeningStateChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x105191c10

// -[SCVoiceMLLensPresenter _notifyRegisterationForVoiceActivityUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105191d10

// -[SCVoiceMLLensPresenter _mainQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105191f10

// -[SCVoiceMLLensPresenter _shouldPresentVoiceControlNotifyingElements]
// Type encoding: B16@0:8
// Implementation: 0x105191f58

// -[SCVoiceMLLensPresenter _shouldPresentFirstTimeOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105191fa8

// -[SCVoiceMLLensPresenter _shouldPresentVoiceControlOnboardingBanner]
// Type encoding: B16@0:8
// Implementation: 0x105191ffc

// -[SCVoiceMLLensPresenter _presentOnboarding]
// Type encoding: v16@0:8
// Implementation: 0x105192040

// -[SCVoiceMLLensPresenter _presentOnboardingDialogIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105192078

// -[SCVoiceMLLensPresenter _presentTapToEnterIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10519217c

// -[SCVoiceMLLensPresenter _presentBannerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105192274

// -[SCVoiceMLLensPresenter _presentDialog]
// Type encoding: v16@0:8
// Implementation: 0x105192478

// -[SCVoiceMLLensPresenter _presentTapToEnter]
// Type encoding: v16@0:8
// Implementation: 0x1051924dc

// -[SCVoiceMLLensPresenter _dismissDialogIfNecessary:dismissedLensId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1051929f4

// -[SCVoiceMLLensPresenter _dismissTapToEnterIfNecessary:dismissedLensId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105192a9c

// -[SCVoiceMLLensPresenter _dismissCurrentBanner]
// Type encoding: v16@0:8
// Implementation: 0x105192c2c

// -[SCVoiceMLLensPresenter _resetDialog]
// Type encoding: v16@0:8
// Implementation: 0x105192c3c

// -[SCVoiceMLLensPresenter _resetTapToEnter]
// Type encoding: v16@0:8
// Implementation: 0x105192c94

// -[SCVoiceMLLensPresenter _createOverlayContainer]
// Type encoding: @16@0:8
// Implementation: 0x105192c9c

// -[SCVoiceMLLensPresenter _didTapDialogOkay]
// Type encoding: v16@0:8
// Implementation: 0x105192cc8

// -[SCVoiceMLLensPresenter _didTapDialogCancel]
// Type encoding: v16@0:8
// Implementation: 0x105192d20

// -[SCVoiceMLLensPresenter _didTapToEnter]
// Type encoding: v16@0:8
// Implementation: 0x105192d6c

// -[SCVoiceMLLensPresenter _presentVoiceActivityWavesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105192db8

// -[SCVoiceMLLensPresenter _dismissVoiceActivityWavesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105192e74

// -[SCVoiceMLLensPresenter _resetVoiceActivityWaves]
// Type encoding: v16@0:8
// Implementation: 0x105192f7c

// -[SCVoiceMLLensPresenter _didReceiveVoiceActivitySample:]
// Type encoding: v24@0:8@16
// Implementation: 0x105192f84

// -[SCVoiceMLLensPresenter _reportVoiceControlOnboardingDialogAccepted]
// Type encoding: v16@0:8
// Implementation: 0x105192f8c

// -[SCVoiceMLLensPresenter _reportVoiceControlOnboardingBannerShown]
// Type encoding: v16@0:8
// Implementation: 0x105192fcc

// -[SCVoiceMLLensPresenter _voicemlLensLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x105193034

// -[SCVoiceMLLensPresenter _resetAnalytics]
// Type encoding: v16@0:8
// Implementation: 0x1051930bc

// -[SCVoiceMLLensPresenter reportDialogDismissalAnalytics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051930cc

// -[SCVoiceMLLensPresenter reportTapToEnterDismissalAnalytics:]
// Type encoding: v24@0:8@16
// Implementation: 0x105193198

// -[SCVoiceMLLensPresenter registerToApplicationLifecycleNotifications]
// Type encoding: v16@0:8
// Implementation: 0x105193238

// -[SCVoiceMLLensPresenter resignFromApplicationLifecycleNotifications]
// Type encoding: v16@0:8
// Implementation: 0x105193340

// -[SCVoiceMLLensPresenter _applicationWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x105193380

// -[SCVoiceMLLensPresenter _sceneDidDisconnect]
// Type encoding: v16@0:8
// Implementation: 0x1051933c8

// -[SCVoiceMLLensPresenter _applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x105193450

// -[SCVoiceMLLensPresenter _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x10519345c

// -[SCVoiceMLLensPresenter didTapOKButton]
// Type encoding: v16@0:8
// Implementation: 0x1051934e0

// -[SCVoiceMLLensPresenter didTapCancelButton]
// Type encoding: v16@0:8
// Implementation: 0x1051934e4

// -[SCVoiceMLLensPresenter didTapOutsideTooltip]
// Type encoding: v16@0:8
// Implementation: 0x1051934e8

// -[SCVoiceMLLensPresenter _shouldPresentLegacyFTUE]
// Type encoding: B16@0:8
// Implementation: 0x10519351c

// -[SCVoiceMLLensPresenter _v2_presentDialog]
// Type encoding: v16@0:8
// Implementation: 0x10519352c

// -[SCVoiceMLLensPresenter dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105193be8

// -[SCVoiceMLLensPresenter _createModalContainer]
// Type encoding: @16@0:8
// Implementation: 0x105193bf8

// -[SCVoiceMLLensPresenter _v2_dismissDialogIfNecessary:dismissedLensId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105193c78

// -[SCVoiceMLLensPresenter _v2_resetDialog]
// Type encoding: v16@0:8
// Implementation: 0x105193e10

// -[SCVoiceMLLensPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105193e3c

@end
