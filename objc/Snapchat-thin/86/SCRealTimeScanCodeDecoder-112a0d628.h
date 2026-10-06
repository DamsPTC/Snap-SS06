// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRealTimeScanCodeDecoder
// Superclass: NSObject
// Address: 0x112a0d628

@interface SCRealTimeScanCodeDecoder


// -[SCRealTimeScanCodeDecoder initWithIdentifierProvider:performerProvider:modelProvider:modelKey:deepScanConfiguration:realTimeScanLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104fa3aac

// -[SCRealTimeScanCodeDecoder decodeForCodeTypes:fromImage:withId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104fa3c8c

// -[SCRealTimeScanCodeDecoder _handleSnapcodeDecodeWithImage:imageId:snapcodeResultPromise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104fa4404

// -[SCRealTimeScanCodeDecoder _handleQRCodeDecodeWithImage:imageId:qrCodeResultPromise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104fa4644

// -[SCRealTimeScanCodeDecoder _decodeBarcodeFromImage:withId:modelKey:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104fa489c

// -[SCRealTimeScanCodeDecoder _decodeSnapcodeWithDeepScan:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fa4cb0

// -[SCRealTimeScanCodeDecoder _processIdentifiersOptional:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fa4f0c

// -[SCRealTimeScanCodeDecoder _logDecoderSuccessForCodeType:successs:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104fa5130

// -[SCRealTimeScanCodeDecoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fa5244

@end
