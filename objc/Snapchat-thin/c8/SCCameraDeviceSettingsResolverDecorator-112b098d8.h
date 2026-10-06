// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraDeviceSettingsResolverDecorator
// Superclass: NSObject
// Address: 0x112b098d8

@interface SCCameraDeviceSettingsResolverDecorator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraDeviceSettingsResolverDecorator initWithResolver:weakOwnershipEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1005d8178

// -[SCCameraDeviceSettingsResolverDecorator registerWithDeviceSettingsMap:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069ad2cc

// -[SCCameraDeviceSettingsResolverDecorator unregister:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ad6dc

// -[SCCameraDeviceSettingsResolverDecorator _mapAffectsHDMerge:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069adb68

// -[SCCameraDeviceSettingsResolverDecorator getActiveDeviceSettingsMapAsynchronously:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100c24dc4

// -[SCCameraDeviceSettingsResolverDecorator _rebuildAndReregisterHDToken]
// Type encoding: v16@0:8
// Implementation: 0x1069add24

// -[SCCameraDeviceSettingsResolverDecorator _mergedHDSettingsWithHDMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069adff0

// -[SCCameraDeviceSettingsResolverDecorator _applySettings:toBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069ae4f8

// -[SCCameraDeviceSettingsResolverDecorator _featureNameForDeviceSettingsMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069ae704

// -[SCCameraDeviceSettingsResolverDecorator _isHdModeFeatureName:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069ae790

// -[SCCameraDeviceSettingsResolverDecorator didUnregisterProviderToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ae7fc

// -[SCCameraDeviceSettingsResolverDecorator didRegisterProviderToken:noFormatFoundError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069ae894

// -[SCCameraDeviceSettingsResolverDecorator featureNameForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069ae908

// -[SCCameraDeviceSettingsResolverDecorator _setDelegate:forToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069ae910

// -[SCCameraDeviceSettingsResolverDecorator _delegateForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069ae92c

// -[SCCameraDeviceSettingsResolverDecorator _removeDelegateForToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ae968

// -[SCCameraDeviceSettingsResolverDecorator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069ae984

@end
