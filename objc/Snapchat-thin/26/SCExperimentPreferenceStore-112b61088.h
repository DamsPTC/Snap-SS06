// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExperimentPreferenceStore
// Superclass: NSObject
// Address: 0x112b61088

@interface SCExperimentPreferenceStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExperimentPreferenceStore initWithFilePath:logger:metrics:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10723e9f4

// -[SCExperimentPreferenceStore initWithFilePath:logger:metrics:appStartExperimentReader:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1000e36f8

// -[SCExperimentPreferenceStore initWithFilePath:logger:metrics:heuristicRecoveryManager:forcedDefaultsTweak:safeModeOptOutKeys:appStartExperimentReader:]
// Type encoding: @68@0:8@16@24@32@40B48@52@60
// Implementation: 0x1000f4478

// -[SCExperimentPreferenceStore saveState]
// Type encoding: B16@0:8
// Implementation: 0x10723e9fc

// -[SCExperimentPreferenceStore clear]
// Type encoding: v16@0:8
// Implementation: 0x10723ea04

// -[SCExperimentPreferenceStore setStudySettingsFromDictionary:syncOrigin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10723eba0

// -[SCExperimentPreferenceStore setStudySettingsFromJsonDictionary:syncOrigin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10723ecd8

// -[SCExperimentPreferenceStore hasExperiments]
// Type encoding: B16@0:8
// Implementation: 0x10723ecdc

// -[SCExperimentPreferenceStore hasInitialisedStorage]
// Type encoding: B16@0:8
// Implementation: 0x10723ee10

// -[SCExperimentPreferenceStore getStudySettings]
// Type encoding: @16@0:8
// Implementation: 0x10723ee20

// -[SCExperimentPreferenceStore getAllSettingsForStudy:]
// Type encoding: @24@0:8@16
// Implementation: 0x10723ee28

// -[SCExperimentPreferenceStore _getStudyUserInfoLoggingRequired:]
// Type encoding: B24@0:8@16
// Implementation: 0x10723ef54

// -[SCExperimentPreferenceStore logStudyTriggeredEvent:experimentId:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10723efd4

// -[SCExperimentPreferenceStore _checkIsRecoveryNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1000f7494

// -[SCExperimentPreferenceStore _updateFromRecoveryPayloadIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10723f14c

// -[SCExperimentPreferenceStore _waitForRecovery]
// Type encoding: v16@0:8
// Implementation: 0x10723f1a0

// -[SCExperimentPreferenceStore _getStudySettingsWithPrefix:]
// Type encoding: @24@0:8@16
// Implementation: 0x10723f1f4

// -[SCExperimentPreferenceStore _getStudySettingsWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10723f40c

// -[SCExperimentPreferenceStore _updateExperimentStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x10723f440

// -[SCExperimentPreferenceStore logExposureForExperiment:treatmentId:requireUserInfoInLog:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100111cdc

// -[SCExperimentPreferenceStore _logStudyTriggeredEvent:experimentId:source:requireUserInfoInLog:]
// Type encoding: v44@0:8@16@24q32B40
// Implementation: 0x100114260

// -[SCExperimentPreferenceStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10723f628

@end
