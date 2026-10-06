// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingParameterProvider
// Superclass: NSObject
// Address: 0x112be7cf0

@interface SCVideoTranscodingParameterProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTranscodingParameterProvider averageTranscodingBitRate:isRecording:highQuality:duration:iFrameOnly:originalVideoBitRate:overlayImageFileSizeBits:videoPlaybackRate:isLagunaVideo:hasOverlayToBlend:isHighFrameRate:]
// Type encoding: q88@0:8{CGSize=dd}16B32B36d40B48d52q60d68B76B80B84
// Implementation: 0x109128738

// -[SCVideoTranscodingParameterProvider hevcCapturedVideoBitrateWithFrameSize:config:]
// Type encoding: Q40@0:8{CGSize=dd}16@32
// Implementation: 0x1091288e4

// -[SCVideoTranscodingParameterProvider avcCapturedVideoBitrateWithFrameSize:config:]
// Type encoding: Q40@0:8{CGSize=dd}16@32
// Implementation: 0x109128b58

// -[SCVideoTranscodingParameterProvider deviceMeetsRequirementsForContentAdaptiveVideoEncoding]
// Type encoding: B16@0:8
// Implementation: 0x109128b80

// -[SCVideoTranscodingParameterProvider enabledPlaybackDebugView]
// Type encoding: B16@0:8
// Implementation: 0x109128c24

@end
