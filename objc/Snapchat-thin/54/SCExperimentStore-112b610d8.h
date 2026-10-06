// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExperimentStore
// Superclass: NSObject
// Address: 0x112b610d8

@interface SCExperimentStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExperimentStore initWithLogger:metrics:appStartExperimentReader:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1000e35bc

// -[SCExperimentStore saveState]
// Type encoding: B16@0:8
// Implementation: 0x10723f6e4

// -[SCExperimentStore clear]
// Type encoding: v16@0:8
// Implementation: 0x10723f72c

// -[SCExperimentStore setStudySettingsFromDictionary:syncOrigin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10723f76c

// -[SCExperimentStore setStudySettingsFromJsonDictionary:syncOrigin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10723f824

// -[SCExperimentStore _trackChangedStudiesInSync:syncOrigin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10723f8fc

// -[SCExperimentStore _getStudySettingsFromDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10723fba4

// -[SCExperimentStore getStudySettings]
// Type encoding: @16@0:8
// Implementation: 0x10723fd64

// -[SCExperimentStore getAllSettingsForStudy:]
// Type encoding: @24@0:8@16
// Implementation: 0x10723fd6c

// -[SCExperimentStore logStudyTriggeredEvent:experimentId:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10723fd74

// -[SCExperimentStore logExposureForExperiment:treatmentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10723fd7c

// -[SCExperimentStore logExposureForExperiment:treatmentId:requireUserInfoInLog:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100111cd4

// -[SCExperimentStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10723fd88

// +[SCExperimentStore shared]
// Type encoding: @16@0:8
// Implementation: 0x10723f6b8

@end
