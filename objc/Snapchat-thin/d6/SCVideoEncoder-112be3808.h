// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoEncoder
// Superclass: NSObject
// Address: 0x112be3808

@interface SCVideoEncoder

// Property: encodingCancelled; attributes: TB,V_encodingCancelled
// Property: muxerAudioProcessedFrameCount; attributes: Tq,V_muxerAudioProcessedFrameCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoEncoder initWithPerformer:outputURL:settings:circumstanceEngine:delegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x109063ce4

// -[SCVideoEncoder initWithPerformer:settings:segmentDataOutputBlock:circumstanceEngine:delegate:]
// Type encoding: @56@0:8@16@24@?32@40@48
// Implementation: 0x109063e00

// -[SCVideoEncoder initWithPerformer:settings:circumstanceEngine:delegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x109063f20

// -[SCVideoEncoder dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109064120

// -[SCVideoEncoder prepareEncodingWithFirstAudioSampleBuffer:firstVideoFrame:videoFrameProcessingBlock:shouldFailEncodingForIPPError:error:]
// Type encoding: B60@0:8^{opaqueCMSampleBuffer=}16{?=^{opaqueCMSampleBuffer}q}24@?40B48^@52
// Implementation: 0x10906419c

// -[SCVideoEncoder startEncodingWithVideoTranscodingFrameProvider:frameProviderPerformer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109064a38

// -[SCVideoEncoder cancelEncoding]
// Type encoding: v16@0:8
// Implementation: 0x109065dac

// -[SCVideoEncoder assetWriter:didOutputSegmentData:segmentType:segmentReport:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x109065df4

// -[SCVideoEncoder _completeEncoding]
// Type encoding: v16@0:8
// Implementation: 0x109065e80

// -[SCVideoEncoder _completeEncodingWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090660b8

// -[SCVideoEncoder _createOutputPixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x109066128

// -[SCVideoEncoder _isValidPixelBuffer:]
// Type encoding: B24@0:8^{__CVBuffer=}16
// Implementation: 0x10906617c

// -[SCVideoEncoder _assetWriterStatusChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090661c8

// -[SCVideoEncoder _cleanUpResourceOnCancel]
// Type encoding: v16@0:8
// Implementation: 0x109066360

// -[SCVideoEncoder _getSourcePixelBufferSizeWithInputSize:orientation:]
// Type encoding: {CGSize=dd}40@0:8{CGSize=dd}16q32
// Implementation: 0x109066498

// -[SCVideoEncoder _videoEncoderAudioOutputSettingsForSampleBuffer:]
// Type encoding: @24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090664c0

// -[SCVideoEncoder _videoEncoderVideoOutputSettings]
// Type encoding: @16@0:8
// Implementation: 0x10906668c

// -[SCVideoEncoder _appendVideoSampleBuffer:]
// Type encoding: v32@0:8{?=^{opaqueCMSampleBuffer}q}16
// Implementation: 0x1090669c0

// -[SCVideoEncoder _convertPlaneInputPixelBuffer:outputPixelBuffer:orientation:planeIndex:]
// Type encoding: v48@0:8^{__CVBuffer=}16^{__CVBuffer=}24q32Q40
// Implementation: 0x109066ad8

// -[SCVideoEncoder _claimFrameFetchFailure]
// Type encoding: B16@0:8
// Implementation: 0x109066bf8

// -[SCVideoEncoder _fetchNextVideoFrameWithTimeoutForFrameProvider:timedOut:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}32@0:8@16^B24
// Implementation: 0x109066c38

// -[SCVideoEncoder _fetchNextVideoFrameWithFrameProvider:currentPresentationTime:maxFrameRate:]
// Type encoding: {?=^{opaqueCMSampleBuffer}q}56@0:8@16{?=qiIq}24Q48
// Implementation: 0x109066f60

// -[SCVideoEncoder _cleanupForEncoding]
// Type encoding: v16@0:8
// Implementation: 0x1090672a8

// -[SCVideoEncoder muxerAudioProcessedFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x109067304

// -[SCVideoEncoder setMuxerAudioProcessedFrameCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10906730c

// -[SCVideoEncoder encodingCancelled]
// Type encoding: B16@0:8
// Implementation: 0x109067314

// -[SCVideoEncoder setEncodingCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109067320

// -[SCVideoEncoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109067328

@end
