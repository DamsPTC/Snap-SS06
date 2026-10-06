// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTalkLocalFrameProviderImpl
// Superclass: NSObject
// Address: 0x112bac3d0

@interface SCTalkLocalFrameProviderImpl

// Property: resolutionDelegate; attributes: T@"<SCTalkLocalFrameProviderDelegate>",W,N,V_resolutionDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTalkLocalFrameProviderImpl injectCameraFrame:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1089350c4

// -[SCTalkLocalFrameProviderImpl injectScreenFrame:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1089350cc

// -[SCTalkLocalFrameProviderImpl setInjector:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108935140

// -[SCTalkLocalFrameProviderImpl setResolution:width:height:]
// Type encoding: v32@0:8q16i24i28
// Implementation: 0x1089351a8

// -[SCTalkLocalFrameProviderImpl setListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1089352c0

// -[SCTalkLocalFrameProviderImpl _injectAudioFrame:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1089352f0

// -[SCTalkLocalFrameProviderImpl resolutionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1089353f0

// -[SCTalkLocalFrameProviderImpl setResolutionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108935408

// -[SCTalkLocalFrameProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108935414

@end
