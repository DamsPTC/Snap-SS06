// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewStepProcessor
// Superclass: NSObject
// Address: 0x112a91f68

@interface SCPreviewStepProcessor

// Property: sendflowPreviewConfig; attributes: T@"SCSendFlowPreviewConfig",&,N,V_sendflowPreviewConfig
// Property: eventSubject; attributes: T@"SCBehaviorSubject",&,N,V_eventSubject
// Property: thumbnailMediaSubject; attributes: T@"SCBehaviorSubject",&,N,V_thumbnailMediaSubject
// Property: configurationAdaptor; attributes: T@"SCLazy",&,N,V_configurationAdaptor
// Property: quickPostEventSubject; attributes: T@"SCBehaviorSubject",&,N,V_quickPostEventSubject
// Property: mediaHandler; attributes: T@"<SCSendFlowMediaHandler>",&,N,V_mediaHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewStepProcessor initWithSendFlowScope:userSession:appLifecycleEvent:userLocationServices:previewScopeExposer:previewScopeBuilderServices:storyQuickPostScopeExposer:userInfoServices:sendToSelectionItemAdaptor:circumstanceEngine:storiesLegacySnapInfoCollector:mapStoryPostingComplianceChecker:sendToFeedLogger:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105c28e10

// -[SCPreviewStepProcessor processStep:uiContainer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c294a8

// -[SCPreviewStepProcessor processStepBack:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c29688

// -[SCPreviewStepProcessor _sendflowPreviewConfig]
// Type encoding: @16@0:8
// Implementation: 0x105c2973c

// -[SCPreviewStepProcessor _onTriggerEvent:metadataHandler:resultSubject:uiContainer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105c29874

// -[SCPreviewStepProcessor _launchPreview:resultSubject:uiContainer:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105c29aa0

// -[SCPreviewStepProcessor _onNextEvent:resultSubject:metadataHandler:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105c29e50

// -[SCPreviewStepProcessor _onDidFinishLoading:previewSendToParams:resultSubject:uiContainer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105c2a47c

// -[SCPreviewStepProcessor _onDidPresentSendTo:previewSendToParams:resultSubject:uiContainer:thumbnailMedia:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105c2a564

// -[SCPreviewStepProcessor _onPreloadQuickPost:uiContainer:topicsCollection:delegate:dataSource:isMusicSnap:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x105c2a630

// -[SCPreviewStepProcessor _launchStoryQuickPostWithViewController:uiContainer:topicsCollection:delegate:dataSource:isMusicSnap:]
// Type encoding: B60@0:8@16@24@32@40@48B56
// Implementation: 0x105c2a640

// -[SCPreviewStepProcessor _onDidPressQuickPost:fromMemories:infoStickerFeature:metadataHandler:ephemeralMediaList:fullMediaContentBounds:isMusicSnap:]
// Type encoding: v84@0:8B16B20@24@32@40{CGRect={CGPoint=dd}{CGSize=dd}}48B80
// Implementation: 0x105c2a738

// -[SCPreviewStepProcessor _displayingConfidentalFeatureName:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c2a868

// -[SCPreviewStepProcessor _displayingConfidentalFeatureDescriptionWithFeatureName:infoStickerFeature:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c2a924

// -[SCPreviewStepProcessor _onSendFromQuickPost:metadataHandler:resultSubject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105c2a954

// -[SCPreviewStepProcessor _onDidPressSend:metadataHandler:selectionItems:selectedTopics:fullMediaContentBounds:resultSubject:]
// Type encoding: v88@0:8@16@24@32@40{CGRect={CGPoint=dd}{CGSize=dd}}48@80
// Implementation: 0x105c2a9cc

// -[SCPreviewStepProcessor _onDidCancelWithResultSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2ac38

// -[SCPreviewStepProcessor _updateThumbnailMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2ad00

// -[SCPreviewStepProcessor _setSendToConfiguration:previewSendToParams:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c2ad10

// -[SCPreviewStepProcessor _detachUIAndReleaseWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c2b088

// -[SCPreviewStepProcessor _cleanupStoryQuickPostIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c2b118

// -[SCPreviewStepProcessor _dismissStoryQuickPostScopeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c2b1f4

// -[SCPreviewStepProcessor _cleanupPreviewWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c2b2c4

// -[SCPreviewStepProcessor _didDetachUIWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c2b374

// -[SCPreviewStepProcessor _didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x105c2b458

// -[SCPreviewStepProcessor _cleanupPreloadedPreviewScope]
// Type encoding: v16@0:8
// Implementation: 0x105c2b45c

// -[SCPreviewStepProcessor _previewWillReleaseForSend:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2b4d0

// -[SCPreviewStepProcessor _previewDidReleaseForSend:resultSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c2b6a4

// -[SCPreviewStepProcessor _previewSourceFromSendFlowSource:]
// Type encoding: C24@0:8Q16
// Implementation: 0x105c2b918

// -[SCPreviewStepProcessor sendflowPreviewConfig]
// Type encoding: @16@0:8
// Implementation: 0x105c2b938

// -[SCPreviewStepProcessor setSendflowPreviewConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2b940

// -[SCPreviewStepProcessor eventSubject]
// Type encoding: @16@0:8
// Implementation: 0x105c2b970

// -[SCPreviewStepProcessor setEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2b978

// -[SCPreviewStepProcessor thumbnailMediaSubject]
// Type encoding: @16@0:8
// Implementation: 0x105c2b9a8

// -[SCPreviewStepProcessor setThumbnailMediaSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2b9b0

// -[SCPreviewStepProcessor configurationAdaptor]
// Type encoding: @16@0:8
// Implementation: 0x105c2b9e0

// -[SCPreviewStepProcessor setConfigurationAdaptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2b9e8

// -[SCPreviewStepProcessor quickPostEventSubject]
// Type encoding: @16@0:8
// Implementation: 0x105c2ba18

// -[SCPreviewStepProcessor setQuickPostEventSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2ba20

// -[SCPreviewStepProcessor mediaHandler]
// Type encoding: @16@0:8
// Implementation: 0x105c2ba50

// -[SCPreviewStepProcessor setMediaHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c2ba58

// -[SCPreviewStepProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c2ba88

// +[SCPreviewStepProcessor announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105c28e04

@end
