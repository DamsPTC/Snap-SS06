// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSettingsService
// Superclass: NSObject
// Address: 0x112a93318

@interface SCAdSettingsService


// -[SCAdSettingsService initWithRequestManager:settingsMetricsManager:circumstanceEngine:applicationPreferences:snapTokenProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105c4adc4

// -[SCAdSettingsService fetchLifestyleCategoriesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c4af50

// -[SCAdSettingsService updateLifestyleCategoriesWithUpdatedUserInterestArray:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c4b040

// -[SCAdSettingsService _sendSLCTargetingSettingsRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c4b188

// -[SCAdSettingsService _sendTargetingSettingsRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105c4b394

// -[SCAdSettingsService _sendTargetingSettingsRequest:snapToken:endpoint:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x105c4b864

// -[SCAdSettingsService _logRequestMetricsWithStatusCode:request:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105c4bd00

// -[SCAdSettingsService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c4bdcc

@end
