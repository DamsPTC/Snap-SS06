// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoCapturerMicCoordinator
// Superclass: NSObject
// Address: 0x112be2d68

@interface SCManagedVideoCapturerMicCoordinator

// Property: tracker; attributes: T@"SCMicFallbackTracker",R,N,V_tracker
// Property: pinnedForCurrentRecording; attributes: TB,R,N,V_pinnedForCurrentRecording

// -[SCManagedVideoCapturerMicCoordinator initWithSystemPreferences:configuration:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c26bc0

// -[SCManagedVideoCapturerMicCoordinator _session]
// Type encoding: @16@0:8
// Implementation: 0x1090525a0

// -[SCManagedVideoCapturerMicCoordinator prepareForNewRecording]
// Type encoding: v16@0:8
// Implementation: 0x1090525ac

// -[SCManagedVideoCapturerMicCoordinator pinFallbackMicIfNeededWithAudioCaptureEnabled:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1090525f0

// -[SCManagedVideoCapturerMicCoordinator _handlePinCompletionWithGeneration:success:error:completion:]
// Type encoding: v44@0:8Q16B24@28@?36
// Implementation: 0x109052888

// -[SCManagedVideoCapturerMicCoordinator avSyncInfoMarkers]
// Type encoding: @16@0:8
// Implementation: 0x10905299c

// -[SCManagedVideoCapturerMicCoordinator recordingDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x109052a38

// -[SCManagedVideoCapturerMicCoordinator tracker]
// Type encoding: @16@0:8
// Implementation: 0x109052a88

// -[SCManagedVideoCapturerMicCoordinator pinnedForCurrentRecording]
// Type encoding: B16@0:8
// Implementation: 0x109052a90

// -[SCManagedVideoCapturerMicCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109052a98

@end
