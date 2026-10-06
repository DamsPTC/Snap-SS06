// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStandardExternalShareActionHandler
// Superclass: NSObject
// Address: 0x112b014f8

@interface SCStandardExternalShareActionHandler

// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",R,N,V_circumstanceEngine
// Property: watermarkGenerator; attributes: T@"SCLazy",R,N,V_watermarkGenerator
// Property: performer; attributes: T@"SCLazy",R,N,V_performer
// Property: subscription; attributes: T@"SCDisposableObserverLifecycle",R,N,V_subscription
// Property: videoWatermarkService; attributes: T@"SCLazy",R,N,V_videoWatermarkService
// Property: genAIDreamsService; attributes: T@"SCLazy",R,N,V_genAIDreamsService
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStandardExternalShareActionHandler generateWatermarkedMediaConfigurationWithMediaConfiguration:textConfiguration:watermarkLayout:watermarkType:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x106837388

// -[SCStandardExternalShareActionHandler _generateWatermarkedMediaWithNonWatermarkedMedia:nonWatermarkedMediaContent:textConfiguration:watermarkProfile:watermarkLayout:watermarkType:]
// Type encoding: @64@0:8@16@24@32@40q48q56
// Implementation: 0x1068378c8

// -[SCStandardExternalShareActionHandler _generateWatermarkedMediaWithNonWatermarkedMedia:textConfiguration:watermarkProfile:watermarkLayout:watermarkType:enableWatermarkImages:enableWatermarkVideos:]
// Type encoding: @64@0:8@16@24@32q40q48B56B60
// Implementation: 0x106837de0

// -[SCStandardExternalShareActionHandler initWithUiContainer:router:textConfiguration:mediaConfiguration:phoneNumber:shareUIType:shareSource:eventSubject:performerProvider:externalMediaLinkSendingService:watermarkGenerator:videoWatermarkService:circumstanceEngine:delegate:notificationPool:genAIDreamsService:featureSettingsService:]
// Type encoding: @152@0:8@16@24@32@40@48q56q64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x106838484

// -[SCStandardExternalShareActionHandler handleShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x106838a94

// -[SCStandardExternalShareActionHandler handleDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106838bdc

// -[SCStandardExternalShareActionHandler _generateMediaLinkWithShareDestination:mediaConfiguration:textConfiguration:phoneNumber:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x106838cd0

// -[SCStandardExternalShareActionHandler _generateMediaForShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x106839168

// -[SCStandardExternalShareActionHandler _updateMediaConfigurationForShareDestination:lensData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1068392b4

// -[SCStandardExternalShareActionHandler _updateMediaConfigurationWithWatermarkProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106839440

// -[SCStandardExternalShareActionHandler _updateMediaConfigurationWatermarkProfileShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x106839714

// -[SCStandardExternalShareActionHandler _handleShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x1068398b8

// -[SCStandardExternalShareActionHandler _handleDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10683a3d8

// -[SCStandardExternalShareActionHandler _respondToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683a408

// -[SCStandardExternalShareActionHandler _handleCompleteShareWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x10683a6f8

// -[SCStandardExternalShareActionHandler _routeShareAction:mediaConfiguration:textConfiguration:phoneNumber:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10683a72c

// -[SCStandardExternalShareActionHandler _routeShareActionForMediaLink:mediaConfiguration:textConfiguration:phoneNumber:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10683a818

// -[SCStandardExternalShareActionHandler _displayPrivacyAlertIfNeededForMediaLinkGeneration:mediaConfiguration:textConfiguration:phoneNumber:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10683aba0

// -[SCStandardExternalShareActionHandler _routeShareActionForMediaLinkResponse:linkCreationError:shareDestination:mediaConfiguration:textConfiguration:phoneNumber:]
// Type encoding: v64@0:8@16@24q32@40@48@56
// Implementation: 0x10683b0e4

// -[SCStandardExternalShareActionHandler _routeShareActionAndRemoveNotificationIfNeeded:mediaConfiguration:textConfiguration:phoneNumber:shareIdOverride:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x10683b5b0

// -[SCStandardExternalShareActionHandler _routeShareActionAfterLoadingDismissal:mediaConfiguration:textConfiguration:phoneNumber:shareIdOverride:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x10683b750

// -[SCStandardExternalShareActionHandler _shareDestinationSupportsTextOnly:]
// Type encoding: B24@0:8q16
// Implementation: 0x10683ba08

// -[SCStandardExternalShareActionHandler _shareDestinationSupportsMediaOnly:]
// Type encoding: B24@0:8q16
// Implementation: 0x10683ba24

// -[SCStandardExternalShareActionHandler _enableExportedMediaLinksWithShareSource:shareDestination:mediaConfiguration:]
// Type encoding: B40@0:8q16q24@32
// Implementation: 0x10683ba40

// -[SCStandardExternalShareActionHandler _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10683bac8

// -[SCStandardExternalShareActionHandler _showAsyncMediaUploadNotificationForShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x10683bb24

// -[SCStandardExternalShareActionHandler _removeLoadingNotificationIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10683bc08

// -[SCStandardExternalShareActionHandler _cancelLoadingNotificationIfNeededHelperWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10683be08

// -[SCStandardExternalShareActionHandler _showLoadingNotificationAfterDelayForShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x10683bed4

// -[SCStandardExternalShareActionHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10683bfdc

// -[SCStandardExternalShareActionHandler circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x10683c05c

// -[SCStandardExternalShareActionHandler watermarkGenerator]
// Type encoding: @16@0:8
// Implementation: 0x10683c064

// -[SCStandardExternalShareActionHandler performer]
// Type encoding: @16@0:8
// Implementation: 0x10683c06c

// -[SCStandardExternalShareActionHandler subscription]
// Type encoding: @16@0:8
// Implementation: 0x10683c074

// -[SCStandardExternalShareActionHandler videoWatermarkService]
// Type encoding: @16@0:8
// Implementation: 0x10683c07c

// -[SCStandardExternalShareActionHandler genAIDreamsService]
// Type encoding: @16@0:8
// Implementation: 0x10683c084

// -[SCStandardExternalShareActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10683c08c

@end
