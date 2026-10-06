// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGSMEInteractiveImagePlayer
// Superclass: SCNGSMEBasePlayer
// Address: 0x112ba7bc8

@interface SCNGSMEInteractiveImagePlayer

// Property: commandProvider; attributes: T@"<SCUcoCommandProvider>",W,N,V_commandProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNGSMEInteractiveImagePlayer initWithPlayerModel:playerProvider:audioSession:playbackLogger:circumstanceEngine:firstFrameImage:preparePerformer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x108581a1c

// -[SCNGSMEInteractiveImagePlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108581dbc

// -[SCNGSMEInteractiveImagePlayer setCommandProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108581e2c

// -[SCNGSMEInteractiveImagePlayer canChangeModelWithoutRestart:]
// Type encoding: B24@0:8@16
// Implementation: 0x108581e88

// -[SCNGSMEInteractiveImagePlayer setPlayerModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108581fb0

// -[SCNGSMEInteractiveImagePlayer _castToGPURenderView:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085823a8

// -[SCNGSMEInteractiveImagePlayer _maskRenderViewUntilFirstRenderedFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085824f4

// -[SCNGSMEInteractiveImagePlayer _clearRenderViewMaskAfterFirstRenderedFrame]
// Type encoding: v16@0:8
// Implementation: 0x1085825d0

// -[SCNGSMEInteractiveImagePlayer setPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085826b8

// -[SCNGSMEInteractiveImagePlayer isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x108582760

// -[SCNGSMEInteractiveImagePlayer currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1085827d8

// -[SCNGSMEInteractiveImagePlayer _currentStatus]
// Type encoding: q16@0:8
// Implementation: 0x108582850

// -[SCNGSMEInteractiveImagePlayer startRunning]
// Type encoding: v16@0:8
// Implementation: 0x1085828d0

// -[SCNGSMEInteractiveImagePlayer resumeRunning]
// Type encoding: v16@0:8
// Implementation: 0x108582938

// -[SCNGSMEInteractiveImagePlayer pauseRunning]
// Type encoding: v16@0:8
// Implementation: 0x1085829b0

// -[SCNGSMEInteractiveImagePlayer stopPlayingAndSeekSmoothlyToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108582a40

// -[SCNGSMEInteractiveImagePlayer seekToTime:completionHandler:]
// Type encoding: v48@0:8{?=qiIq}16@?40
// Implementation: 0x108582af0

// -[SCNGSMEInteractiveImagePlayer seekVideoAndAudioToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x108582c50

// -[SCNGSMEInteractiveImagePlayer _prepareImageViewer]
// Type encoding: v16@0:8
// Implementation: 0x108582ce8

// -[SCNGSMEInteractiveImagePlayer _simulateAVPlayerReadied]
// Type encoding: v16@0:8
// Implementation: 0x108582f10

// -[SCNGSMEInteractiveImagePlayer _prepareToPlayOperation]
// Type encoding: v16@0:8
// Implementation: 0x108583104

// -[SCNGSMEInteractiveImagePlayer _prepareVideoPlayback]
// Type encoding: v16@0:8
// Implementation: 0x10858324c

// -[SCNGSMEInteractiveImagePlayer _prepareImagePlayer]
// Type encoding: v16@0:8
// Implementation: 0x108583380

// -[SCNGSMEInteractiveImagePlayer _updateVideoProcessorWithRenderEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085838c4

// -[SCNGSMEInteractiveImagePlayer _updateSegmentTransform]
// Type encoding: v16@0:8
// Implementation: 0x108583910

// -[SCNGSMEInteractiveImagePlayer getRenderedImage]
// Type encoding: @16@0:8
// Implementation: 0x108583ac0

// -[SCNGSMEInteractiveImagePlayer getSampleBufferAtTime:]
// Type encoding: ^{opaqueCMSampleBuffer=}24@0:8d16
// Implementation: 0x108583eb8

// -[SCNGSMEInteractiveImagePlayer getPixelBufferAtTime:]
// Type encoding: ^{__CVBuffer=}24@0:8d16
// Implementation: 0x108583f2c

// -[SCNGSMEInteractiveImagePlayer itemTimeForHostTime:]
// Type encoding: {?=qiIq}24@0:8d16
// Implementation: 0x1085840b8

// -[SCNGSMEInteractiveImagePlayer _presentationFrameNumberForTimestamp:]
// Type encoding: q40@0:8{?=qiIq}16
// Implementation: 0x1085843b8

// -[SCNGSMEInteractiveImagePlayer _fpsForStatus]
// Type encoding: f16@0:8
// Implementation: 0x108584434

// -[SCNGSMEInteractiveImagePlayer _imageViewerDisplayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085844a4

// -[SCNGSMEInteractiveImagePlayer _renderingDisplayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085844e4

// -[SCNGSMEInteractiveImagePlayer _displayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085848c0

// -[SCNGSMEInteractiveImagePlayer image]
// Type encoding: @16@0:8
// Implementation: 0x10858492c

// -[SCNGSMEInteractiveImagePlayer _createPixelBufferPoolIfNeededWithSize:]
// Type encoding: v32@0:8{?=QQ}16
// Implementation: 0x108584a4c

// -[SCNGSMEInteractiveImagePlayer _createPixelBufferPoolWithSize:]
// Type encoding: B32@0:8{?=QQ}16
// Implementation: 0x108584a64

// -[SCNGSMEInteractiveImagePlayer markCurrentFrameAsDirty]
// Type encoding: v16@0:8
// Implementation: 0x108584c9c

// -[SCNGSMEInteractiveImagePlayer setShouldRenderContinuously:isExportMode:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108584cb0

// -[SCNGSMEInteractiveImagePlayer commandProvider]
// Type encoding: @16@0:8
// Implementation: 0x108584cc0

// -[SCNGSMEInteractiveImagePlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108584ce0

// +[SCNGSMEInteractiveImagePlayer playerModelIsValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x108581610

// +[SCNGSMEInteractiveImagePlayer playerModelRequiresAudioPlayer:]
// Type encoding: B24@0:8@16
// Implementation: 0x108581874

// +[SCNGSMEInteractiveImagePlayer playerModelRequiresRendering:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085818c0

// +[SCNGSMEInteractiveImagePlayer durationForPlayerModel:]
// Type encoding: {?=qiIq}24@0:8@16
// Implementation: 0x10858190c

@end
