// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselManager
// Superclass: NSObject
// Address: 0x112bf40b8

@interface SCLensCarouselManager

// Property: active; attributes: TB,N
// Property: performer; attributes: T@"<SCAsyncPerforming>",R,N
// Property: activeStateObservable; attributes: T@"SCObservable",R,N,V_lensCarouselActiveStateSubject
// Property: activeObservable; attributes: T@"SCObservable",R,N,V_lensCarouselActiveSubject
// Property: presentationState; attributes: Tq,R,N
// Property: lensCarouselEventsObservable; attributes: T@"SCObservable",R,N,V_lensCarouselEventsSubject
// Property: activeLensIdObservable; attributes: T@"SCObservable",R,N,V_activeLensIdSubject
// Property: activeLensObservable; attributes: T@"SCObservable",R,N,V_activeLensSubject
// Property: activeLens; attributes: T@"SCLens",R,N
// Property: firstApplicableLens; attributes: T@"SCLens",R,N
// Property: defaultSelectionLensId; attributes: T@"NSString",R,N
// Property: lensOrderObservable; attributes: T@"SCObservable",R,N,V_lensOrderSubject
// Property: selectedLensIdObservable; attributes: T@"SCObservable",R,N,V_selectedLensIdSubject
// Property: selectedLensObservable; attributes: T@"SCObservable",R,N,V_selectedLensSubject

// -[SCLensCarouselManager initWithLensCarouselScopeExposer:lensFeatureContainerViewFactory:lensCarouselSettings:lensPerformerProvider:lensCarouselScheduler:performanceLogger:lensCarouselScopedServices:opaqueLensCarouselServices:lensCarouselScopeSaberServices:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100b5f9b4

// -[SCLensCarouselManager lensCarouselDataUpdatingEventsSubject]
// Type encoding: @16@0:8
// Implementation: 0x1091d90a0

// -[SCLensCarouselManager lensCarouselSelectionSubject]
// Type encoding: @16@0:8
// Implementation: 0x1091d90f0

// -[SCLensCarouselManager lensCarouselPresentationEventsSubject]
// Type encoding: @16@0:8
// Implementation: 0x1091d9140

// -[SCLensCarouselManager registerContextWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091d9190

// -[SCLensCarouselManager unregisterContextWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d925c

// -[SCLensCarouselManager activateContextWithId:activationSource:lensSelection:completionBlock:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x1091d9260

// -[SCLensCarouselManager removeContextWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d933c

// -[SCLensCarouselManager activateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091d93bc

// -[SCLensCarouselManager activateWithActivationSource:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1091d93c8

// -[SCLensCarouselManager _activateWithActivationSource:controllerState:lensCarouselUIConfiguration:selection:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1091d93dc

// -[SCLensCarouselManager activate]
// Type encoding: v16@0:8
// Implementation: 0x1091d9488

// -[SCLensCarouselManager activateWithParameters:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1091d9490

// -[SCLensCarouselManager deactivateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091d9654

// -[SCLensCarouselManager deactivate]
// Type encoding: v16@0:8
// Implementation: 0x1091d97c0

// -[SCLensCarouselManager activateWithLensCarouselType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091d97c8

// -[SCLensCarouselManager _activateWithActivationSource:controllerState:lensCarouselUIConfiguration:selection:completionBlock:]
// Type encoding: v56@0:8q16@24@32@40@?48
// Implementation: 0x1091d9854

// -[SCLensCarouselManager activateWithLensesObservable:activationConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091d9948

// -[SCLensCarouselManager activateWithLastSavedState]
// Type encoding: v16@0:8
// Implementation: 0x1091d9a08

// -[SCLensCarouselManager activateWithLastSavedStateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091d9a10

// -[SCLensCarouselManager selectLensWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d9a2c

// -[SCLensCarouselManager applyLensCarouselSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d9aac

// -[SCLensCarouselManager selectLensWithIdentifier:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091d9afc

// -[SCLensCarouselManager _activate]
// Type encoding: v16@0:8
// Implementation: 0x1091d9b8c

// -[SCLensCarouselManager _deactivate]
// Type encoding: v16@0:8
// Implementation: 0x1091d9d28

// -[SCLensCarouselManager didPresentCarouselWithCarouselInfoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d9e10

// -[SCLensCarouselManager didFailToPresentCarousel]
// Type encoding: v16@0:8
// Implementation: 0x1091d9e94

// -[SCLensCarouselManager didActivateLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d9ec0

// -[SCLensCarouselManager didSelectLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d9f8c

// -[SCLensCarouselManager didChangeLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091da058

// -[SCLensCarouselManager willDismissCarousel]
// Type encoding: v16@0:8
// Implementation: 0x1091da060

// -[SCLensCarouselManager didDismissCarousel]
// Type encoding: v16@0:8
// Implementation: 0x1091da064

// -[SCLensCarouselManager didEmitUIEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091da1dc

// -[SCLensCarouselManager didCompleteOperationWithUuid:result:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091da43c

// -[SCLensCarouselManager _saveLensCarouselConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x1091da50c

// -[SCLensCarouselManager _activateCarouselWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091da648

// -[SCLensCarouselManager _activateCarouselWithConfiguration:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1091da650

// -[SCLensCarouselManager _activateCarouselWithConfiguration:isRestoration:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1091da65c

// -[SCLensCarouselManager _activateCarouselWithConfigurationBase:isRestoration:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091da838

// -[SCLensCarouselManager activeLens]
// Type encoding: @16@0:8
// Implementation: 0x1091da928

// -[SCLensCarouselManager firstApplicableLens]
// Type encoding: @16@0:8
// Implementation: 0x1091da964

// -[SCLensCarouselManager defaultSelectionLensId]
// Type encoding: @16@0:8
// Implementation: 0x1091da96c

// -[SCLensCarouselManager setActiveLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091da974

// -[SCLensCarouselManager active]
// Type encoding: B16@0:8
// Implementation: 0x1091da9b4

// -[SCLensCarouselManager setActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091da9e8

// -[SCLensCarouselManager presentationState]
// Type encoding: q16@0:8
// Implementation: 0x1091daa18

// -[SCLensCarouselManager setPresentationState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091daa4c

// -[SCLensCarouselManager performer]
// Type encoding: @16@0:8
// Implementation: 0x1091daa7c

// -[SCLensCarouselManager _updateActiveStateOnActivation:resetActiveLensOnDeactivation:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1091daac4

// -[SCLensCarouselManager _updateActiveStateOnSelectionLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dac24

// -[SCLensCarouselManager _updateActiveStateOnActivationLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dad24

// -[SCLensCarouselManager _updateActiveStateIfNeeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091dae58

// -[SCLensCarouselManager activeLensIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b6ead8

// -[SCLensCarouselManager activeLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b610d0

// -[SCLensCarouselManager selectedLensIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b6fdd8

// -[SCLensCarouselManager selectedLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b6fde4

// -[SCLensCarouselManager activeStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b5fd8c

// -[SCLensCarouselManager activeObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b6eac0

// -[SCLensCarouselManager lensOrderObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b61480

// -[SCLensCarouselManager lensCarouselEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b6eacc

// -[SCLensCarouselManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091daef8

@end
