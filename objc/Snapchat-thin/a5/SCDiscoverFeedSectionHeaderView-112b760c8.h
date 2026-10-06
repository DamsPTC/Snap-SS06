// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedSectionHeaderView
// Superclass: UICollectionReusableView
// Address: 0x112b760c8

@interface SCDiscoverFeedSectionHeaderView

// Property: myStoriesSectionInScreenPercentPublisher; attributes: T@"SCPublishSubject",&,N,V_myStoriesSectionInScreenPercentPublisher
// Property: trendingTopicTapHandler; attributes: T@?,C,N,V_trendingTopicTapHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: viewModel; attributes: T@,&,N,V_viewModel
// Property: SIGIcon; attributes: T@"UIImage",?,&,N
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler

// -[SCDiscoverFeedSectionHeaderView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107c63e00

// -[SCDiscoverFeedSectionHeaderView setMyStoriesSectionInScreenPercentPublisher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c64100

// -[SCDiscoverFeedSectionHeaderView _resetMyStoriesSectionInScreenPercentObserving]
// Type encoding: v16@0:8
// Implementation: 0x107c641c0

// -[SCDiscoverFeedSectionHeaderView _updateTitleByScrollPercent:]
// Type encoding: v24@0:8d16
// Implementation: 0x107c64304

// -[SCDiscoverFeedSectionHeaderView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107c64548

// -[SCDiscoverFeedSectionHeaderView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x107c64b4c

// -[SCDiscoverFeedSectionHeaderView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c64c14

// -[SCDiscoverFeedSectionHeaderView _updateSecondaryActionButtonWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c652a0

// -[SCDiscoverFeedSectionHeaderView _resetButtonConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c65790

// -[SCDiscoverFeedSectionHeaderView _newDebugButton]
// Type encoding: @16@0:8
// Implementation: 0x107c658d0

// -[SCDiscoverFeedSectionHeaderView _newSecondaryActionButton]
// Type encoding: @16@0:8
// Implementation: 0x107c659b0

// -[SCDiscoverFeedSectionHeaderView _didTapDebugButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c65a00

// -[SCDiscoverFeedSectionHeaderView _didTapSecondaryActionButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c65ae4

// -[SCDiscoverFeedSectionHeaderView _didTapPrimaryActionButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c65bc8

// -[SCDiscoverFeedSectionHeaderView completeAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x107c65c90

// -[SCDiscoverFeedSectionHeaderView updatePrimaryTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c65c94

// -[SCDiscoverFeedSectionHeaderView updateTrendingTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c65dd8

// -[SCDiscoverFeedSectionHeaderView _setupTrendingTopicsCarousel]
// Type encoding: v16@0:8
// Implementation: 0x107c660a0

// -[SCDiscoverFeedSectionHeaderView collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x107c66430

// -[SCDiscoverFeedSectionHeaderView collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107c66440

// -[SCDiscoverFeedSectionHeaderView collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107c66508

// -[SCDiscoverFeedSectionHeaderView collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x107c665c4

// -[SCDiscoverFeedSectionHeaderView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x107c66688

// -[SCDiscoverFeedSectionHeaderView actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x107c66698

// -[SCDiscoverFeedSectionHeaderView setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c666a8

// -[SCDiscoverFeedSectionHeaderView myStoriesSectionInScreenPercentPublisher]
// Type encoding: @16@0:8
// Implementation: 0x107c666e8

// -[SCDiscoverFeedSectionHeaderView trendingTopicTapHandler]
// Type encoding: @?16@0:8
// Implementation: 0x107c666f8

// -[SCDiscoverFeedSectionHeaderView setTrendingTopicTapHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107c66708

// -[SCDiscoverFeedSectionHeaderView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c66714

// +[SCDiscoverFeedSectionHeaderView sizeWithViewModel:constrainedToSize:]
// Type encoding: {CGSize=dd}40@0:8@16{CGSize=dd}24
// Implementation: 0x107c650d4

// +[SCDiscoverFeedSectionHeaderView trendingCarouselVerticalInsetsHeight]
// Type encoding: d16@0:8
// Implementation: 0x107c66098

@end
