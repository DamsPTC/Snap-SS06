// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverShareController
// Superclass: NSObject
// Address: 0x112b6f228

@interface SCDiscoverShareController

// Property: delegate; attributes: T@"<SCDiscoverShareControllerDelegate>",W,N,V_delegate
// Property: blob; attributes: T@"SCDiscoverMediaBlob",&,N,V_blob
// Property: messageBodyType; attributes: Tq,N,V_messageBodyType
// Property: enableSnapDocContentManager; attributes: TB,N,V_enableSnapDocContentManager
// Property: videoContentResult; attributes: T@"<SCNContentManagerContentResult>",&,N,V_videoContentResult
// Property: snapId; attributes: T@"NSString",&,N,V_snapId
// Property: compositeStoryId; attributes: T@"NSString",&,N,V_compositeStoryId
// Property: publisherDeepLink; attributes: T@"NSString",&,N,V_publisherDeepLink
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: storyViewingSessionId; attributes: T@"NSString",&,N,V_storyViewingSessionId
// Property: streamId; attributes: T@"NSString",&,N,V_streamId
// Property: mediaPlaybackSessionId; attributes: T@"NSString",&,N,V_mediaPlaybackSessionId
// Property: state; attributes: Tq,R,N,V_state
// Property: stateObservable; attributes: T@"SCObservable",R,N,V_stateObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverShareController initWithUserSession:videoFilterAdaptor:previewFilterDataProviderCreator:circumstanceEngine:notificationPool:sendToLauncher:ephemeralMediaFactory:galleryStorySaver:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:snapDocEditorFactory:discoverFeedEventsLogger:previewSnapSenderFactory:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x107ad08f4

// -[SCDiscoverShareController initWithUserSession:videoFilterAdaptor:previewFilterDataProviderCreator:circumstanceEngine:notificationPool:sendToScopeExposer:ephemeralMediaFactory:galleryStorySaver:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:snapDocEditorFactory:discoverFeedEventsLogger:previewSnapSenderFactory:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x107ad0934

// -[SCDiscoverShareController _initWithUserSession:videoFilterAdaptor:previewFilterDataProviderCreator:circumstanceEngine:notificationPool:sendToLauncher:sendToScopeExposer:ephemeralMediaFactory:galleryStorySaver:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:snapDocEditorFactory:discoverFeedEventsLogger:previewSnapSenderFactory:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x107ad0978

// -[SCDiscoverShareController shareWithImage:overlayImages:fromViewController:touchOrigin:snapSaverImageProvider:savingDisabled:snapPageSource:]
// Type encoding: v76@0:8@16@24@32{CGPoint=dd}40@?56B64q68
// Implementation: 0x107ad0e10

// -[SCDiscoverShareController shareWithVideo:overlayImages:firstFrame:shareFrameMedia:fromViewController:touchOrigin:enableRotationalPreview:manipulatorFormat:]
// Type encoding: v84@0:8@16@24@32@40@48{CGPoint=dd}56B72@76
// Implementation: 0x107ad10c8

// -[SCDiscoverShareController _shareLoaclFileMedia:overlayImages:firstFrame:shareFrameMedia:fromViewController:touchOrigin:enableRotationalPreview:manipulatorFormat:]
// Type encoding: v84@0:8@16@24@32@40@48{CGPoint=dd}56B72@76
// Implementation: 0x107ad1704

// -[SCDiscoverShareController endDiscoverShare]
// Type encoding: v16@0:8
// Implementation: 0x107ad19c4

// -[SCDiscoverShareController sendPressedFromContextMenuFromViewController:page:contextSessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ad1a00

// -[SCDiscoverShareController _sendPressedFromViewController:page:contextSessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ad1a04

// -[SCDiscoverShareController _prepareDiscoverMediaWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ad212c

// -[SCDiscoverShareController sendPressedFromMiniProfileFromViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad23d8

// -[SCDiscoverShareController _previewConfigurationForVideoURL:videoSize:videoOverlayImage:shareFrameMedia:firstFrame:]
// Type encoding: @64@0:8@16{CGSize=dd}24@40@48@56
// Implementation: 0x107ad2428

// -[SCDiscoverShareController _previewConfigurationForImage:snapSaverImageProvider:savingDisabled:snapPageSource:]
// Type encoding: @44@0:8@16@?24B32q36
// Implementation: 0x107ad274c

// -[SCDiscoverShareController _performFromViewController:onNextStateChange:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ad2954

// -[SCDiscoverShareController sendPressedFromTopLevelShareFromViewController:page:contextSessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ad2dd0

// -[SCDiscoverShareController createLoadingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107ad3018

// -[SCDiscoverShareController legacySendToScopeDidDismiss:selectedItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ad3270

// -[SCDiscoverShareController legacySendToScopeWillSend:sendToSelection:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ad3458

// -[SCDiscoverShareController _didDetachUIWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ad35cc

// -[SCDiscoverShareController _didEndFeatureWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ad37fc

// -[SCDiscoverShareController _sendMessageToRecipients:phoneNumbers:storiesPostingConfig:businessIds:groups:additionalText:shareSheetConfiguration:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107ad3a30

// -[SCDiscoverShareController _sendToRecipientUsernames:phoneNumbersToSendTo:recipientUserIds:businessIds:groups:additionalText:storiesPostingConfig:shareSheetConfiguration:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107ad3b9c

// -[SCDiscoverShareController _didFinishSendingWithRecipientsCount:groupsCount:didPostToStory:]
// Type encoding: v36@0:8Q16Q24B32
// Implementation: 0x107ad42f0

// -[SCDiscoverShareController _didDismissSendViewController]
// Type encoding: v16@0:8
// Implementation: 0x107ad44a4

// -[SCDiscoverShareController _announceFullscreenSend]
// Type encoding: v16@0:8
// Implementation: 0x107ad4568

// -[SCDiscoverShareController addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad45b4

// -[SCDiscoverShareController removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad45bc

// -[SCDiscoverShareController _setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ad45c4

// -[SCDiscoverShareController animationControllerForPresentedController:presentingController:sourceController:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107ad464c

// -[SCDiscoverShareController animationControllerForDismissedController:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ad4654

// -[SCDiscoverShareController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107ad46b0

// -[SCDiscoverShareController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad46c8

// -[SCDiscoverShareController blob]
// Type encoding: @16@0:8
// Implementation: 0x107ad46d4

// -[SCDiscoverShareController setBlob:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad46dc

// -[SCDiscoverShareController messageBodyType]
// Type encoding: q16@0:8
// Implementation: 0x107ad470c

// -[SCDiscoverShareController setMessageBodyType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ad4714

// -[SCDiscoverShareController enableSnapDocContentManager]
// Type encoding: B16@0:8
// Implementation: 0x107ad471c

// -[SCDiscoverShareController setEnableSnapDocContentManager:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ad4724

// -[SCDiscoverShareController videoContentResult]
// Type encoding: @16@0:8
// Implementation: 0x107ad472c

// -[SCDiscoverShareController setVideoContentResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad4734

// -[SCDiscoverShareController snapId]
// Type encoding: @16@0:8
// Implementation: 0x107ad4764

// -[SCDiscoverShareController setSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad476c

// -[SCDiscoverShareController compositeStoryId]
// Type encoding: @16@0:8
// Implementation: 0x107ad479c

// -[SCDiscoverShareController setCompositeStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad47a4

// -[SCDiscoverShareController publisherDeepLink]
// Type encoding: @16@0:8
// Implementation: 0x107ad47d4

// -[SCDiscoverShareController setPublisherDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad47dc

// -[SCDiscoverShareController viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107ad480c

// -[SCDiscoverShareController setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ad4814

// -[SCDiscoverShareController storyViewingSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107ad481c

// -[SCDiscoverShareController setStoryViewingSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad4824

// -[SCDiscoverShareController streamId]
// Type encoding: @16@0:8
// Implementation: 0x107ad4854

// -[SCDiscoverShareController setStreamId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad485c

// -[SCDiscoverShareController mediaPlaybackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107ad488c

// -[SCDiscoverShareController setMediaPlaybackSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ad4894

// -[SCDiscoverShareController state]
// Type encoding: q16@0:8
// Implementation: 0x107ad48c4

// -[SCDiscoverShareController stateObservable]
// Type encoding: @16@0:8
// Implementation: 0x107ad48cc

// -[SCDiscoverShareController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ad48d4

// +[SCDiscoverShareController selectRecipientConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107ad23e4

// +[SCDiscoverShareController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ad45a8

@end
