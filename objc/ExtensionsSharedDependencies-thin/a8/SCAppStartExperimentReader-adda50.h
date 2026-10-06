// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppStartExperimentReader
// Superclass: NSObject
// Address: 0xadda50

@interface SCAppStartExperimentReader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAppStartExperimentReader updateConfigResults:]
// Type encoding: v24@0:8@16
// Implementation: 0x607918

// -[SCAppStartExperimentReader initWithFilePathURL:allowedConfigs:recoveryKey:heuristicRecoveryManager:startupJournalManager:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x60797c

// -[SCAppStartExperimentReader retrieveConfigResults]
// Type encoding: @16@0:8
// Implementation: 0x607b98

// -[SCAppStartExperimentReader _valueForConfigKeySync:valueKey:featureProvidedSignals:exposeExperiment:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x607d64

// -[SCAppStartExperimentReader boolValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x607e7c

// -[SCAppStartExperimentReader floatValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: f36@0:8@16f24@28
// Implementation: 0x607ed4

// -[SCAppStartExperimentReader intValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: i36@0:8@16i24@28
// Implementation: 0x607f38

// -[SCAppStartExperimentReader longValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: q40@0:8@16q24@32
// Implementation: 0x607f90

// -[SCAppStartExperimentReader unexposedIntValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: i36@0:8@16i24@28
// Implementation: 0x607fe8

// -[SCAppStartExperimentReader setExperimentLogger_DO_NOT_USE:configMetric:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x608040

// -[SCAppStartExperimentReader _drainLogQueues]
// Type encoding: v16@0:8
// Implementation: 0x608118

// -[SCAppStartExperimentReader _logExposureFor:configId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x6082c4

// -[SCAppStartExperimentReader _logConfigIdRead:]
// Type encoding: v24@0:8@16
// Implementation: 0x608418

// -[SCAppStartExperimentReader _readLocalFileRecoveryResponse]
// Type encoding: @16@0:8
// Implementation: 0x6084dc

// -[SCAppStartExperimentReader _readSharedDefaultsRecoveryResponse]
// Type encoding: @16@0:8
// Implementation: 0x608690

// -[SCAppStartExperimentReader _checkForRecoveryData]
// Type encoding: @16@0:8
// Implementation: 0x608888

// -[SCAppStartExperimentReader _waitForRecovery]
// Type encoding: v16@0:8
// Implementation: 0x608bec

// -[SCAppStartExperimentReader _mergeDictionary:withTargetingResponse:protectedWrite:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x608c98

// -[SCAppStartExperimentReader _createDictionaryFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x608fb8

// -[SCAppStartExperimentReader _filterConfigResults:]
// Type encoding: @24@0:8@16
// Implementation: 0x609228

// -[SCAppStartExperimentReader _checkForSafeModeDisableFromTargetingResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x6093dc

// -[SCAppStartExperimentReader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x6095b4

// +[SCAppStartExperimentReader sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x6077c0

@end
