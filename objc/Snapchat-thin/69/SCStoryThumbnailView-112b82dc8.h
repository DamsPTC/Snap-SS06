// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryThumbnailView
// Superclass: UIView
// Address: 0x112b82dc8

@interface SCStoryThumbnailView

// Property: preferredSize; attributes: T{CGSize=dd},N,V_preferredSize
// Property: isRectangularShape; attributes: TB,N,V_isRectangularShape
// Property: storyThumbnailImageLoaded; attributes: TB,N,V_storyThumbnailImageLoaded
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: viewModel; attributes: T@,&,N,V_viewModel
// Property: SIGIcon; attributes: T@"UIImage",?,&,N

// -[SCStoryThumbnailView addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd1b4c

// -[SCStoryThumbnailView removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd1b5c

// -[SCStoryThumbnailView didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107dd1b6c

// -[SCStoryThumbnailView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107dd1b7c

// -[SCStoryThumbnailView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107dd1fe8

// -[SCStoryThumbnailView _updateReplayLayoutWithFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107dd21e4

// -[SCStoryThumbnailView _createBlurView]
// Type encoding: @16@0:8
// Implementation: 0x107dd25fc

// -[SCStoryThumbnailView setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd2738

// -[SCStoryThumbnailView setBitmojiSelfieFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd2770

// -[SCStoryThumbnailView setStoriesConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd27a8

// -[SCStoryThumbnailView setBitmojiImageFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd27e0

// -[SCStoryThumbnailView storyThumbnailImageLoaded]
// Type encoding: B16@0:8
// Implementation: 0x107dd2818

// -[SCStoryThumbnailView setPreferredSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107dd2828

// -[SCStoryThumbnailView setIsRectangularShape:]
// Type encoding: v20@0:8B16
// Implementation: 0x107dd2884

// -[SCStoryThumbnailView setStoriesThumbnailCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd28a0

// -[SCStoryThumbnailView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd2900

// -[SCStoryThumbnailView _setupThumbnailImageViewWithImage:storyId:shouldSetBlurredBackground:shouldSetSolidBackgroundColor:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x107dd2ce8

// -[SCStoryThumbnailView _thumbnailImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107dd2ef8

// -[SCStoryThumbnailView _setThumbnailImageViewWithFinalImage:storyId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107dd2f34

// -[SCStoryThumbnailView _downloadThumbnailWithThumbnailDataModel:storyId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107dd2ff0

// -[SCStoryThumbnailView _storyThumbnailViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107dd35e8

// -[SCStoryThumbnailView _updateEmptyStoryState]
// Type encoding: v16@0:8
// Implementation: 0x107dd364c

// -[SCStoryThumbnailView _updateReplayState]
// Type encoding: v16@0:8
// Implementation: 0x107dd37dc

// -[SCStoryThumbnailView didUpdateThumbnailStateChangeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd3b74

// -[SCStoryThumbnailView _fetchThumbnailWithThumbnailInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dd3c20

// -[SCStoryThumbnailView _downloadStoryThumbnailImageWithDataModel:storyId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107dd3dd4

// -[SCStoryThumbnailView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x107dd4158

// -[SCStoryThumbnailView setStoryThumbnailImageLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x107dd4168

// -[SCStoryThumbnailView preferredSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107dd4178

// -[SCStoryThumbnailView isRectangularShape]
// Type encoding: B16@0:8
// Implementation: 0x107dd418c

// -[SCStoryThumbnailView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107dd419c

// +[SCStoryThumbnailView announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107dd1b40

@end
