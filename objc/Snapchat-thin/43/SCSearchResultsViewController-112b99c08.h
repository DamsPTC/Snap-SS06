// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchResultsViewController
// Superclass: UIViewController
// Address: 0x112b99c08

@interface SCSearchResultsViewController

// Property: resultsCollectionView; attributes: T@"UICollectionView",&,N,V_resultsCollectionView
// Property: contentView; attributes: T@"UIView",&,N,V_contentView
// Property: searchSession; attributes: T@"SCSearchSession",&,N,V_searchSession
// Property: overscrollPercent; attributes: Td,N,V_overscrollPercent
// Property: eventAnnouncer; attributes: T@"SCEventListenerAnnouncer",&,N,V_eventAnnouncer
// Property: delegate; attributes: T@"<SCSearchResultsViewControllerDelegate>",W,N,V_delegate
// Property: isFromPullToSearch; attributes: TB,N,V_isFromPullToSearch
// Property: transitionController; attributes: T@"<SCSearchViewControllerTransitioning>",&,N,V_transitionController
// Property: shouldHandleOverscroll; attributes: TB,N,V_shouldHandleOverscroll
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: searchContentViewControllerContext; attributes: T@"SCSearchContentViewControllerContext",&,N,V_searchContentViewControllerContext
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCSearchResultsViewController initWithSearchSession:queryCoordinator:sectionCreator:initialQuery:galleryLogger:currentPageTracker:locationProvider:legacyStoryMediaCache:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1084115b8

// -[SCSearchResultsViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10841187c

// -[SCSearchResultsViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1084119ec

// -[SCSearchResultsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x108411f7c

// -[SCSearchResultsViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x108412050

// -[SCSearchResultsViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084121c0

// -[SCSearchResultsViewController viewWillLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10841227c

// -[SCSearchResultsViewController _setupRequestManagerContexts]
// Type encoding: v16@0:8
// Implementation: 0x1084124b4

// -[SCSearchResultsViewController _dismissIfEmpty]
// Type encoding: v16@0:8
// Implementation: 0x1084125a0

// -[SCSearchResultsViewController _sendSearchRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108412678

// -[SCSearchResultsViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1084126e0

// -[SCSearchResultsViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x10841271c

// -[SCSearchResultsViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x108412724

// -[SCSearchResultsViewController shouldDismissViewControllerWhenEnterBackground]
// Type encoding: B16@0:8
// Implementation: 0x10841272c

// -[SCSearchResultsViewController viewControllerPrefersSelfDismiss]
// Type encoding: B16@0:8
// Implementation: 0x108412734

// -[SCSearchResultsViewController viewControllerDismissSelf]
// Type encoding: v16@0:8
// Implementation: 0x10841273c

// -[SCSearchResultsViewController searchControllerShouldReturnWithSearchText:]
// Type encoding: B24@0:8@16
// Implementation: 0x108412788

// -[SCSearchResultsViewController searchControllerDidChangeToText:byChangingCharactersInRange:replacementString:]
// Type encoding: v48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10841294c

// -[SCSearchResultsViewController _canDismissResultsViewController]
// Type encoding: B16@0:8
// Implementation: 0x108412ad8

// -[SCSearchResultsViewController visibleSectionHeaderViewForTransitionAnimation]
// Type encoding: @16@0:8
// Implementation: 0x108412b48

// -[SCSearchResultsViewController searchControllerDidTapClearButton]
// Type encoding: v16@0:8
// Implementation: 0x108412b50

// -[SCSearchResultsViewController didTapCloseButton]
// Type encoding: v16@0:8
// Implementation: 0x108412c08

// -[SCSearchResultsViewController updateOverscrollPercent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108412c50

// -[SCSearchResultsViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x108412cc0

// -[SCSearchResultsViewController scrollViewWillBeginDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x108412d34

// -[SCSearchResultsViewController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x108412d38

// -[SCSearchResultsViewController _didOverscrollWithScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108412e8c

// -[SCSearchResultsViewController _didBeginOverscrollWithScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108412ffc

// -[SCSearchResultsViewController _didEndOverscrollWithScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084130e8

// -[SCSearchResultsViewController _animateOverscroll]
// Type encoding: v16@0:8
// Implementation: 0x1084133e4

// -[SCSearchResultsViewController viewWillTransitionToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x1084134a8

// -[SCSearchResultsViewController _updateForRotationTransitions]
// Type encoding: v16@0:8
// Implementation: 0x1084135c8

// -[SCSearchResultsViewController addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084135cc

// -[SCSearchResultsViewController removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084135dc

// -[SCSearchResultsViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1084135f8

// -[SCSearchResultsViewController _extraLoggingDataFromBasicSearchViewController]
// Type encoding: @16@0:8
// Implementation: 0x108413734

// -[SCSearchResultsViewController searchModalPresenterPresentViewController:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108413aa8

// -[SCSearchResultsViewController searchModalPresenterDismissViewController:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108413ab0

// -[SCSearchResultsViewController performSearch:]
// Type encoding: v24@0:8@16
// Implementation: 0x108413abc

// -[SCSearchResultsViewController searchQueryResultControllerDidDelayReloadFreshResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x108413b6c

// -[SCSearchResultsViewController searchQueryResultControllerShouldReloadFreshResult:]
// Type encoding: B24@0:8@16
// Implementation: 0x108413b98

// -[SCSearchResultsViewController searchQueryResultControllerDidUpdateQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x108413ba8

// -[SCSearchResultsViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108413bdc

// -[SCSearchResultsViewController presentingViewControllerForSearchQueryResultController:]
// Type encoding: @24@0:8@16
// Implementation: 0x108413cc4

// -[SCSearchResultsViewController _logMaxScrollHeight]
// Type encoding: v16@0:8
// Implementation: 0x108413cc8

// -[SCSearchResultsViewController _handleNewQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x108413d70

// -[SCSearchResultsViewController _disableLoadRefreshContentIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108413d9c

// -[SCSearchResultsViewController _invalidateResultCollectionViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x108413ea8

// -[SCSearchResultsViewController _updateCellLayoutIfNeededWithScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108413ee4

// -[SCSearchResultsViewController _resetCollectionViewResetContentOffsetAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x108413f4c

// -[SCSearchResultsViewController _handleResultsCollectionViewUpdateCompletion]
// Type encoding: v16@0:8
// Implementation: 0x108413fa8

// -[SCSearchResultsViewController _updateLastLoadingStartTimeWithResultState:]
// Type encoding: v24@0:8q16
// Implementation: 0x108413fb8

// -[SCSearchResultsViewController _dismissSearchResultsViewControllerWithDismissAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x108414020

// -[SCSearchResultsViewController _logDismissEvents]
// Type encoding: v16@0:8
// Implementation: 0x108414070

// -[SCSearchResultsViewController _announceSearchBarReturnAction]
// Type encoding: v16@0:8
// Implementation: 0x1084141bc

// -[SCSearchResultsViewController searchContentViewControllerContext]
// Type encoding: @16@0:8
// Implementation: 0x108414274

// -[SCSearchResultsViewController setSearchContentViewControllerContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x108414284

// -[SCSearchResultsViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1084142c4

// -[SCSearchResultsViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084142e4

// -[SCSearchResultsViewController searchSession]
// Type encoding: @16@0:8
// Implementation: 0x1084142f8

// -[SCSearchResultsViewController setSearchSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x108414308

// -[SCSearchResultsViewController isFromPullToSearch]
// Type encoding: B16@0:8
// Implementation: 0x108414348

// -[SCSearchResultsViewController setIsFromPullToSearch:]
// Type encoding: v20@0:8B16
// Implementation: 0x108414358

// -[SCSearchResultsViewController transitionController]
// Type encoding: @16@0:8
// Implementation: 0x108414368

// -[SCSearchResultsViewController setTransitionController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108414378

// -[SCSearchResultsViewController shouldHandleOverscroll]
// Type encoding: B16@0:8
// Implementation: 0x1084143b8

// -[SCSearchResultsViewController setShouldHandleOverscroll:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084143c8

// -[SCSearchResultsViewController resultsCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x1084143d8

// -[SCSearchResultsViewController setResultsCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084143e8

// -[SCSearchResultsViewController contentView]
// Type encoding: @16@0:8
// Implementation: 0x108414428

// -[SCSearchResultsViewController setContentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108414438

// -[SCSearchResultsViewController overscrollPercent]
// Type encoding: d16@0:8
// Implementation: 0x108414478

// -[SCSearchResultsViewController setOverscrollPercent:]
// Type encoding: v24@0:8d16
// Implementation: 0x108414488

// -[SCSearchResultsViewController eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x108414498

// -[SCSearchResultsViewController setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084144a8

// -[SCSearchResultsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1084144e8

// +[SCSearchResultsViewController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1084135ec

@end
