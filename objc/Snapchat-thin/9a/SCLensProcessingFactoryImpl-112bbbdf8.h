// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingFactoryImpl
// Superclass: SCLensProcessingFactory
// Address: 0x112bbbdf8

@interface SCLensProcessingFactoryImpl


// -[SCLensProcessingFactoryImpl initWithTrackingHandler:lensPerformerProvider:launchDataStore:postCaptureLaunchDataStore:studySettingsProvider:circumstanceEngine:crashLoggerFactory:postCaptureCrashLogger:appInsightsMetadataStorage:lensLogger:processingGlobalTraker:lensProcessingGraphene:webLensesActiveLensPublishing:remoteAssetsFactory:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x100476f70

// -[SCLensProcessingFactoryImpl sharedPersistentStore]
// Type encoding: @16@0:8
// Implementation: 0x108c9c6b8

// -[SCLensProcessingFactoryImpl prepareSharedProcessorIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1006be17c

// -[SCLensProcessingFactoryImpl createLensProcessingCoreWithSettings:performer:usecase:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x108c9c75c

// -[SCLensProcessingFactoryImpl createPlainLensProcessingCoreWithSettings:performer:usecase:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x108c9d2c8

// -[SCLensProcessingFactoryImpl createTranscodingProcessingCoreWithSettings:performer:usecase:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x108c9d958

// -[SCLensProcessingFactoryImpl _newCancelationControllerWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c9dfc4

// -[SCLensProcessingFactoryImpl _lensCoreUseCaseFromPlainUsecase:]
// Type encoding: q24@0:8Q16
// Implementation: 0x108c9e040

// -[SCLensProcessingFactoryImpl _setupCrashLogger:withApplicator:mergeWebLensesIds:performer:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x108c9e050

// -[SCLensProcessingFactoryImpl _mergeWebLensIdsInto:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108c9e278

// -[SCLensProcessingFactoryImpl _setupLogger:forUsecase:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108c9e378

// -[SCLensProcessingFactoryImpl _setupAnalyticsEventsLogger:applicator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c9e3dc

// -[SCLensProcessingFactoryImpl _setupTrackingEventsWithProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c9eba4

// -[SCLensProcessingFactoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c9ed34

@end
