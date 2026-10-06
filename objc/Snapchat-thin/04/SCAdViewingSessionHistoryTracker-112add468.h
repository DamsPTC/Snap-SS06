// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdViewingSessionHistoryTracker
// Superclass: NSObject
// Address: 0x112add468

@interface SCAdViewingSessionHistoryTracker

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: operaConfiguration; attributes: T@"SCOperaConfiguration",W,N,V_operaConfiguration
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdViewingSessionHistoryTracker initWithAdDataSource:navigationStyle:viewingSessionId:viewLocation:sharingSession:chromeSession:adConfigProvider:adConfigProviderV2:sessionViewingHistory:boostCoordinator:]
// Type encoding: @96@0:8@16q24@32q40@48@56@64@72@80@88
// Implementation: 0x1063b0bbc

// -[SCAdViewingSessionHistoryTracker tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1063b0ee4

// -[SCAdViewingSessionHistoryTracker setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b0fdc

// -[SCAdViewingSessionHistoryTracker registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063b1138

// -[SCAdViewingSessionHistoryTracker operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063b12dc

// -[SCAdViewingSessionHistoryTracker _endCurrentSnap:exitMethod:currentPlayistId:adResponse:storyType:]
// Type encoding: v52@0:8B16@20@28@36Q44
// Implementation: 0x1063b1f48

// -[SCAdViewingSessionHistoryTracker _endCurrentStory:exitMethod:storyType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1063b2324

// -[SCAdViewingSessionHistoryTracker _isHammerTap:topSnapViewTimeInSec:]
// Type encoding: B28@0:8B16d20
// Implementation: 0x1063b23f8

// -[SCAdViewingSessionHistoryTracker _resetAllTimers]
// Type encoding: v16@0:8
// Implementation: 0x1063b2464

// -[SCAdViewingSessionHistoryTracker _pauseAllTimers]
// Type encoding: v16@0:8
// Implementation: 0x1063b24a8

// -[SCAdViewingSessionHistoryTracker _swipedFromAttachmentToTopSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063b24e0

// -[SCAdViewingSessionHistoryTracker _operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1063b2548

// -[SCAdViewingSessionHistoryTracker _trackBoostStateForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b25bc

// -[SCAdViewingSessionHistoryTracker _stopTrackBoostState]
// Type encoding: v16@0:8
// Implementation: 0x1063b2818

// -[SCAdViewingSessionHistoryTracker _setIsBoosted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063b2844

// -[SCAdViewingSessionHistoryTracker playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063b284c

// -[SCAdViewingSessionHistoryTracker operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x1063b2864

// -[SCAdViewingSessionHistoryTracker setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b287c

// -[SCAdViewingSessionHistoryTracker operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1063b2888

// -[SCAdViewingSessionHistoryTracker setOperaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b28a0

// -[SCAdViewingSessionHistoryTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063b28ac

@end
