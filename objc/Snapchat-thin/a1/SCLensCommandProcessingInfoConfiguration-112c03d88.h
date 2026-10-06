// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCommandProcessingInfoConfiguration
// Superclass: NSObject
// Address: 0x112c03d88

@interface SCLensCommandProcessingInfoConfiguration

// Property: timeStamp; attributes: T{?=qiIq},R,N,V_timeStamp
// Property: offset; attributes: T{?=qiIq},R,N,V_offset
// Property: inputSource; attributes: TQ,R,N,V_inputSource
// Property: cacheTrackingData; attributes: TB,R,N,V_cacheTrackingData
// Property: forceUseTimestampAsCurrentTime; attributes: TB,R,N,V_forceUseTimestampAsCurrentTime
// Property: useOutputTexture; attributes: TB,R,N,V_useOutputTexture
// Property: warmupFrameCount; attributes: TQ,R,N,V_warmupFrameCount

// -[SCLensCommandProcessingInfoConfiguration initWithTimestamp:offset:inputSource:cacheTrackingData:forceUseTimestampAsCurrentTime:useOutputTexture:warmupFrameCount:]
// Type encoding: @92@0:8{?=qiIq}16{?=qiIq}40Q64B72B76B80Q84
// Implementation: 0x10af00ddc

// -[SCLensCommandProcessingInfoConfiguration initWithTimestamp:inputSource:cacheTrackingData:]
// Type encoding: @52@0:8{?=qiIq}16Q40B48
// Implementation: 0x10af00e90

// -[SCLensCommandProcessingInfoConfiguration initWithOffset:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x10af00ef4

// -[SCLensCommandProcessingInfoConfiguration forceUseTimestampAsCurrentTime]
// Type encoding: B16@0:8
// Implementation: 0x10af00f58

// -[SCLensCommandProcessingInfoConfiguration _validate]
// Type encoding: v16@0:8
// Implementation: 0x10af00f74

// -[SCLensCommandProcessingInfoConfiguration timeStamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10af00f78

// -[SCLensCommandProcessingInfoConfiguration offset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10af00f8c

// -[SCLensCommandProcessingInfoConfiguration inputSource]
// Type encoding: Q16@0:8
// Implementation: 0x10af00fa0

// -[SCLensCommandProcessingInfoConfiguration cacheTrackingData]
// Type encoding: B16@0:8
// Implementation: 0x10af00fa8

// -[SCLensCommandProcessingInfoConfiguration useOutputTexture]
// Type encoding: B16@0:8
// Implementation: 0x10af00fb0

// -[SCLensCommandProcessingInfoConfiguration warmupFrameCount]
// Type encoding: Q16@0:8
// Implementation: 0x10af00fb8

// +[SCLensCommandProcessingInfoConfiguration newUcoAnimationFrozenConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10af00d90

@end
