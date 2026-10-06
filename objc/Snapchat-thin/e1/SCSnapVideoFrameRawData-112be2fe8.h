// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapVideoFrameRawData
// Superclass: NSObject
// Address: 0x112be2fe8

@interface SCSnapVideoFrameRawData

// Property: frameNum; attributes: Tq,R,N,V_frameNum
// Property: width; attributes: Tq,R,N,V_width
// Property: height; attributes: Tq,R,N,V_height
// Property: bytesPerRow; attributes: Tq,R,N,V_bytesPerRow
// Property: rawLumaData; attributes: T@"NSData",R,C,N,V_rawLumaData
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapVideoFrameRawData initWithFrameNum:width:height:bytesPerRow:rawLumaData:]
// Type encoding: @56@0:8q16q24q32q40@48
// Implementation: 0x109054350

// -[SCSnapVideoFrameRawData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1090543f0

// -[SCSnapVideoFrameRawData initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x109054414

// -[SCSnapVideoFrameRawData encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090544ec

// -[SCSnapVideoFrameRawData preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x109054588

// -[SCSnapVideoFrameRawData encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x109054590

// -[SCSnapVideoFrameRawData decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x109054604

// -[SCSnapVideoFrameRawData setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x109054690

// -[SCSnapVideoFrameRawData setSInt64:forUInt64Key:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x1090546f4

// -[SCSnapVideoFrameRawData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090547b0

// -[SCSnapVideoFrameRawData hash]
// Type encoding: Q16@0:8
// Implementation: 0x109054868

// -[SCSnapVideoFrameRawData frameNum]
// Type encoding: q16@0:8
// Implementation: 0x109054910

// -[SCSnapVideoFrameRawData width]
// Type encoding: q16@0:8
// Implementation: 0x109054918

// -[SCSnapVideoFrameRawData height]
// Type encoding: q16@0:8
// Implementation: 0x109054920

// -[SCSnapVideoFrameRawData bytesPerRow]
// Type encoding: q16@0:8
// Implementation: 0x109054928

// -[SCSnapVideoFrameRawData rawLumaData]
// Type encoding: @16@0:8
// Implementation: 0x109054930

// -[SCSnapVideoFrameRawData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109054938

// +[SCSnapVideoFrameRawData fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x109054790

// +[SCSnapVideoFrameRawData fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x1090547a4

@end
