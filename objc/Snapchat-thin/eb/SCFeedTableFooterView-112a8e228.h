// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeedTableFooterView
// Superclass: UIView
// Address: 0x112a8e228

@interface SCFeedTableFooterView

// Property: delegate; attributes: T@"<SCFeedTableFooterViewDelegate>",W,N,V_delegate
// Property: loadingView; attributes: T@"SCFriendsFeedTableLoadingView",R,N,V_loadingView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeedTableFooterView initWithUserSession:friendsFeedLoadingStatusStream:findFriendsCTAImageProvider:snapchattersDataTracker:contactPermissionInfoProvider:shouldShowLoadingViewObservable:viewHasAppearedObservable:circumstanceEngine:appStartExperimentReader:delegate:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105b77828

// -[SCFeedTableFooterView _subscribeToUpdateUpsellViewOffMainThread]
// Type encoding: v16@0:8
// Implementation: 0x105b77bd4

// -[SCFeedTableFooterView _subscribeToUpdateUpsellView]
// Type encoding: v16@0:8
// Implementation: 0x105b77f70

// -[SCFeedTableFooterView _subscribeToViewHasAppearedObservable]
// Type encoding: v16@0:8
// Implementation: 0x105b78198

// -[SCFeedTableFooterView _updateUpsellView:contactPermissionGranted:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105b78378

// -[SCFeedTableFooterView _updateSubviewsOnIdle]
// Type encoding: v16@0:8
// Implementation: 0x105b783f8

// -[SCFeedTableFooterView _updateSubviewsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105b78598

// -[SCFeedTableFooterView _updateSubviewsWithShouldShowLoadingView:shouldShowUpsellView:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105b785c8

// -[SCFeedTableFooterView _updateLoadingViewIfPossibleWithShouldShowLoadingView:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b786f4

// -[SCFeedTableFooterView _updateUpsellViewIfPossibleWithShouldShowUpsellView:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b787ac

// -[SCFeedTableFooterView _forceRemovalUpsellView]
// Type encoding: v16@0:8
// Implementation: 0x105b78940

// -[SCFeedTableFooterView _updateUpsellViewElements]
// Type encoding: v16@0:8
// Implementation: 0x105b78974

// -[SCFeedTableFooterView _createUpsellView]
// Type encoding: @16@0:8
// Implementation: 0x105b789c4

// -[SCFeedTableFooterView shouldShowUpsellView]
// Type encoding: B16@0:8
// Implementation: 0x105b78a48

// -[SCFeedTableFooterView _showingLoadingView]
// Type encoding: B16@0:8
// Implementation: 0x105b78a58

// -[SCFeedTableFooterView _showingUpsellView]
// Type encoding: B16@0:8
// Implementation: 0x105b78aa4

// -[SCFeedTableFooterView addContactsButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x105b78af0

// -[SCFeedTableFooterView openSystemContactTapped]
// Type encoding: v16@0:8
// Implementation: 0x105b78b2c

// -[SCFeedTableFooterView forceLoadMoreConversations]
// Type encoding: v16@0:8
// Implementation: 0x105b78b68

// -[SCFeedTableFooterView didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b78ba8

// -[SCFeedTableFooterView didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105b78cd4

// -[SCFeedTableFooterView didEndSnapchattersContactDataRequest:withResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b78dd8

// -[SCFeedTableFooterView setFindFriendsCTABackgroundImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b78f9c

// -[SCFeedTableFooterView delegate]
// Type encoding: @16@0:8
// Implementation: 0x105b790a0

// -[SCFeedTableFooterView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b790c0

// -[SCFeedTableFooterView loadingView]
// Type encoding: @16@0:8
// Implementation: 0x105b790d4

// -[SCFeedTableFooterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b790e4

@end
