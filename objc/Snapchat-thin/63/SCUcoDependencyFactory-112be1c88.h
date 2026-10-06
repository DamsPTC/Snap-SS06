// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUcoDependencyFactory
// Superclass: NSObject
// Address: 0x112be1c88

@interface SCUcoDependencyFactory

// Property: studySettingsProvider; attributes: T@"<SCUcoStudySettingsProvider>",&,N,V_studySettingsProvider
// Property: effectContentPathCache; attributes: T@"<SCLensEffectContentPathCache>",&,N,V_effectContentPathCache
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUcoDependencyFactory setStudySettingsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10902bf78

// -[SCUcoDependencyFactory initWithStudySettingsProvider:bundledLensProvider:blizzardLogger:performanceAutomationLogger:lensMetadataRepository:testLensMetadataStore:redownloadLogger:lensRemovalManager:lensPlusServices:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10902bfa8

// -[SCUcoDependencyFactory createUcoDataFetcherWithLazyStoreTuple:lensDataFetcherFactory:lensDownloadTracker:grapheneRegistry:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10902c17c

// -[SCUcoDependencyFactory createUcoViewModelGeneratorWithLensMetadataRepository:lensIconRepository:ucoCarouselConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10902c258

// -[SCUcoDependencyFactory ucoLogger]
// Type encoding: @16@0:8
// Implementation: 0x10902c2ec

// -[SCUcoDependencyFactory createUCODataStore]
// Type encoding: @16@0:8
// Implementation: 0x10902c374

// -[SCUcoDependencyFactory enableUCOFiltersForMultiMediaCases]
// Type encoding: B16@0:8
// Implementation: 0x10902c400

// -[SCUcoDependencyFactory effectContentPathCache]
// Type encoding: @16@0:8
// Implementation: 0x10902c43c

// -[SCUcoDependencyFactory scheduleIntegrationToolbox]
// Type encoding: @16@0:8
// Implementation: 0x10902c4bc

// -[SCUcoDependencyFactory _lazyScheduleIntegrationToolboxWithFilterConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x10902c5f8

// -[SCUcoDependencyFactory _scheduleIntegrationToolboxWithFilterConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x10902c72c

// -[SCUcoDependencyFactory studySettingsProvider]
// Type encoding: @16@0:8
// Implementation: 0x10902c7a8

// -[SCUcoDependencyFactory setEffectContentPathCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10902c7b0

// -[SCUcoDependencyFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10902c7e0

// +[SCUcoDependencyFactory defaultFactory]
// Type encoding: @16@0:8
// Implementation: 0x10902c78c

@end
