// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShareExtensionConfigs
// Superclass: NSObject
// Address: 0x100021db0

@interface SCShareExtensionConfigs

// Property: shareVideoDurationThresholdInSeconds; attributes: Tq,R,N,V_shareVideoDurationThresholdInSeconds
// Property: allowInitialTextWithMedia; attributes: TB,R,N,V_allowInitialTextWithMedia
// Property: hevcDecodeBlocked; attributes: TB,R,N,V_hevcDecodeBlocked
// Property: av1DecodeBlocked; attributes: TB,R,N,V_av1DecodeBlocked

// -[SCShareExtensionConfigs initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000147f0

// -[SCShareExtensionConfigs initWithShareVideoDurationThresholdInSeconds:allowInitialTextWithMedia:hevcDecodeBlocked:av1DecodeBlocked:]
// Type encoding: @36@0:8q16B24B28B32
// Implementation: 0x1000148a0

// -[SCShareExtensionConfigs copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x100014908

// -[SCShareExtensionConfigs encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10001492c

// -[SCShareExtensionConfigs hash]
// Type encoding: Q16@0:8
// Implementation: 0x1000149b4

// -[SCShareExtensionConfigs isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x100014a24

// -[SCShareExtensionConfigs shareVideoDurationThresholdInSeconds]
// Type encoding: q16@0:8
// Implementation: 0x100014adc

// -[SCShareExtensionConfigs allowInitialTextWithMedia]
// Type encoding: B16@0:8
// Implementation: 0x100014ae4

// -[SCShareExtensionConfigs hevcDecodeBlocked]
// Type encoding: B16@0:8
// Implementation: 0x100014aec

// -[SCShareExtensionConfigs av1DecodeBlocked]
// Type encoding: B16@0:8
// Implementation: 0x100014af4

@end
