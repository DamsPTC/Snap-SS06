// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFrameSourcesSequencer
// Superclass: NSObject
// Address: 0x112bbec38

@interface SCFrameSourcesSequencer

// Property: sourcesBatch; attributes: T@"SCFrameSourcesBatch",&,N,V_sourcesBatch
// Property: frameSources; attributes: T@"NSArray",&,N,V_frameSources
// Property: currentFrameSourceIndex; attributes: Tq,N,V_currentFrameSourceIndex
// Property: currentFrameSource; attributes: T@"<SCFrameSource>",R,N,V_currentFrameSource
// Property: currentSnapIndex; attributes: TQ,R,N,V_currentSnapIndex
// Property: isIndividualLooping; attributes: TB,N,V_isIndividualLooping
// Property: playedToSnapEndTime; attributes: TB,N,V_playedToSnapEndTime
// Property: seekingInProgress; attributes: TB,N,V_seekingInProgress
// Property: isReversePlaybackEnabled; attributes: TB,N,V_isReversePlaybackEnabled
// Property: delegate; attributes: T@"<SCFrameSourcesSequencerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFrameSourcesSequencer initWithFrameSourcesBatch:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cdec84

// -[SCFrameSourcesSequencer currentVideoSource]
// Type encoding: @16@0:8
// Implementation: 0x108cded20

// -[SCFrameSourcesSequencer currentImageSource]
// Type encoding: @16@0:8
// Implementation: 0x108cded7c

// -[SCFrameSourcesSequencer reset]
// Type encoding: v16@0:8
// Implementation: 0x108cdedd8

// -[SCFrameSourcesSequencer advance]
// Type encoding: v16@0:8
// Implementation: 0x108cdee08

// -[SCFrameSourcesSequencer advanceToSourceIndex:sourceMultiSnapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x108cdee90

// -[SCFrameSourcesSequencer _isPlayTime:afterSourceAtIndex:snapIndex:]
// Type encoding: B56@0:8{?=qiIq}16q40q48
// Implementation: 0x108cdef2c

// -[SCFrameSourcesSequencer _onChangeToSourceAtIndex:snapIndex:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x108cdf158

// -[SCFrameSourcesSequencer _advanceCurrentSourceIndexTo:snapIndexTo:]
// Type encoding: v32@0:8^q16^q24
// Implementation: 0x108cdf2b8

// -[SCFrameSourcesSequencer videoPlaybackSession:willRenderFrame:atTime:]
// Type encoding: v56@0:8@16^{__CVBuffer=}24{?=qiIq}32
// Implementation: 0x108cdf64c

// -[SCFrameSourcesSequencer currentFrameSource]
// Type encoding: @16@0:8
// Implementation: 0x108cdf7cc

// -[SCFrameSourcesSequencer currentSnapIndex]
// Type encoding: Q16@0:8
// Implementation: 0x108cdf7d4

// -[SCFrameSourcesSequencer isIndividualLooping]
// Type encoding: B16@0:8
// Implementation: 0x108cdf7dc

// -[SCFrameSourcesSequencer setIsIndividualLooping:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdf7e4

// -[SCFrameSourcesSequencer playedToSnapEndTime]
// Type encoding: B16@0:8
// Implementation: 0x108cdf7ec

// -[SCFrameSourcesSequencer setPlayedToSnapEndTime:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdf7f4

// -[SCFrameSourcesSequencer seekingInProgress]
// Type encoding: B16@0:8
// Implementation: 0x108cdf7fc

// -[SCFrameSourcesSequencer setSeekingInProgress:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdf804

// -[SCFrameSourcesSequencer isReversePlaybackEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108cdf80c

// -[SCFrameSourcesSequencer setIsReversePlaybackEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdf814

// -[SCFrameSourcesSequencer delegate]
// Type encoding: @16@0:8
// Implementation: 0x108cdf81c

// -[SCFrameSourcesSequencer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdf834

// -[SCFrameSourcesSequencer sourcesBatch]
// Type encoding: @16@0:8
// Implementation: 0x108cdf840

// -[SCFrameSourcesSequencer setSourcesBatch:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdf848

// -[SCFrameSourcesSequencer frameSources]
// Type encoding: @16@0:8
// Implementation: 0x108cdf878

// -[SCFrameSourcesSequencer setFrameSources:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdf880

// -[SCFrameSourcesSequencer currentFrameSourceIndex]
// Type encoding: q16@0:8
// Implementation: 0x108cdf8b0

// -[SCFrameSourcesSequencer setCurrentFrameSourceIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cdf8b8

// -[SCFrameSourcesSequencer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cdf8c0

@end
