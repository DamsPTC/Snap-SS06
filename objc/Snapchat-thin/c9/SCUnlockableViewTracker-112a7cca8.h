// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableViewTracker
// Superclass: SCUnlockableTrackerBase
// Address: 0x112a7cca8

@interface SCUnlockableViewTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableViewTracker initWithAdsRequestProvider:unlockablesGtqNetworkRequestManager:applicationPreferences:userAdIdProvider:grapheneRegistry:adsUserInfoProvider:adConfigProvider:trackerConfig:spectrumLogger:networkConnectivityAnnouncer:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10591da08

// -[SCUnlockableViewTracker fireTrackWithDuration:mediaDurationSec:encGeoData:unlockablesSnapInfo:viewType:snappableInviteAction:]
// Type encoding: v64@0:8@16@24@32@40q48q56
// Implementation: 0x10591dc94

// -[SCUnlockableViewTracker trackAttachmentViewWithAdId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10591dd40

// -[SCUnlockableViewTracker _createProtoTrackWithDuration:mediaDurationSec:encGeoData:unlockablesSnapInfo:viewType:snappableInviteAction:]
// Type encoding: @64@0:8@16@24@32@40q48q56
// Implementation: 0x10591dda8

// -[SCUnlockableViewTracker _getProtoSnapViewType:]
// Type encoding: i24@0:8q16
// Implementation: 0x10591e604

// -[SCUnlockableViewTracker lastAttachmentInteraction]
// Type encoding: @16@0:8
// Implementation: 0x10591e614

// -[SCUnlockableViewTracker _setLastAttachmentInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10591e668

// -[SCUnlockableViewTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10591e6c0

@end
