// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: YYImageEncoder
// Superclass: NSObject
// Address: 0x112bf6bd8

@interface YYImageEncoder

// Property: type; attributes: TQ,R,N,V_type
// Property: loopCount; attributes: TQ,N,V_loopCount
// Property: lossless; attributes: TB,N,V_lossless
// Property: quality; attributes: Td,N,V_quality

// -[YYImageEncoder init]
// Type encoding: @16@0:8
// Implementation: 0x10921b0e0

// -[YYImageEncoder initWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10921b118

// -[YYImageEncoder setQuality:]
// Type encoding: v24@0:8d16
// Implementation: 0x10921b230

// -[YYImageEncoder addImage:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10921b250

// -[YYImageEncoder addImageWithData:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10921b2ec

// -[YYImageEncoder addImageWithFile:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10921b384

// -[YYImageEncoder _imageIOAvaliable]
// Type encoding: B16@0:8
// Implementation: 0x10921b444

// -[YYImageEncoder _newImageDestination:imageCount:]
// Type encoding: ^{CGImageDestination=}32@0:8@16Q24
// Implementation: 0x10921b498

// -[YYImageEncoder _encodeImageWithDestination:imageCount:]
// Type encoding: v32@0:8^{CGImageDestination=}16Q24
// Implementation: 0x10921b58c

// -[YYImageEncoder _newCGImageFromIndex:decoded:]
// Type encoding: ^{CGImage=}28@0:8Q16B24
// Implementation: 0x10921b9c8

// -[YYImageEncoder _encodeWithImageIO]
// Type encoding: @16@0:8
// Implementation: 0x10921bb38

// -[YYImageEncoder _encodeWithImageIO:]
// Type encoding: B24@0:8@16
// Implementation: 0x10921bbf8

// -[YYImageEncoder _encodeAPNG]
// Type encoding: @16@0:8
// Implementation: 0x10921bc98

// -[YYImageEncoder _encodeWebP]
// Type encoding: @16@0:8
// Implementation: 0x10921c63c

// -[YYImageEncoder encode]
// Type encoding: @16@0:8
// Implementation: 0x10921cad0

// -[YYImageEncoder type]
// Type encoding: Q16@0:8
// Implementation: 0x10921cd28

// -[YYImageEncoder loopCount]
// Type encoding: Q16@0:8
// Implementation: 0x10921cd30

// -[YYImageEncoder setLoopCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10921cd38

// -[YYImageEncoder lossless]
// Type encoding: B16@0:8
// Implementation: 0x10921cd40

// -[YYImageEncoder setLossless:]
// Type encoding: v20@0:8B16
// Implementation: 0x10921cd48

// -[YYImageEncoder quality]
// Type encoding: d16@0:8
// Implementation: 0x10921cd50

// -[YYImageEncoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10921cd58

// +[YYImageEncoder encodeImage:type:quality:]
// Type encoding: @40@0:8@16Q24d32
// Implementation: 0x10921cb58

// +[YYImageEncoder encodeImageWithDecoder:type:quality:]
// Type encoding: @40@0:8@16Q24d32
// Implementation: 0x10921cbf0

@end
