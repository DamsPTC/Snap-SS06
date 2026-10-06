// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapTrayState
// Superclass: NSObject
// Address: 0x112aac778

@interface SCMapTrayState

// Property: interactionController; attributes: T@"<SCMapTrayInteractionController>",R,N,V_interactionController
// Property: interactionObserver; attributes: T@"SCDisposableObserver",R,N,V_interactionObserver
// Property: eventSubject; attributes: T@"SCPublishSubject",R,N,V_eventSubject
// Property: collapsedHeight; attributes: Td,R,N,V_collapsedHeight
// Property: halfTrayHeight; attributes: Td,R,N,V_halfTrayHeight
// Property: halfTrayHeightRatioOverride; attributes: Td,R,N,V_halfTrayHeightRatioOverride
// Property: desiredPositionOnMapInteraction; attributes: TQ,R,N,V_desiredPositionOnMapInteraction
// Property: trayConfiguration; attributes: T@"SCMapTrayConfiguration",R,N,V_trayConfiguration
// Property: chromeConfiguration; attributes: T@"SCMapTrayChromeConfiguration",R,N,V_chromeConfiguration
// Property: mapCameraProvider; attributes: T@?,R,N,V_mapCameraProvider
// Property: closeButtonCompletion; attributes: T@?,R,N,V_closeButtonCompletion
// Property: lastPositionBeforeBeingHidden; attributes: TQ,N,V_lastPositionBeforeBeingHidden
// Property: shouldBeDestroyedWhenHidden; attributes: TB,N,V_shouldBeDestroyedWhenHidden
// Property: isBeingRemoved; attributes: TB,N,V_isBeingRemoved
// Property: mapTrayEventsObservable; attributes: T@"SCObservable",R,N
// Property: currentPosition; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapTrayState initWithInteractionController:interactionObserver:eventSubject:collapsedHeight:halfTrayHeightRatioOverride:halfTrayHeight:desiredPositionOnMapInteraction:trayConfiguration:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @104@0:8@16@24@32d40d48d56Q64@72@80@?88@?96
// Implementation: 0x105f2e008

// -[SCMapTrayState mapTrayEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f2e1bc

// -[SCMapTrayState currentPosition]
// Type encoding: Q16@0:8
// Implementation: 0x105f2e1e4

// -[SCMapTrayState trayHeightForPosition:]
// Type encoding: d24@0:8Q16
// Implementation: 0x105f2e1ec

// -[SCMapTrayState trayAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x105f2e1f4

// -[SCMapTrayState interactionController]
// Type encoding: @16@0:8
// Implementation: 0x105f2e1fc

// -[SCMapTrayState interactionObserver]
// Type encoding: @16@0:8
// Implementation: 0x105f2e204

// -[SCMapTrayState eventSubject]
// Type encoding: @16@0:8
// Implementation: 0x105f2e20c

// -[SCMapTrayState collapsedHeight]
// Type encoding: d16@0:8
// Implementation: 0x105f2e214

// -[SCMapTrayState halfTrayHeight]
// Type encoding: d16@0:8
// Implementation: 0x105f2e21c

// -[SCMapTrayState halfTrayHeightRatioOverride]
// Type encoding: d16@0:8
// Implementation: 0x105f2e224

// -[SCMapTrayState desiredPositionOnMapInteraction]
// Type encoding: Q16@0:8
// Implementation: 0x105f2e22c

// -[SCMapTrayState trayConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105f2e234

// -[SCMapTrayState chromeConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105f2e23c

// -[SCMapTrayState mapCameraProvider]
// Type encoding: @?16@0:8
// Implementation: 0x105f2e244

// -[SCMapTrayState closeButtonCompletion]
// Type encoding: @?16@0:8
// Implementation: 0x105f2e24c

// -[SCMapTrayState lastPositionBeforeBeingHidden]
// Type encoding: Q16@0:8
// Implementation: 0x105f2e254

// -[SCMapTrayState setLastPositionBeforeBeingHidden:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105f2e25c

// -[SCMapTrayState shouldBeDestroyedWhenHidden]
// Type encoding: B16@0:8
// Implementation: 0x105f2e264

// -[SCMapTrayState setShouldBeDestroyedWhenHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f2e26c

// -[SCMapTrayState isBeingRemoved]
// Type encoding: B16@0:8
// Implementation: 0x105f2e274

// -[SCMapTrayState setIsBeingRemoved:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f2e27c

// -[SCMapTrayState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f2e284

@end
