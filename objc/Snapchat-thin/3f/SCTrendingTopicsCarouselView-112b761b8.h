// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTrendingTopicsCarouselView
// Superclass: UICollectionReusableView
// Address: 0x112b761b8

@interface SCTrendingTopicsCarouselView

// Property: trendingTopics; attributes: T@"NSArray",C,N,V_trendingTopics
// Property: delegate; attributes: T@"<SCTrendingTopicsCarouselViewDelegate>",W,N,V_delegate
// Property: fallbackHeaderViewModel; attributes: T@"SCDiscoverFeedSectionHeaderViewModel",&,N
// Property: fallbackHeaderActionHandler; attributes: T@"<SCActionHandling>",W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTrendingTopicsCarouselView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107c679a4

// -[SCTrendingTopicsCarouselView _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x107c679f4

// -[SCTrendingTopicsCarouselView setTrendingTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c67fb0

// -[SCTrendingTopicsCarouselView setFallbackHeaderViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c68160

// -[SCTrendingTopicsCarouselView fallbackHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107c68170

// -[SCTrendingTopicsCarouselView setFallbackHeaderActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c68180

// -[SCTrendingTopicsCarouselView fallbackHeaderActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x107c68190

// -[SCTrendingTopicsCarouselView _transitionToShowCarousel:]
// Type encoding: v20@0:8B16
// Implementation: 0x107c681a0

// -[SCTrendingTopicsCarouselView collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x107c68320

// -[SCTrendingTopicsCarouselView collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107c68330

// -[SCTrendingTopicsCarouselView collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x107c683f8

// -[SCTrendingTopicsCarouselView collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107c684bc

// -[SCTrendingTopicsCarouselView trendingTopics]
// Type encoding: @16@0:8
// Implementation: 0x107c685b4

// -[SCTrendingTopicsCarouselView delegate]
// Type encoding: @16@0:8
// Implementation: 0x107c685c4

// -[SCTrendingTopicsCarouselView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c685e4

// -[SCTrendingTopicsCarouselView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c685f8

// +[SCTrendingTopicsCarouselView fallbackHeaderHeightWithViewModel:width:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x107c68580

@end
