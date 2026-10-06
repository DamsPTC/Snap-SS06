// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaLoadingIndicatorTracker
// Superclass: NSObject
// Address: 0x112adc298

@interface SCOperaLoadingIndicatorTracker

// Property: enableDebugOverlay; attributes: TB,N,V_enableDebugOverlay
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: hasPlaybackStarted; attributes: TB,R,N,V_hasPlaybackStarted
// Property: wasLoadingUponPageExit; attributes: TB,R,N,V_wasLoadingUponPageExit

// -[SCOperaLoadingIndicatorTracker initWithTimeProvider:operaDebugServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106371b7c

// -[SCOperaLoadingIndicatorTracker initWithConnectivityTimer:operaDebugServices:configProvider:notificationServices:connectivityMonitorServices:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106371c9c

// -[SCOperaLoadingIndicatorTracker loadingDuration]
// Type encoding: d16@0:8
// Implementation: 0x106371e1c

// -[SCOperaLoadingIndicatorTracker loadingDidStartOnPageWithId:fromLayer:timeStamp:reason:]
// Type encoding: v48@0:8@16Q24d32q40
// Implementation: 0x106371e78

// -[SCOperaLoadingIndicatorTracker _scheduleConnectivityWarning:]
// Type encoding: v24@0:8d16
// Implementation: 0x106371fc4

// -[SCOperaLoadingIndicatorTracker _checkConnectivityAndShowWarning]
// Type encoding: v16@0:8
// Implementation: 0x1063720c8

// -[SCOperaLoadingIndicatorTracker loadingDidFinishOnPageWithId:fromLayer:timeStamp:reason:]
// Type encoding: v48@0:8@16Q24d32q40
// Implementation: 0x106372248

// -[SCOperaLoadingIndicatorTracker pageDidStartDisplayingWithId:timeStamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10637230c

// -[SCOperaLoadingIndicatorTracker pageDidStartPlayingWithId:timeStamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1063723c0

// -[SCOperaLoadingIndicatorTracker pageDidStopDisplayingWithId:timeStamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1063723d8

// -[SCOperaLoadingIndicatorTracker pageDidResumeDisplayingWithId:timeStamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106372490

// -[SCOperaLoadingIndicatorTracker pageDidPauseDisplayingWithId:timeStamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10637255c

// -[SCOperaLoadingIndicatorTracker loadingIndicatorHistoryForClosedPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106372604

// -[SCOperaLoadingIndicatorTracker loadingIndicatorHistoryForActivePageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10637264c

// -[SCOperaLoadingIndicatorTracker playbackProgressDidUpdate:]
// Type encoding: v20@0:8f16
// Implementation: 0x1063726c8

// -[SCOperaLoadingIndicatorTracker _showDebugOverlayWithDelayForLayerType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1063727c0

// -[SCOperaLoadingIndicatorTracker _showDebugOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x10637282c

// -[SCOperaLoadingIndicatorTracker _hideDebugOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1063728ac

// -[SCOperaLoadingIndicatorTracker _updateDebugOverlayWithLayerType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106372904

// -[SCOperaLoadingIndicatorTracker _loadingReasonDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106372908

// -[SCOperaLoadingIndicatorTracker _playbackProgressDidUpdate:]
// Type encoding: v20@0:8f16
// Implementation: 0x10637290c

// -[SCOperaLoadingIndicatorTracker enableDebugOverlay]
// Type encoding: B16@0:8
// Implementation: 0x106372910

// -[SCOperaLoadingIndicatorTracker setEnableDebugOverlay:]
// Type encoding: v20@0:8B16
// Implementation: 0x106372918

// -[SCOperaLoadingIndicatorTracker isLoading]
// Type encoding: B16@0:8
// Implementation: 0x106372920

// -[SCOperaLoadingIndicatorTracker hasPlaybackStarted]
// Type encoding: B16@0:8
// Implementation: 0x106372928

// -[SCOperaLoadingIndicatorTracker wasLoadingUponPageExit]
// Type encoding: B16@0:8
// Implementation: 0x106372930

// -[SCOperaLoadingIndicatorTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106372938

@end
