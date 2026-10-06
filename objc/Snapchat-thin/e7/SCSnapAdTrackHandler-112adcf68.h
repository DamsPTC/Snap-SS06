// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapAdTrackHandler
// Superclass: NSObject
// Address: 0x112adcf68

@interface SCSnapAdTrackHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapAdTrackHandler initWithAdDataSource:adConfigProvider:adConfigProviderV2:adTrackerHelper:operaEventStateTracker:chromeInteractionSession:sharingSession:dismissTracker:sKViewThroughImpressionTracker:trackSeqNumProvider:playbackSessionObservableRepository:applicationLifecycleEvents:operaAdaptor:adTrackFunnelEventTracker:navigationStyle:crashLogger:analyticsSession:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120q128@136@144
// Implementation: 0x106384bc4

// -[SCSnapAdTrackHandler beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x106384f6c

// -[SCSnapAdTrackHandler beginObservationWithAdInstantPageEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x106385368

// -[SCSnapAdTrackHandler _onWebviewUserEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063854b8

// -[SCSnapAdTrackHandler _onInstantPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063855b4

// -[SCSnapAdTrackHandler triggerProfileOpenTerminalAdTrackForPageId:swipeStartLocation:swipeEndLocation:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106385784

// -[SCSnapAdTrackHandler triggerAdTrack:option:pageId:collectionItemIndex:]
// Type encoding: v48@0:8Q16@24@32@40
// Implementation: 0x1063858f4

// -[SCSnapAdTrackHandler _triggerAdTrack:option:pageId:collectionItemIndex:isProfileOpen:]
// Type encoding: v52@0:8Q16@24@32@40B48
// Implementation: 0x1063858fc

// -[SCSnapAdTrackHandler _adaptorIdentityCommonForPageId:collectionItemIndex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106385dd4

// -[SCSnapAdTrackHandler _onAdLifecycleEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106385ed0

// -[SCSnapAdTrackHandler _onAdDeeplinkEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106386140

// -[SCSnapAdTrackHandler _onWebviewEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106386498

// -[SCSnapAdTrackHandler _onWebviewEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063865e8

// -[SCSnapAdTrackHandler _onTopSnapPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106386680

// -[SCSnapAdTrackHandler _onExbOpened:adType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1063866f0

// -[SCSnapAdTrackHandler _onEnterBackground:source:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1063867a0

// -[SCSnapAdTrackHandler _onWebviewViewDidAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063869f4

// -[SCSnapAdTrackHandler _onWebviewViewDidAppearV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106386ae8

// -[SCSnapAdTrackHandler _onDeeplinkAttemptV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106386be4

// -[SCSnapAdTrackHandler _onDeeplinkOpenedV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106386d28

// -[SCSnapAdTrackHandler _onDeeplinkFallbackV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106386e6c

// -[SCSnapAdTrackHandler _triggerAdTrackWithCurrentItem:adResponse:adIdentifier:triggerType:option:pageId:snapIndex:isProfileOpen:]
// Type encoding: v76@0:8@16@24@32Q40@48@56q64B72
// Implementation: 0x106386fb0

// -[SCSnapAdTrackHandler _isTerminalTrack:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106387288

// -[SCSnapAdTrackHandler _interactionResultTypeWithPanel:adResponse:lastInteraction:triggerType:option:pageId:isProfileOpen:]
// Type encoding: q68@0:8q16@24@32Q40@48@56B64
// Implementation: 0x1063872a0

// -[SCSnapAdTrackHandler _currentItemForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063874c8

// -[SCSnapAdTrackHandler _trackFunnelEventWithType:common:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106387674

// -[SCSnapAdTrackHandler _trackFunnelEventWithTriggerType:lastInteractionType:pageId:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x10638773c

// -[SCSnapAdTrackHandler _adTrackCommon:]
// Type encoding: @24@0:8@16
// Implementation: 0x106387888

// -[SCSnapAdTrackHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106387a30

@end
