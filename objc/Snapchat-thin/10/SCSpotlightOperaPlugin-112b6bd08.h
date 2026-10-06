// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightOperaPlugin
// Superclass: NSObject
// Address: 0x112b6bd08

@interface SCSpotlightOperaPlugin

// Property: inChatContextParams; attributes: T@"SCSpotlightInChatContextParams",&,N,V_inChatContextParams
// Property: isTransitioningBetweenContent; attributes: T@"SCObservable",R,N
// Property: isSoundTopicFullBleedPlayerEnabled; attributes: TB,R,N,V_isSoundTopicFullBleedPlayerEnabled
// Property: safeAreaReferenceView; attributes: T@"UIView",W,N,V_safeAreaReferenceView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: openAttachmentBlock; attributes: T@?,C,N,V_openAttachmentBlock
// Property: useSoundBlock; attributes: T@?,C,N,V_useSoundBlock
// Property: pitnTriggeredBlock; attributes: T@?,C,N,V_pitnTriggeredBlock
// Property: videoFinishedLoopingBlock; attributes: T@?,C,N,V_videoFinishedLoopingBlock
// Property: sigFooterViewProviderBlock; attributes: T@?,C,N,V_sigFooterViewProviderBlock
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: currentFeedSectionIdentifier; attributes: T@"NSString",&,N,VcurrentFeedSectionIdentifier

// -[SCSpotlightOperaPlugin initWithBaseView:mode:ngsV2ResponsiveLayoutEnabled:viewLocation:showTimestamp:showPayToPromoteButton:spotlightConfigProvider:storiesConfigProvider:circumstanceEngine:]
// Type encoding: @76@0:8@16Q24B32q36B44B48@52@60@68
// Implementation: 0x107a3cce0

// -[SCSpotlightOperaPlugin type]
// Type encoding: @16@0:8
// Implementation: 0x107a3cf04

// -[SCSpotlightOperaPlugin isTransitioningBetweenContent]
// Type encoding: @16@0:8
// Implementation: 0x107a3cf10

// -[SCSpotlightOperaPlugin operaDidPauseWithModelPresentationEnded]
// Type encoding: v16@0:8
// Implementation: 0x107a3cf38

// -[SCSpotlightOperaPlugin operaDidPauseWithModelDismissedEnded]
// Type encoding: v16@0:8
// Implementation: 0x107a3cf7c

// -[SCSpotlightOperaPlugin operaCurrentPageProvider]
// Type encoding: @16@0:8
// Implementation: 0x107a3cfc0

// -[SCSpotlightOperaPlugin pausePlaybackWithoutOverlay]
// Type encoding: v16@0:8
// Implementation: 0x107a3d000

// -[SCSpotlightOperaPlugin resumePlayback]
// Type encoding: v16@0:8
// Implementation: 0x107a3d07c

// -[SCSpotlightOperaPlugin playlistDataSource]
// Type encoding: @16@0:8
// Implementation: 0x107a3d0c0

// -[SCSpotlightOperaPlugin setExtraInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3d0c8

// -[SCSpotlightOperaPlugin setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3d0cc

// -[SCSpotlightOperaPlugin currentOperaSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107a3d1a4

// -[SCSpotlightOperaPlugin addEventListenersWithEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3d1cc

// -[SCSpotlightOperaPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3d264

// -[SCSpotlightOperaPlugin extraPropertiesProvider]
// Type encoding: @16@0:8
// Implementation: 0x107a3d270

// -[SCSpotlightOperaPlugin announceWillSwitchFeed]
// Type encoding: v16@0:8
// Implementation: 0x107a3d274

// -[SCSpotlightOperaPlugin announceFeedSwitcherFeedDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107a3d2b4

// -[SCSpotlightOperaPlugin announceFeedSwitcherFeedDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x107a3d2ec

// -[SCSpotlightOperaPlugin updateOperaConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a3d324

// -[SCSpotlightOperaPlugin updateOperaDependencies:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a3dd38

// -[SCSpotlightOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a3dd84

// -[SCSpotlightOperaPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a3f4cc

// -[SCSpotlightOperaPlugin _deprecated_handleOperaEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a3f5b0

// -[SCSpotlightOperaPlugin _registerExtendedScrubberTouchArea:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3fb74

// -[SCSpotlightOperaPlugin _unregisterExtendedScrubberTouchArea:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3fd50

// -[SCSpotlightOperaPlugin _registerForOperaEventsUsingKeyBlocks]
// Type encoding: v16@0:8
// Implementation: 0x107a3fe00

// -[SCSpotlightOperaPlugin operaSpinnerWasVisible]
// Type encoding: B16@0:8
// Implementation: 0x107a40e48

// -[SCSpotlightOperaPlugin mediaWasMidPlaybackBeforeDismissing]
// Type encoding: B16@0:8
// Implementation: 0x107a40e50

// -[SCSpotlightOperaPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107a40e58

// -[SCSpotlightOperaPlugin _isFullScreenEdgeToEdgeSpotlightExperience]
// Type encoding: B16@0:8
// Implementation: 0x107a41098

// -[SCSpotlightOperaPlugin _didOpenAttachment:isFullscreenAttachment:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107a410b4

// -[SCSpotlightOperaPlugin _didTapUseSound]
// Type encoding: v16@0:8
// Implementation: 0x107a41154

// -[SCSpotlightOperaPlugin openAttachmentBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107a411b4

// -[SCSpotlightOperaPlugin setOpenAttachmentBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a411bc

// -[SCSpotlightOperaPlugin useSoundBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107a411c4

// -[SCSpotlightOperaPlugin setUseSoundBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a411cc

// -[SCSpotlightOperaPlugin pitnTriggeredBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107a411d4

// -[SCSpotlightOperaPlugin setPitnTriggeredBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a411dc

// -[SCSpotlightOperaPlugin videoFinishedLoopingBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107a411e4

// -[SCSpotlightOperaPlugin setVideoFinishedLoopingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a411ec

// -[SCSpotlightOperaPlugin sigFooterViewProviderBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107a411f4

// -[SCSpotlightOperaPlugin setSigFooterViewProviderBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a411fc

// -[SCSpotlightOperaPlugin playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107a41204

// -[SCSpotlightOperaPlugin inChatContextParams]
// Type encoding: @16@0:8
// Implementation: 0x107a4121c

// -[SCSpotlightOperaPlugin setInChatContextParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a41224

// -[SCSpotlightOperaPlugin currentFeedSectionIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a41254

// -[SCSpotlightOperaPlugin setCurrentFeedSectionIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4125c

// -[SCSpotlightOperaPlugin isSoundTopicFullBleedPlayerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107a4128c

// -[SCSpotlightOperaPlugin safeAreaReferenceView]
// Type encoding: @16@0:8
// Implementation: 0x107a41294

// -[SCSpotlightOperaPlugin setSafeAreaReferenceView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a412ac

// -[SCSpotlightOperaPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a412b8

@end
