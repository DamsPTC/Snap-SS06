// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScannableData
// Superclass: NSObject
// Address: 0x112c01038

@interface SCScannableData

// Property: image; attributes: T@"UIImage",R,N
// Property: imageId; attributes: T@"NSString",R,N
// Property: imageMetadata; attributes: T@"NSArray",R,C,N
// Property: captureOrientation; attributes: TQ,R,N
// Property: snapcodeIdentifiers; attributes: T@"NSArray",R,C,N
// Property: barcodeResult; attributes: T@"SCPercMLBarcodeResult",R,C,N
// Property: relativeTouchPoint; attributes: T@"NSValue",R,N

// -[SCScannableData image]
// Type encoding: @16@0:8
// Implementation: 0x106743dac

// -[SCScannableData imageId]
// Type encoding: @16@0:8
// Implementation: 0x106743f24

// -[SCScannableData imageMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106744020

// -[SCScannableData captureOrientation]
// Type encoding: Q16@0:8
// Implementation: 0x10674411c

// -[SCScannableData snapcodeIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x1067442d0

// -[SCScannableData barcodeResult]
// Type encoding: @16@0:8
// Implementation: 0x1067444d4

// -[SCScannableData relativeTouchPoint]
// Type encoding: @16@0:8
// Implementation: 0x1067446d4

// -[SCScannableData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10aeec1b0

// -[SCScannableData hash]
// Type encoding: Q16@0:8
// Implementation: 0x10aeec1d4

// -[SCScannableData internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10aeec258

// -[SCScannableData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aeec29c

// -[SCScannableData matchImage:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aeec36c

// -[SCScannableData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeec394

// +[SCScannableData imageWithImage:imageId:imageMetadata:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aeec0ec

@end
