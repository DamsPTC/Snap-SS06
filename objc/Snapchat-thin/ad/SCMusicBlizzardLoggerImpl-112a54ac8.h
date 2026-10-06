// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicBlizzardLoggerImpl
// Superclass: NSObject
// Address: 0x112a54ac8

@interface SCMusicBlizzardLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMusicBlizzardLoggerImpl initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x105670238

// -[SCMusicBlizzardLoggerImpl logMusicTrackPlaybackWithTrackId:offsetSec:sourcePageType:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x1056702ac

// -[SCMusicBlizzardLoggerImpl logMusicLinkfireActionWithAction:destination:trackId:sourcePageType:]
// Type encoding: v48@0:8q16@24@32q40
// Implementation: 0x105670350

// -[SCMusicBlizzardLoggerImpl logMusicTrackFavoriteWithTrackId:isFavorited:sourcePageType:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x105670414

// -[SCMusicBlizzardLoggerImpl logMusicScanResultWithISRC:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056704b8

// -[SCMusicBlizzardLoggerImpl logMusicPickerPageLoadStageLatency:loadStage:latencyMs:isCached:]
// Type encoding: v44@0:8@16q24d32B40
// Implementation: 0x105670534

// -[SCMusicBlizzardLoggerImpl logMusicBannerViewWithType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056705f0

// -[SCMusicBlizzardLoggerImpl logMusicBannerTapWithType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10567066c

// -[SCMusicBlizzardLoggerImpl logMusicLatencyWithSource:latencyMs:requestId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1056706e8

// -[SCMusicBlizzardLoggerImpl logMusicRecommendationResponseWithRequestId:cameraType:isFromCache:latencyMs:modelId:numLenses:numRecommendations:numRecommendationsMatch:]
// Type encoding: v76@0:8@16@24B32q36@44q52q60q68
// Implementation: 0x1056707a0

// -[SCMusicBlizzardLoggerImpl logMusicTrackBlockedWithTrackId:contentViewSource:snapId:country:]
// Type encoding: v48@0:8Q16q24@32@40
// Implementation: 0x1056708c4

// -[SCMusicBlizzardLoggerImpl logFavoritedSoundsCameraTooltipEducationEventWithEventType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1056709a8

// -[SCMusicBlizzardLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105670a28

@end
