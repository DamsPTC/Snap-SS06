// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapTapToPlayAnywhereV2
// Superclass: NSObject
// Address: 0x112b17078

@interface SCMapTapToPlayAnywhereV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapTapToPlayAnywhereV2 initWithTapToPlayLogger:mapSessionInfoProvider:delegate:mapViewport:mapView:mapStoryPlaybackScopeExposer:mapStoryPlaybackScopeServices:mapStoryFetcher:mapStoryMediaFetcher:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x106b1a3fc

// -[SCMapTapToPlayAnywhereV2 _performHeatmapTapAtPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x106b1a98c

// -[SCMapTapToPlayAnywhereV2 _moveToRequestingManifest]
// Type encoding: v16@0:8
// Implementation: 0x106b1aae0

// -[SCMapTapToPlayAnywhereV2 _actuallyRequestManifestOrStartPlayback]
// Type encoding: v16@0:8
// Implementation: 0x106b1acd8

// -[SCMapTapToPlayAnywhereV2 _emitPlaybackInitiatedTrigger]
// Type encoding: v16@0:8
// Implementation: 0x106b1afb0

// -[SCMapTapToPlayAnywhereV2 didCancelTouchOnMapWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b1b130

// -[SCMapTapToPlayAnywhereV2 _cancelWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b1b178

// -[SCMapTapToPlayAnywhereV2 isActive]
// Type encoding: B16@0:8
// Implementation: 0x106b1b1b8

// -[SCMapTapToPlayAnywhereV2 dismissStory]
// Type encoding: v16@0:8
// Implementation: 0x106b1b1c8

// -[SCMapTapToPlayAnywhereV2 isPresentingStory]
// Type encoding: B16@0:8
// Implementation: 0x106b1b210

// -[SCMapTapToPlayAnywhereV2 shakeLogDescription]
// Type encoding: @16@0:8
// Implementation: 0x106b1b220

// -[SCMapTapToPlayAnywhereV2 baseViewForStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b1b274

// -[SCMapTapToPlayAnywhereV2 _prefetchFirstSnapForPlaybackSequence:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b1b378

// -[SCMapTapToPlayAnywhereV2 _finishPrefetchForMediaInfo:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b1b5f4

// -[SCMapTapToPlayAnywhereV2 _storyRequestCompletedWithPlaybackSequences:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b1b740

// -[SCMapTapToPlayAnywhereV2 _failWithManifestErrorFailure]
// Type encoding: v16@0:8
// Implementation: 0x106b1b7c0

// -[SCMapTapToPlayAnywhereV2 _storyMediaRequestCompletedWithPlaybackSequences:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b1b86c

// -[SCMapTapToPlayAnywhereV2 _storyMediaRequestCompletedWithPlaybackSequencesAfterDoubleTapExpired:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b1ba08

// -[SCMapTapToPlayAnywhereV2 _failWithNoSnapsFoundFailure]
// Type encoding: v16@0:8
// Implementation: 0x106b1bbf8

// -[SCMapTapToPlayAnywhereV2 _needsScheduleBlockAfterAnimation:]
// Type encoding: B24@0:8@?16
// Implementation: 0x106b1bca8

// -[SCMapTapToPlayAnywhereV2 _presentationDidFailWithResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b1be0c

// -[SCMapTapToPlayAnywhereV2 _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x106b1be44

// -[SCMapTapToPlayAnywhereV2 _showErrorWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b1bed8

// -[SCMapTapToPlayAnywhereV2 _performHapticError]
// Type encoding: B16@0:8
// Implementation: 0x106b1bfa8

// -[SCMapTapToPlayAnywhereV2 _setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106b1c010

// -[SCMapTapToPlayAnywhereV2 _validateChangeToState:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106b1c048

// -[SCMapTapToPlayAnywhereV2 isInstanceTerminated:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b1c0a0

// -[SCMapTapToPlayAnywhereV2 _animationDelayRequired]
// Type encoding: d16@0:8
// Implementation: 0x106b1c0bc

// -[SCMapTapToPlayAnywhereV2 _centerScreenPoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x106b1c0e8

// -[SCMapTapToPlayAnywhereV2 _isScreenPointInsideAnimation:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x106b1c15c

// -[SCMapTapToPlayAnywhereV2 _safeAnimationCompletionShowingFailure:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b1c1e8

// -[SCMapTapToPlayAnywhereV2 _logPlayAttemptWithResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b1c234

// -[SCMapTapToPlayAnywhereV2 mapStoryDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106b1c2a0

// -[SCMapTapToPlayAnywhereV2 mapStoryManifestRequestDidFailWithResult:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106b1c2ec

// -[SCMapTapToPlayAnywhereV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b1c308

@end
