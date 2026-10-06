// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebViewingSession
// Superclass: NSObject
// Address: 0x112add4b8

@interface SCAdWebViewingSession

// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",W,N,V_eventAnnouncing
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaController; attributes: T@"<SCOperaControlling>",W,N,V_operaController
// Property: unifiedEventBus; attributes: T@"<SCAdUnifiedEventObservableBus>",&,N,V_unifiedEventBus
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdWebViewingSession initWithAdConfigProvider:adDataSource:webTrackinghelper:unskippableAdManager:adBrowserLifecycleService:applicationPreferences:urlOpener:adTrackerHelper:adConfigProviderV2:mainQueuePerformer:localNotificationScheduler:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1063b2a28

// -[SCAdWebViewingSession initWithAdConfigProvider:adDataSource:webTrackinghelper:unskippableAdManager:adBrowserLifecycleService:applicationPreferences:adConfigProviderV2:adTrackerHelper:localNotificationScheduler:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1063b2ca4

// -[SCAdWebViewingSession beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b2e24

// -[SCAdWebViewingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063b312c

// -[SCAdWebViewingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063b376c

// -[SCAdWebViewingSession _handleGAHitEvent:lastInteractedItemIndex:adResponse:gaHitType:gaHitTimestampMs:gaHitLatency:gaHitTypeIsPageView:gaHitTypeIsLandingPage:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1063b5898

// -[SCAdWebViewingSession _handleWebBrowserSessionEvent:lastInteractedItemIndex:currentItem:adResponse:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1063b5ae4

// -[SCAdWebViewingSession _handleArrowLayerTapped:lastInteractedItemIndex:adResponse:adSnap:attachmentTriggerType:operaParams:loadInExternalBrowser:externalURL:unskippableDurationMs:urlLoadOnCtaTapBlock:]
// Type encoding: v92@0:8@16@24@32@40q48@56B64@68d76@?84
// Implementation: 0x1063b5f4c

// -[SCAdWebViewingSession _handleInteractionZoneLayerTap:webViewUrl:lastInteractedItemIndex:adResponse:adSnap:attachmentTriggerType:loadInExternalBrowser:externalURL:unskippableDurationMs:]
// Type encoding: v84@0:8@16@24@32@40@48q56B64@68d76
// Implementation: 0x1063b5fc4

// -[SCAdWebViewingSession _externalURL:remoteWebExbUrl:lastInteractiveItemIndex:updatedWebViewUrl:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1063b5fe8

// -[SCAdWebViewingSession _handleWillLoadURL:adResponse:loadInExternalBrowser:lastInteractedItemIndex:multiWebViewsCount:webBrowserUrl:]
// Type encoding: v60@0:8@16@24B32@36@44@52
// Implementation: 0x1063b60a8

// -[SCAdWebViewingSession _handleExternalBrowserAttachmentWillLoadURL:adResponse:currentItem:lastInteractedItemIndex:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1063b60c4

// -[SCAdWebViewingSession _handleExternalBrowserAttachmentOpenedWithPage:operaParams:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063b617c

// -[SCAdWebViewingSession _handleDidLoadURLInBrowser:adResponse:lastInteractedItemIndex:unskippableDurationMs:isExternalBrowserAttachment:url:]
// Type encoding: v60@0:8@16@24@32d40B48@52
// Implementation: 0x1063b6280

// -[SCAdWebViewingSession _trackExternalBrowserLoad:lastInteractedItemIndex:currentItem:adResponse:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1063b6368

// -[SCAdWebViewingSession _isSingleTapEvent:params:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1063b64a0

// -[SCAdWebViewingSession _isCollectionTapEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063b6688

// -[SCAdWebViewingSession _handleUnskippableAdForExternalBrowserLoad:adResponse:unskippableDurationMs:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1063b66f4

// -[SCAdWebViewingSession _handleAttachmentDidTriggerEventForExbOnUah:adResponse:item:itemIndex:attachmentTriggerType:isExternalBrowser:]
// Type encoding: v60@0:8@16@24@32@40q48B56
// Implementation: 0x1063b6804

// -[SCAdWebViewingSession _handleTopSnapPresentEventForExbOnUah:adResponse:item:itemIndex:isExternalBrowser:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1063b6960

// -[SCAdWebViewingSession _updateExternalBrowserMetadata:adResponse:item:itemIndex:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1063b6af8

// -[SCAdWebViewingSession _onAdLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b6c68

// -[SCAdWebViewingSession _handleWebViewEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b6ec4

// -[SCAdWebViewingSession _handleWebViewWillLoadUrl:adSnapMetadata:currentItem:lastInteractedItemIndex:isExternalBrowser:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1063b714c

// -[SCAdWebViewingSession _handleWebViewDidLoadUrl:adSnapMetadata:currentItem:lastInteractedItemIndex:isExternalBrowser:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1063b71f0

// -[SCAdWebViewingSession _handleWebviewUserEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b72dc

// -[SCAdWebViewingSession _copyPromoCodeIfPresent:isExb:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063b758c

// -[SCAdWebViewingSession _webviewPromoCodeNotificationRequest]
// Type encoding: @16@0:8
// Implementation: 0x1063b76dc

// -[SCAdWebViewingSession eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x1063b786c

// -[SCAdWebViewingSession setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b7884

// -[SCAdWebViewingSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063b7890

// -[SCAdWebViewingSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b78a8

// -[SCAdWebViewingSession operaController]
// Type encoding: @16@0:8
// Implementation: 0x1063b78b4

// -[SCAdWebViewingSession setOperaController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b78cc

// -[SCAdWebViewingSession unifiedEventBus]
// Type encoding: @16@0:8
// Implementation: 0x1063b78d8

// -[SCAdWebViewingSession setUnifiedEventBus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063b78e0

// -[SCAdWebViewingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063b7910

@end
