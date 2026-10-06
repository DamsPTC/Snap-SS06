// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightViewVisibilityManager
// Superclass: NSObject
// Address: 0x112ad8238

@interface SCContextSpotlightViewVisibilityManager

// Property: visibilityModelObservable; attributes: T@"SCObservable",R,N

// -[SCContextSpotlightViewVisibilityManager initWithSpotlightParams:actionParams:userPreferences:storiesConfigProvider:upsellTriggerObservable:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10629f45c

// -[SCContextSpotlightViewVisibilityManager _didReceiveSpotlightParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10629f8dc

// -[SCContextSpotlightViewVisibilityManager _didReceiveActionParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10629f91c

// -[SCContextSpotlightViewVisibilityManager _didReceiveUpsellTrigger:]
// Type encoding: v24@0:8q16
// Implementation: 0x10629f95c

// -[SCContextSpotlightViewVisibilityManager visibilityModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x10629f97c

// -[SCContextSpotlightViewVisibilityManager didPerformAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10629f9a4

// -[SCContextSpotlightViewVisibilityManager setOneTapToShareRenderable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10629f9f8

// -[SCContextSpotlightViewVisibilityManager setReplyBarRenderable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10629fa18

// -[SCContextSpotlightViewVisibilityManager refreshVisibilityCommands]
// Type encoding: v16@0:8
// Implementation: 0x10629fa38

// -[SCContextSpotlightViewVisibilityManager _resolveVisibilityWithAnimated:forceEmitAll:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10629fa44

// -[SCContextSpotlightViewVisibilityManager _emitVisibilityForViewType:shouldShow:animated:forceEmitAll:]
// Type encoding: v36@0:8q16B24B28B32
// Implementation: 0x10629fb4c

// -[SCContextSpotlightViewVisibilityManager _isPrimaryCTAEligible]
// Type encoding: B16@0:8
// Implementation: 0x10629fc4c

// -[SCContextSpotlightViewVisibilityManager _isSurveyEligibleWithSpotlightParams:]
// Type encoding: B24@0:8@16
// Implementation: 0x10629fc5c

// -[SCContextSpotlightViewVisibilityManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10629fff0

@end
