// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExternalMediaStreamImageStreamProvider
// Superclass: NSObject
// Address: 0x112acc528

@interface SCLensExternalMediaStreamImageStreamProvider

// Property: resourceId; attributes: T@"NSString",&,N,V_resourceId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExternalMediaStreamImageStreamProvider initWithImage:orientation:]
// Type encoding: @28@0:8@16I24
// Implementation: 0x106121660

// -[SCLensExternalMediaStreamImageStreamProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106121868

// -[SCLensExternalMediaStreamImageStreamProvider managedVideoDataSource:sampleBufferAtTime:isRecording:]
// Type encoding: ^{opaqueCMSampleBuffer=}36@0:8@16d24B32
// Implementation: 0x1061218b8

// -[SCLensExternalMediaStreamImageStreamProvider managedVideoDataSourceDidStartStreaming:performer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106121a14

// -[SCLensExternalMediaStreamImageStreamProvider managedVideoDataSourceDidStopStreaming:]
// Type encoding: v24@0:8@16
// Implementation: 0x106121a18

// -[SCLensExternalMediaStreamImageStreamProvider mediaSizeOfManagedVideoDataSource]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106121a1c

// -[SCLensExternalMediaStreamImageStreamProvider mediaAspectRatioOfManagedVideoDataSource]
// Type encoding: d16@0:8
// Implementation: 0x106121a24

// -[SCLensExternalMediaStreamImageStreamProvider currentCVPixelBufferRef]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x106121a58

// -[SCLensExternalMediaStreamImageStreamProvider preferredFrameTransformForReverseCamera]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x106121af0

// -[SCLensExternalMediaStreamImageStreamProvider _copyPixelBuffer:]
// Type encoding: ^{__CVBuffer=}24@0:8^{__CVBuffer=}16
// Implementation: 0x106121b0c

// -[SCLensExternalMediaStreamImageStreamProvider _createCIImageFromUIImage:orientation:]
// Type encoding: v28@0:8@16I24
// Implementation: 0x106121c40

// -[SCLensExternalMediaStreamImageStreamProvider resourceId]
// Type encoding: @16@0:8
// Implementation: 0x106121d68

// -[SCLensExternalMediaStreamImageStreamProvider setResourceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106121d70

// -[SCLensExternalMediaStreamImageStreamProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106121da0

@end
