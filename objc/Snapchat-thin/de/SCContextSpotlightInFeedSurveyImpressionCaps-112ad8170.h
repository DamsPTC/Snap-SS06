// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightInFeedSurveyImpressionCaps
// Superclass: NSObject
// Address: 0x112ad8170

@interface SCContextSpotlightInFeedSurveyImpressionCaps


// +[SCContextSpotlightInFeedSurveyImpressionCaps capsFromStoriesConfig:]
// Type encoding: {?=qqqd}24@0:8@16
// Implementation: 0x10629cc40

// +[SCContextSpotlightInFeedSurveyImpressionCaps _storedTimestampsForPreferences:]
// Type encoding: @24@0:8@16
// Implementation: 0x10629cd68

// +[SCContextSpotlightInFeedSurveyImpressionCaps _countOfTimestamps:after:]
// Type encoding: Q32@0:8@16d24
// Implementation: 0x10629cdf4

// +[SCContextSpotlightInFeedSurveyImpressionCaps _servedCapHitWithPreferences:nowInterval:caps:]
// Type encoding: @64@0:8@16d24{?=qqqd}32
// Implementation: 0x10629cf64

// +[SCContextSpotlightInFeedSurveyImpressionCaps _isFatigueBlockingWithPreferences:nowInterval:timestamps:caps:]
// Type encoding: B72@0:8@16d24@32{?=qqqd}40
// Implementation: 0x10629d050

// +[SCContextSpotlightInFeedSurveyImpressionCaps canShowSurveyWithPreferences:now:caps:]
// Type encoding: B64@0:8@16@24{?=qqqd}32
// Implementation: 0x10629d22c

// +[SCContextSpotlightInFeedSurveyImpressionCaps recordSurveyImpressionForPreferences:now:caps:]
// Type encoding: v64@0:8@16@24{?=qqqd}32
// Implementation: 0x10629d394

// +[SCContextSpotlightInFeedSurveyImpressionCaps _advanceFatigueCycleForPreferences:nowInterval:caps:cooldownWasServed:]
// Type encoding: v68@0:8@16d24{?=qqqd}32B64
// Implementation: 0x10629d6a0

@end
