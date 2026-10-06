// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackFunnelEventTracker
// Superclass: NSObject
// Address: 0x112a38918

@interface SCAdTrackFunnelEventTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdTrackFunnelEventTracker initWithBlizzardLogger:performer:enableAdTrackFunnelValidator:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10542600c

// -[SCAdTrackFunnelEventTracker beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10542622c

// -[SCAdTrackFunnelEventTracker nextTrackFunnelEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105426550

// -[SCAdTrackFunnelEventTracker funnelEventMap]
// Type encoding: @16@0:8
// Implementation: 0x105426558

// -[SCAdTrackFunnelEventTracker _onNextTrackFunnelEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054265a8

// -[SCAdTrackFunnelEventTracker _onAdLifecycleEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x105426ac0

// -[SCAdTrackFunnelEventTracker _onAdDeeplinkEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x105426cb8

// -[SCAdTrackFunnelEventTracker _onWebviewEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x105426dcc

// -[SCAdTrackFunnelEventTracker _adTrackCommon:]
// Type encoding: @24@0:8@16
// Implementation: 0x105426ed0

// -[SCAdTrackFunnelEventTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105427078

@end
