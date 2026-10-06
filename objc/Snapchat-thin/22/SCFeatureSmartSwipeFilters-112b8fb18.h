// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureSmartSwipeFilters
// Superclass: NSObject
// Address: 0x112b8fb18

@interface SCFeatureSmartSwipeFilters

// Property: maxMediaAreaFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_maxMediaAreaFrame
// Property: activated; attributes: TB,N,V_activated
// Property: configuration; attributes: T@"SCPreviewConfiguration",W,N,V_configuration
// Property: previewScopeServices; attributes: T@"SCPreviewScopeServices",R,N,V_previewScopeServices
// Property: previewABServices; attributes: T@"SCPreviewABServices",R,N,V_previewABServices
// Property: filterArranger; attributes: T@"SCSmartCarouselFilterArranger",&,N,V_filterArranger
// Property: commonLoggingParamsBuilder; attributes: T@"SCSnapCommonLoggingParamsBuilder",&,N,V_commonLoggingParamsBuilder
// Property: geofilterLogger; attributes: T@"<SCPreviewGeoFilterLogging>",&,N,V_geofilterLogger
// Property: latencyLogger; attributes: T@"<SCPreviewLatencyLogging>",&,N,V_latencyLogger
// Property: userInteractionStateLogger; attributes: T@"<SCPreviewUserInteractionStateLogging>",&,N,V_userInteractionStateLogger
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: renderingSessionFactory; attributes: T@"SCLazy",R,N,V_renderingSessionFactory
// Property: imageProcessCommandProvider; attributes: T@"<SCImageProcessCommandProvider>",&,N,V_imageProcessCommandProvider
// Property: cropBackgroundAnimationImages; attributes: T@"SCLazy",&,N,V_cropBackgroundAnimationImages
// Property: cropBackgroundAnimationColors; attributes: T@"SCLazy",&,N,V_cropBackgroundAnimationColors
// Property: snapCrop; attributes: T@"SCLazy",R,W,N,V_snapCrop
// Property: unlockableGeoFilterTracker; attributes: T@"<SCUnlockableGeoFilterTracking>",&,N,V_unlockableGeoFilterTracker
// Property: unifiedCameraObjectFilterViewFactory; attributes: T@"SCLazy",R,N,V_unifiedCameraObjectFilterViewFactory
// Property: ucoLogger; attributes: T@"SCLazy",R,W,N,V_ucoLogger
// Property: ucoInteractionTracker; attributes: T@"SCLazy",R,W,N,V_ucoInteractionTracker
// Property: lensCrashLogger; attributes: T@"SCLazy",R,W,N,V_lensCrashLogger
// Property: swipeFilterViewLayoutGuide; attributes: T@"<SCSwipeFilterViewLayoutProviding>",R,N,V_swipeFilterViewLayoutGuide
// Property: lensCTAHandler; attributes: T@"SCLazy",R,N,V_lensCTAHandler
// Property: smartSwipeFilterView; attributes: T@"SCSmartSwipeFilterView",&,N,V_smartSwipeFilterView
// Property: internalImageSwipeFilters; attributes: T@"<SCSwipeFiltersInternal>",R,N
// Property: internalVideoSwipeFilters; attributes: T@"<SCSwipeFiltersInternal>",R,N
// Property: internalSwipeFilterView; attributes: T@"UIView<SCSwipeFilterViewInternal>",R,N
// Property: delegate; attributes: T@"<SCFeatureSwipeFiltersDelegate>",W,N,V_delegate
// Property: previewView; attributes: T@"UIView<SCPreviewViewProtocol>",R,N
// Property: imagePlayback; attributes: T@"<SCPreviewFeatureImagePlayback>",R,N
// Property: videoPlayback; attributes: T@"<SCFeatureVideoPlayback>",R,N
// Property: reversedAudioData; attributes: T@"NSData",&,N
// Property: trackingObjectContainerView; attributes: T@"UIView",&,N,V_trackingObjectContainerView
// Property: trackingObjectContainerViewFuture; attributes: T@"SCFuture",R,N,V_trackingObjectContainerViewFuture
// Property: filterStackingUIHelper; attributes: T@"SCPreviewFilterStackingUIHelper",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureSmartSwipeFilters initWithConfiguration:previewScopeServices:previewABServices:filterArranger:commonLoggingParamsBuilder:geoFilterLogger:latencyLogger:userInteractionStateLogger:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:maxMediaAreaFrame:unlockableGeoFilterTracker:previewTooltipsServices:unifiedCameraObjectFilterViewFactory:ucoLogger:ucoInteractionTracker:lensCrashLogger:lensCTAHandler:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112{CGRect={CGPoint=dd}{CGSize=dd}}120@152@160@168@176@184@192@200
// Implementation: 0x107f7df48

// -[SCFeatureSmartSwipeFilters responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x107f7e444

// -[SCFeatureSmartSwipeFilters imagePlayback]
// Type encoding: @16@0:8
// Implementation: 0x107f7e44c

// -[SCFeatureSmartSwipeFilters videoPlayback]
// Type encoding: @16@0:8
// Implementation: 0x107f7e454

// -[SCFeatureSmartSwipeFilters reversedAudioData]
// Type encoding: @16@0:8
// Implementation: 0x107f7e45c

// -[SCFeatureSmartSwipeFilters filterStackingUIHelper]
// Type encoding: @16@0:8
// Implementation: 0x107f7e464

// -[SCFeatureSmartSwipeFilters setReversedAudioData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7e4b0

// -[SCFeatureSmartSwipeFilters setSmartSwipeFilterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7e4b4

// -[SCFeatureSmartSwipeFilters swipeFilterViewInitialFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107f7e500

// -[SCFeatureSmartSwipeFilters previewView]
// Type encoding: @16@0:8
// Implementation: 0x107f7e6cc

// -[SCFeatureSmartSwipeFilters configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7e6e4

// -[SCFeatureSmartSwipeFilters activate]
// Type encoding: v16@0:8
// Implementation: 0x107f7e774

// -[SCFeatureSmartSwipeFilters filtersTurnedOn]
// Type encoding: v16@0:8
// Implementation: 0x107f7e78c

// -[SCFeatureSmartSwipeFilters isReverseMotionFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x107f7e878

// -[SCFeatureSmartSwipeFilters videoTracker]
// Type encoding: @16@0:8
// Implementation: 0x107f7e8cc

// -[SCFeatureSmartSwipeFilters replaceFiltersWithState:lastState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f7e920

// -[SCFeatureSmartSwipeFilters currentFilterSpeedForType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f7e98c

// -[SCFeatureSmartSwipeFilters filteredImageWithCroppingAspectRatio:transcodingTaskId:completionHandler:]
// Type encoding: v40@0:8d16@24@?32
// Implementation: 0x107f7e9e0

// -[SCFeatureSmartSwipeFilters ucoImageWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f7ea4c

// -[SCFeatureSmartSwipeFilters _contentViewSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107f7eaac

// -[SCFeatureSmartSwipeFilters _removePromptFilter]
// Type encoding: v16@0:8
// Implementation: 0x107f7eb0c

// -[SCFeatureSmartSwipeFilters addMotionFilters]
// Type encoding: v16@0:8
// Implementation: 0x107f7eb40

// -[SCFeatureSmartSwipeFilters _addSmartFilters]
// Type encoding: v16@0:8
// Implementation: 0x107f7eb44

// -[SCFeatureSmartSwipeFilters _getSelectedGeoFilter]
// Type encoding: @16@0:8
// Implementation: 0x107f7eb78

// -[SCFeatureSmartSwipeFilters currentlyDisplayingSegmentCroppingState]
// Type encoding: @16@0:8
// Implementation: 0x107f7ed88

// -[SCFeatureSmartSwipeFilters didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107f7ef00

// -[SCFeatureSmartSwipeFilters shouldBlockGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f7f034

// -[SCFeatureSmartSwipeFilters updateSnapCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f03c

// -[SCFeatureSmartSwipeFilters _ucoUpdateSnapCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f1d8

// -[SCFeatureSmartSwipeFilters updatePreviewCarouselView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f6e8

// -[SCFeatureSmartSwipeFilters didProcessTapInPreviewContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f6f0

// -[SCFeatureSmartSwipeFilters internalImageSwipeFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f7f6f8

// -[SCFeatureSmartSwipeFilters internalVideoSwipeFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f7f700

// -[SCFeatureSmartSwipeFilters internalSwipeFilterView]
// Type encoding: @16@0:8
// Implementation: 0x107f7f708

// -[SCFeatureSmartSwipeFilters delegate]
// Type encoding: @16@0:8
// Implementation: 0x107f7f730

// -[SCFeatureSmartSwipeFilters setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f748

// -[SCFeatureSmartSwipeFilters trackingObjectContainerView]
// Type encoding: @16@0:8
// Implementation: 0x107f7f754

// -[SCFeatureSmartSwipeFilters setTrackingObjectContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f75c

// -[SCFeatureSmartSwipeFilters trackingObjectContainerViewFuture]
// Type encoding: @16@0:8
// Implementation: 0x107f7f78c

// -[SCFeatureSmartSwipeFilters latencyLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f7f794

// -[SCFeatureSmartSwipeFilters setLatencyLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f79c

// -[SCFeatureSmartSwipeFilters configuration]
// Type encoding: @16@0:8
// Implementation: 0x107f7f7cc

// -[SCFeatureSmartSwipeFilters setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f7e4

// -[SCFeatureSmartSwipeFilters previewScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x107f7f7f0

// -[SCFeatureSmartSwipeFilters previewABServices]
// Type encoding: @16@0:8
// Implementation: 0x107f7f7f8

// -[SCFeatureSmartSwipeFilters filterArranger]
// Type encoding: @16@0:8
// Implementation: 0x107f7f800

// -[SCFeatureSmartSwipeFilters setFilterArranger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f808

// -[SCFeatureSmartSwipeFilters commonLoggingParamsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107f7f838

// -[SCFeatureSmartSwipeFilters setCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f840

// -[SCFeatureSmartSwipeFilters geofilterLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f7f870

// -[SCFeatureSmartSwipeFilters setGeofilterLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f878

// -[SCFeatureSmartSwipeFilters userInteractionStateLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f7f8a8

// -[SCFeatureSmartSwipeFilters setUserInteractionStateLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f8b0

// -[SCFeatureSmartSwipeFilters userSession]
// Type encoding: @16@0:8
// Implementation: 0x107f7f8e0

// -[SCFeatureSmartSwipeFilters setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f8e8

// -[SCFeatureSmartSwipeFilters renderingSessionFactory]
// Type encoding: @16@0:8
// Implementation: 0x107f7f918

// -[SCFeatureSmartSwipeFilters imageProcessCommandProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f7f920

// -[SCFeatureSmartSwipeFilters setImageProcessCommandProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f928

// -[SCFeatureSmartSwipeFilters cropBackgroundAnimationImages]
// Type encoding: @16@0:8
// Implementation: 0x107f7f958

// -[SCFeatureSmartSwipeFilters setCropBackgroundAnimationImages:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f960

// -[SCFeatureSmartSwipeFilters cropBackgroundAnimationColors]
// Type encoding: @16@0:8
// Implementation: 0x107f7f990

// -[SCFeatureSmartSwipeFilters setCropBackgroundAnimationColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f998

// -[SCFeatureSmartSwipeFilters snapCrop]
// Type encoding: @16@0:8
// Implementation: 0x107f7f9c8

// -[SCFeatureSmartSwipeFilters unlockableGeoFilterTracker]
// Type encoding: @16@0:8
// Implementation: 0x107f7f9e0

// -[SCFeatureSmartSwipeFilters setUnlockableGeoFilterTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7f9e8

// -[SCFeatureSmartSwipeFilters unifiedCameraObjectFilterViewFactory]
// Type encoding: @16@0:8
// Implementation: 0x107f7fa18

// -[SCFeatureSmartSwipeFilters ucoLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f7fa20

// -[SCFeatureSmartSwipeFilters ucoInteractionTracker]
// Type encoding: @16@0:8
// Implementation: 0x107f7fa38

// -[SCFeatureSmartSwipeFilters lensCrashLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f7fa50

// -[SCFeatureSmartSwipeFilters swipeFilterViewLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x107f7fa68

// -[SCFeatureSmartSwipeFilters lensCTAHandler]
// Type encoding: @16@0:8
// Implementation: 0x107f7fa70

// -[SCFeatureSmartSwipeFilters smartSwipeFilterView]
// Type encoding: @16@0:8
// Implementation: 0x107f7fa78

// -[SCFeatureSmartSwipeFilters maxMediaAreaFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107f7fa80

// -[SCFeatureSmartSwipeFilters setMaxMediaAreaFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107f7fa8c

// -[SCFeatureSmartSwipeFilters activated]
// Type encoding: B16@0:8
// Implementation: 0x107f7fa98

// -[SCFeatureSmartSwipeFilters setActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f7faa0

// -[SCFeatureSmartSwipeFilters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f7faa8

@end
