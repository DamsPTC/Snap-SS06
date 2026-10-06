// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlainBuffersMetadataProvider
// Superclass: NSObject
// Address: 0x112a2e828

@interface SCPlainBuffersMetadataProvider

// Property: orientation; attributes: Tq,R,N,V_orientation
// Property: imageOrientation; attributes: Tq,R,N
// Property: opaqueSampleBuffer; attributes: TB,R,N,V_opaqueSampleBuffer
// Property: shouldFlipSavingImage; attributes: TB,R,N
// Property: isFileStream; attributes: TB,R,N,V_isFileStream
// Property: isLiveStreaming; attributes: TB,R,N,V_isLiveStreaming
// Property: fieldOfViewObservable; attributes: T@"SCObservable",R,N
// Property: captureDevicePositionObservable; attributes: T@"SCObservable",R,N
// Property: bufferDimensionObservable; attributes: T@"SCObservable",R,N
// Property: cameraRenderRegionObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlainBuffersMetadataProvider initWithOrientation:bufferSize:devicePosition:]
// Type encoding: @48@0:8q16{CGSize=dd}24q40
// Implementation: 0x105395b5c

// -[SCPlainBuffersMetadataProvider shouldFlipSavingImage]
// Type encoding: B16@0:8
// Implementation: 0x105395bcc

// -[SCPlainBuffersMetadataProvider imageOrientation]
// Type encoding: q16@0:8
// Implementation: 0x105395bdc

// -[SCPlainBuffersMetadataProvider fieldOfViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x105395be4

// -[SCPlainBuffersMetadataProvider captureDevicePositionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105395c50

// -[SCPlainBuffersMetadataProvider bufferDimensionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105395cb4

// -[SCPlainBuffersMetadataProvider cameraRenderRegionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105395d30

// -[SCPlainBuffersMetadataProvider orientation]
// Type encoding: q16@0:8
// Implementation: 0x105395d9c

// -[SCPlainBuffersMetadataProvider opaqueSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x105395da4

// -[SCPlainBuffersMetadataProvider isFileStream]
// Type encoding: B16@0:8
// Implementation: 0x105395dac

// -[SCPlainBuffersMetadataProvider isLiveStreaming]
// Type encoding: B16@0:8
// Implementation: 0x105395db4

@end
