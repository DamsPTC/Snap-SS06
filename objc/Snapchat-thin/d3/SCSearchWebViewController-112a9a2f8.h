// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchWebViewController
// Superclass: UIViewController
// Address: 0x112a9a2f8

@interface SCSearchWebViewController

// Property: actionHandler; attributes: T@"<SCActionHandling>",W,N,V_actionHandler
// Property: delegate; attributes: T@"<SCSearchWebViewControllerDelegate>",W,N,V_delegate
// Property: shouldShowAttachButton; attributes: TB,N,V_shouldShowAttachButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: searchContentViewControllerContext; attributes: T@"SCSearchContentViewControllerContext",&,N,V_searchContentViewControllerContext
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCSearchWebViewController initWithUserSession:attachedURL:presentingQuery:launchSource:safeBrowsingAPI:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32q40@48@56
// Implementation: 0x105cf29d8

// -[SCSearchWebViewController addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf2b74

// -[SCSearchWebViewController removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf2b84

// -[SCSearchWebViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105cf2b94

// -[SCSearchWebViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x105cf2ba4

// -[SCSearchWebViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x105cf2c4c

// -[SCSearchWebViewController viewWillLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105cf3114

// -[SCSearchWebViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cf31d0

// -[SCSearchWebViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cf3268

// -[SCSearchWebViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cf32e0

// -[SCSearchWebViewController viewWillTransitionToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x105cf3464

// -[SCSearchWebViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x105cf3590

// -[SCSearchWebViewController shouldDisplayStatusBar]
// Type encoding: B16@0:8
// Implementation: 0x105cf3598

// -[SCSearchWebViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x105cf35a0

// -[SCSearchWebViewController goBackFromSafeBrowsing]
// Type encoding: v16@0:8
// Implementation: 0x105cf35cc

// -[SCSearchWebViewController learnMoreFromSafeBrowsing]
// Type encoding: v16@0:8
// Implementation: 0x105cf3610

// -[SCSearchWebViewController gestureController:didFinishDismissalAnimationForView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cf367c

// -[SCSearchWebViewController gestureControllerDidTriggerDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf36a0

// -[SCSearchWebViewController searchControllerDidChangeToText:byChangingCharactersInRange:replacementString:]
// Type encoding: v48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x105cf36ac

// -[SCSearchWebViewController searchControllerShouldReturnWithSearchText:]
// Type encoding: B24@0:8@16
// Implementation: 0x105cf36ec

// -[SCSearchWebViewController searchControllerDidBeginEditing]
// Type encoding: v16@0:8
// Implementation: 0x105cf3808

// -[SCSearchWebViewController searchControllerDidEndEditing]
// Type encoding: v16@0:8
// Implementation: 0x105cf3998

// -[SCSearchWebViewController shouldBeginInteractiveDismissalGesture]
// Type encoding: B16@0:8
// Implementation: 0x105cf3a2c

// -[SCSearchWebViewController webViewNavigationTrackerDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf3aa0

// -[SCSearchWebViewController webViewNavigationTracker:didLoadEstimatedProgress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105cf3b50

// -[SCSearchWebViewController webViewNavigationTracker:didCheckSafeBrowsingForURL:urlType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105cf3b9c

// -[SCSearchWebViewController webViewNavigationTracker:didNavigateToDeepLink:isInternalDeeplink:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105cf3c10

// -[SCSearchWebViewController attachmentWebViewDidScroll]
// Type encoding: v16@0:8
// Implementation: 0x105cf4198

// -[SCSearchWebViewController attachmentWebViewDidTapBackButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf419c

// -[SCSearchWebViewController attachmentsWebView:didTapWithActionModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cf41c8

// -[SCSearchWebViewController _resetSearchBar]
// Type encoding: v16@0:8
// Implementation: 0x105cf4244

// -[SCSearchWebViewController _resignSearchBarIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105cf4290

// -[SCSearchWebViewController _resignWebViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105cf4360

// -[SCSearchWebViewController _performRotationUpdates:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x105cf43e0

// -[SCSearchWebViewController _updateLockAndFavicon]
// Type encoding: v16@0:8
// Implementation: 0x105cf4400

// -[SCSearchWebViewController _updateFavicon:pageURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cf4508

// -[SCSearchWebViewController _updateFaviconImage:pageURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cf4620

// -[SCSearchWebViewController _dismissSearchViewController]
// Type encoding: v16@0:8
// Implementation: 0x105cf49b8

// -[SCSearchWebViewController _clearSearchViewContent]
// Type encoding: v16@0:8
// Implementation: 0x105cf49fc

// -[SCSearchWebViewController _configureRightBarButtonItemActions]
// Type encoding: v16@0:8
// Implementation: 0x105cf4a74

// -[SCSearchWebViewController _didPressCloseButton]
// Type encoding: v16@0:8
// Implementation: 0x105cf4c08

// -[SCSearchWebViewController _updateRightBarButtonStateWithSearchText:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf4c4c

// -[SCSearchWebViewController _updatePresentingURLForPresentedQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf4d20

// -[SCSearchWebViewController _updateWebViewModelWithValidURL:shouldShowPerceivedProgress:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105cf4e90

// -[SCSearchWebViewController _updateDisplayText]
// Type encoding: v16@0:8
// Implementation: 0x105cf4fe4

// -[SCSearchWebViewController _updateAttachButtonActionModel]
// Type encoding: v16@0:8
// Implementation: 0x105cf50a4

// -[SCSearchWebViewController _announceWebViewOpenFromQuery]
// Type encoding: v16@0:8
// Implementation: 0x105cf5440

// -[SCSearchWebViewController _urlForAttachmentWithCurrentURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x105cf5560

// -[SCSearchWebViewController _attachDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf5608

// -[SCSearchWebViewController _removeAttachedDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf57a0

// -[SCSearchWebViewController searchContentViewControllerContext]
// Type encoding: @16@0:8
// Implementation: 0x105cf58e0

// -[SCSearchWebViewController setSearchContentViewControllerContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf58f0

// -[SCSearchWebViewController actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x105cf5930

// -[SCSearchWebViewController setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf5950

// -[SCSearchWebViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105cf5964

// -[SCSearchWebViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cf5984

// -[SCSearchWebViewController shouldShowAttachButton]
// Type encoding: B16@0:8
// Implementation: 0x105cf5998

// -[SCSearchWebViewController setShouldShowAttachButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cf59a8

// -[SCSearchWebViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cf59b8

// +[SCSearchWebViewController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105cf2b68

@end
