// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdOperaEventStateTracker
// Superclass: NSObject
// Address: 0x112add2d8

@interface SCAdOperaEventStateTracker

// Property: currentParams; attributes: T@"NSDictionary",C,N,V_currentParams
// Property: currentItem; attributes: T@"<SCOperaPlaylistItem>",&,N,V_currentItem
// Property: currentAdIdentifier; attributes: T@"NSString",C,N,V_currentAdIdentifier
// Property: currentSnapIndex; attributes: Tq,N,V_currentSnapIndex
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: operaConfiguration; attributes: T@"SCOperaConfiguration",W,N,V_operaConfiguration
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: currentPage; attributes: T@"SCOperaPage",R,C,N
// Property: currentPageId; attributes: T@"NSString",R,C,N
// Property: lastCollectionItemIndex; attributes: T@"NSNumber",C,N,V_lastCollectionItemIndex
// Property: lastLifecycleEvent; attributes: T@"SCAdLifecycleEventV2",R,C,N,V_lastLifecycleEvent
// Property: lastInteractionEvent; attributes: T@"SCAdLifecycleEventV2",R,C,N,V_lastInteractionEvent
// Property: currentViewSessionStarted; attributes: TB,N,V_currentViewSessionStarted
// Property: onAttachment; attributes: TB,N,V_onAttachment
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdOperaEventStateTracker init]
// Type encoding: @16@0:8
// Implementation: 0x1063a2264

// -[SCAdOperaEventStateTracker beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a230c

// -[SCAdOperaEventStateTracker pageForAdIdentifier:snapIndex:triggerType:]
// Type encoding: @40@0:8@16q24Q32
// Implementation: 0x1063a245c

// -[SCAdOperaEventStateTracker paramsForAdIdentifier:snapIndex:triggerType:]
// Type encoding: @40@0:8@16q24Q32
// Implementation: 0x1063a2504

// -[SCAdOperaEventStateTracker setPage:params:snapIndex:adIdentifier:triggerType:]
// Type encoding: v56@0:8@16@24q32@40Q48
// Implementation: 0x1063a25dc

// -[SCAdOperaEventStateTracker resetLastCollectionItemIndex]
// Type encoding: v16@0:8
// Implementation: 0x1063a2698

// -[SCAdOperaEventStateTracker updatePageParameterForAdIdentifer:withParams:snapIndex:triggerType:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x1063a26a0

// -[SCAdOperaEventStateTracker updatePage:params:snapIndex:adIdentifier:triggerType:]
// Type encoding: v56@0:8@16@24q32@40Q48
// Implementation: 0x1063a26b0

// -[SCAdOperaEventStateTracker setCurrentItem:snapIndex:adIdentifier:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1063a28e4

// -[SCAdOperaEventStateTracker currentPage]
// Type encoding: @16@0:8
// Implementation: 0x1063a2954

// -[SCAdOperaEventStateTracker currentPageId]
// Type encoding: @16@0:8
// Implementation: 0x1063a29c8

// -[SCAdOperaEventStateTracker currentParams]
// Type encoding: @16@0:8
// Implementation: 0x1063a2a0c

// -[SCAdOperaEventStateTracker _onAdLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2a80

// -[SCAdOperaEventStateTracker operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x1063a2c00

// -[SCAdOperaEventStateTracker setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2c18

// -[SCAdOperaEventStateTracker operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1063a2c24

// -[SCAdOperaEventStateTracker setOperaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2c3c

// -[SCAdOperaEventStateTracker playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063a2c48

// -[SCAdOperaEventStateTracker setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2c60

// -[SCAdOperaEventStateTracker setCurrentParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2c6c

// -[SCAdOperaEventStateTracker currentItem]
// Type encoding: @16@0:8
// Implementation: 0x1063a2c74

// -[SCAdOperaEventStateTracker setCurrentItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2c7c

// -[SCAdOperaEventStateTracker currentAdIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1063a2cac

// -[SCAdOperaEventStateTracker setCurrentAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2cb4

// -[SCAdOperaEventStateTracker currentSnapIndex]
// Type encoding: q16@0:8
// Implementation: 0x1063a2cbc

// -[SCAdOperaEventStateTracker setCurrentSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063a2cc4

// -[SCAdOperaEventStateTracker lastCollectionItemIndex]
// Type encoding: @16@0:8
// Implementation: 0x1063a2ccc

// -[SCAdOperaEventStateTracker setLastCollectionItemIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a2cd4

// -[SCAdOperaEventStateTracker lastLifecycleEvent]
// Type encoding: @16@0:8
// Implementation: 0x1063a2cdc

// -[SCAdOperaEventStateTracker lastInteractionEvent]
// Type encoding: @16@0:8
// Implementation: 0x1063a2ce4

// -[SCAdOperaEventStateTracker currentViewSessionStarted]
// Type encoding: B16@0:8
// Implementation: 0x1063a2cec

// -[SCAdOperaEventStateTracker setCurrentViewSessionStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063a2cf4

// -[SCAdOperaEventStateTracker onAttachment]
// Type encoding: B16@0:8
// Implementation: 0x1063a2cfc

// -[SCAdOperaEventStateTracker setOnAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063a2d04

// -[SCAdOperaEventStateTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063a2d0c

@end
