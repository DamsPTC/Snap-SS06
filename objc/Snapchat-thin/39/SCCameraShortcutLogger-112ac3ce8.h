// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraShortcutLogger
// Superclass: NSObject
// Address: 0x112ac3ce8

@interface SCCameraShortcutLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraShortcutLogger initWithCameraUserLoggingServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x1007eeec4

// -[SCCameraShortcutLogger setCameraShortcutSnapActionLoggingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007eefcc

// -[SCCameraShortcutLogger logCameraShortcutTapWithShortcutId:scanSessionId:storySnapItemId:shortcutSource:cameraModes:componentInfo:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1060840c0

// -[SCCameraShortcutLogger logCameraShortcutEnableWithShortcutId:scanSessionId:storySnapItemId:shortcutSource:cameraModes:componentInfo:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x106084350

// -[SCCameraShortcutLogger logCameraShortcutWarningTapWithShortcutId:scanSessionId:shortcutSource:confirmed:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1060845e0

// -[SCCameraShortcutLogger logCameraShortcutActivationDelayWithLatencyMillis:shortcutId:scanSessionId:shortcutSource:componentInfo:]
// Type encoding: v56@0:8d16@24@32@40@48
// Implementation: 0x1060847d8

// -[SCCameraShortcutLogger logCameraShortcutCreateTapWithShortcutId:storySnapItemId:pageSource:shortcutSource:componentInfo:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106084a10

// -[SCCameraShortcutLogger cameraShortcutSnapActionLoggingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106084c6c

// -[SCCameraShortcutLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106084c84

@end
