// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureLensInfoButtonImpl
// Superclass: SCFeature
// Address: 0x112ad2108

@interface SCFeatureLensInfoButtonImpl

// Property: infoCardPresenter; attributes: T@"SCLazy",&,N,VinfoCardPresenter
// Property: positioningDelegate; attributes: T@"<SCFeatureLensInfoButtonPositioningDelegate>",W,N,VpositioningDelegate
// Property: infoButtonHiddenObservable; attributes: T@"SCObservable",R,N
// Property: infoButtonTapObservable; attributes: T@"SCObservable",R,N
// Property: infoButtonView; attributes: T@"UIView",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: infoButtonLensObservable; attributes: T@"SCObservable",R,N

// -[SCFeatureLensInfoButtonImpl initWithCameraFeatureScopeInfo:navigationServices:cameraViewType:adConfigProvider:lensIconRepository:lensCarouselStudySettings:lensPerformerProvider:arBarNavigation:lensInfoButtonVisibility:lensCarouselManager:lensConfigurationServices:]
// Type encoding: @104@0:8@16@24q32@40@48@56@64@72@80@88@96
// Implementation: 0x100b7efc8

// -[SCFeatureLensInfoButtonImpl _setupWithCameraInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b7f39c

// -[SCFeatureLensInfoButtonImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061dab58

// -[SCFeatureLensInfoButtonImpl navigationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1061dab9c

// -[SCFeatureLensInfoButtonImpl volumeButton]
// Type encoding: @16@0:8
// Implementation: 0x1061dabec

// -[SCFeatureLensInfoButtonImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b7f534

// -[SCFeatureLensInfoButtonImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x1061dabfc

// -[SCFeatureLensInfoButtonImpl pointInsideLensInfoButton:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1061daf70

// -[SCFeatureLensInfoButtonImpl updateState]
// Type encoding: v16@0:8
// Implementation: 0x1061db070

// -[SCFeatureLensInfoButtonImpl setReplyParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061db13c

// -[SCFeatureLensInfoButtonImpl infoButtonHiddenObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061db174

// -[SCFeatureLensInfoButtonImpl infoButtonLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061db1a4

// -[SCFeatureLensInfoButtonImpl infoButtonTapObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061db1d4

// -[SCFeatureLensInfoButtonImpl infoButtonView]
// Type encoding: @16@0:8
// Implementation: 0x1061db204

// -[SCFeatureLensInfoButtonImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1061db214

// -[SCFeatureLensInfoButtonImpl _isAttributionAutoHidden]
// Type encoding: B16@0:8
// Implementation: 0x1061db224

// -[SCFeatureLensInfoButtonImpl _lensCarouselEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061db23c

// -[SCFeatureLensInfoButtonImpl _didActivateLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061db288

// -[SCFeatureLensInfoButtonImpl _createInfoButtonHidden]
// Type encoding: v16@0:8
// Implementation: 0x1061db3a0

// -[SCFeatureLensInfoButtonImpl _didTapInfoButton]
// Type encoding: v16@0:8
// Implementation: 0x1061db5ac

// -[SCFeatureLensInfoButtonImpl _presentInfoCard]
// Type encoding: v16@0:8
// Implementation: 0x1061db718

// -[SCFeatureLensInfoButtonImpl _infoCardSource]
// Type encoding: Q16@0:8
// Implementation: 0x1061db940

// -[SCFeatureLensInfoButtonImpl _topViewController]
// Type encoding: @16@0:8
// Implementation: 0x1061db9c0

// -[SCFeatureLensInfoButtonImpl _updateInfoButtonIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061dba6c

// -[SCFeatureLensInfoButtonImpl _stopAttributionSlugTimer]
// Type encoding: v16@0:8
// Implementation: 0x1061dbcf0

// -[SCFeatureLensInfoButtonImpl _runAttributionSlugTimerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061dbd24

// -[SCFeatureLensInfoButtonImpl hideAttributionIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x1061dbed0

// -[SCFeatureLensInfoButtonImpl _stopInfoButtonShowingDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x1061dbf60

// -[SCFeatureLensInfoButtonImpl _createPositionConstaintsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061dbf94

// -[SCFeatureLensInfoButtonImpl _updatePositionConstraints]
// Type encoding: v16@0:8
// Implementation: 0x1061dbfac

// -[SCFeatureLensInfoButtonImpl hidableViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x1061dc048

// -[SCFeatureLensInfoButtonImpl _cameraOverlayView]
// Type encoding: @16@0:8
// Implementation: 0x1061dc0c4

// -[SCFeatureLensInfoButtonImpl _positionConstraintsForTopLeftLayout]
// Type encoding: @16@0:8
// Implementation: 0x1061dc124

// -[SCFeatureLensInfoButtonImpl _showInfoButtonWithDelay]
// Type encoding: v16@0:8
// Implementation: 0x1061dc464

// -[SCFeatureLensInfoButtonImpl _showInfoButtonAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061dc5b4

// -[SCFeatureLensInfoButtonImpl _hideInfoButtonAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061dc8f0

// -[SCFeatureLensInfoButtonImpl _presentAttributionAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061dcba4

// -[SCFeatureLensInfoButtonImpl _lensInfoButtonShouldShowAttributionSlug]
// Type encoding: B16@0:8
// Implementation: 0x1061dcc78

// -[SCFeatureLensInfoButtonImpl _lensIconFutureForLens:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061dccec

// -[SCFeatureLensInfoButtonImpl infoCardPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1061dce9c

// -[SCFeatureLensInfoButtonImpl setInfoCardPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b7f548

// -[SCFeatureLensInfoButtonImpl positioningDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1061dceac

// -[SCFeatureLensInfoButtonImpl setPositioningDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061dcecc

// -[SCFeatureLensInfoButtonImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061dcee0

@end
