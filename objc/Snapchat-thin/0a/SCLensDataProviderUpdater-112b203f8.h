// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataProviderUpdater
// Superclass: NSObject
// Address: 0x112b203f8

@interface SCLensDataProviderUpdater

// Property: cameraLensesInteractor; attributes: T@"<SCLensDataProviderRegistryUpdatable><SCCameraLensesInteractorProtocol>",R,N,V_cameraLensesInteractor
// Property: strategyContext; attributes: T@"<SCCameraLensDataProviderUpdatingStrategyContext>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lensDataProviderUpdateEventsObservable; attributes: T@"SCObservable",R,N
// Property: currentLensDataProviderProxy; attributes: T@"<SCLensCameraScreenDataProviderProtocol>",R,N

// -[SCLensDataProviderUpdater initWithCameraLensesInteractor:lensUserProvider:cameraHardwareServicesAPIImpl:cameraViewType:scopedCameraType:activationSourceMapper:]
// Type encoding: @64@0:8@16@24@32q40Q48@56
// Implementation: 0x1007fd248

// -[SCLensDataProviderUpdater setStrategyContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007fdb4c

// -[SCLensDataProviderUpdater strategyContext]
// Type encoding: @16@0:8
// Implementation: 0x1007fde5c

// -[SCLensDataProviderUpdater setUpLensesWithLensDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007fdb58

// -[SCLensDataProviderUpdater updateLensDataProviderWithCameraType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1007fdc00

// -[SCLensDataProviderUpdater updateLensDataProviderWithFeatureLensCarouselType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bd850c

// -[SCLensDataProviderUpdater updateLensDataProviderWithCameraType:updatingStrategy:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1007fdc9c

// -[SCLensDataProviderUpdater updateLensDataProviderWithActivationSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bd8590

// -[SCLensDataProviderUpdater updateLensDataProviderWithLensesObservable:activationConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bd85e8

// -[SCLensDataProviderUpdater registerDataProviderWithContextId:contextConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bd87e8

// -[SCLensDataProviderUpdater activateDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd8858

// -[SCLensDataProviderUpdater deregisterDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd885c

// -[SCLensDataProviderUpdater _activateContextWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd88e0

// -[SCLensDataProviderUpdater updateLensDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bd8cd8

// -[SCLensDataProviderUpdater updateLensDataProvider:updatingStrategy:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106bd8d4c

// -[SCLensDataProviderUpdater updateLensDataProvider:updatingStrategy:lensIdToRestore:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106bd8d54

// -[SCLensDataProviderUpdater currentLensDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x106bd8ee4

// -[SCLensDataProviderUpdater currentLensDataProviderProxy]
// Type encoding: @16@0:8
// Implementation: 0x106bd8f28

// -[SCLensDataProviderUpdater lensDataProviderUpdateEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106bd8f50

// -[SCLensDataProviderUpdater cameraLensesInteractor]
// Type encoding: @16@0:8
// Implementation: 0x1007fdff8

// -[SCLensDataProviderUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bd8f78

@end
