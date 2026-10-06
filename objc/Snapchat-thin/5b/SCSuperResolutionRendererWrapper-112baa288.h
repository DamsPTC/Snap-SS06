// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSuperResolutionRendererWrapper
// Superclass: NSObject
// Address: 0x112baa288

@interface SCSuperResolutionRendererWrapper

// Property: callSuperResolutionProcessor; attributes: T@"<SCCallSuperResolutionProcessor>",&,V_callSuperResolutionProcessor
// Property: isWaitingForProcessor; attributes: TB,V_isWaitingForProcessor
// Property: paused; attributes: TB,V_paused
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSuperResolutionRendererWrapper initWithDirectRendererCallback:callSuperResolutionSession:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085f78c0

// -[SCSuperResolutionRendererWrapper onFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f7984

// -[SCSuperResolutionRendererWrapper onNativeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f798c

// -[SCSuperResolutionRendererWrapper _isUnsupportedFrameSize:]
// Type encoding: B32@0:8{CGSize=dd}16
// Implementation: 0x1085f7d48

// -[SCSuperResolutionRendererWrapper _addUnsupportedFrameSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1085f7ddc

// -[SCSuperResolutionRendererWrapper paused]
// Type encoding: B16@0:8
// Implementation: 0x1085f7e5c

// -[SCSuperResolutionRendererWrapper setPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085f7e68

// -[SCSuperResolutionRendererWrapper callSuperResolutionProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1085f7e70

// -[SCSuperResolutionRendererWrapper setCallSuperResolutionProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085f7e7c

// -[SCSuperResolutionRendererWrapper isWaitingForProcessor]
// Type encoding: B16@0:8
// Implementation: 0x1085f7e84

// -[SCSuperResolutionRendererWrapper setIsWaitingForProcessor:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085f7e90

// -[SCSuperResolutionRendererWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085f7e98

@end
