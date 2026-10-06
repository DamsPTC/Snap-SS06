// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureContextualSurveyPromptImpl
// Superclass: SCFeature
// Address: 0x112acd978

@interface SCFeatureContextualSurveyPromptImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureContextualSurveyPromptImpl initWithAfterCaptureActionTracker:cameraUIScopeViewContainer:deepLinkHandlingServices:featureSettingsService:cameraConfig:cameraUserBlizzardLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1061501cc

// -[SCFeatureContextualSurveyPromptImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x106150468

// -[SCFeatureContextualSurveyPromptImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061504d8

// -[SCFeatureContextualSurveyPromptImpl _didDiscardSnap]
// Type encoding: v16@0:8
// Implementation: 0x106150528

// -[SCFeatureContextualSurveyPromptImpl _didPostSnap]
// Type encoding: v16@0:8
// Implementation: 0x106150588

// -[SCFeatureContextualSurveyPromptImpl _didSaveSnap]
// Type encoding: v16@0:8
// Implementation: 0x1061505cc

// -[SCFeatureContextualSurveyPromptImpl _resetSnapsDiscarded]
// Type encoding: v16@0:8
// Implementation: 0x1061505e0

// -[SCFeatureContextualSurveyPromptImpl _presentAlertDialogIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061505fc

// -[SCFeatureContextualSurveyPromptImpl _alertDialog]
// Type encoding: @16@0:8
// Implementation: 0x1061506c4

// -[SCFeatureContextualSurveyPromptImpl _presentInclusionPanel]
// Type encoding: v16@0:8
// Implementation: 0x106150a7c

// -[SCFeatureContextualSurveyPromptImpl _onAfterCaptureAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106150b80

// -[SCFeatureContextualSurveyPromptImpl _onAccept]
// Type encoding: v16@0:8
// Implementation: 0x106150c08

// -[SCFeatureContextualSurveyPromptImpl _onDecline]
// Type encoding: v16@0:8
// Implementation: 0x106150c38

// -[SCFeatureContextualSurveyPromptImpl _setDenyTimeOneMonth]
// Type encoding: v16@0:8
// Implementation: 0x106150c74

// -[SCFeatureContextualSurveyPromptImpl _setDenyTimeSixMonths]
// Type encoding: v16@0:8
// Implementation: 0x106150ca8

// -[SCFeatureContextualSurveyPromptImpl _resetDenyCount]
// Type encoding: v16@0:8
// Implementation: 0x106150cdc

// -[SCFeatureContextualSurveyPromptImpl _lastTriggeredTimeMsSince1970]
// Type encoding: q16@0:8
// Implementation: 0x106150ce4

// -[SCFeatureContextualSurveyPromptImpl _setLastTriggeredTimeMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x106150d2c

// -[SCFeatureContextualSurveyPromptImpl _consecutiveDenyCount]
// Type encoding: Q16@0:8
// Implementation: 0x106150d70

// -[SCFeatureContextualSurveyPromptImpl _setConsecutiveDenyCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106150db8

// -[SCFeatureContextualSurveyPromptImpl _isWithinConsecutiveDenyCooldownThreshold]
// Type encoding: B16@0:8
// Implementation: 0x106150dfc

// -[SCFeatureContextualSurveyPromptImpl _shouldPresentAlertDialog]
// Type encoding: B16@0:8
// Implementation: 0x106150e18

// -[SCFeatureContextualSurveyPromptImpl _nowSince1970InMs]
// Type encoding: q16@0:8
// Implementation: 0x106150e7c

// -[SCFeatureContextualSurveyPromptImpl _discardThreshold]
// Type encoding: q16@0:8
// Implementation: 0x106150ed4

// -[SCFeatureContextualSurveyPromptImpl _cooldownShortThreashold]
// Type encoding: q16@0:8
// Implementation: 0x106150f3c

// -[SCFeatureContextualSurveyPromptImpl _cooldownLongThreshold]
// Type encoding: q16@0:8
// Implementation: 0x106150fb0

// -[SCFeatureContextualSurveyPromptImpl _logSurveyEventWithDidAccept:]
// Type encoding: v20@0:8B16
// Implementation: 0x106151024

// -[SCFeatureContextualSurveyPromptImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061510b8

@end
