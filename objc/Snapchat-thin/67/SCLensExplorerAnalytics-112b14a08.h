// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerAnalytics
// Superclass: NSObject
// Address: 0x112b14a08

@interface SCLensExplorerAnalytics

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerAnalytics initWithBlizzardLogger:productMode:sessionIdentifier:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x106b03a78

// -[SCLensExplorerAnalytics setExitSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106b03b24

// -[SCLensExplorerAnalytics startSessionWithEntryPoint:entryCategory:cameraSource:pickerModeEnabled:]
// Type encoding: v44@0:8Q16@24Q32B40
// Implementation: 0x106b03b48

// -[SCLensExplorerAnalytics stopSession]
// Type encoding: v16@0:8
// Implementation: 0x106b03bd0

// -[SCLensExplorerAnalytics _validateEvent]
// Type encoding: B16@0:8
// Implementation: 0x106b03cf8

// -[SCLensExplorerAnalytics _validateEntryPoint:]
// Type encoding: B24@0:8q16
// Implementation: 0x106b03d34

// -[SCLensExplorerAnalytics _entryPointFromSource:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106b03d54

// -[SCLensExplorerAnalytics _cameraSourceFromNavigationCameraSource:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106b03d74

// -[SCLensExplorerAnalytics .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b03d94

@end
