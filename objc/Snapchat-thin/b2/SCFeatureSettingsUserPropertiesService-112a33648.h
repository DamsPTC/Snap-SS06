// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureSettingsUserPropertiesService
// Superclass: SCFeatureSettingsService
// Address: 0x112a33648

@interface SCFeatureSettingsUserPropertiesService


// -[SCFeatureSettingsUserPropertiesService initWithSnapchatUserPropertiesService:itemCache:itemIdMappingCache:performer:metricsReporter:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1003dbec4

// -[SCFeatureSettingsUserPropertiesService performChanges:queue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x1053e64a4

// -[SCFeatureSettingsUserPropertiesService performChangesToServer:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@?16@24@32@?40@?48
// Implementation: 0x1053e6a9c

// -[SCFeatureSettingsUserPropertiesService observeItemIds:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x100673a4c

// -[SCFeatureSettingsUserPropertiesService observeKeys:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x100504dc0

// -[SCFeatureSettingsUserPropertiesService hasSyncedLogInResponse]
// Type encoding: B16@0:8
// Implementation: 0x1053e7284

// -[SCFeatureSettingsUserPropertiesService observeLoginComplete]
// Type encoding: @16@0:8
// Implementation: 0x1053e7294

// -[SCFeatureSettingsUserPropertiesService valueForFeatureSetting:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004fb540

// -[SCFeatureSettingsUserPropertiesService valueForFeatureSettingItemId:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1004fc038

// -[SCFeatureSettingsUserPropertiesService setFeatureSetting:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053e72a4

// -[SCFeatureSettingsUserPropertiesService setFeatureSettingWithItemId:value:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1053e7308

// -[SCFeatureSettingsUserPropertiesService setFeatureSettingWithItemId:value:queue:completionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x1053e7314

// -[SCFeatureSettingsUserPropertiesService setLargerValueFeatureSetting:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053e7648

// -[SCFeatureSettingsUserPropertiesService setLargerValueFeatureSettingWithItemId:value:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1053e76ac

// -[SCFeatureSettingsUserPropertiesService setLargerValueFeatureSettingWithItemId:value:queue:completionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x1053e76b8

// -[SCFeatureSettingsUserPropertiesService addFeatureSetting:withValue:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1053e78c4

// -[SCFeatureSettingsUserPropertiesService addFeatureSettingWithItemId:withValue:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1053e7910

// -[SCFeatureSettingsUserPropertiesService addFeatureSettingWithItemId:withValue:queue:completionHandler:]
// Type encoding: v48@0:8Q16Q24@32@?40
// Implementation: 0x1053e791c

// -[SCFeatureSettingsUserPropertiesService _setFeatureSettingWithItemId:value:isSpeculativeWrite:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v68@0:8Q16@24B32@36@44@?52@?60
// Implementation: 0x1053e7b08

// -[SCFeatureSettingsUserPropertiesService _setLargerValueFeatureSettingWithItemId:value:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8Q16@24@32@40@?48@?56
// Implementation: 0x1053e7f54

// -[SCFeatureSettingsUserPropertiesService _addFeatureSettingWithItemId:withValue:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8Q16Q24@32@40@?48@?56
// Implementation: 0x1053e81c8

// -[SCFeatureSettingsUserPropertiesService _registerUserPropertyKeyUpdateWithKey:queue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100503a8c

// -[SCFeatureSettingsUserPropertiesService _itemIdForFeatureSettingName:]
// Type encoding: i24@0:8@16
// Implementation: 0x1004fb58c

// -[SCFeatureSettingsUserPropertiesService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e8468

@end
