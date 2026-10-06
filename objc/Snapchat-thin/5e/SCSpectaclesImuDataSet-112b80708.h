// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesImuDataSet
// Superclass: NSObject
// Address: 0x112b80708

@interface SCSpectaclesImuDataSet

// Property: imuFrames; attributes: T@"NSArray",&,N,V_imuFrames
// Property: timestampFrames; attributes: T@"NSArray",&,N,V_timestampFrames
// Property: sampleFrequencyHz; attributes: TQ,N,V_sampleFrequencyHz
// Property: imuVersion; attributes: TQ,N,V_imuVersion
// Property: firstFrameTimestamp; attributes: Tq,N,V_firstFrameTimestamp

// -[SCSpectaclesImuDataSet initWithSensorBlob:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f64cac

// -[SCSpectaclesImuDataSet initWithImuData:mediaType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106f64da8

// -[SCSpectaclesImuDataSet initWithLagunaData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107db38e4

// -[SCSpectaclesImuDataSet initWithMLBData:offset:]
// Type encoding: @120@0:8@16{?=[3]}24
// Implementation: 0x107db3b70

// -[SCSpectaclesImuDataSet initWithMalibuData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107db3f8c

// -[SCSpectaclesImuDataSet initWithNewportData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107db402c

// -[SCSpectaclesImuDataSet initWithConcatenatedDataSets:trimmedToTimeRange:]
// Type encoding: @72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107db40cc

// -[SCSpectaclesImuDataSet isSupportedMalibuVersion]
// Type encoding: B16@0:8
// Implementation: 0x107db48bc

// -[SCSpectaclesImuDataSet isSupportedNewportVersion]
// Type encoding: B16@0:8
// Implementation: 0x107db48d8

// -[SCSpectaclesImuDataSet isValidForVideoOfDuration:]
// Type encoding: B24@0:8d16
// Implementation: 0x107db48f4

// -[SCSpectaclesImuDataSet _mlbDataWithOffset:]
// Type encoding: @112@0:8{?=[3]}16
// Implementation: 0x107db49b4

// -[SCSpectaclesImuDataSet lagunaData]
// Type encoding: @16@0:8
// Implementation: 0x107db4cb8

// -[SCSpectaclesImuDataSet malibuData]
// Type encoding: @16@0:8
// Implementation: 0x107db4ec8

// -[SCSpectaclesImuDataSet newportData]
// Type encoding: @16@0:8
// Implementation: 0x107db4f48

// -[SCSpectaclesImuDataSet imuFrames]
// Type encoding: @16@0:8
// Implementation: 0x107db4fc8

// -[SCSpectaclesImuDataSet setImuFrames:]
// Type encoding: v24@0:8@16
// Implementation: 0x107db4fd0

// -[SCSpectaclesImuDataSet timestampFrames]
// Type encoding: @16@0:8
// Implementation: 0x107db5000

// -[SCSpectaclesImuDataSet setTimestampFrames:]
// Type encoding: v24@0:8@16
// Implementation: 0x107db5008

// -[SCSpectaclesImuDataSet sampleFrequencyHz]
// Type encoding: Q16@0:8
// Implementation: 0x107db5038

// -[SCSpectaclesImuDataSet setSampleFrequencyHz:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107db5040

// -[SCSpectaclesImuDataSet imuVersion]
// Type encoding: Q16@0:8
// Implementation: 0x107db5048

// -[SCSpectaclesImuDataSet setImuVersion:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107db5050

// -[SCSpectaclesImuDataSet firstFrameTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x107db5058

// -[SCSpectaclesImuDataSet setFirstFrameTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x107db5060

// -[SCSpectaclesImuDataSet .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107db5068

@end
