// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextViewLogger
// Superclass: NSObject
// Address: 0x112ae1ec8

@interface SCContextViewLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextViewLogger initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064b67ac

// -[SCContextViewLogger contextDidLoadWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b6944

// -[SCContextViewLogger contextWillLoadLocalOnlyWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b6a48

// -[SCContextViewLogger contextDidViewWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b6a60

// -[SCContextViewLogger logContextSessionViewWithSessionId:contextMenuSource:contextMenuSourceSpecific:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1064b6afc

// -[SCContextViewLogger contextDidUnloadWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b6d24

// -[SCContextViewLogger logContextURLAttachmentTapWithURL:posterGuid:snapId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064b6e88

// -[SCContextViewLogger contextDidInitializeActionBarPresenterWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b6f9c

// -[SCContextViewLogger contextDidReceiveResponseWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b7038

// -[SCContextViewLogger contextDidShowActionBarWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b70d4

// -[SCContextViewLogger contextDidRegisterActionItemPluginsWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b7170

// -[SCContextViewLogger contextDidRegisterRendererPluginsWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b720c

// -[SCContextViewLogger contextSpotlightAppearedWithViewLocation:storyType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1064b72a8

// -[SCContextViewLogger contextSpotlightPlaceholderDuration:viewLocation:storyType:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x1064b7368

// -[SCContextViewLogger _trackTimeForCurrentStep:sessionId:timeToTrack:isExclusiveToTesting:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1064b742c

// -[SCContextViewLogger _emitPerformanceMetricsForAbsoluteLoadTimeForSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064b7510

// -[SCContextViewLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064b7514

// -[SCContextViewLogger .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1064b75c4

@end
