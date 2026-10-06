// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaAV1SampleBufferDecoder
// Superclass: NSObject
// Address: 0x112be5888

@interface SCNeoMediaAV1SampleBufferDecoder

// Property: delegate; attributes: T@"<SCNeoMediaSampleBufferDecoderDelegate>",W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMediaAV1SampleBufferDecoder initWithDelegateQueue:maxDecodingFramesInFlight:instruments:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x109099e14

// -[SCNeoMediaAV1SampleBufferDecoder reset]
// Type encoding: v16@0:8
// Implementation: 0x109099f2c

// -[SCNeoMediaAV1SampleBufferDecoder dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109099f30

// -[SCNeoMediaAV1SampleBufferDecoder canAcceptFormatDescription:]
// Type encoding: B24@0:8^{opaqueCMFormatDescription=}16
// Implementation: 0x109099fbc

// -[SCNeoMediaAV1SampleBufferDecoder setPreferredPixelOutputFormat:]
// Type encoding: B20@0:8I16
// Implementation: 0x109099fe4

// -[SCNeoMediaAV1SampleBufferDecoder flush]
// Type encoding: v16@0:8
// Implementation: 0x109099fec

// -[SCNeoMediaAV1SampleBufferDecoder seekTo:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10909a074

// -[SCNeoMediaAV1SampleBufferDecoder _notifyError:toDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10909a088

// -[SCNeoMediaAV1SampleBufferDecoder _notifySkipBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10909a128

// -[SCNeoMediaAV1SampleBufferDecoder _forwardDav1DPicture:toDelegate:flushId:]
// Type encoding: v40@0:8^{Dav1dPicture=^{Dav1dSequenceHeader}^{Dav1dFrameHeader}[3^v][2q]{Dav1dPictureParameters=iiii}{Dav1dDataProps=qqqQ{Dav1dUserData=*^{Dav1dRef}}}^{Dav1dContentLightLevel}^{Dav1dMasteringDisplay}^{Dav1dITUTT35}Q[4Q]^{Dav1dRef}^{Dav1dRef}^{Dav1dRef}^{Dav1dRef}^{Dav1dRef}[4Q]^{Dav1dRef}^v}16@24Q32
// Implementation: 0x10909a1b4

// -[SCNeoMediaAV1SampleBufferDecoder _enqueueSampleBufferToDav1d:delegate:]
// Type encoding: B32@0:8^{opaqueCMSampleBuffer=}16@24
// Implementation: 0x10909a570

// -[SCNeoMediaAV1SampleBufferDecoder _flushQueueWithDelegate:flushId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10909a740

// -[SCNeoMediaAV1SampleBufferDecoder endOfStream]
// Type encoding: v16@0:8
// Implementation: 0x10909a8ec

// -[SCNeoMediaAV1SampleBufferDecoder _drainAtEOSWithDelegate:flushId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10909a950

// -[SCNeoMediaAV1SampleBufferDecoder enqueueSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x10909a9d4

// -[SCNeoMediaAV1SampleBufferDecoder isReadyForMoreSampleBuffer]
// Type encoding: B16@0:8
// Implementation: 0x10909aa48

// -[SCNeoMediaAV1SampleBufferDecoder setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10909aa78

// -[SCNeoMediaAV1SampleBufferDecoder delegate]
// Type encoding: @16@0:8
// Implementation: 0x10909aaa4

// -[SCNeoMediaAV1SampleBufferDecoder status]
// Type encoding: Q16@0:8
// Implementation: 0x10909aac8

// -[SCNeoMediaAV1SampleBufferDecoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10909aad0

@end
