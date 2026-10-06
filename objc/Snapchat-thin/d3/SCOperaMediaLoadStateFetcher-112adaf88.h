// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaMediaLoadStateFetcher
// Superclass: NSObject
// Address: 0x112adaf88

@interface SCOperaMediaLoadStateFetcher


// -[SCOperaMediaLoadStateFetcher init]
// Type encoding: @16@0:8
// Implementation: 0x1062f9cc4

// -[SCOperaMediaLoadStateFetcher captureLongformShowLoadState:playbackMediaPrefetcher:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062f9d70

// -[SCOperaMediaLoadStateFetcher captureStoryLoadStateOfRequestKey:isLoaded:itemId:date:page:params:]
// Type encoding: v60@0:8@16B24@28@36@44@52
// Implementation: 0x1062f9ef0

// -[SCOperaMediaLoadStateFetcher captureLoadStateOfSnapPlayback:storiesMediaCoordinator:itemId:data:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1062f9ff4

// -[SCOperaMediaLoadStateFetcher captureLoadStateFromPage:playlistItemController:itemId:date:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1062fa1ac

// -[SCOperaMediaLoadStateFetcher captureLoadStateForPage:params:itemId:date:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1062fa488

// -[SCOperaMediaLoadStateFetcher loadStateForItemId:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062fa554

// -[SCOperaMediaLoadStateFetcher prefetchInfoFutureForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062fa5a4

// -[SCOperaMediaLoadStateFetcher dateForItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062fa5ac

// -[SCOperaMediaLoadStateFetcher releaseDateForItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062fa884

// -[SCOperaMediaLoadStateFetcher fetchLoadStateForLongformShowWithMediaID:playbackMediaPrefetcher:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1062fa888

// -[SCOperaMediaLoadStateFetcher _fetchLongformShowLoadState:playbackMediaPrefetcher:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1062fa88c

// -[SCOperaMediaLoadStateFetcher _checkInternalHealth]
// Type encoding: v16@0:8
// Implementation: 0x1062faad4

// -[SCOperaMediaLoadStateFetcher _captureStaticLoadingState:params:itemId:date:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1062fac60

// -[SCOperaMediaLoadStateFetcher _increaseUsageForItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062fadf0

// -[SCOperaMediaLoadStateFetcher _decreaseUsageForItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062fae84

// -[SCOperaMediaLoadStateFetcher _captureDownloadStateForRequestKey:isLoaded:itemId:date:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x1062faf6c

// -[SCOperaMediaLoadStateFetcher _storeDate:forItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062fb104

// -[SCOperaMediaLoadStateFetcher _storeDownloadState:forItemId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1062fb15c

// -[SCOperaMediaLoadStateFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062fb1e8

// +[SCOperaMediaLoadStateFetcher sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x1062f9c44

// +[SCOperaMediaLoadStateFetcher fetchLoadStateWithRequestKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062fa5b4

// +[SCOperaMediaLoadStateFetcher fetchLoadStateForSnapPlayback:storiesMediaCoordinator:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1062fa6d0

// +[SCOperaMediaLoadStateFetcher _isStaticLoadingState:params:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1062fab28

@end
