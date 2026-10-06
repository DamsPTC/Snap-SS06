// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaHEVCGating
// Superclass: NSObject
// Address: 0x1129c3030

@interface SCMediaHEVCGating


// -[SCMediaHEVCGating init]
// Type encoding: @16@0:8
// Implementation: 0x1044d6cb8

// +[SCMediaHEVCGating decodeAllowed:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044d6648

// +[SCMediaHEVCGating av1DecodeAllowed:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044d674c

// +[SCMediaHEVCGating shouldBlockDownload:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044d6850

// +[SCMediaHEVCGating downloadBlockCodec:]
// Type encoding: B24@0:8q16
// Implementation: 0x1044d68d4

// +[SCMediaHEVCGating downloadBlockedForCodec:configProvider:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x1044d69e4

// +[SCMediaHEVCGating blockedCodecForAsset:variantInfo:configProvider:]
// Type encoding: q40@0:8@16@24@32
// Implementation: 0x1044d6ac4

// +[SCMediaHEVCGating blockedCodecForAssetTrack:hevcAllowed:av1Allowed:]
// Type encoding: q32@0:8@16B24B28
// Implementation: 0x1044d6b48

// +[SCMediaHEVCGating blockedCodecForAsset:hevcAllowed:av1Allowed:]
// Type encoding: q32@0:8@16B24B28
// Implementation: 0x1044d6ba0

// +[SCMediaHEVCGating shouldBlockDecodeForAsset:configProvider:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1044d6bfc

// +[SCMediaHEVCGating shouldBlockDecodeForAsset:hevcAllowed:av1Allowed:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x1044d6c5c

@end
