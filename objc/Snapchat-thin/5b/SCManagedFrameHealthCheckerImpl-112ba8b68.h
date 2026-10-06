// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedFrameHealthCheckerImpl
// Superclass: NSObject
// Address: 0x112ba8b68

@interface SCManagedFrameHealthCheckerImpl


// -[SCManagedFrameHealthCheckerImpl initWithGrapheneLogger:blizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000e757c

// -[SCManagedFrameHealthCheckerImpl checkImageSnapHealthForCapturedImage:withCaptureSessionId:metadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1085a8354

// -[SCManagedFrameHealthCheckerImpl checkImageSnapHealthForProcessedImage:withCaptureSessionId:metadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1085a83d4

// -[SCManagedFrameHealthCheckerImpl checkVideoSnapHealthForFirstFrameImage:withCaptureSessionId:metedata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1085a8454

// -[SCManagedFrameHealthCheckerImpl checkVideoSnapHealthForOverlayImage:withCaptureSessionId:metedata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1085a84d4

// -[SCManagedFrameHealthCheckerImpl checkVideoSnapHealthForPostTranscodingThumbnailImage:withCaptureSessionId:metedata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1085a8554

// -[SCManagedFrameHealthCheckerImpl _checkHealthForImage:withCaptureSessionId:sourceType:metadata:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x1085a85d4

// -[SCManagedFrameHealthCheckerImpl _downscaledImageWithInputImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085a8948

// -[SCManagedFrameHealthCheckerImpl _getFrameHealthInfoForImage:withSourceType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1085a89a0

// -[SCManagedFrameHealthCheckerImpl _logEventWithSnapHealthInfo:captureSessionId:healthCheckType:metadata:]
// Type encoding: v48@0:8q16@24Q32@40
// Implementation: 0x1085a8c6c

// -[SCManagedFrameHealthCheckerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085a8eb8

@end
