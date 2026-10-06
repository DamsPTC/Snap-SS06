// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdAttachmentHandlerEventStreamsRepository
// Superclass: NSObject
// Address: 0x112b08028

@interface SCAdAttachmentHandlerEventStreamsRepository

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
// Property: adAppInstallEventObservableV2; attributes: T@"SCObservable",?,R,N,V_adAppInstallEventSubject
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
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdAttachmentHandlerEventStreamsRepository initWithTimeProvider:trackSeqNumProvider:adAttachmentDataModel:adAttachmentContext:applicationLifecycleEvents:adConfigProviderV2:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10697e070

// -[SCAdAttachmentHandlerEventStreamsRepository adLifecycleEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10697e320

// -[SCAdAttachmentHandlerEventStreamsRepository adLifecycleEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10697e348

// -[SCAdAttachmentHandlerEventStreamsRepository adInteractionEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10697e350

// -[SCAdAttachmentHandlerEventStreamsRepository adPlayableEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10697e358

// -[SCAdAttachmentHandlerEventStreamsRepository streamsType]
// Type encoding: Q16@0:8
// Implementation: 0x10697e380

// -[SCAdAttachmentHandlerEventStreamsRepository adWebviewNavigationEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10697e388

// -[SCAdAttachmentHandlerEventStreamsRepository adDeepLinkEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x10697e3b0

// -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterTriggerAttempt:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697e3d8

// -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697e5a8

// -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidLoad:metrics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10697e708

// -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidPresent:attachmentMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10697e7b8

// -[SCAdAttachmentHandlerEventStreamsRepository adAttachmentPresenterDidComplete:result:attachmentMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10697e93c

// -[SCAdAttachmentHandlerEventStreamsRepository _adTouchPointWithEventId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10697eb98

// -[SCAdAttachmentHandlerEventStreamsRepository _adLifecycleEventCommonWithEventType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10697ec34

// -[SCAdAttachmentHandlerEventStreamsRepository _adWebviewNavigationEventCommonWithEventType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10697ed24

// -[SCAdAttachmentHandlerEventStreamsRepository _adTrackCommonWithCurrentTimestamp:eventId:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x10697ee14

// -[SCAdAttachmentHandlerEventStreamsRepository _adAttachmentType]
// Type encoding: Q16@0:8
// Implementation: 0x10697f024

// -[SCAdAttachmentHandlerEventStreamsRepository _publishWebviewNavigationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697f05c

// -[SCAdAttachmentHandlerEventStreamsRepository _publishAppInstallEvent:loadingMetrics:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10697f1fc

// -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableDidCloseEventWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697f3f4

// -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableDidCloseWithMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697f4fc

// -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697f5a0

// -[SCAdAttachmentHandlerEventStreamsRepository _publishPlayableEvent:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10697f6e4

// -[SCAdAttachmentHandlerEventStreamsRepository _buildPlayableCommonEvent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10697f7b0

// -[SCAdAttachmentHandlerEventStreamsRepository _publishDeeplinkFallbackEvent:common:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10697f8a0

// -[SCAdAttachmentHandlerEventStreamsRepository _publishDeeplinkEvent:common:isInternal:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x10697fa94

// -[SCAdAttachmentHandlerEventStreamsRepository _publishAdditionalAttachmentCompleteEvents:attachmentMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10697fbc8

// -[SCAdAttachmentHandlerEventStreamsRepository _setUpApplicationLifecycleEventHandling]
// Type encoding: v16@0:8
// Implementation: 0x10697fd80

// -[SCAdAttachmentHandlerEventStreamsRepository _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10697ffa8

// -[SCAdAttachmentHandlerEventStreamsRepository _appDidEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106980124

// -[SCAdAttachmentHandlerEventStreamsRepository adAppInstallEventObservableV2]
// Type encoding: @16@0:8
// Implementation: 0x106980234

// -[SCAdAttachmentHandlerEventStreamsRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10698023c

@end
