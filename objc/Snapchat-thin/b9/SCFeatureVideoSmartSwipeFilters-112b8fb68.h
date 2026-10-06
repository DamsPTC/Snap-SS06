// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureVideoSmartSwipeFilters
// Superclass: SCFeatureSmartSwipeFilters
// Address: 0x112b8fb68

@interface SCFeatureVideoSmartSwipeFilters

// Property: videoPlaybackLogger; attributes: T@"<SCImageProcessVideoPlaybackLogging>",&,N,V_videoPlaybackLogger
// Property: multiSnapImagePixelSize; attributes: T{CGSize=dd},N,V_multiSnapImagePixelSize
// Property: smartVideoSwipeFilterView; attributes: T@"SCSmartVideoSwipeFilterView",&,N,V_smartVideoSwipeFilterView
// Property: commandMapper; attributes: T@"<SCImageProcessCommandMapping>",&,N,V_commandMapper
// Property: coreCameraLogger; attributes: T@"SCLazy",&,N,V_coreCameraLogger
// Property: lensCommandMetadataProvider; attributes: T@"<SCImageProcessLensCommandMetadataProvider>",&,N,V_lensCommandMetadataProvider
// Property: ucoCarouselConfigProvider; attributes: T@"SCLazy",&,N,V_ucoCarouselConfigProvider

// -[SCFeatureVideoSmartSwipeFilters initWithConfiguration:previewScopeServices:previewABServices:filterArranger:commonLoggingParamsBuilder:geoFilterLogger:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:maxMediaAreaFrame:unlockableGeoFilterTracker:latencyLogger:userInteractionStateLogger:videoPlaybackLogger:multiSnapImagePixelSize:commandMapper:coreCameraLogger:ucoCarouselConfigProvider:lazyLensIconRepository:ngsmePlaybackServices:audioProcessingServices:videoTrackingServices:previewTooltipsServices:unifiedCameraObjectFilterViewFactory:ucoLogger:ucoInteractionTracker:lensCrashLogger:lensCTAHandler:locationProvider:userBlizzardLogger:]
// Type encoding: @304@0:8@16@24@32@40@48@56@64@72@80@88@96{CGRect={CGPoint=dd}{CGSize=dd}}104@136@144@152@160{CGSize=dd}168@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296
// Implementation: 0x107f7fbe8

// -[SCFeatureVideoSmartSwipeFilters internalVideoSwipeFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f7ff14

// -[SCFeatureVideoSmartSwipeFilters videoPlayback]
// Type encoding: @16@0:8
// Implementation: 0x107f7ff18

// -[SCFeatureVideoSmartSwipeFilters configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7ff48

// -[SCFeatureVideoSmartSwipeFilters addMotionFilters]
// Type encoding: v16@0:8
// Implementation: 0x107f80918

// -[SCFeatureVideoSmartSwipeFilters reversedAudioData]
// Type encoding: @16@0:8
// Implementation: 0x107f8097c

// -[SCFeatureVideoSmartSwipeFilters setReversedAudioData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8098c

// -[SCFeatureVideoSmartSwipeFilters isReverseMotionFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x107f8099c

// -[SCFeatureVideoSmartSwipeFilters videoTracker]
// Type encoding: @16@0:8
// Implementation: 0x107f809ac

// -[SCFeatureVideoSmartSwipeFilters replaceFiltersWithState:lastState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f809bc

// -[SCFeatureVideoSmartSwipeFilters currentFilterSpeedForType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f809cc

// -[SCFeatureVideoSmartSwipeFilters filterStackingUIHelper]
// Type encoding: @16@0:8
// Implementation: 0x107f809dc

// -[SCFeatureVideoSmartSwipeFilters trackingObjectContainerViewFuture]
// Type encoding: @16@0:8
// Implementation: 0x107f80a28

// -[SCFeatureVideoSmartSwipeFilters _spectaclesConfig]
// Type encoding: {SCSmartSwipeSpectaclesMediaConfig=BBB}16@0:8
// Implementation: 0x107f80a38

// -[SCFeatureVideoSmartSwipeFilters videoPlaybackLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f80b64

// -[SCFeatureVideoSmartSwipeFilters setVideoPlaybackLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f80b74

// -[SCFeatureVideoSmartSwipeFilters multiSnapImagePixelSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107f80bb4

// -[SCFeatureVideoSmartSwipeFilters setMultiSnapImagePixelSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107f80bc8

// -[SCFeatureVideoSmartSwipeFilters smartVideoSwipeFilterView]
// Type encoding: @16@0:8
// Implementation: 0x107f80bdc

// -[SCFeatureVideoSmartSwipeFilters setSmartVideoSwipeFilterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f80bec

// -[SCFeatureVideoSmartSwipeFilters commandMapper]
// Type encoding: @16@0:8
// Implementation: 0x107f80c2c

// -[SCFeatureVideoSmartSwipeFilters setCommandMapper:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f80c3c

// -[SCFeatureVideoSmartSwipeFilters coreCameraLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f80c7c

// -[SCFeatureVideoSmartSwipeFilters setCoreCameraLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f80c8c

// -[SCFeatureVideoSmartSwipeFilters lensCommandMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f80ccc

// -[SCFeatureVideoSmartSwipeFilters setLensCommandMetadataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f80cdc

// -[SCFeatureVideoSmartSwipeFilters ucoCarouselConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f80d1c

// -[SCFeatureVideoSmartSwipeFilters setUcoCarouselConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f80d2c

// -[SCFeatureVideoSmartSwipeFilters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f80d6c

@end
