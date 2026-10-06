// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSKOverlaySession
// Superclass: NSObject
// Address: 0x112add508

@interface SCAdSKOverlaySession

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdSKOverlaySession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1063b79e4

// -[SCAdSKOverlaySession initWithAdDataSource:adConfigProvider:skOverlayPreloader:skOverlayLifecycleTracker:contextExperimentService:viewLocation:dpaConfigProvider:adConfigProviderV2:]
// Type encoding: @80@0:8@16@24@32@40@48q56@64@72
// Implementation: 0x1063b7a28

// -[SCAdSKOverlaySession initWithAdDataSource:adConfigProvider:adConfigProviderV2:skOverlayPreloader:skOverlayParamsBuilder:skOverlayLifecycleTracker:contextExperimentService:application:viewLocation:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72q80
// Implementation: 0x1063b7c7c

// -[SCAdSKOverlaySession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063b7e68

// -[SCAdSKOverlaySession beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b8100

// -[SCAdSKOverlaySession _onModularLensEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b8250

// -[SCAdSKOverlaySession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063b8304

// -[SCAdSKOverlaySession _onResizeMediaEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b8908

// -[SCAdSKOverlaySession _onOpenView:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063b8a1c

// -[SCAdSKOverlaySession _overlayParamsForItem:pageId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063b8ad8

// -[SCAdSKOverlaySession _presentOverlayIfNeeded:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063b8bf0

// -[SCAdSKOverlaySession _scheduleOverlayRestoreAfterCoverDismissed]
// Type encoding: v16@0:8
// Implementation: 0x1063b9010

// -[SCAdSKOverlaySession _presentOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b91d8

// -[SCAdSKOverlaySession _isSameOverlayPresented:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063b9264

// -[SCAdSKOverlaySession _setOverlayMetricsForSameParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b9410

// -[SCAdSKOverlaySession _onCloseView]
// Type encoding: v16@0:8
// Implementation: 0x1063b9570

// -[SCAdSKOverlaySession _dismissSKOverlayAfterDelayMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063b9668

// -[SCAdSKOverlaySession _dismissSKOverlayIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b9828

// -[SCAdSKOverlaySession _dismissSKOverlayIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063b98a0

// -[SCAdSKOverlaySession updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063b98dc

// -[SCAdSKOverlaySession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063b98f0

// -[SCAdSKOverlaySession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b9908

// -[SCAdSKOverlaySession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063b9914

@end
