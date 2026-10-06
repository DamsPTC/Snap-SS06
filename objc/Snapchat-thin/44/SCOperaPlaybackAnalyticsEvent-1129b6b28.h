// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaybackAnalyticsEvent
// Superclass: NSObject
// Address: 0x1129b6b28

@interface SCOperaPlaybackAnalyticsEvent

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCOperaPlaybackAnalyticsEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104453198

// -[SCOperaPlaybackAnalyticsEvent init]
// Type encoding: @16@0:8
// Implementation: 0x1044531c0

// -[SCOperaPlaybackAnalyticsEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104453208

// -[SCOperaPlaybackAnalyticsEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104453610

// -[SCOperaPlaybackAnalyticsEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104453690

// -[SCOperaPlaybackAnalyticsEvent matchIsPlayingDidChange:didReceivePauseRequest:didReceiveResumeRequest:playbackRateDidChange:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x10445384c

// -[SCOperaPlaybackAnalyticsEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044538f4

// +[SCOperaPlaybackAnalyticsEvent isPlayingDidChangeWithPageId:isPlaying:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104453698

// +[SCOperaPlaybackAnalyticsEvent didReceivePauseRequestWithPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1044536dc

// +[SCOperaPlaybackAnalyticsEvent didReceiveResumeRequestWithPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1044536ec

// +[SCOperaPlaybackAnalyticsEvent playbackRateDidChangeWithPlaybackRate:]
// Type encoding: @24@0:8d16
// Implementation: 0x104453738

@end
