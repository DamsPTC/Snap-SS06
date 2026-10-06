// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocGridUtil
// Superclass: NSObject
// Address: 0x112be7b38

@interface SCSnapDocGridUtil


// +[SCSnapDocGridUtil encodeFloat:originalUnit:encodeUnit:]
// Type encoding: i32@0:8f16f20Q24
// Implementation: 0x109123854

// +[SCSnapDocGridUtil decodeFloat:originalUnit:encodeUnit:]
// Type encoding: d32@0:8i16f20Q24
// Implementation: 0x109123998

// +[SCSnapDocGridUtil encodeFloatArrays:originalUnit:encodeUnit:]
// Type encoding: {EncodedIntArray=@@}36@0:8@16f24Q28
// Implementation: 0x109123aa0

// +[SCSnapDocGridUtil decodeFloatArraysFromEncodedArray:originalUnit:encodeUnit:]
// Type encoding: @44@0:8{EncodedIntArray=@@}16f32Q36
// Implementation: 0x109123c8c

// +[SCSnapDocGridUtil encodeUintArrays:originalUnit:encodeUnit:]
// Type encoding: {EncodedUIntArray=@@}40@0:8@16Q24Q32
// Implementation: 0x109123e48

// +[SCSnapDocGridUtil decodeUIntArraysFromEncodedArray:originalUnit:encodeUnit:]
// Type encoding: @48@0:8{EncodedUIntArray=@@}16Q32Q40
// Implementation: 0x109124030

// +[SCSnapDocGridUtil encodePaths:xOriginalUnit:xEncodeUnit:yOriginalUnit:yEncodeUnit:]
// Type encoding: @48@0:8@16f24Q28f36Q40
// Implementation: 0x1091241e4

// +[SCSnapDocGridUtil decodePaths:xOriginalUnit:xEncodeUnit:yOriginalUnit:yEncodeUnit:]
// Type encoding: @48@0:8@16f24Q28f36Q40
// Implementation: 0x109124538

// +[SCSnapDocGridUtil encodeTransforms:xEncodeUnit:yEncodeUnit:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1091248a0

// +[SCSnapDocGridUtil decodeTransforms:xEncodeUnit:yEncodeUnit:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x109124f04

@end
