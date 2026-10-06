// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerObjC
// Superclass: NSObject
// Address: 0x112be6be8

@interface SCNeoPlayerObjC

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: view; attributes: T@"UIView",R,N
// Property: delegate; attributes: T@"<SCNeoPlayerDelegate>",W,N,Vdelegate
// Property: playerItemFactory; attributes: T@"SCNeoPlayerItemFactory",R,N,V_playerItemFactory
// Property: error; attributes: T@"NSError",R,N
// Property: rate; attributes: Tf,D,N
// Property: volume; attributes: Tf,N,V_volume
// Property: muted; attributes: TB,N,V_muted
// Property: loopEnabled; attributes: TB,N
// Property: videoGravity; attributes: TQ,N
// Property: currentItem; attributes: T@"<SCNeoPlayerItem>",&,N,V_currentItem
// Property: videoSampleBufferProcessor; attributes: T@"<SCNeoMediaSampleBufferProcessor>",&,N,V_videoSampleBufferProcessor
// Property: audioSampleBufferProcessor; attributes: T@"<SCNeoMediaSampleBufferProcessor>",&,N,V_audioSampleBufferProcessor
// Property: currentTime; attributes: T{?=qiIq},R,N
// Property: state; attributes: TQ,R,N
// Property: videoRendererPerformanceMetricsProvider; attributes: T@"<SCNPlayerAnalyticsVideoRendererPerformanceMetricsProvider>",R,N
// Property: subtitleDelegate; attributes: T@"<SCNeoPlayerSubtitleDelegate>",W,N,VsubtitleDelegate
// Property: subtitlesEnabled; attributes: TB,N,GareSubtitlesEnabled

// -[SCNeoPlayerObjC _logTag]
// Type encoding: @16@0:8
// Implementation: 0x1090b7d40

// -[SCNeoPlayerObjC videoRendererPerformanceMetricsProvider]
// Type encoding: @16@0:8
// Implementation: 0x1090b7dac

// -[SCNeoPlayerObjC initWithConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090b7dcc

// -[SCNeoPlayerObjC handleAppDidBecomeActiveRevamped]
// Type encoding: v16@0:8
// Implementation: 0x1090b8298

// -[SCNeoPlayerObjC _recoverRenderersFromBackground]
// Type encoding: v16@0:8
// Implementation: 0x1090b829c

// -[SCNeoPlayerObjC handleAppDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1090b839c

// -[SCNeoPlayerObjC handleAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1090b83a0

// -[SCNeoPlayerObjC dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090b845c

// -[SCNeoPlayerObjC _onTimerFired]
// Type encoding: v16@0:8
// Implementation: 0x1090b85c8

// -[SCNeoPlayerObjC _onSubtitleTimerFired]
// Type encoding: v16@0:8
// Implementation: 0x1090b86b8

// -[SCNeoPlayerObjC play]
// Type encoding: v16@0:8
// Implementation: 0x1090b86f0

// -[SCNeoPlayerObjC pause]
// Type encoding: v16@0:8
// Implementation: 0x1090b8774

// -[SCNeoPlayerObjC setRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x1090b877c

// -[SCNeoPlayerObjC _deliverDeferredReachEndOnMainIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090b888c

// -[SCNeoPlayerObjC _discardDeferredReachEndDelivery]
// Type encoding: v16@0:8
// Implementation: 0x1090b8980

// -[SCNeoPlayerObjC setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x1090b89e0

// -[SCNeoPlayerObjC volume]
// Type encoding: f16@0:8
// Implementation: 0x1090b8ab8

// -[SCNeoPlayerObjC setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090b8ac0

// -[SCNeoPlayerObjC muted]
// Type encoding: B16@0:8
// Implementation: 0x1090b8b7c

// -[SCNeoPlayerObjC rate]
// Type encoding: f16@0:8
// Implementation: 0x1090b8b84

// -[SCNeoPlayerObjC setLoopEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090b8b94

// -[SCNeoPlayerObjC loopEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090b8ba0

// -[SCNeoPlayerObjC state]
// Type encoding: Q16@0:8
// Implementation: 0x1090b8bac

// -[SCNeoPlayerObjC _applyRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x1090b8bb8

// -[SCNeoPlayerObjC view]
// Type encoding: @16@0:8
// Implementation: 0x1090b8bc0

// -[SCNeoPlayerObjC videoGravity]
// Type encoding: Q16@0:8
// Implementation: 0x1090b8bc8

// -[SCNeoPlayerObjC setVideoGravity:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090b8c08

// -[SCNeoPlayerObjC _resetRenderersIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1090b8c48

// -[SCNeoPlayerObjC _resetRenderers]
// Type encoding: v16@0:8
// Implementation: 0x1090b8c78

// -[SCNeoPlayerObjC _resetForNewItem]
// Type encoding: v16@0:8
// Implementation: 0x1090b8d18

// -[SCNeoPlayerObjC _setupWithSampleBufferProvider:playerItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090b8f2c

// -[SCNeoPlayerObjC _notifyLoop]
// Type encoding: v16@0:8
// Implementation: 0x1090b9704

// -[SCNeoPlayerObjC _updateState]
// Type encoding: v16@0:8
// Implementation: 0x1090b97cc

// -[SCNeoPlayerObjC _onError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b994c

// -[SCNeoPlayerObjC _onError:deferrable:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1090b9954

// -[SCNeoPlayerObjC _transitionIfNecessaryWithNewState:]
// Type encoding: v40@0:8{SCNeoPlayerStateTransitionResult=Q@BB}16
// Implementation: 0x1090b99b0

// -[SCNeoPlayerObjC seekToTime:toleranceBefore:toleranceAfter:]
// Type encoding: v88@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64
// Implementation: 0x1090ba33c

// -[SCNeoPlayerObjC _doSeekToTime:toleranceBefore:toleranceAfter:isLooping:]
// Type encoding: v92@0:8{?=qiIq}16{?=qiIq}40{?=qiIq}64B88
// Implementation: 0x1090ba4c8

// -[SCNeoPlayerObjC _flushAndReset]
// Type encoding: v16@0:8
// Implementation: 0x1090ba808

// -[SCNeoPlayerObjC error]
// Type encoding: @16@0:8
// Implementation: 0x1090ba854

// -[SCNeoPlayerObjC currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090ba898

// -[SCNeoPlayerObjC setCurrentItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090ba910

// -[SCNeoPlayerObjC setAudioSampleBufferProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090baa0c

// -[SCNeoPlayerObjC setVideoSampleBufferProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090baad8

// -[SCNeoPlayerObjC _prepareSampleBufferProviderForLoopingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1090baba4

// -[SCNeoPlayerObjC _enqueueBuffer:toProcessingPipeline:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090bac80

// -[SCNeoPlayerObjC _enqueueBuffers]
// Type encoding: v16@0:8
// Implementation: 0x1090bad70

// -[SCNeoPlayerObjC _enqueueAudioBuffers]
// Type encoding: v16@0:8
// Implementation: 0x1090badb8

// -[SCNeoPlayerObjC _enqueueVideoBuffers]
// Type encoding: v16@0:8
// Implementation: 0x1090baf90

// -[SCNeoPlayerObjC sampleBufferProvider:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090bb170

// -[SCNeoPlayerObjC sampleBufferProviderDidLoadTrackInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bb17c

// -[SCNeoPlayerObjC sampleBufferProviderHasNewAudioBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bb7e8

// -[SCNeoPlayerObjC sampleBufferProviderHasNewVideoBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bb818

// -[SCNeoPlayerObjC sampleBufferProvider:loadedTimeRangesDidChange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090bb848

// -[SCNeoPlayerObjC sampleBufferProvider:didLoadDataSize:withLatency:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x1090bb84c

// -[SCNeoPlayerObjC stateNeedsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1090bb964

// -[SCNeoPlayerObjC playerOutput:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090bb9ec

// -[SCNeoPlayerObjC playerOutputDidEnqueueSampleBuffer:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090bb9f4

// -[SCNeoPlayerObjC playerOutputDidRevealFirstFrame]
// Type encoding: v16@0:8
// Implementation: 0x1090bba14

// -[SCNeoPlayerObjC playerOutputFirstFrameRevealHandoffEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090bba94

// -[SCNeoPlayerObjC sampleBufferProcessingPipeline:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090bba9c

// -[SCNeoPlayerObjC sampleBufferProcessingPipelineIsReadyForMoreBuffers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bbb8c

// -[SCNeoPlayerObjC setSubtitlesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090bbba0

// -[SCNeoPlayerObjC areSubtitlesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090bbba8

// -[SCNeoPlayerObjC refreshSubtitleState]
// Type encoding: v16@0:8
// Implementation: 0x1090bbbb8

// -[SCNeoPlayerObjC subtitleManager:didActivateSubtitle:atTime:]
// Type encoding: v56@0:8@16@24{?=qiIq}32
// Implementation: 0x1090bbbc0

// -[SCNeoPlayerObjC subtitleManagerDidDeactivateSubtitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bbc40

// -[SCNeoPlayerObjC subtitleManager:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1090bbc7c

// -[SCNeoPlayerObjC subtitleManagerDidLoadSubtitles:withCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1090bbcd4

// -[SCNeoPlayerObjC createSubtitleTimer]
// Type encoding: @16@0:8
// Implementation: 0x1090bbd1c

// -[SCNeoPlayerObjC setSubtitlesUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bbe34

// -[SCNeoPlayerObjC delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090bc120

// -[SCNeoPlayerObjC setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bc138

// -[SCNeoPlayerObjC subtitleDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1090bc144

// -[SCNeoPlayerObjC setSubtitleDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bc15c

// -[SCNeoPlayerObjC playerItemFactory]
// Type encoding: @16@0:8
// Implementation: 0x1090bc168

// -[SCNeoPlayerObjC currentItem]
// Type encoding: @16@0:8
// Implementation: 0x1090bc170

// -[SCNeoPlayerObjC videoSampleBufferProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1090bc178

// -[SCNeoPlayerObjC audioSampleBufferProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1090bc180

// -[SCNeoPlayerObjC .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090bc188

@end
