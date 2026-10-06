// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlainBuffersDataSource
// Superclass: NSObject
// Address: 0x11288faa0

@interface SCPlainBuffersDataSource

// Property: delegate; attributes: T@"<SCViewfinderDataSourceDelegate>",N,W,Vdelegate
// Property: context; attributes: T@"NSString",N,C
// Property: captureHandler; attributes: T@"<SCCaptureHandler>",N,&,VcaptureHandler
// Property: audioHandler; attributes: T@"<SCAudioHandler>",N,&,VaudioHandler
// Property: positionSettingHandler; attributes: T@"<SCPositionSettingHandler>",N,&,VpositionSettingHandler
// Property: zoomingHandler; attributes: T@"<SCZoomingHandler>",N,&,VzoomingHandler
// Property: sampleBufferMetadataProvider; attributes: T@"<SCSampleBufferMetadataProvider>",N,R,VsampleBufferMetadataProvider
// Property: pixelBufferProvider; attributes: T@"<SCPixelBufferProviding>",N,R,VpixelBufferProvider

// -[SCPlainBuffersDataSource prepareForImageCapture]
// Type encoding: v16@0:8
// Implementation: 0x102b6e1cc

// -[SCPlainBuffersDataSource didCompleteImageCapture]
// Type encoding: v16@0:8
// Implementation: 0x102b6e364

// -[SCPlainBuffersDataSource managedAudioDataSource:didOutputSampleBuffer:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x102b6e164

// -[SCPlainBuffersDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x102b6b80c

// -[SCPlainBuffersDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x102b6b898

// -[SCPlainBuffersDataSource context]
// Type encoding: @16@0:8
// Implementation: 0x102b6bbf0

// -[SCPlainBuffersDataSource setContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x102b6bcac

// -[SCPlainBuffersDataSource captureHandler]
// Type encoding: @16@0:8
// Implementation: 0x102b6bdb0

// -[SCPlainBuffersDataSource setCaptureHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x102b6bdc8

// -[SCPlainBuffersDataSource audioHandler]
// Type encoding: @16@0:8
// Implementation: 0x102b6be20

// -[SCPlainBuffersDataSource setAudioHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x102b6be38

// -[SCPlainBuffersDataSource positionSettingHandler]
// Type encoding: @16@0:8
// Implementation: 0x102b6be94

// -[SCPlainBuffersDataSource setPositionSettingHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x102b6beac

// -[SCPlainBuffersDataSource zoomingHandler]
// Type encoding: @16@0:8
// Implementation: 0x102b6bf04

// -[SCPlainBuffersDataSource setZoomingHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x102b6bfa0

// -[SCPlainBuffersDataSource sampleBufferMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x102b6c0a8

// -[SCPlainBuffersDataSource pixelBufferProvider]
// Type encoding: @16@0:8
// Implementation: 0x102b6c734

// -[SCPlainBuffersDataSource initWithTargetBufferSize:startTime:timeIntervalMsec:leewayMsec:performer:context:sampleBufferMetadataProvider:screenLifecycleEvents:pixelBufferProvider:audioDataSource:audioConfigurationFactory:]
// Type encoding: @112@0:8{CGSize=dd}16Q32@40q48@56@64@72@80@88@96@104
// Implementation: 0x102b6d004

// -[SCPlainBuffersDataSource initWithTargetBufferSize:startTime:timeIntervalMsec:leewayMsec:performer:context:sampleBufferMetadataProvider:screenLifecycleEvents:pixelBufferProvider:]
// Type encoding: @96@0:8{CGSize=dd}16Q32@40q48@56@64@72@80@88
// Implementation: 0x102b6d134

// -[SCPlainBuffersDataSource initWithTargetBufferSize:startTime:timeIntervalMsec:leewayMsec:performer:context:sampleBufferMetadataProvider:screenLifecycleEvents:]
// Type encoding: @88@0:8{CGSize=dd}16Q32@40q48@56@64@72@80
// Implementation: 0x102b6d15c

// -[SCPlainBuffersDataSource start]
// Type encoding: @16@0:8
// Implementation: 0x102b6d494

// -[SCPlainBuffersDataSource didInvalidateAllTokens]
// Type encoding: v16@0:8
// Implementation: 0x102b6d4d4

// -[SCPlainBuffersDataSource updateFramesPerSecond:]
// Type encoding: v24@0:8d16
// Implementation: 0x102b6d61c

// -[SCPlainBuffersDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x102b6dfd8

// -[SCPlainBuffersDataSource init]
// Type encoding: @16@0:8
// Implementation: 0x102b6e138

// -[SCPlainBuffersDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102b6dffc

@end
