// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanCapturerImpl
// Superclass: NSObject
// Address: 0x112af4528

@interface SCScanCapturerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCScanCapturerDelegate>",W,N,V_delegate

// -[SCScanCapturerImpl initWithCameraHardwareServicesAPI:]
// Type encoding: @24@0:8@16
// Implementation: 0x10674018c

// -[SCScanCapturerImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106740268

// -[SCScanCapturerImpl beginScanningWithFrameModifier:frameSelector:frameAnalyzer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1067402bc

// -[SCScanCapturerImpl endScanning]
// Type encoding: v16@0:8
// Implementation: 0x10674042c

// -[SCScanCapturerImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106740500

// -[SCScanCapturerImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x1067406ec

// -[SCScanCapturerImpl _didReceiveManagedVideoDataSourceEvent:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x106740718

// -[SCScanCapturerImpl _beginScanningWithFrameModifier:frameSelector:frameAnalyzer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10674077c

// -[SCScanCapturerImpl _endScanning]
// Type encoding: v16@0:8
// Implementation: 0x10674086c

// -[SCScanCapturerImpl _capture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067408bc

// -[SCScanCapturerImpl _didCaptureFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067408fc

// -[SCScanCapturerImpl _didCaptureFrame:devicePosition:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106740a34

// -[SCScanCapturerImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x106740b0c

// -[SCScanCapturerImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106740b24

// -[SCScanCapturerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106740b30

@end
