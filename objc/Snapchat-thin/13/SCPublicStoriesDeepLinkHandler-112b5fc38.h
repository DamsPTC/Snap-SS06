// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublicStoriesDeepLinkHandler
// Superclass: NSObject
// Address: 0x112b5fc38

@interface SCPublicStoriesDeepLinkHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPublicStoriesDeepLinkHandler initWithUserSession:remoteStoriesDataProvider:snapchatterPublicInfoFetcher:presentingViewController:navigationDelegate:circumstanceEngine:friendProfileScopeExposer:businessProfilesPresenterScopeExposer:operaSessionScopeExposer:snapTokenProvider:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:storiesMetricServices:addFriendSheetScopeExposer:addFriendSheetScopeServices:storiesConfigProvider:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x1071b4acc

// -[SCPublicStoriesDeepLinkHandler handleDeepLinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b4e3c

// -[SCPublicStoriesDeepLinkHandler _shouldGuardInvalidSnapchatter]
// Type encoding: B16@0:8
// Implementation: 0x1071b5220

// -[SCPublicStoriesDeepLinkHandler _alertGenericError]
// Type encoding: v16@0:8
// Implementation: 0x1071b5238

// -[SCPublicStoriesDeepLinkHandler _alertStoryExpiredOverViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b52a0

// -[SCPublicStoriesDeepLinkHandler _showAlertWithTitle:overViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b5308

// -[SCPublicStoriesDeepLinkHandler _resolveSnapchatterForUserName:deepLinkUrl:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1071b5460

// -[SCPublicStoriesDeepLinkHandler _resolveSnapchatterForUserId:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1071b5690

// -[SCPublicStoriesDeepLinkHandler _resolveStoryProfileForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b5964

// -[SCPublicStoriesDeepLinkHandler _playStoryWithStoriesSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b5c30

// -[SCPublicStoriesDeepLinkHandler _presentStoryPlaybackScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b5c78

// -[SCPublicStoriesDeepLinkHandler _cleanUpOperaPresenter]
// Type encoding: v16@0:8
// Implementation: 0x1071b5f0c

// -[SCPublicStoriesDeepLinkHandler _presentProfileForSnapchatter:showAlertStoryExpired:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071b5f54

// -[SCPublicStoriesDeepLinkHandler _presentUserProfileForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b60d8

// -[SCPublicStoriesDeepLinkHandler _presentBusinessProfileForSnapProId:userId:showAlertStoryExpired:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1071b6274

// -[SCPublicStoriesDeepLinkHandler _presentAddFriendPrompt]
// Type encoding: v16@0:8
// Implementation: 0x1071b63fc

// -[SCPublicStoriesDeepLinkHandler _modalContainer]
// Type encoding: @16@0:8
// Implementation: 0x1071b64cc

// -[SCPublicStoriesDeepLinkHandler businessProfilesPresenterScopeWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b657c

// -[SCPublicStoriesDeepLinkHandler showProfilePresenterDidFinishPresenting:profileViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b65ec

// -[SCPublicStoriesDeepLinkHandler showProfilePresenterViewControllerViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x1071b6604

// -[SCPublicStoriesDeepLinkHandler _onFinishStoryPlayback]
// Type encoding: v16@0:8
// Implementation: 0x1071b6608

// -[SCPublicStoriesDeepLinkHandler _onDismissProfileView]
// Type encoding: v16@0:8
// Implementation: 0x1071b66bc

// -[SCPublicStoriesDeepLinkHandler friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b6718

// -[SCPublicStoriesDeepLinkHandler endAddFriendSheetScope]
// Type encoding: v16@0:8
// Implementation: 0x1071b671c

// -[SCPublicStoriesDeepLinkHandler operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b6764

// -[SCPublicStoriesDeepLinkHandler operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b6768

// -[SCPublicStoriesDeepLinkHandler operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b676c

// -[SCPublicStoriesDeepLinkHandler operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b6770

// -[SCPublicStoriesDeepLinkHandler operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b6774

// -[SCPublicStoriesDeepLinkHandler operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b6778

// -[SCPublicStoriesDeepLinkHandler operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b677c

// -[SCPublicStoriesDeepLinkHandler operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b6780

// -[SCPublicStoriesDeepLinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b6784

// -[SCPublicStoriesDeepLinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071b6788

// -[SCPublicStoriesDeepLinkHandler playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b678c

// -[SCPublicStoriesDeepLinkHandler playbackPresenterDidFinishDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b67d8

// -[SCPublicStoriesDeepLinkHandler playbackPresenterDidFailToPresent:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b67dc

// -[SCPublicStoriesDeepLinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071b67e0

@end
