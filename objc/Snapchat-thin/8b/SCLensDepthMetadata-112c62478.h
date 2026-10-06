// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDepthMetadata
// Superclass: NSObject
// Address: 0x112c62478

@interface SCLensDepthMetadata

// Property: serializedDepthMapAsPNGRawData; attributes: T@"NSData",R,C,N,V_serializedDepthMapAsPNGRawData
// Property: serializedCameraInfoData; attributes: T@"NSData",R,C,N,V_serializedCameraInfoData
// Property: serializedSegmentationMaskAsPNGRawData; attributes: T@"NSData",R,C,N,V_serializedSegmentationMaskAsPNGRawData

// -[SCLensDepthMetadata initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b05b478

// -[SCLensDepthMetadata initWithSerializedDepthMapAsPNGRawData:serializedCameraInfoData:serializedSegmentationMaskAsPNGRawData:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b05b550

// -[SCLensDepthMetadata copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b05b628

// -[SCLensDepthMetadata encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b05b64c

// -[SCLensDepthMetadata hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b05b6c0

// -[SCLensDepthMetadata isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b05b740

// -[SCLensDepthMetadata serializedDepthMapAsPNGRawData]
// Type encoding: @16@0:8
// Implementation: 0x10b05b800

// -[SCLensDepthMetadata serializedCameraInfoData]
// Type encoding: @16@0:8
// Implementation: 0x10b05b808

// -[SCLensDepthMetadata serializedSegmentationMaskAsPNGRawData]
// Type encoding: @16@0:8
// Implementation: 0x10b05b810

// -[SCLensDepthMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b05b818

@end
