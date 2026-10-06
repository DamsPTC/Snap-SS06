// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTScreenCaptureServices
// Superclass: NSObject
// Address: 0x112bab138

@interface SCTScreenCaptureServices

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: screenSharingState; attributes: Tq,R,N

// -[SCTScreenCaptureServices initWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x10860fadc

// -[SCTScreenCaptureServices setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860fbb4

// -[SCTScreenCaptureServices removeDelegate:]
// Type encoding: B24@0:8@16
// Implementation: 0x10860fcc0

// -[SCTScreenCaptureServices stopScreenCapture]
// Type encoding: v16@0:8
// Implementation: 0x10860fd60

// -[SCTScreenCaptureServices screenSharingState]
// Type encoding: q16@0:8
// Implementation: 0x10860fd68

// -[SCTScreenCaptureServices notifyIntentToPublishFromDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860fdb8

// -[SCTScreenCaptureServices _onSystemRecordingChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x10860fe30

// -[SCTScreenCaptureServices screenCaptureReceiver:onFrame:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x108610028

// -[SCTScreenCaptureServices screenCaptureReceiverStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10861006c

// -[SCTScreenCaptureServices screenCaptureReceiverStopped:]
// Type encoding: v24@0:8@16
// Implementation: 0x1086100f0

// -[SCTScreenCaptureServices screenCaptureReceiverPaused:]
// Type encoding: v24@0:8@16
// Implementation: 0x108610174

// -[SCTScreenCaptureServices screenCaptureReceiverResumed:]
// Type encoding: v24@0:8@16
// Implementation: 0x108610178

// -[SCTScreenCaptureServices screenCaptureReceiverExtensionLaunchDetected:]
// Type encoding: v24@0:8@16
// Implementation: 0x10861017c

// -[SCTScreenCaptureServices screenCaptureReceiverExtensionExitDetected:]
// Type encoding: v24@0:8@16
// Implementation: 0x1086101d8

// -[SCTScreenCaptureServices screenSharingStateManager:stateChanged:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108610234

// -[SCTScreenCaptureServices .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108610278

@end
