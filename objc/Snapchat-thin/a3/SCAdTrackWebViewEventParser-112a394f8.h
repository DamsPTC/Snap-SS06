// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackWebViewEventParser
// Superclass: NSObject
// Address: 0x112a394f8

@interface SCAdTrackWebViewEventParser


// +[SCAdTrackWebViewEventParser parseResultForTrackWebViewUiEvents:prevAdViewtrackEvents:adConfigProvider:adConfigProviderV2:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105468818

// +[SCAdTrackWebViewEventParser parseResultForTrackWebViewUiEventsV2:prevAdViewtrackEvents:instantPageEvents:adConfigProvider:adConfigProviderV2:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105468d7c

// +[SCAdTrackWebViewEventParser parseResultForTrackWebViewMetricEvents:instantPageEvents:instantPageEnabled:adConfigProvider:adConfigProviderV2:]
// Type encoding: @52@0:8@16@24B32@36@44
// Implementation: 0x105468f84

// +[SCAdTrackWebViewEventParser swipeCountForWebViewUserEvents:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105469e7c

// +[SCAdTrackWebViewEventParser swipeCountForWebViewEvents:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105469f00

// +[SCAdTrackWebViewEventParser swipeCountForLifecycleEvents:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10546a0c8

// +[SCAdTrackWebViewEventParser swipeCountForWebViewEvents:uiTrackEvents:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10546a328

@end
