// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSKOverlayLifecycleTracker
// Superclass: NSObject
// Address: 0x112a39728

@interface SCAdSKOverlayLifecycleTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: adLifecycleEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adInteractionEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adLifecycleEventObservableV2; attributes: T@"SCObservable",R,N
// Property: streamsType; attributes: TQ,R,N
// Property: adWebviewConfigEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adWebviewUserEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adWebviewAsmEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adWebviewLoadingEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adWebviewNavigationEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adWebviewGaEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adWebviewOperationEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adWebviewEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adAppInstallEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adAppInstallEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adSKOverlayEventObservable; attributes: T@"SCObservable",?,R,N,V_adSKOverlayEventSubject
// Property: adAdToMessageEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adAdToMessageEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adDeepLinkEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adDeepLinkEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adReportEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adReportEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adStickersEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adReminderEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adSubscribeEventObservableV2; attributes: T@"SCObservable",?,R,N
// Property: adPlayableEventObservable; attributes: T@"SCObservable",?,R,N
// Property: tooltipImpressionEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adEndCardEventObservable; attributes: T@"SCObservable",?,R,N
// Property: dpaImpressionEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adModularLensEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adLeadGenerationEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adCaptionCtaImpressionEventObservable; attributes: T@"SCObservable",?,R,N
// Property: adLiveReviewEventObservable; attributes: T@"SCObservable",?,R,N

// -[SCAdSKOverlayLifecycleTracker initWithOverlayLifecycleEvents:skAdNetworkMetricsManager:trackSeqNumProvider:applicationLifecycleEvents:application:adConfigProvider:mainQueuePerformer:timeProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10546d890

// -[SCAdSKOverlayLifecycleTracker _onOverlayLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10546dd0c

// -[SCAdSKOverlayLifecycleTracker _onDidRequest:isPreload:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10546e0f4

// -[SCAdSKOverlayLifecycleTracker _onDidFailToLoad:isPreload:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10546e240

// -[SCAdSKOverlayLifecycleTracker _emitSKOverlayTrackEvent:overlayParams:timestamp:error:]
// Type encoding: v48@0:8Q16@24d32@40
// Implementation: 0x10546e40c

// -[SCAdSKOverlayLifecycleTracker _logSKOverlayEvent:overlayParams:latency:preload:error:]
// Type encoding: v52@0:8q16@24d32B40@44
// Implementation: 0x10546e7ac

// -[SCAdSKOverlayLifecycleTracker _onWillStartPresentation:isPreload:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10546e8b4

// -[SCAdSKOverlayLifecycleTracker _onDidFinishPresentation:isPreload:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10546ea68

// -[SCAdSKOverlayLifecycleTracker _onDismissalRequested:]
// Type encoding: v24@0:8@16
// Implementation: 0x10546ec08

// -[SCAdSKOverlayLifecycleTracker _onWillStartDismissal:isPreload:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10546ecc0

// -[SCAdSKOverlayLifecycleTracker _onDidFinishDismissal:isPreload:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10546edf0

// -[SCAdSKOverlayLifecycleTracker _onAppWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10546ef54

// -[SCAdSKOverlayLifecycleTracker _onAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10546f02c

// -[SCAdSKOverlayLifecycleTracker _onPreloaderEvent:eventType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10546f0b0

// -[SCAdSKOverlayLifecycleTracker didMoveToSnapWithSameOverlay:previousParams:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10546f134

// -[SCAdSKOverlayLifecycleTracker skOverlayAdTrackInfoForIdentifier:snapIndex:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10546f1e4

// -[SCAdSKOverlayLifecycleTracker resetForExitTracking:]
// Type encoding: v24@0:8@16
// Implementation: 0x10546f270

// -[SCAdSKOverlayLifecycleTracker streamsType]
// Type encoding: Q16@0:8
// Implementation: 0x10546f38c

// -[SCAdSKOverlayLifecycleTracker adLifecycleEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10546f394

// -[SCAdSKOverlayLifecycleTracker adLifecycleEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10546f39c

// -[SCAdSKOverlayLifecycleTracker adInteractionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10546f3a4

// -[SCAdSKOverlayLifecycleTracker adSKOverlayEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10546f3ac

// -[SCAdSKOverlayLifecycleTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10546f3b4

@end
