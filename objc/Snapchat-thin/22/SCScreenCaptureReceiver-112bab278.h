// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScreenCaptureReceiver
// Superclass: NSObject
// Address: 0x112bab278

@interface SCScreenCaptureReceiver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScreenCaptureReceiver initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x1086110bc

// -[SCScreenCaptureReceiver dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108611218

// -[SCScreenCaptureReceiver enable]
// Type encoding: v16@0:8
// Implementation: 0x10861127c

// -[SCScreenCaptureReceiver disable]
// Type encoding: v16@0:8
// Implementation: 0x1086112ac

// -[SCScreenCaptureReceiver stopAsync]
// Type encoding: v16@0:8
// Implementation: 0x108611304

// -[SCScreenCaptureReceiver notifyIntentToStart]
// Type encoding: v16@0:8
// Implementation: 0x108611358

// -[SCScreenCaptureReceiver _stopImpl:]
// Type encoding: v20@0:8B16
// Implementation: 0x10861142c

// -[SCScreenCaptureReceiver _reportFinishErrors]
// Type encoding: v16@0:8
// Implementation: 0x108611528

// -[SCScreenCaptureReceiver _setupListeners]
// Type encoding: v16@0:8
// Implementation: 0x108611590

// -[SCScreenCaptureReceiver _updateLastFrame]
// Type encoding: v16@0:8
// Implementation: 0x108611698

// -[SCScreenCaptureReceiver _checkFrameTimeout]
// Type encoding: v16@0:8
// Implementation: 0x1086116bc

// -[SCScreenCaptureReceiver _onServerStarted]
// Type encoding: v16@0:8
// Implementation: 0x108611714

// -[SCScreenCaptureReceiver _stopWithMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108611894

// -[SCScreenCaptureReceiver _onPause]
// Type encoding: v16@0:8
// Implementation: 0x1086118fc

// -[SCScreenCaptureReceiver _onResume]
// Type encoding: v16@0:8
// Implementation: 0x10861195c

// -[SCScreenCaptureReceiver _reportReceiverEvent:type:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1086119c0

// -[SCScreenCaptureReceiver _reportReceiverEvent:type:fromAudioSender:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1086119c8

// -[SCScreenCaptureReceiver _reportExtensionEvent:type:fromAudioSender:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108611a7c

// -[SCScreenCaptureReceiver _onReceiverError:]
// Type encoding: v24@0:8@16
// Implementation: 0x108611b30

// -[SCScreenCaptureReceiver _onStop:]
// Type encoding: v24@0:8@16
// Implementation: 0x108611bcc

// -[SCScreenCaptureReceiver _onStart]
// Type encoding: v16@0:8
// Implementation: 0x108611c7c

// -[SCScreenCaptureReceiver _onNotification:enabled:fromAudioSender:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x108611da4

// -[SCScreenCaptureReceiver _applyAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x108612320

// -[SCScreenCaptureReceiver _reportRunState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108612424

// -[SCScreenCaptureReceiver videoSocketReceiver:onFrame:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x1086124c4

// -[SCScreenCaptureReceiver videoSocketReceiverStreamStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x108612604

// -[SCScreenCaptureReceiver videoSocketReceiverStreamStopped:]
// Type encoding: v24@0:8@16
// Implementation: 0x108612608

// -[SCScreenCaptureReceiver videoSocketReceiverStreamDataError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10861260c

// -[SCScreenCaptureReceiver notificationHandler:onNotification:fromAudioSender:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108612658

// -[SCScreenCaptureReceiver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108612778

@end
