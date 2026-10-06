// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSnapThirdPartyViewingStatus
// Superclass: NSObject
// Address: 0x112b9ffb8

@interface SCAdSnapThirdPartyViewingStatus

// Property: firstReactionTimeMillis; attributes: Tq,R,N
// Property: wasFullyVisible; attributes: TB,R,N
// Property: topSnapTotalViewTimeInMillis; attributes: Td,R,N
// Property: topSnapTotalAudibleViewTimeInMillis; attributes: Td,R,N
// Property: topSnapMaxUnobstructedAudibleViewTimeInMillis; attributes: Td,R,N
// Property: topSnapTotalUnobstructedAudibleViewTimeInMillis; attributes: Td,R,N
// Property: topSnapMaxUnobstructedViewTimeInMillis; attributes: Td,R,N
// Property: topSnapTotalUnobstructedViewTimeInMillis; attributes: Td,R,N
// Property: topSnapUncappedMaxUnobstructedViewTimeInMillis; attributes: Td,R,N
// Property: topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis; attributes: Td,R,N

// -[SCAdSnapThirdPartyViewingStatus initWithAdType:topSnapMediaDurationMillis:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x10849bdbc

// -[SCAdSnapThirdPartyViewingStatus firstReactionTimeMillis]
// Type encoding: q16@0:8
// Implementation: 0x10849bec0

// -[SCAdSnapThirdPartyViewingStatus wasFullyVisible]
// Type encoding: B16@0:8
// Implementation: 0x10849bec8

// -[SCAdSnapThirdPartyViewingStatus topSnapTotalViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bed0

// -[SCAdSnapThirdPartyViewingStatus topSnapTotalAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bed8

// -[SCAdSnapThirdPartyViewingStatus topSnapMaxUnobstructedAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bee0

// -[SCAdSnapThirdPartyViewingStatus topSnapTotalUnobstructedAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bee8

// -[SCAdSnapThirdPartyViewingStatus topSnapMaxUnobstructedViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bef0

// -[SCAdSnapThirdPartyViewingStatus topSnapTotalUnobstructedViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bef8

// -[SCAdSnapThirdPartyViewingStatus topSnapUncappedMaxUnobstructedViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bf00

// -[SCAdSnapThirdPartyViewingStatus topSnapUncappedTotalUnobstructedAudibleViewTimeInMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849bf34

// -[SCAdSnapThirdPartyViewingStatus adShowOnTopSnap:onBottomSnap:currentMediaVolumePercent:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x10849bf3c

// -[SCAdSnapThirdPartyViewingStatus adHideWithSkipEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10849bfac

// -[SCAdSnapThirdPartyViewingStatus adSnapHideOnTopSnap:skipEvent:exitEventSwipeInfo:dismissDuration:]
// Type encoding: v44@0:8B16@20@28d36
// Implementation: 0x10849bfd4

// -[SCAdSnapThirdPartyViewingStatus swipedFromTopSnap:exitEvent:currentMediaVolumePercent:]
// Type encoding: v36@0:8B16@20d28
// Implementation: 0x10849c00c

// -[SCAdSnapThirdPartyViewingStatus obstructedOnTopSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849c0c0

// -[SCAdSnapThirdPartyViewingStatus unobstructedOnTopSnap:currentMediaVolumePercent:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10849c100

// -[SCAdSnapThirdPartyViewingStatus adLongPressed]
// Type encoding: v16@0:8
// Implementation: 0x10849c14c

// -[SCAdSnapThirdPartyViewingStatus adScreenshotTaken]
// Type encoding: v16@0:8
// Implementation: 0x10849c154

// -[SCAdSnapThirdPartyViewingStatus adBoosted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849c15c

// -[SCAdSnapThirdPartyViewingStatus onAudibilityChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849c17c

// -[SCAdSnapThirdPartyViewingStatus swipeUpToCard]
// Type encoding: v16@0:8
// Implementation: 0x10849c1d0

// -[SCAdSnapThirdPartyViewingStatus swipeUpAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10849c1d8

// -[SCAdSnapThirdPartyViewingStatus anySwipeAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10849c1dc

// -[SCAdSnapThirdPartyViewingStatus onWebBrowserSessionEvent:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849c1e0

// -[SCAdSnapThirdPartyViewingStatus didReceiveWebViewContext:collectionItemIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10849c1e4

// -[SCAdSnapThirdPartyViewingStatus resetForIntermediateTracking]
// Type encoding: v16@0:8
// Implementation: 0x10849c1e8

// -[SCAdSnapThirdPartyViewingStatus resetForExitTracking]
// Type encoding: v16@0:8
// Implementation: 0x10849c1ec

// -[SCAdSnapThirdPartyViewingStatus setTopSnapMediaDurationMillis:topSnapReportedViewDurationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10849c244

// -[SCAdSnapThirdPartyViewingStatus _startFirstReactionTimer]
// Type encoding: v16@0:8
// Implementation: 0x10849c298

// -[SCAdSnapThirdPartyViewingStatus _stopFirstReactionTimer:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849c2d8

// -[SCAdSnapThirdPartyViewingStatus _stopTopSnapTimerShouldStopTotalTimer:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849c330

// -[SCAdSnapThirdPartyViewingStatus _isNegativeReaction:]
// Type encoding: B24@0:8@16
// Implementation: 0x10849c37c

// -[SCAdSnapThirdPartyViewingStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10849c418

@end
