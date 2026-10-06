// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExternalMediaStreamVideoStreamProvider
// Superclass: NSObject
// Address: 0x112acc578

@interface SCLensExternalMediaStreamVideoStreamProvider

// Property: resourceId; attributes: T@"NSString",&,N,V_resourceId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExternalMediaStreamVideoStreamProvider initWithNGSMESnap:ngsmePlayerFactory:rotationConstant:enableDisplayLink:]
// Type encoding: @40@0:8@16@24C32B36
// Implementation: 0x106121ddc

// -[SCLensExternalMediaStreamVideoStreamProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106122070

// -[SCLensExternalMediaStreamVideoStreamProvider startStreaming]
// Type encoding: v16@0:8
// Implementation: 0x1061220c4

// -[SCLensExternalMediaStreamVideoStreamProvider stopStreaming]
// Type encoding: v16@0:8
// Implementation: 0x1061221b8

// -[SCLensExternalMediaStreamVideoStreamProvider _createNGSMEPlayerFromSnap:ngsmePlayerFactory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061222ac

// -[SCLensExternalMediaStreamVideoStreamProvider _sampleBufferAtTime:]
// Type encoding: ^{opaqueCMSampleBuffer=}24@0:8d16
// Implementation: 0x106122380

// -[SCLensExternalMediaStreamVideoStreamProvider _getVideoSizeOfSnap:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x106122424

// -[SCLensExternalMediaStreamVideoStreamProvider _displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061226d4

// -[SCLensExternalMediaStreamVideoStreamProvider _setLastVSync:]
// Type encoding: v24@0:8d16
// Implementation: 0x10612272c

// -[SCLensExternalMediaStreamVideoStreamProvider _lastVSync]
// Type encoding: d16@0:8
// Implementation: 0x106122764

// -[SCLensExternalMediaStreamVideoStreamProvider _setNgsmePlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061227a0

// -[SCLensExternalMediaStreamVideoStreamProvider ngsmePlayer]
// Type encoding: @16@0:8
// Implementation: 0x1061227e0

// -[SCLensExternalMediaStreamVideoStreamProvider currentCVPixelBufferRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x10612281c

// -[SCLensExternalMediaStreamVideoStreamProvider preferredFrameTransformForReverseCamera]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x10612286c

// -[SCLensExternalMediaStreamVideoStreamProvider managedVideoDataSource:sampleBufferAtTime:isRecording:]
// Type encoding: ^{opaqueCMSampleBuffer=}36@0:8@16d24B32
// Implementation: 0x106122888

// -[SCLensExternalMediaStreamVideoStreamProvider managedVideoDataSourceDidStartStreaming:performer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10612288c

// -[SCLensExternalMediaStreamVideoStreamProvider managedVideoDataSourceDidStopStreaming:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061229c4

// -[SCLensExternalMediaStreamVideoStreamProvider mediaSizeOfManagedVideoDataSource]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106122ad4

// -[SCLensExternalMediaStreamVideoStreamProvider mediaAspectRatioOfManagedVideoDataSource]
// Type encoding: d16@0:8
// Implementation: 0x106122adc

// -[SCLensExternalMediaStreamVideoStreamProvider resourceId]
// Type encoding: @16@0:8
// Implementation: 0x106122b10

// -[SCLensExternalMediaStreamVideoStreamProvider setResourceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106122b18

// -[SCLensExternalMediaStreamVideoStreamProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106122b48

@end
