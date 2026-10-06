// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesKnobsController
// Superclass: NSObject
// Address: 0x112a88698

@interface SCSpectaclesKnobsController

// Property: delegate; attributes: T@"<SCSpectaclesKnobsControllerDelegate>",W,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesKnobsController initWithKnobsRPCManager:locationManager:blizzardLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105a8a3bc

// -[SCSpectaclesKnobsController knobIdFromHash:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105a8a990

// -[SCSpectaclesKnobsController knobFromHash:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105a8aab0

// -[SCSpectaclesKnobsController fetchAllKnobs]
// Type encoding: v16@0:8
// Implementation: 0x105a8ab00

// -[SCSpectaclesKnobsController didToggleKnob:enabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a8b250

// -[SCSpectaclesKnobsController didSelectOption:fromOptions:forKnob:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a8b374

// -[SCSpectaclesKnobsController submitChanges]
// Type encoding: v16@0:8
// Implementation: 0x105a8b378

// -[SCSpectaclesKnobsController restartSpectacles]
// Type encoding: v16@0:8
// Implementation: 0x105a8b6ec

// -[SCSpectaclesKnobsController _knobForKnobId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a8b6f4

// -[SCSpectaclesKnobsController _setKnob:forKnobId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a8b6fc

// -[SCSpectaclesKnobsController _updateKnobWithKnobId:toNewInput:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a8b704

// -[SCSpectaclesKnobsController _fetchKnobsFromHermosaWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105a8b7f8

// -[SCSpectaclesKnobsController _fetchLocalKnobsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105a8b8d4

// -[SCSpectaclesKnobsController _needsSave]
// Type encoding: B16@0:8
// Implementation: 0x105a8ba40

// -[SCSpectaclesKnobsController _didToggleLocationSharingTo:]
// Type encoding: @20@0:8B16
// Implementation: 0x105a8bac4

// -[SCSpectaclesKnobsController _didToggleHermosaKnobWithKnobId:toEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a8bc70

// -[SCSpectaclesKnobsController _didSelectOption:fromOptions:forKnob:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a8bd44

// -[SCSpectaclesKnobsController spectaclesKnobsRPCManager:didReceiveSettingsInKnobsCategoryResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a8be20

// -[SCSpectaclesKnobsController spectaclesKnobsRPCManager:didReceiveSetBatchSettingsResponseWithSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a8c088

// -[SCSpectaclesKnobsController spectaclesKnobsRPCManagerDidReceiveDeviceRestartResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a8c254

// -[SCSpectaclesKnobsController spectaclesKnobsLocationManager:didSetBackgroundUpdatesEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a8c288

// -[SCSpectaclesKnobsController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105a8c368

// -[SCSpectaclesKnobsController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a8c380

// -[SCSpectaclesKnobsController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a8c38c

// +[SCSpectaclesKnobsController _restartRequiredKnobsFromKnobs:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a8a4c8

// +[SCSpectaclesKnobsController _knobArray:isEqualTo:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105a8a634

// +[SCSpectaclesKnobsController _changedKnobsBetweenOldKnobs:currentKnobs:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a8a7c0

@end
