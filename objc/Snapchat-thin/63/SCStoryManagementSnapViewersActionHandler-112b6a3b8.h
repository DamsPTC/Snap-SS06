// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryManagementSnapViewersActionHandler
// Superclass: NSObject
// Address: 0x112b6a3b8

@interface SCStoryManagementSnapViewersActionHandler

// Property: operaEventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_operaEventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryManagementSnapViewersActionHandler initWithPresentingViewController:userPreferences:storyManagementView:friendProfileScopeExposer:webBrowsingScopeExposer:storiesConfigProvider:pageLauncher:optInDataProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107a20ea8

// -[SCStoryManagementSnapViewersActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107a21040

// -[SCStoryManagementSnapViewersActionHandler _presentFriendProfileForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a214a8

// -[SCStoryManagementSnapViewersActionHandler friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a2159c

// -[SCStoryManagementSnapViewersActionHandler _playFriendStoryWithId:fromSourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a215e4

// -[SCStoryManagementSnapViewersActionHandler _retryStoryPostWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a217b4

// -[SCStoryManagementSnapViewersActionHandler _presentBrowserForAttachmentUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a2187c

// -[SCStoryManagementSnapViewersActionHandler webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a21914

// -[SCStoryManagementSnapViewersActionHandler playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a2195c

// -[SCStoryManagementSnapViewersActionHandler playbackPresenterDidFinishDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a2198c

// -[SCStoryManagementSnapViewersActionHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a21990

// -[SCStoryManagementSnapViewersActionHandler playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a21994

// -[SCStoryManagementSnapViewersActionHandler playbackPresenter:didBeginPlayingStory:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a21998

// -[SCStoryManagementSnapViewersActionHandler operaEventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x107a2199c

// -[SCStoryManagementSnapViewersActionHandler setOperaEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a219a4

// -[SCStoryManagementSnapViewersActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a219d4

@end
