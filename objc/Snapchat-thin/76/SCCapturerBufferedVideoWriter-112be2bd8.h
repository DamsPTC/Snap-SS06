// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCapturerBufferedVideoWriter
// Superclass: NSObject
// Address: 0x112be2bd8

@interface SCCapturerBufferedVideoWriter

// Property: isAudioWriterPrepared; attributes: TB,R,N,V_isAudioWriterPrepared
// Property: isVideoWriterPrepared; attributes: TB,R,N,V_isVideoWriterPrepared
// Property: countOfAudioSamplesAppended; attributes: TQ,R,N,V_audioSampleCountAppendedToWriter
// Property: countOfVideoSamplesAppended; attributes: TQ,R,N,V_videoSampleCountAppendedToWriter
// Property: countOfAudioSamplesAppendedByUser; attributes: TQ,R,N,V_audioSampleCountAppendedByUser
// Property: countOfVideoSamplesAppendedByUser; attributes: TQ,R,N,V_videoSampleCountAppendedByUser
// Property: countOfAudioSamplesAppendFailed; attributes: TQ,R,N,V_audioSamplesAppendFailed
// Property: audioSampleAppendError; attributes: T@"NSError",R,N,V_audioSampleAppendError

// -[SCCapturerBufferedVideoWriter initWithPerformer:speedRate:audioSampleRate:outputURL:videoInputAffineTransform:normalizeUprightInputTransform:delegate:copySampleBufferHandler:error:]
// Type encoding: @124@0:8@16d24d32@40{CGAffineTransform=dddddd}48B96@100@108^@116
// Implementation: 0x109044270

// -[SCCapturerBufferedVideoWriter prepareWritingWithOutputSettings:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090444f8

// -[SCCapturerBufferedVideoWriter appendVideoSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x109044bf4

// -[SCCapturerBufferedVideoWriter appendAudioSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x109044ce0

// -[SCCapturerBufferedVideoWriter startWritingAtSourceTime:]
// Type encoding: B40@0:8{?=qiIq}16
// Implementation: 0x109044e44

// -[SCCapturerBufferedVideoWriter cancelWriting]
// Type encoding: v16@0:8
// Implementation: 0x109045000

// -[SCCapturerBufferedVideoWriter finishWritingAtSourceTime:withCompletionHanlder:]
// Type encoding: v48@0:8{?=qiIq}16@?40
// Implementation: 0x109045040

// -[SCCapturerBufferedVideoWriter cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x109045694

// -[SCCapturerBufferedVideoWriter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109045708

// -[SCCapturerBufferedVideoWriter assetWriterStatusChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x109045768

// -[SCCapturerBufferedVideoWriter _appendVideoSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1090457fc

// -[SCCapturerBufferedVideoWriter _logVideoCMBufferQueueStatusWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904589c

// -[SCCapturerBufferedVideoWriter _adjustedTimeForTime:startTime:speedRate:]
// Type encoding: {?=qiIq}72@0:8{?=qiIq}16{?=qiIq}40d64
// Implementation: 0x1090458ec

// -[SCCapturerBufferedVideoWriter countOfAudioSamplesAppended]
// Type encoding: Q16@0:8
// Implementation: 0x1090459c4

// -[SCCapturerBufferedVideoWriter countOfVideoSamplesAppended]
// Type encoding: Q16@0:8
// Implementation: 0x1090459cc

// -[SCCapturerBufferedVideoWriter countOfAudioSamplesAppendedByUser]
// Type encoding: Q16@0:8
// Implementation: 0x1090459d4

// -[SCCapturerBufferedVideoWriter countOfVideoSamplesAppendedByUser]
// Type encoding: Q16@0:8
// Implementation: 0x1090459dc

// -[SCCapturerBufferedVideoWriter countOfAudioSamplesAppendFailed]
// Type encoding: Q16@0:8
// Implementation: 0x1090459e4

// -[SCCapturerBufferedVideoWriter audioSampleAppendError]
// Type encoding: @16@0:8
// Implementation: 0x1090459ec

// -[SCCapturerBufferedVideoWriter isAudioWriterPrepared]
// Type encoding: B16@0:8
// Implementation: 0x1090459f4

// -[SCCapturerBufferedVideoWriter isVideoWriterPrepared]
// Type encoding: B16@0:8
// Implementation: 0x1090459fc

// -[SCCapturerBufferedVideoWriter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109045a04

@end
