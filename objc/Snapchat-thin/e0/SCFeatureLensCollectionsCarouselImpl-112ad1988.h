// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureLensCollectionsCarouselImpl
// Superclass: SCFeature
// Address: 0x112ad1988

@interface SCFeatureLensCollectionsCarouselImpl

// Property: lensDelegate; attributes: T@"<SCCameraViewControllerLensDelegate>",W,N,V_lensDelegate
// Property: activated; attributes: TB,R,N,V_lensCollectionActivated
// Property: lensCollectionsCarouselErrors; attributes: T@"SCObservable",R,N,V_lensCollectionsCarouselErrors
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: cameraBottomUIArbitrator; attributes: T@"<SCFeatureCameraUIArbitrator>",W,N,V_cameraBottomUIArbitrator

// -[SCFeatureLensCollectionsCarouselImpl initWithLensCarouselManager:lensCollectionsDataProvider:lensDataProviderFactory:lensCollectionUIArbitrator:lensCarouselResetEventsProvider:lensLogger:studySettings:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1061ce650

// -[SCFeatureLensCollectionsCarouselImpl lensDataProviderFactory]
// Type encoding: @16@0:8
// Implementation: 0x1061ce830

// -[SCFeatureLensCollectionsCarouselImpl lensLogger]
// Type encoding: @16@0:8
// Implementation: 0x1061ce840

// -[SCFeatureLensCollectionsCarouselImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ce850

// -[SCFeatureLensCollectionsCarouselImpl activateCollectionCarouselForLens:showLensesOnlyUI:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1061ce888

// -[SCFeatureLensCollectionsCarouselImpl activateCollectionCarouselForCollectionId:preselectedLens:showLensesOnlyUI:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1061ce8f0

// -[SCFeatureLensCollectionsCarouselImpl activateCollectionCarouselWithDataProvider:delegate:showLensesOnlyUI:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1061ce998

// -[SCFeatureLensCollectionsCarouselImpl _activateCollectionCarouselWithDataProvider:delegate:showLensesOnlyUI:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1061ce99c

// -[SCFeatureLensCollectionsCarouselImpl _activateCollectionCarouselWithDataProvider:delegate:showLensesOnlyUI:lensCarouselManager:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1061ceb50

// -[SCFeatureLensCollectionsCarouselImpl deactivateCollectionCarousel]
// Type encoding: v16@0:8
// Implementation: 0x1061cf1c4

// -[SCFeatureLensCollectionsCarouselImpl _deactivateCollectionCarouselWithRestoringPreviousState:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061cf2bc

// -[SCFeatureLensCollectionsCarouselImpl lensDataProvider:didAddLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061cf424

// -[SCFeatureLensCollectionsCarouselImpl lensDataProvider:didRemoveLens:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061cf428

// -[SCFeatureLensCollectionsCarouselImpl lensDataProvider:didRemoveAllLensesWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061cf42c

// -[SCFeatureLensCollectionsCarouselImpl _presentLensCollection:selectedLensId:showLensesOnlyUI:saveRestoreState:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x1061cf434

// -[SCFeatureLensCollectionsCarouselImpl _subscrideOnCarouselResetEvents]
// Type encoding: v16@0:8
// Implementation: 0x1061cf698

// -[SCFeatureLensCollectionsCarouselImpl _setLensCollectionBarVisible:toggleLensesOnlyUI:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1061cf7e4

// -[SCFeatureLensCollectionsCarouselImpl _resetRestoreState]
// Type encoding: v16@0:8
// Implementation: 0x1061cf868

// -[SCFeatureLensCollectionsCarouselImpl _notifyCollectionError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061cf8a8

// -[SCFeatureLensCollectionsCarouselImpl setCameraUIVisible:animated:arbitrator:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1061cf8b8

// -[SCFeatureLensCollectionsCarouselImpl lensDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1061cf8bc

// -[SCFeatureLensCollectionsCarouselImpl setLensDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061cf8dc

// -[SCFeatureLensCollectionsCarouselImpl activated]
// Type encoding: B16@0:8
// Implementation: 0x1061cf8f0

// -[SCFeatureLensCollectionsCarouselImpl lensCollectionsCarouselErrors]
// Type encoding: @16@0:8
// Implementation: 0x1061cf900

// -[SCFeatureLensCollectionsCarouselImpl cameraBottomUIArbitrator]
// Type encoding: @16@0:8
// Implementation: 0x1061cf910

// -[SCFeatureLensCollectionsCarouselImpl setCameraBottomUIArbitrator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061cf930

// -[SCFeatureLensCollectionsCarouselImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061cf944

@end
