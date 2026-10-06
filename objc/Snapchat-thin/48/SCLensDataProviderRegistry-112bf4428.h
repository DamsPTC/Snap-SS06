// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataProviderRegistry
// Superclass: NSObject
// Address: 0x112bf4428

@interface SCLensDataProviderRegistry

// Property: currentLensDataProvider; attributes: T@"<SCLensCameraScreenDataProviderProtocol>",R,N
// Property: cameraViewType; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDataProviderRegistry initWithLensesUIUpdateAnnouncer:unlockableDataStoreServices:dataProviderFactory:unlockableDataProviderFactory:lensPickerMetadataStore:lensScheduleMetadataStoreServices:lensInjectionServices:lensExplorerStudySettings:bundledLensProvider:cameraConfig:lensOnboardingMetadataStoreServices:lensPerformerProvider:isBitmojiLinked:lensCarouselStudySettings:centralizedMetadataStoreProvider:lensConfigProvider:explorerLensDisabled:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104B112@116@124@132B140
// Implementation: 0x1007fbeac

// -[SCLensDataProviderRegistry dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091dcd88

// -[SCLensDataProviderRegistry updateLensDataProviderWithCameraType:bitmojiLinked:friendBitmojiLinked:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x1007fe008

// -[SCLensDataProviderRegistry updateLensDataProviderWithCameraType:activationConfiguration:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1091dcdcc

// -[SCLensDataProviderRegistry updateLensDataProviderWithLensesObservable:activationConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091dce10

// -[SCLensDataProviderRegistry contextConfigWithContextId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dd098

// -[SCLensDataProviderRegistry registerDataProviderWithContextId:contextConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091dd0a0

// -[SCLensDataProviderRegistry predefinedDataProviderWithCarouselType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1091dd0a8

// -[SCLensDataProviderRegistry _createDefaultMainCameraDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1007fe218

// -[SCLensDataProviderRegistry _createDefaultReplyCameraDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1091dd15c

// -[SCLensDataProviderRegistry _createDefaultModularCameraDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1091dd340

// -[SCLensDataProviderRegistry activateDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dd448

// -[SCLensDataProviderRegistry deregisterDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dd4a8

// -[SCLensDataProviderRegistry canDeregisterDataProviderWithContextId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091dd4b0

// -[SCLensDataProviderRegistry _lensDataproviderConfigForLensCarouselActivationConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dd54c

// -[SCLensDataProviderRegistry updateLensDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100804db4

// -[SCLensDataProviderRegistry currentLensDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1007fd138

// -[SCLensDataProviderRegistry cameraViewType]
// Type encoding: q16@0:8
// Implementation: 0x1091dd654

// -[SCLensDataProviderRegistry addUpdateListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091dd65c

// -[SCLensDataProviderRegistry removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dd664

// -[SCLensDataProviderRegistry _createMainCameraDataProviderWithConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x100802bd8

// -[SCLensDataProviderRegistry _updateCameraNoViewDataProviderWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dd66c

// -[SCLensDataProviderRegistry _createReplyDataProviderWithConfig:lensDataAssistant:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091dd6a8

// -[SCLensDataProviderRegistry _updateCameraReplyDataProviderWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dd9a4

// -[SCLensDataProviderRegistry _updateDirectorModeDataProviderWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dda30

// -[SCLensDataProviderRegistry _updateCameraRollDataProviderWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091ddd3c

// -[SCLensDataProviderRegistry _mainDataProviderWithConfiguration:scheduleMetadataStoreCreator:predefinedMetadataStore:predefinedMockedMetadataStore:dependecyProviderDelegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100802cf8

// -[SCLensDataProviderRegistry setLensDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100804e0c

// -[SCLensDataProviderRegistry _mainSortStrategyWithBundledLensProvider:placement:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x100802ee4

// -[SCLensDataProviderRegistry _isSameDataProviderWithContiguration:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091de128

// -[SCLensDataProviderRegistry _notifyUpdateListeners]
// Type encoding: v16@0:8
// Implementation: 0x1008053b4

// -[SCLensDataProviderRegistry _clearLensDataProvider]
// Type encoding: v16@0:8
// Implementation: 0x1091de1b0

// -[SCLensDataProviderRegistry _clearLensDataProviderState]
// Type encoding: v16@0:8
// Implementation: 0x100804dfc

// -[SCLensDataProviderRegistry .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091de1e0

@end
