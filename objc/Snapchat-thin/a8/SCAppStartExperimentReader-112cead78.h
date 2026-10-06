// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppStartExperimentReader
// Superclass: NSObject
// Address: 0x112cead78

@interface SCAppStartExperimentReader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAppStartExperimentReader updateConfigResults:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b88a7b4

// -[SCAppStartExperimentReader initWithFilePathURL:allowedConfigs:recoveryKey:heuristicRecoveryManager:startupJournalManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10006c364

// -[SCAppStartExperimentReader retrieveConfigResults]
// Type encoding: @16@0:8
// Implementation: 0x1000718e8

// -[SCAppStartExperimentReader _valueForConfigKeySync:valueKey:featureProvidedSignals:exposeExperiment:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x100073a10

// -[SCAppStartExperimentReader boolValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x100073990

// -[SCAppStartExperimentReader floatValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: f36@0:8@16f24@28
// Implementation: 0x1001503e4

// -[SCAppStartExperimentReader intValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: i36@0:8@16i24@28
// Implementation: 0x10007403c

// -[SCAppStartExperimentReader longValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: q40@0:8@16q24@32
// Implementation: 0x10077427c

// -[SCAppStartExperimentReader unexposedIntValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: i36@0:8@16i24@28
// Implementation: 0x10b88a818

// -[SCAppStartExperimentReader setExperimentLogger_DO_NOT_USE:configMetric:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b88a870

// -[SCAppStartExperimentReader _drainLogQueues]
// Type encoding: v16@0:8
// Implementation: 0x10b88a948

// -[SCAppStartExperimentReader _logExposureFor:configId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100073bd4

// -[SCAppStartExperimentReader _logConfigIdRead:]
// Type encoding: v24@0:8@16
// Implementation: 0x100073e98

// -[SCAppStartExperimentReader _readLocalFileRecoveryResponse]
// Type encoding: @16@0:8
// Implementation: 0x100072300

// -[SCAppStartExperimentReader _readSharedDefaultsRecoveryResponse]
// Type encoding: @16@0:8
// Implementation: 0x10b88aaf4

// -[SCAppStartExperimentReader _checkForRecoveryData]
// Type encoding: @16@0:8
// Implementation: 0x100071ab4

// -[SCAppStartExperimentReader _waitForRecovery]
// Type encoding: v16@0:8
// Implementation: 0x100073b28

// -[SCAppStartExperimentReader _mergeDictionary:withTargetingResponse:protectedWrite:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b88adc0

// -[SCAppStartExperimentReader _createDictionaryFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b88b0e0

// -[SCAppStartExperimentReader _filterConfigResults:]
// Type encoding: @24@0:8@16
// Implementation: 0x100072ef8

// -[SCAppStartExperimentReader _checkForSafeModeDisableFromTargetingResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b88b350

// -[SCAppStartExperimentReader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b88b528

// +[SCAppStartExperimentReader sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x100069cf0

@end
