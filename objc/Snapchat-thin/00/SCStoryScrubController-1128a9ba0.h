// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryScrubController
// Superclass: NSObject
// Address: 0x1128a9ba0

@interface SCStoryScrubController

// Property: thumbnailFetcher; attributes: T@?,N,C
// Property: pausesPlaybackOnScrub; attributes: TB,N,VpausesPlaybackOnScrub
// Property: showsOnboardingHint; attributes: TB,N,VshowsOnboardingHint
// Property: preferences; attributes: T@"SCPreferences",N,&,Vpreferences
// Property: scrubsFromBottom; attributes: TB,N,VscrubsFromBottom
// Property: thumbnailScale; attributes: Td,N,VthumbnailScale
// Property: bottomAnchorView; attributes: T@"UIView",N,W,VbottomAnchorView
// Property: onScrubBegan; attributes: T@?,N,C
// Property: onScrubEnded; attributes: T@?,N,C
// Property: isScrubbing; attributes: TB,N,VisScrubbing

// -[SCStoryScrubController thumbnailFetcher]
// Type encoding: @?16@0:8
// Implementation: 0x102e85bec

// -[SCStoryScrubController setThumbnailFetcher:]
// Type encoding: v24@0:8@?16
// Implementation: 0x102e85cf8

// -[SCStoryScrubController pausesPlaybackOnScrub]
// Type encoding: B16@0:8
// Implementation: 0x102e85ea0

// -[SCStoryScrubController setPausesPlaybackOnScrub:]
// Type encoding: v20@0:8B16
// Implementation: 0x102e85ee4

// -[SCStoryScrubController showsOnboardingHint]
// Type encoding: B16@0:8
// Implementation: 0x102e85f34

// -[SCStoryScrubController setShowsOnboardingHint:]
// Type encoding: v20@0:8B16
// Implementation: 0x102e85f78

// -[SCStoryScrubController preferences]
// Type encoding: @16@0:8
// Implementation: 0x102e85fc8

// -[SCStoryScrubController setPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x102e86010

// -[SCStoryScrubController scrubsFromBottom]
// Type encoding: B16@0:8
// Implementation: 0x102e86074

// -[SCStoryScrubController setScrubsFromBottom:]
// Type encoding: v20@0:8B16
// Implementation: 0x102e860b8

// -[SCStoryScrubController thumbnailScale]
// Type encoding: d16@0:8
// Implementation: 0x102e86108

// -[SCStoryScrubController setThumbnailScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x102e8614c

// -[SCStoryScrubController bottomAnchorView]
// Type encoding: @16@0:8
// Implementation: 0x102e8619c

// -[SCStoryScrubController setBottomAnchorView:]
// Type encoding: v24@0:8@16
// Implementation: 0x102e861e4

// -[SCStoryScrubController onScrubBegan]
// Type encoding: @?16@0:8
// Implementation: 0x102e8623c

// -[SCStoryScrubController setOnScrubBegan:]
// Type encoding: v24@0:8@?16
// Implementation: 0x102e86294

// -[SCStoryScrubController onScrubEnded]
// Type encoding: @?16@0:8
// Implementation: 0x102e86350

// -[SCStoryScrubController setOnScrubEnded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x102e8645c

// -[SCStoryScrubController isScrubbing]
// Type encoding: B16@0:8
// Implementation: 0x102e86518

// -[SCStoryScrubController setIsScrubbing:]
// Type encoding: v20@0:8B16
// Implementation: 0x102e8655c

// -[SCStoryScrubController init]
// Type encoding: @16@0:8
// Implementation: 0x102e8679c

// -[SCStoryScrubController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x102e86990

// -[SCStoryScrubController setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x102e86b0c

// -[SCStoryScrubController setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x102e86d38

// -[SCStoryScrubController teardown]
// Type encoding: v16@0:8
// Implementation: 0x102e872e4

// -[SCStoryScrubController registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x102e8730c

// -[SCStoryScrubController operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x102e87384

// -[SCStoryScrubController handleGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x102e8a294

// -[SCStoryScrubController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x102e8a93c

// -[SCStoryScrubController gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x102e8aa44

// -[SCStoryScrubController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x102e8aaa0

// -[SCStoryScrubController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x102e8aaa8

// -[SCStoryScrubController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102e869e8

// +[SCStoryScrubController segmentIndexForXPosition:inWidth:segmentCount:]
// Type encoding: Q40@0:8d16d24Q32
// Implementation: 0x102e8b880

// +[SCStoryScrubController relativeSegmentIndexFromStartIndex:startTouchX:currentTouchX:bandWidth:segmentCount:]
// Type encoding: Q56@0:8Q16d24d32d40Q48
// Implementation: 0x102e8b888

// +[SCStoryScrubController tryResolveBottomYInHostView:explicitAnchor:operaVC:outY:]
// Type encoding: B48@0:8@16@24@32^d40
// Implementation: 0x102e8b98c

@end
