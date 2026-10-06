// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTalkScreenSharingStateManager
// Superclass: NSObject
// Address: 0x112bab1d8

@interface SCTalkScreenSharingStateManager

// Property: screenSharingState; attributes: Tq,R,N
// Property: isCapturing; attributes: TB,R,N,V_isCapturing
// Property: isExtensionRunning; attributes: TB,R,N,V_isExtensionRunning
// Property: isSystemRecording; attributes: TB,R,N,V_isSystemRecording

// -[SCTalkScreenSharingStateManager initWithDelegate:timeout:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108610530

// -[SCTalkScreenSharingStateManager screenSharingState]
// Type encoding: q16@0:8
// Implementation: 0x1086105b0

// -[SCTalkScreenSharingStateManager setExtensionStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x108610600

// -[SCTalkScreenSharingStateManager setReceiverCapturing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108610778

// -[SCTalkScreenSharingStateManager _clearLastCapturingStopping]
// Type encoding: v16@0:8
// Implementation: 0x108610954

// -[SCTalkScreenSharingStateManager _clearLastExtensionStopping]
// Type encoding: v16@0:8
// Implementation: 0x1086109a8

// -[SCTalkScreenSharingStateManager _clearExtensionRunning]
// Type encoding: v16@0:8
// Implementation: 0x1086109fc

// -[SCTalkScreenSharingStateManager setSystemRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x108610a50

// -[SCTalkScreenSharingStateManager _emitIfChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x108610bb4

// -[SCTalkScreenSharingStateManager _getState]
// Type encoding: q16@0:8
// Implementation: 0x108610c38

// -[SCTalkScreenSharingStateManager isCapturing]
// Type encoding: B16@0:8
// Implementation: 0x108610c94

// -[SCTalkScreenSharingStateManager isExtensionRunning]
// Type encoding: B16@0:8
// Implementation: 0x108610c9c

// -[SCTalkScreenSharingStateManager isSystemRecording]
// Type encoding: B16@0:8
// Implementation: 0x108610ca4

// -[SCTalkScreenSharingStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108610cac

@end
