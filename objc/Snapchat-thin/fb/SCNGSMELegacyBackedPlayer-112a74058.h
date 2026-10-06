// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGSMELegacyBackedPlayer
// Superclass: NSObject
// Address: 0x112a74058

@interface SCNGSMELegacyBackedPlayer

// Property: playerModel; attributes: T@"SCNGSMESnap",&,N,V_playerModel
// Property: playerModelObservable; attributes: T@"SCObservable",R,N
// Property: playbackLogger; attributes: T@"<SCNGSMEPlaybackLogging>",&,N,V_playbackLogger
// Property: playerView; attributes: T@"UIView<SCNGSMEPlayerView>",&,N,V_playerView
// Property: videoFrameObservable; attributes: T@"SCObservable",R,N,V_videoFrameObservable
// Property: publishVideoFramesEnabled; attributes: TB,N,V_publishVideoFramesEnabled
// Property: playerStatusObservable; attributes: T@"SCObservable",R,N
// Property: playerPhaseObservable; attributes: T@"SCObservable",R,N
// Property: shouldLoop; attributes: TB,N,V_shouldLoop
// Property: startTimestamp; attributes: T{?=qiIq},N,V_startTimestamp
// Property: endTimestamp; attributes: T{?=qiIq},N,V_endTimestamp
// Property: preciseSeeking; attributes: TB,N,V_preciseSeeking
// Property: renderSize; attributes: T{CGSize=dd},N,V_renderSize
// Property: volume; attributes: Tf,N
// Property: legacyPreviewPlayer; attributes: T@"<SCImageProcessVideoPlaybackSession>",&,N,V_legacyPreviewPlayer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNGSMELegacyBackedPlayer initWithPlayerModel:blizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10586254c

// -[SCNGSMELegacyBackedPlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1058631c8

// -[SCNGSMELegacyBackedPlayer _currentStatus]
// Type encoding: q16@0:8
// Implementation: 0x105863274

// -[SCNGSMELegacyBackedPlayer _generateAndPublishCurrentState]
// Type encoding: v16@0:8
// Implementation: 0x1058632b8

// -[SCNGSMELegacyBackedPlayer _publishState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058633ec

// -[SCNGSMELegacyBackedPlayer _observePlayerAndItem]
// Type encoding: v16@0:8
// Implementation: 0x105863448

// -[SCNGSMELegacyBackedPlayer canChangeModelWithoutRestart:]
// Type encoding: B24@0:8@16
// Implementation: 0x105863464

// -[SCNGSMELegacyBackedPlayer setPlayerModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058635b4

// -[SCNGSMELegacyBackedPlayer playerModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105863afc

// -[SCNGSMELegacyBackedPlayer playerStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x105863b24

// -[SCNGSMELegacyBackedPlayer playerPhaseObservable]
// Type encoding: @16@0:8
// Implementation: 0x105863b4c

// -[SCNGSMELegacyBackedPlayer getSampleBufferAtTime:]
// Type encoding: ^{opaqueCMSampleBuffer=}24@0:8d16
// Implementation: 0x105863b54

// -[SCNGSMELegacyBackedPlayer getRenderedImage]
// Type encoding: @16@0:8
// Implementation: 0x105863b5c

// -[SCNGSMELegacyBackedPlayer setPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105863bc8

// -[SCNGSMELegacyBackedPlayer setShouldLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x105863d18

// -[SCNGSMELegacyBackedPlayer setStartTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x105863d24

// -[SCNGSMELegacyBackedPlayer setEndTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x105863d68

// -[SCNGSMELegacyBackedPlayer setPreciseSeeking:]
// Type encoding: v20@0:8B16
// Implementation: 0x105863dac

// -[SCNGSMELegacyBackedPlayer setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x105863db8

// -[SCNGSMELegacyBackedPlayer volume]
// Type encoding: f16@0:8
// Implementation: 0x105863dc0

// -[SCNGSMELegacyBackedPlayer setRenderSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x105863dc8

// -[SCNGSMELegacyBackedPlayer prepareToPlay]
// Type encoding: v16@0:8
// Implementation: 0x105863dcc

// -[SCNGSMELegacyBackedPlayer startRunning]
// Type encoding: v16@0:8
// Implementation: 0x105863ea4

// -[SCNGSMELegacyBackedPlayer pauseRunning]
// Type encoding: v16@0:8
// Implementation: 0x105863eac

// -[SCNGSMELegacyBackedPlayer resumeRunning]
// Type encoding: v16@0:8
// Implementation: 0x105863eb8

// -[SCNGSMELegacyBackedPlayer stopRunning]
// Type encoding: v16@0:8
// Implementation: 0x105863ec0

// -[SCNGSMELegacyBackedPlayer setPlaybackRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x105863ec8

// -[SCNGSMELegacyBackedPlayer seekVideoAndAudioToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x105863ee0

// -[SCNGSMELegacyBackedPlayer seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x105863ee8

// -[SCNGSMELegacyBackedPlayer seekToTime:completionHandler:]
// Type encoding: v48@0:8{?=qiIq}16@?40
// Implementation: 0x105863f1c

// -[SCNGSMELegacyBackedPlayer stopPlayingAndSeekSmoothlyToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x105863f80

// -[SCNGSMELegacyBackedPlayer isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x105863fb4

// -[SCNGSMELegacyBackedPlayer shouldBeRunning]
// Type encoding: B16@0:8
// Implementation: 0x105863fbc

// -[SCNGSMELegacyBackedPlayer currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x105863fc4

// -[SCNGSMELegacyBackedPlayer videoPlaybackSession:didRenderFrameAtTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x105863fdc

// -[SCNGSMELegacyBackedPlayer videoPlaybackSessionPlayerItemStatusFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105863fe0

// -[SCNGSMELegacyBackedPlayer videoPlaybackSessionPlayerItemFailedToSetup:]
// Type encoding: v24@0:8@16
// Implementation: 0x105863ff4

// -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidStartRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x105864008

// -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidResumeRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x105864020

// -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidPauseRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x105864030

// -[SCNGSMELegacyBackedPlayer videoPlaybackSessionDidStopRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x10586403c

// -[SCNGSMELegacyBackedPlayer clearLastFrameImage]
// Type encoding: v16@0:8
// Implementation: 0x105864048

// -[SCNGSMELegacyBackedPlayer playerModel]
// Type encoding: @16@0:8
// Implementation: 0x10586404c

// -[SCNGSMELegacyBackedPlayer playbackLogger]
// Type encoding: @16@0:8
// Implementation: 0x105864054

// -[SCNGSMELegacyBackedPlayer setPlaybackLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10586405c

// -[SCNGSMELegacyBackedPlayer shouldLoop]
// Type encoding: B16@0:8
// Implementation: 0x10586408c

// -[SCNGSMELegacyBackedPlayer startTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x105864094

// -[SCNGSMELegacyBackedPlayer endTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1058640a8

// -[SCNGSMELegacyBackedPlayer preciseSeeking]
// Type encoding: B16@0:8
// Implementation: 0x1058640bc

// -[SCNGSMELegacyBackedPlayer legacyPreviewPlayer]
// Type encoding: @16@0:8
// Implementation: 0x1058640c4

// -[SCNGSMELegacyBackedPlayer setLegacyPreviewPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058640cc

// -[SCNGSMELegacyBackedPlayer playerView]
// Type encoding: @16@0:8
// Implementation: 0x1058640fc

// -[SCNGSMELegacyBackedPlayer renderSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105864104

// -[SCNGSMELegacyBackedPlayer publishVideoFramesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10586410c

// -[SCNGSMELegacyBackedPlayer setPublishVideoFramesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105864114

// -[SCNGSMELegacyBackedPlayer videoFrameObservable]
// Type encoding: @16@0:8
// Implementation: 0x10586411c

// -[SCNGSMELegacyBackedPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105864124

@end
