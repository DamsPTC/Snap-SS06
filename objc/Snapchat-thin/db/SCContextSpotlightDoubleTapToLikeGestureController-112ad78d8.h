// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightDoubleTapToLikeGestureController
// Superclass: NSObject
// Address: 0x112ad78d8

@interface SCContextSpotlightDoubleTapToLikeGestureController

// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: topView; attributes: T@"UIView",W,N,V_topView
// Property: delegate; attributes: T@"<SCContextSpotlightDoubleTapToLikeGestureControllerDelegate>",W,N,V_delegate
// Property: observerLifecycle; attributes: T@"SCDisposableObserverLifecycle",&,N,V_observerLifecycle
// Property: actions; attributes: T@"SCObservable",&,N,V_actions
// Property: boostState; attributes: Tq,N,V_boostState
// Property: userPreferences; attributes: T@"SCLazy",&,N,V_userPreferences
// Property: contextSpotlightParams; attributes: T@"SCObservable",&,N,V_contextSpotlightParams
// Property: currentStoryType; attributes: Tq,N,V_currentStoryType
// Property: currentStorySnapCount; attributes: Tq,N,V_currentStorySnapCount
// Property: currentAdFavoriteEnabled; attributes: TB,N,V_currentAdFavoriteEnabled
// Property: storiesConfigProvider; attributes: T@"SCLazy",&,N,V_storiesConfigProvider
// Property: contextExperimentService; attributes: T@"SCLazy",&,N,V_contextExperimentService
// Property: isPauseEnabled; attributes: TB,N,V_isPauseEnabled
// Property: eventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncer
// Property: isHighSpeedPlaybackActive; attributes: TB,N,V_isHighSpeedPlaybackActive
// Property: gestureDetectionExternal; attributes: TB,N,V_gestureDetectionExternal
// Property: currentPage; attributes: T@"SCOperaPage",W,N,V_currentPage
// Property: gestureView; attributes: T@"SCContextSpotlightDoubleTapGestureView",R,N,V_gestureView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextSpotlightDoubleTapToLikeGestureController _initSharedWithCircumstanceEngine:topView:actions:contextSpotlightParams:userPreferences:storiesConfigProvider:delegate:contextExperimentService:isPauseEnabled:eventAnnouncer:gestureDetectionExternal:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72B80@84B92
// Implementation: 0x106276cf4

// -[SCContextSpotlightDoubleTapToLikeGestureController initByAttachingToView:circumstanceEngine:spotlightActionsParams:contextSpotlightParams:userPreferences:storiesConfigProvider:delegate:contextExperimentService:isPauseEnabled:eventAnnouncer:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64@72B80@84
// Implementation: 0x106276f6c

// -[SCContextSpotlightDoubleTapToLikeGestureController initForExternalGestureDetectionWithCircumstanceEngine:topView:spotlightActionsParams:contextSpotlightParams:userPreferences:storiesConfigProvider:delegate:contextExperimentService:isPauseEnabled:eventAnnouncer:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64@72B80@84
// Implementation: 0x106276fb0

// -[SCContextSpotlightDoubleTapToLikeGestureController shouldShowUserEducationForCurrentStory]
// Type encoding: B16@0:8
// Implementation: 0x106276fec

// -[SCContextSpotlightDoubleTapToLikeGestureController _setupGestureView]
// Type encoding: v16@0:8
// Implementation: 0x106277020

// -[SCContextSpotlightDoubleTapToLikeGestureController _observeActionParamsChanges]
// Type encoding: v16@0:8
// Implementation: 0x1062770b0

// -[SCContextSpotlightDoubleTapToLikeGestureController _observeSessionParamsChanges]
// Type encoding: v16@0:8
// Implementation: 0x106277214

// -[SCContextSpotlightDoubleTapToLikeGestureController _subscribeToOperaEvents]
// Type encoding: v16@0:8
// Implementation: 0x106277620

// -[SCContextSpotlightDoubleTapToLikeGestureController operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10627774c

// -[SCContextSpotlightDoubleTapToLikeGestureController _touchInsetsForCurrentStory]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x1062779b8

// -[SCContextSpotlightDoubleTapToLikeGestureController _isCurrentStoryMultiSnapStory]
// Type encoding: B16@0:8
// Implementation: 0x106277a00

// -[SCContextSpotlightDoubleTapToLikeGestureController _isEnabledForCurrentStory]
// Type encoding: B16@0:8
// Implementation: 0x106277a1c

// -[SCContextSpotlightDoubleTapToLikeGestureController _isEnabledForCurrentBoostState]
// Type encoding: B16@0:8
// Implementation: 0x106277ad8

// -[SCContextSpotlightDoubleTapToLikeGestureController _isGestureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106277b18

// -[SCContextSpotlightDoubleTapToLikeGestureController _handleDoubleTapAtLocation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x106277cb0

// -[SCContextSpotlightDoubleTapToLikeGestureController doubleTapGestureView:didDetectDoubleTapAt:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x106277dec

// -[SCContextSpotlightDoubleTapToLikeGestureController gestureView]
// Type encoding: @16@0:8
// Implementation: 0x106277f5c

// -[SCContextSpotlightDoubleTapToLikeGestureController circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x106277f64

// -[SCContextSpotlightDoubleTapToLikeGestureController setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x106277f6c

// -[SCContextSpotlightDoubleTapToLikeGestureController topView]
// Type encoding: @16@0:8
// Implementation: 0x106277f9c

// -[SCContextSpotlightDoubleTapToLikeGestureController setTopView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106277fb4

// -[SCContextSpotlightDoubleTapToLikeGestureController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106277fc0

// -[SCContextSpotlightDoubleTapToLikeGestureController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106277fd8

// -[SCContextSpotlightDoubleTapToLikeGestureController observerLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x106277fe4

// -[SCContextSpotlightDoubleTapToLikeGestureController setObserverLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106277fec

// -[SCContextSpotlightDoubleTapToLikeGestureController actions]
// Type encoding: @16@0:8
// Implementation: 0x10627801c

// -[SCContextSpotlightDoubleTapToLikeGestureController setActions:]
// Type encoding: v24@0:8@16
// Implementation: 0x106278024

// -[SCContextSpotlightDoubleTapToLikeGestureController boostState]
// Type encoding: q16@0:8
// Implementation: 0x106278054

// -[SCContextSpotlightDoubleTapToLikeGestureController setBoostState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10627805c

// -[SCContextSpotlightDoubleTapToLikeGestureController userPreferences]
// Type encoding: @16@0:8
// Implementation: 0x106278064

// -[SCContextSpotlightDoubleTapToLikeGestureController setUserPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10627806c

// -[SCContextSpotlightDoubleTapToLikeGestureController contextSpotlightParams]
// Type encoding: @16@0:8
// Implementation: 0x10627809c

// -[SCContextSpotlightDoubleTapToLikeGestureController setContextSpotlightParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062780a4

// -[SCContextSpotlightDoubleTapToLikeGestureController currentStoryType]
// Type encoding: q16@0:8
// Implementation: 0x1062780d4

// -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentStoryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062780dc

// -[SCContextSpotlightDoubleTapToLikeGestureController currentStorySnapCount]
// Type encoding: q16@0:8
// Implementation: 0x1062780e4

// -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentStorySnapCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062780ec

// -[SCContextSpotlightDoubleTapToLikeGestureController currentAdFavoriteEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1062780f4

// -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentAdFavoriteEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1062780fc

// -[SCContextSpotlightDoubleTapToLikeGestureController storiesConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x106278104

// -[SCContextSpotlightDoubleTapToLikeGestureController setStoriesConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10627810c

// -[SCContextSpotlightDoubleTapToLikeGestureController contextExperimentService]
// Type encoding: @16@0:8
// Implementation: 0x10627813c

// -[SCContextSpotlightDoubleTapToLikeGestureController setContextExperimentService:]
// Type encoding: v24@0:8@16
// Implementation: 0x106278144

// -[SCContextSpotlightDoubleTapToLikeGestureController isPauseEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106278174

// -[SCContextSpotlightDoubleTapToLikeGestureController setIsPauseEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10627817c

// -[SCContextSpotlightDoubleTapToLikeGestureController eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x106278184

// -[SCContextSpotlightDoubleTapToLikeGestureController setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10627818c

// -[SCContextSpotlightDoubleTapToLikeGestureController isHighSpeedPlaybackActive]
// Type encoding: B16@0:8
// Implementation: 0x1062781bc

// -[SCContextSpotlightDoubleTapToLikeGestureController setIsHighSpeedPlaybackActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1062781c4

// -[SCContextSpotlightDoubleTapToLikeGestureController gestureDetectionExternal]
// Type encoding: B16@0:8
// Implementation: 0x1062781cc

// -[SCContextSpotlightDoubleTapToLikeGestureController setGestureDetectionExternal:]
// Type encoding: v20@0:8B16
// Implementation: 0x1062781d4

// -[SCContextSpotlightDoubleTapToLikeGestureController currentPage]
// Type encoding: @16@0:8
// Implementation: 0x1062781dc

// -[SCContextSpotlightDoubleTapToLikeGestureController setCurrentPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062781f4

// -[SCContextSpotlightDoubleTapToLikeGestureController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106278200

// +[SCContextSpotlightDoubleTapToLikeGestureController _isEnabledForStoryType:contextExperimentService:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x106277a88

// +[SCContextSpotlightDoubleTapToLikeGestureController _isMapProviderPhotoSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106277b4c

// +[SCContextSpotlightDoubleTapToLikeGestureController canEnableDoubleTapToLikeForContextParams:contextExperimentService:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106277df0

@end
