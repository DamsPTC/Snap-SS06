// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerEventLogger
// Superclass: NSObject
// Address: 0x112be66e8

@interface SCNeoPlayerEventLogger

// Property: timebase; attributes: T^{OpaqueCMTimebase=},R,N,V_timebase
// Property: instance; attributes: T^v,R,N
// Property: loggingIdentifier; attributes: T@"NSString",R,N

// -[SCNeoPlayerEventLogger initWithMinLogLevel:playItemIdentifier:playerItemURL:configuration:]
// Type encoding: @44@0:8I16@20@28@36
// Implementation: 0x1090afde4

// -[SCNeoPlayerEventLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090affbc

// -[SCNeoPlayerEventLogger instance]
// Type encoding: ^v16@0:8
// Implementation: 0x1090b0024

// -[SCNeoPlayerEventLogger loggingIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1090b002c

// -[SCNeoPlayerEventLogger didReceiveNewItem]
// Type encoding: v16@0:8
// Implementation: 0x1090b0054

// -[SCNeoPlayerEventLogger willTransitionFromState:toState:debugMessage:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1090b005c

// -[SCNeoPlayerEventLogger didSeekAtTime:forTrackId:]
// Type encoding: v44@0:8{?=qiIq}16i40
// Implementation: 0x1090b011c

// -[SCNeoPlayerEventLogger willParseBuffer:tmpDataLength:moovSectionLength:moovSectionOffset:]
// Type encoding: v48@0:8Q16Q24Q32Q40
// Implementation: 0x1090b0138

// -[SCNeoPlayerEventLogger didParseBuffer:parsedLength:parserResult:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x1090b0150

// -[SCNeoPlayerEventLogger didLocateBox:offset:size:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x1090b019c

// -[SCNeoPlayerEventLogger didDequeueSampleBufferAtTime:dataLen:forTrackId:]
// Type encoding: v52@0:8{?=qiIq}16Q40i48
// Implementation: 0x1090b01e8

// -[SCNeoPlayerEventLogger didFailToDequeueSampleBufferForTrackId:error:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x1090b0208

// -[SCNeoPlayerEventLogger didLoadTrackInfoForTrackId:type:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x1090b0248

// -[SCNeoPlayerEventLogger didUpdateActiveVideoTrackId:audioTrackId:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x1090b0284

// -[SCNeoPlayerEventLogger didEncounterMediaParseError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b0294

// -[SCNeoPlayerEventLogger didEncounterPlaybackError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b02bc

// -[SCNeoPlayerEventLogger didLoadTopLevelHLSStreamsWithCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1090b02e4

// -[SCNeoPlayerEventLogger didLoadSegmetsInHLSStream:count:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090b02f0

// -[SCNeoPlayerEventLogger didUpdateTopLevelHLSStream:streamId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090b0318

// -[SCNeoPlayerEventLogger didUpdateAudioHLSStream:streamId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090b0340

// -[SCNeoPlayerEventLogger didUpdateHLSVideoSegmentMediaSequence:]
// Type encoding: v24@0:8q16
// Implementation: 0x1090b0368

// -[SCNeoPlayerEventLogger didUpdateHLSAudioSegmentMediaSequence:]
// Type encoding: v24@0:8q16
// Implementation: 0x1090b0374

// -[SCNeoPlayerEventLogger didLoadHLSSegmentStreamMediaInfo]
// Type encoding: v16@0:8
// Implementation: 0x1090b0380

// -[SCNeoPlayerEventLogger didEncounterAudioBufferDequeueError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b0388

// -[SCNeoPlayerEventLogger didEncounterVideoBufferDequeueError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b03b0

// -[SCNeoPlayerEventLogger didOutputAudioSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b03d8

// -[SCNeoPlayerEventLogger didOutputVideoSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b03e0

// -[SCNeoPlayerEventLogger didUpdateSynchronizerRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x1090b03e8

// -[SCNeoPlayerEventLogger didDecodeAudioSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b03f0

// -[SCNeoPlayerEventLogger didDecodeVideoSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b03f8

// -[SCNeoPlayerEventLogger didEnqueueProcessedAudioSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b0400

// -[SCNeoPlayerEventLogger didEnqueueProcessedVideoSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1090b0408

// -[SCNeoPlayerEventLogger didKickoffRecoverFromRendererFailure]
// Type encoding: v16@0:8
// Implementation: 0x1090b0410

// -[SCNeoPlayerEventLogger didTeardownSubtitleManager]
// Type encoding: v16@0:8
// Implementation: 0x1090b0418

// -[SCNeoPlayerEventLogger didRecreateSubtitleManager]
// Type encoding: v16@0:8
// Implementation: 0x1090b0420

// -[SCNeoPlayerEventLogger didMapExternalIdentifierWithName:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b0428

// -[SCNeoPlayerEventLogger didResetVideoDecoderWithGenerationId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090b04ac

// -[SCNeoPlayerEventLogger didIgnoreStaleVideoDecodeErrorCallbackWithCallbackGenerationId:currentGenerationId:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1090b04b8

// -[SCNeoPlayerEventLogger timebase]
// Type encoding: ^{OpaqueCMTimebase=}16@0:8
// Implementation: 0x1090b04c8

// -[SCNeoPlayerEventLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b04d0

// -[SCNeoPlayerEventLogger .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1090b04fc

@end
