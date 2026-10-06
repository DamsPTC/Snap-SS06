// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryAdExpandStateManager
// Superclass: NSObject
// Address: 0x112ade688

@interface SCStoryAdExpandStateManager

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: eventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryAdExpandStateManager initWithNavigationStyle:adConfigProvider:adConfigProviderV2:circumstanceEngine:adGraphene:adTrackHelper:]
// Type encoding: @64@0:8q16@24@32@40@48@56
// Implementation: 0x106435ee0

// -[SCStoryAdExpandStateManager registerAdPod:insertMechanism:midRollStoryExpansionBlock:identifierForAdSnapBlock:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x1064360dc

// -[SCStoryAdExpandStateManager _registerStoryAdResponse:insertMechanism:midRollStoryExpansionBlock:identifierForAdSnapBlock:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x1064361cc

// -[SCStoryAdExpandStateManager expandStatusForAdSnap:adResponse:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x106436478

// -[SCStoryAdExpandStateManager extraPagePropertiesForAdSnap:adResponse:viewLocation:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1064364fc

// -[SCStoryAdExpandStateManager initialVisibleSnapsCount:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106436654

// -[SCStoryAdExpandStateManager registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1064366ec

// -[SCStoryAdExpandStateManager operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106436780

// -[SCStoryAdExpandStateManager _expandMidRollStoryAd:adSnapV2:targetAdSnap:page:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106436aa0

// -[SCStoryAdExpandStateManager _expandPostRollStoryAd:adSnapV2:targetAdSnap:page:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106436cc8

// -[SCStoryAdExpandStateManager _navigateToTargetAdSnap:fromAdSnapV2:adDataModel:page:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106436cd8

// -[SCStoryAdExpandStateManager _trackExpandAdEventForAdClientId:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106437030

// -[SCStoryAdExpandStateManager _trackExpandMetricWithDataModel:status:errorReason:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106437038

// -[SCStoryAdExpandStateManager playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x106437320

// -[SCStoryAdExpandStateManager setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106437338

// -[SCStoryAdExpandStateManager eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x106437344

// -[SCStoryAdExpandStateManager setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10643734c

// -[SCStoryAdExpandStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10643737c

@end
