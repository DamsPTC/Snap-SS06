// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdUnifiedEventObservableBusImpl
// Superclass: NSObject
// Address: 0x112ada498

@interface SCAdUnifiedEventObservableBusImpl

// Property: adLifecycleEventSubject; attributes: T@"SCPublishSubject",&,N,V_adLifecycleEventSubject
// Property: adInteractionEventSubject; attributes: T@"SCPublishSubject",&,N,V_adInteractionEventSubject
// Property: adLifecycleEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adLifecycleEventSubjectV2
// Property: adWebviewConfigEventSubject; attributes: T@"SCPublishSubject",&,N,V_adWebviewConfigEventSubject
// Property: adWebviewUserEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adWebviewUserEventSubjectV2
// Property: adWebviewAsmEventSubject; attributes: T@"SCPublishSubject",&,N,V_adWebviewAsmEventSubject
// Property: adWebviewLoadingEventSubject; attributes: T@"SCPublishSubject",R,N,V_adWebviewLoadingEventSubject
// Property: adWebviewNavigationEventSubject; attributes: T@"SCPublishSubject",&,N,V_adWebviewNavigationEventSubject
// Property: adWebviewGaEventSubject; attributes: T@"SCPublishSubject",R,N,V_adWebviewGaEventSubject
// Property: adWebviewOperationEventSubject; attributes: T@"SCPublishSubject",R,N,V_adWebviewOperationEventSubject
// Property: adWebviewEventSubject; attributes: T@"SCPublishSubject",&,N,V_adWebviewEventSubject
// Property: adAppInstallEventSubject; attributes: T@"SCPublishSubject",&,N,V_adAppInstallEventSubject
// Property: adAppInstallEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adAppInstallEventSubjectV2
// Property: adAdToMessageEventSubject; attributes: T@"SCPublishSubject",&,N,V_adAdToMessageEventSubject
// Property: adAdToMessageEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adAdToMessageEventSubjectV2
// Property: adDeepLinkEventSubject; attributes: T@"SCPublishSubject",&,N,V_adDeepLinkEventSubject
// Property: adDeepLinkEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adDeepLinkEventSubjectV2
// Property: adReportEventSubject; attributes: T@"SCPublishSubject",&,N,V_adReportEventSubject
// Property: adReportEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adReportEventSubjectV2
// Property: reminderEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_reminderEventSubjectV2
// Property: stickersEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_stickersEventSubjectV2
// Property: adSubscribeEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adSubscribeEventSubjectV2
// Property: adModularLensEventSubject; attributes: T@"SCPublishSubject",&,N,V_adModularLensEventSubject
// Property: captionCtaImpressionEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_captionCtaImpressionEventSubjectV2
// Property: liveReviewEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_liveReviewEventSubjectV2
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
// Property: adSKOverlayEventObservable; attributes: T@"SCObservable",?,R,N
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

// -[SCAdUnifiedEventObservableBusImpl initWithPlugInsWithFuture:trackPerformer:adConfigProviderV2:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1062e2184

// -[SCAdUnifiedEventObservableBusImpl adLifecycleEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e25dc

// -[SCAdUnifiedEventObservableBusImpl adInteractionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e2604

// -[SCAdUnifiedEventObservableBusImpl streamsType]
// Type encoding: Q16@0:8
// Implementation: 0x1062e262c

// -[SCAdUnifiedEventObservableBusImpl adLifecycleEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e2634

// -[SCAdUnifiedEventObservableBusImpl adWebviewConfigEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e265c

// -[SCAdUnifiedEventObservableBusImpl adWebviewUserEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e2684

// -[SCAdUnifiedEventObservableBusImpl adWebviewAsmEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e26ac

// -[SCAdUnifiedEventObservableBusImpl adWebviewLoadingEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e26d4

// -[SCAdUnifiedEventObservableBusImpl adWebviewNavigationEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e26fc

// -[SCAdUnifiedEventObservableBusImpl adWebviewGaEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e2724

// -[SCAdUnifiedEventObservableBusImpl adWebviewOperationEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e274c

// -[SCAdUnifiedEventObservableBusImpl adWebviewEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e2774

// -[SCAdUnifiedEventObservableBusImpl adAppInstallEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e279c

// -[SCAdUnifiedEventObservableBusImpl adAppInstallEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e27c4

// -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e27ec

// -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e2814

// -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e283c

// -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e2864

// -[SCAdUnifiedEventObservableBusImpl adReportEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e288c

// -[SCAdUnifiedEventObservableBusImpl adReportEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e28b4

// -[SCAdUnifiedEventObservableBusImpl adReminderEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e28dc

// -[SCAdUnifiedEventObservableBusImpl adStickersEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e2904

// -[SCAdUnifiedEventObservableBusImpl adSubscribeEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e292c

// -[SCAdUnifiedEventObservableBusImpl adCaptionCtaImpressionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e2954

// -[SCAdUnifiedEventObservableBusImpl adLiveReviewEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e297c

// -[SCAdUnifiedEventObservableBusImpl adModularLensEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062e29a4

// -[SCAdUnifiedEventObservableBusImpl _mergeAdUnifiedEventObservableBusWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e29cc

// -[SCAdUnifiedEventObservableBusImpl _mergeLifecycleEventV2StreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e2a7c

// -[SCAdUnifiedEventObservableBusImpl _mergeLifecycleEventStreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e2af4

// -[SCAdUnifiedEventObservableBusImpl _mergeInteractionEventStreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e2b6c

// -[SCAdUnifiedEventObservableBusImpl _mergeWebviewEventStreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e2be4

// -[SCAdUnifiedEventObservableBusImpl _mergeSubscribeEventV2StreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e2dd0

// -[SCAdUnifiedEventObservableBusImpl _mergeAdReportEventV2StreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e2e9c

// -[SCAdUnifiedEventObservableBusImpl _mergeAdReminderEventV2StreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e2f68

// -[SCAdUnifiedEventObservableBusImpl _mergeAdStickersEventV2StreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3034

// -[SCAdUnifiedEventObservableBusImpl _mergeAdCaptionCtaImpressionEventStreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3100

// -[SCAdUnifiedEventObservableBusImpl _mergeAdLiveReviewEventStreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e31e0

// -[SCAdUnifiedEventObservableBusImpl _mergeModularLensEventStreamsWithPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e32c0

// -[SCAdUnifiedEventObservableBusImpl adLifecycleEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e33a0

// -[SCAdUnifiedEventObservableBusImpl setAdLifecycleEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e33a8

// -[SCAdUnifiedEventObservableBusImpl adInteractionEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e33d8

// -[SCAdUnifiedEventObservableBusImpl setAdInteractionEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e33e0

// -[SCAdUnifiedEventObservableBusImpl adLifecycleEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3410

// -[SCAdUnifiedEventObservableBusImpl setAdLifecycleEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3418

// -[SCAdUnifiedEventObservableBusImpl adWebviewConfigEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e3448

// -[SCAdUnifiedEventObservableBusImpl setAdWebviewConfigEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3450

// -[SCAdUnifiedEventObservableBusImpl adWebviewUserEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3480

// -[SCAdUnifiedEventObservableBusImpl setAdWebviewUserEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3488

// -[SCAdUnifiedEventObservableBusImpl adWebviewAsmEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e34b8

// -[SCAdUnifiedEventObservableBusImpl setAdWebviewAsmEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e34c0

// -[SCAdUnifiedEventObservableBusImpl adWebviewLoadingEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e34f0

// -[SCAdUnifiedEventObservableBusImpl adWebviewNavigationEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e34f8

// -[SCAdUnifiedEventObservableBusImpl setAdWebviewNavigationEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3500

// -[SCAdUnifiedEventObservableBusImpl adWebviewGaEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e3530

// -[SCAdUnifiedEventObservableBusImpl adWebviewOperationEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e3538

// -[SCAdUnifiedEventObservableBusImpl adWebviewEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e3540

// -[SCAdUnifiedEventObservableBusImpl setAdWebviewEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3548

// -[SCAdUnifiedEventObservableBusImpl adAppInstallEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e3578

// -[SCAdUnifiedEventObservableBusImpl setAdAppInstallEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3580

// -[SCAdUnifiedEventObservableBusImpl adAppInstallEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e35b0

// -[SCAdUnifiedEventObservableBusImpl setAdAppInstallEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e35b8

// -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e35e8

// -[SCAdUnifiedEventObservableBusImpl setAdAdToMessageEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e35f0

// -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3620

// -[SCAdUnifiedEventObservableBusImpl setAdAdToMessageEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3628

// -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e3658

// -[SCAdUnifiedEventObservableBusImpl setAdDeepLinkEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3660

// -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3690

// -[SCAdUnifiedEventObservableBusImpl setAdDeepLinkEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3698

// -[SCAdUnifiedEventObservableBusImpl adReportEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e36c8

// -[SCAdUnifiedEventObservableBusImpl setAdReportEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e36d0

// -[SCAdUnifiedEventObservableBusImpl adReportEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3700

// -[SCAdUnifiedEventObservableBusImpl setAdReportEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3708

// -[SCAdUnifiedEventObservableBusImpl reminderEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3738

// -[SCAdUnifiedEventObservableBusImpl setReminderEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3740

// -[SCAdUnifiedEventObservableBusImpl stickersEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3770

// -[SCAdUnifiedEventObservableBusImpl setStickersEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3778

// -[SCAdUnifiedEventObservableBusImpl adSubscribeEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e37a8

// -[SCAdUnifiedEventObservableBusImpl setAdSubscribeEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e37b0

// -[SCAdUnifiedEventObservableBusImpl adModularLensEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x1062e37e0

// -[SCAdUnifiedEventObservableBusImpl setAdModularLensEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e37e8

// -[SCAdUnifiedEventObservableBusImpl captionCtaImpressionEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3818

// -[SCAdUnifiedEventObservableBusImpl setCaptionCtaImpressionEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3820

// -[SCAdUnifiedEventObservableBusImpl liveReviewEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x1062e3850

// -[SCAdUnifiedEventObservableBusImpl setLiveReviewEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062e3858

// -[SCAdUnifiedEventObservableBusImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062e3888

@end
