// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackEventRepositoryImpl
// Superclass: NSObject
// Address: 0x112a38d78

@interface SCAdTrackEventRepositoryImpl

// Property: transactor; attributes: T@"SCSQLiteTransactor",&,N,V_transactor
// Property: adCrashLogger; attributes: T@"SCLazy",R,N,V_adCrashLogger
// Property: asmLogger; attributes: T@"SCLazy",R,N,V_asmLogger
// Property: instantPageOperationalLogger; attributes: T@"SCLazy",R,N,V_instantPageOperationalLogger
// Property: instantPagePaymentEventLogger; attributes: T@"SCLazy",R,N,V_instantPagePaymentEventLogger
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: adLifecycleEventSubjectV2; attributes: T@"SCPublishSubject",&,N,V_adLifecycleEventSubjectV2
// Property: adWebviewNavigationEventSubject; attributes: T@"SCPublishSubject",R,N,V_adWebviewNavigationEventSubject
// Property: adWebviewUserEventSubject; attributes: T@"SCPublishSubject",R,N,V_adWebviewUserEventSubject
// Property: adDeepLinkEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adDeepLinkEventSubjectV2
// Property: adAppInstallEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adAppInstallEventSubjectV2
// Property: adLeadGenerationEventSubject; attributes: T@"SCPublishSubject",R,N,V_adLeadGenerationEventSubject
// Property: adToMessageEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adToMessageEventSubjectV2
// Property: adReminderEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adReminderEventSubjectV2
// Property: adStickersEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adStickersEventSubjectV2
// Property: adSubscribeEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adSubscribeEventSubjectV2
// Property: adPlayableEventSubject; attributes: T@"SCPublishSubject",R,N,V_adPlayableEventSubject
// Property: adInstantPageEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adInstantPageEventSubjectV2
// Property: sponsoredSnapEventSubject; attributes: T@"SCPublishSubject",R,N,V_sponsoredSnapEventSubject
// Property: sponsoredSnapBannerEventSubject; attributes: T@"SCPublishSubject",R,N,V_sponsoredSnapBannerEventSubject
// Property: adReportEventSubjectV2; attributes: T@"SCPublishSubject",R,N,V_adReportEventSubjectV2
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
// Property: adInstantPageEventObservable; attributes: T@"SCObservable",R,N
// Property: adInstantPageOperationalEventObservable; attributes: T@"SCObservable",?,R,N
// Property: asmEventObservable; attributes: T@"SCObservable",?,R,N
// Property: loggingEventObservable; attributes: T@"SCObservable",R,N
// Property: sponsoredSnapBannerEventObservable; attributes: T@"SCObservable",R,N
// Property: sponsoredSnapEventObservable; attributes: T@"SCObservable",R,N

// -[SCAdTrackEventRepositoryImpl initWithTransactorProvider:adCrashLogger:asmLogger:instantPageOperationalLogger:instantPagePaymentEventLogger:webBrowsingConfigProvider:performer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1054330ec

// -[SCAdTrackEventRepositoryImpl beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054334dc

// -[SCAdTrackEventRepositoryImpl beginObservationWithAdWebviewEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054344b0

// -[SCAdTrackEventRepositoryImpl beginObservationWithAdInstantPageEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x105434968

// -[SCAdTrackEventRepositoryImpl loggingEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105434c84

// -[SCAdTrackEventRepositoryImpl beginObservationWithSponsoredSnapEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x105434cac

// -[SCAdTrackEventRepositoryImpl sponsoredSnapEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105434dfc

// -[SCAdTrackEventRepositoryImpl beginObservationWithSponsoredSnapBannerEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x105434e24

// -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105434f74

// -[SCAdTrackEventRepositoryImpl beginObservationWithAdReportEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x105434f9c

// -[SCAdTrackEventRepositoryImpl adReportEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1054350ec

// -[SCAdTrackEventRepositoryImpl streamsType]
// Type encoding: Q16@0:8
// Implementation: 0x105435114

// -[SCAdTrackEventRepositoryImpl adLifecycleEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10543511c

// -[SCAdTrackEventRepositoryImpl adInteractionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105435124

// -[SCAdTrackEventRepositoryImpl adLifecycleEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10543512c

// -[SCAdTrackEventRepositoryImpl adWebviewNavigationEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105435154

// -[SCAdTrackEventRepositoryImpl adWebviewUserEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10543517c

// -[SCAdTrackEventRepositoryImpl adDeepLinkEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1054351a4

// -[SCAdTrackEventRepositoryImpl adAppInstallEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x1054351cc

// -[SCAdTrackEventRepositoryImpl adLeadGenerationEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1054351f4

// -[SCAdTrackEventRepositoryImpl adAdToMessageEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10543521c

// -[SCAdTrackEventRepositoryImpl adReminderEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x105435244

// -[SCAdTrackEventRepositoryImpl adStickersEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10543526c

// -[SCAdTrackEventRepositoryImpl adSubscribeEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x105435294

// -[SCAdTrackEventRepositoryImpl adPlayableEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1054352bc

// -[SCAdTrackEventRepositoryImpl adInstantPageEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1054352e4

// -[SCAdTrackEventRepositoryImpl adLifecycleEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10543530c

// -[SCAdTrackEventRepositoryImpl adDeeplinkEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x105435604

// -[SCAdTrackEventRepositoryImpl adAppInstallEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x105435804

// -[SCAdTrackEventRepositoryImpl adToMessageEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105435a04

// -[SCAdTrackEventRepositoryImpl adSKOverlayEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105435bfc

// -[SCAdTrackEventRepositoryImpl adReportEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105435df4

// -[SCAdTrackEventRepositoryImpl adStickersEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105435fec

// -[SCAdTrackEventRepositoryImpl adSubscribeEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1054361e4

// -[SCAdTrackEventRepositoryImpl instantPageEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1054363dc

// -[SCAdTrackEventRepositoryImpl webviewUserEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10543663c

// -[SCAdTrackEventRepositoryImpl webviewLoadingEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10543683c

// -[SCAdTrackEventRepositoryImpl webviewNavigationEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x105436a3c

// -[SCAdTrackEventRepositoryImpl webviewGaEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x105436c3c

// -[SCAdTrackEventRepositoryImpl webviewEventBundleForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x105436e3c

// -[SCAdTrackEventRepositoryImpl sponsoredSnapEventsForAdIdentifier:feedSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10543770c

// -[SCAdTrackEventRepositoryImpl sponsoredSnapEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1054377c4

// -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventsForAdIdentifier:feedSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10543787c

// -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105437934

// -[SCAdTrackEventRepositoryImpl playableEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1054379ec

// -[SCAdTrackEventRepositoryImpl tooltipImpressionEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105437be4

// -[SCAdTrackEventRepositoryImpl adEndCardEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105437ddc

// -[SCAdTrackEventRepositoryImpl adLiveReviewEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105437fd4

// -[SCAdTrackEventRepositoryImpl dpaImpressionEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1054381cc

// -[SCAdTrackEventRepositoryImpl adModularLensEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1054383cc

// -[SCAdTrackEventRepositoryImpl adLeadGenerationEventsForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1054385cc

// -[SCAdTrackEventRepositoryImpl captionCtaImpressionEventsForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1054387cc

// -[SCAdTrackEventRepositoryImpl _onAdLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054389c4

// -[SCAdTrackEventRepositoryImpl _onAdDeeplinkEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105438cd8

// -[SCAdTrackEventRepositoryImpl _onAdAppInstallEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105438f4c

// -[SCAdTrackEventRepositoryImpl _onAdSKOverlayEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054391c0

// -[SCAdTrackEventRepositoryImpl _onAdAdToMessageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105439444

// -[SCAdTrackEventRepositoryImpl _onAdReportEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105439674

// -[SCAdTrackEventRepositoryImpl _onAdPlayableEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543998c

// -[SCAdTrackEventRepositoryImpl _onTooltipImpressionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105439c08

// -[SCAdTrackEventRepositoryImpl _onAdReminderEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105439ef0

// -[SCAdTrackEventRepositoryImpl _onAdEndCardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543a168

// -[SCAdTrackEventRepositoryImpl _onAdLiveReviewEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543a408

// -[SCAdTrackEventRepositoryImpl _onAdLeadGenerationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543a678

// -[SCAdTrackEventRepositoryImpl _onAdStickersEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543a8f4

// -[SCAdTrackEventRepositoryImpl _onAdSubscribeEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543ab58

// -[SCAdTrackEventRepositoryImpl _onWebviewUserEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543ad88

// -[SCAdTrackEventRepositoryImpl _onWebviewLoadingEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543b1c8

// -[SCAdTrackEventRepositoryImpl _onWebviewNavigationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543b5d8

// -[SCAdTrackEventRepositoryImpl _onWebviewGaEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543b914

// -[SCAdTrackEventRepositoryImpl _onInstantPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543bbc4

// -[SCAdTrackEventRepositoryImpl _onInstantPageOperationalEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543c020

// -[SCAdTrackEventRepositoryImpl _onSponsoredSnapEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543c070

// -[SCAdTrackEventRepositoryImpl _onSponsoredSnapBannerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543c3d4

// -[SCAdTrackEventRepositoryImpl _onWebviewAsmEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543c63c

// -[SCAdTrackEventRepositoryImpl _onDpaImpressionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543c6bc

// -[SCAdTrackEventRepositoryImpl _onAdModularLensEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543c8f4

// -[SCAdTrackEventRepositoryImpl _onAdCaptionCtaImpressionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543cbb8

// -[SCAdTrackEventRepositoryImpl _insertCaptionCtaEvent:intoDb:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10543cd88

// -[SCAdTrackEventRepositoryImpl initDatabase]
// Type encoding: v16@0:8
// Implementation: 0x10543cf38

// -[SCAdTrackEventRepositoryImpl transactor]
// Type encoding: @16@0:8
// Implementation: 0x10543cf70

// -[SCAdTrackEventRepositoryImpl _adTrackCommonForAdIdentifier:viewSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10543cfa8

// -[SCAdTrackEventRepositoryImpl _adTrackCommonForAdIdentifier:snapIndex:viewSeqNum:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10543d0a8

// -[SCAdTrackEventRepositoryImpl _adTrackCommonForAdIdentifier:feedSeqNum:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10543d1b4

// -[SCAdTrackEventRepositoryImpl _sqlEventsForCommons:adIdentifier:viewSeqNum:sqlClass:]
// Type encoding: @48@0:8@16@24Q32#40
// Implementation: 0x10543d2b4

// -[SCAdTrackEventRepositoryImpl _insertWithCommon:]
// Type encoding: B24@0:8@16
// Implementation: 0x10543d904

// -[SCAdTrackEventRepositoryImpl _insertWithTouchPoint:common:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10543dbb8

// -[SCAdTrackEventRepositoryImpl _handleSQLFetchedResult:adIdentifier:viewSeqNum:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10543df7c

// -[SCAdTrackEventRepositoryImpl _handleSqlMutationResult:common:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10543e2f4

// -[SCAdTrackEventRepositoryImpl _adSQLToSponsoredSnapEventWithCommons:sqlEvents:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10543e5dc

// -[SCAdTrackEventRepositoryImpl _adSQLToSponsoredSnapBannerEventWithCommons:sqlEvents:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10543e778

// -[SCAdTrackEventRepositoryImpl setTransactor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543e910

// -[SCAdTrackEventRepositoryImpl adCrashLogger]
// Type encoding: @16@0:8
// Implementation: 0x10543e940

// -[SCAdTrackEventRepositoryImpl asmLogger]
// Type encoding: @16@0:8
// Implementation: 0x10543e948

// -[SCAdTrackEventRepositoryImpl instantPageOperationalLogger]
// Type encoding: @16@0:8
// Implementation: 0x10543e950

// -[SCAdTrackEventRepositoryImpl instantPagePaymentEventLogger]
// Type encoding: @16@0:8
// Implementation: 0x10543e958

// -[SCAdTrackEventRepositoryImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x10543e960

// -[SCAdTrackEventRepositoryImpl adLifecycleEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e968

// -[SCAdTrackEventRepositoryImpl setAdLifecycleEventSubjectV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x10543e970

// -[SCAdTrackEventRepositoryImpl adWebviewNavigationEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x10543e9a0

// -[SCAdTrackEventRepositoryImpl adWebviewUserEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x10543e9a8

// -[SCAdTrackEventRepositoryImpl adDeepLinkEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e9b0

// -[SCAdTrackEventRepositoryImpl adAppInstallEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e9b8

// -[SCAdTrackEventRepositoryImpl adLeadGenerationEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x10543e9c0

// -[SCAdTrackEventRepositoryImpl adToMessageEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e9c8

// -[SCAdTrackEventRepositoryImpl adReminderEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e9d0

// -[SCAdTrackEventRepositoryImpl adStickersEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e9d8

// -[SCAdTrackEventRepositoryImpl adSubscribeEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e9e0

// -[SCAdTrackEventRepositoryImpl adPlayableEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x10543e9e8

// -[SCAdTrackEventRepositoryImpl adInstantPageEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543e9f0

// -[SCAdTrackEventRepositoryImpl sponsoredSnapEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x10543e9f8

// -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x10543ea00

// -[SCAdTrackEventRepositoryImpl adReportEventSubjectV2]
// Type encoding: @16@0:8
// Implementation: 0x10543ea08

// -[SCAdTrackEventRepositoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10543ea10

@end
