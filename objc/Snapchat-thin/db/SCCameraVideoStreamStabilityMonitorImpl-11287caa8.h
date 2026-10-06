// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraVideoStreamStabilityMonitorImpl
// Superclass: NSObject
// Address: 0x11287caa8

@interface SCCameraVideoStreamStabilityMonitorImpl


// -[SCCameraVideoStreamStabilityMonitorImpl initWithLogger:maxFrameProcessingTimeMs:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1000e98a0

// -[SCCameraVideoStreamStabilityMonitorImpl streamingStarted]
// Type encoding: v16@0:8
// Implementation: 0x10034e16c

// -[SCCameraVideoStreamStabilityMonitorImpl sampleBufferReceived:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x100709088

// -[SCCameraVideoStreamStabilityMonitorImpl sampleBufferProcessed:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10070ad8c

// -[SCCameraVideoStreamStabilityMonitorImpl sampleBufferDropped:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1029f457c

// -[SCCameraVideoStreamStabilityMonitorImpl streamingStopped]
// Type encoding: v16@0:8
// Implementation: 0x100352a48

// -[SCCameraVideoStreamStabilityMonitorImpl lensesDidPresent]
// Type encoding: v16@0:8
// Implementation: 0x1029f45c8

// -[SCCameraVideoStreamStabilityMonitorImpl lensSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x1029f4790

// -[SCCameraVideoStreamStabilityMonitorImpl resetFrameData]
// Type encoding: v16@0:8
// Implementation: 0x1029f48cc

// -[SCCameraVideoStreamStabilityMonitorImpl getObservableFor:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1029f49c4

// -[SCCameraVideoStreamStabilityMonitorImpl init]
// Type encoding: @16@0:8
// Implementation: 0x1029f4a00

// -[SCCameraVideoStreamStabilityMonitorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1029f4a60

@end
