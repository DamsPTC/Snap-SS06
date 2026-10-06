// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesFeaturedStoryCellV2
// Superclass: UICollectionViewCell
// Address: 0x112b880e8

@interface SCMemoriesFeaturedStoryCellV2

// Property: gestureHandler; attributes: T@"<SCMemoriesFeaturedStoryCellGestureHandler>",W,N,V_gestureHandler
// Property: thumbnailDownloader; attributes: T@"<SCMemoriesFeaturedStoryThumbnailDownloader>",W,N,V_thumbnailDownloader
// Property: featuredStoryActionHandler; attributes: T@"<SCActionHandling>",W,N,V_featuredStoryActionHandler
// Property: featuredDataLogging; attributes: T@"<SCMemoriesThumbnailLogging>",W,N,V_featuredDataLogging
// Property: bitmojiFetcher; attributes: T@"<SCMemoriesBitmojiFetching>",&,N,V_bitmojiFetcher
// Property: memoriesEntryThumbnailGeneratorBuilder; attributes: T@"<SCMemoriesEntryThumbnailGeneratorBuilder>",&,N,V_memoriesEntryThumbnailGeneratorBuilder
// Property: memoriesCRFeaturedStoryThumbnailGeneratorBuilder; attributes: T@"<SCMemoriesCRFeaturedStoryThumbnailGeneratorBuilderProtocol>",&,N,V_memoriesCRFeaturedStoryThumbnailGeneratorBuilder
// Property: memoriesChatMediaThumbnailGeneratorBuilder; attributes: T@"<SCMemoriesChatMediaFeaturedStoryThumbnailGeneratorBuilderProtocol>",W,N,V_memoriesChatMediaThumbnailGeneratorBuilder
// Property: viewModel; attributes: T@"SCMemoriesFeaturedStoryViewModel",R,N,V_viewModel
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: disableMode; attributes: TB,N,V_disableMode

// -[SCMemoriesFeaturedStoryCellV2 initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107e6de80

// -[SCMemoriesFeaturedStoryCellV2 layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107e6eaf8

// -[SCMemoriesFeaturedStoryCellV2 setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e6eb70

// -[SCMemoriesFeaturedStoryCellV2 updateCornerRadius]
// Type encoding: v16@0:8
// Implementation: 0x107e6ebec

// -[SCMemoriesFeaturedStoryCellV2 prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x107e6ecb8

// -[SCMemoriesFeaturedStoryCellV2 setViewModel:snapchattersDataFetcher:numberOfStories:containerWidth:sectionInsets:cellSpacing:circumstanceEngine:memoriesGraphene:shouldUseNewLayout:]
// Type encoding: v84@0:8@16@24q32d40d48d56@64@72B80
// Implementation: 0x107e6ef00

// -[SCMemoriesFeaturedStoryCellV2 _updateSaveButtonWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107e6f358

// -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailFromEntrySource:snapchattersDataFetcher:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x107e6f368

// -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGenerator]
// Type encoding: v16@0:8
// Implementation: 0x107e6f444

// -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGeneratorForRegularFeaturedStory]
// Type encoding: v16@0:8
// Implementation: 0x107e6f4b4

// -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGeneratorForCRFeaturedStory]
// Type encoding: v16@0:8
// Implementation: 0x107e6f5d4

// -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailGeneratorForChatMediaFeaturedStory]
// Type encoding: v16@0:8
// Implementation: 0x107e6f6a8

// -[SCMemoriesFeaturedStoryCellV2 _loadThumbnailFromDownloading]
// Type encoding: v16@0:8
// Implementation: 0x107e6f77c

// -[SCMemoriesFeaturedStoryCellV2 _loadOverlayFromDownloading]
// Type encoding: v16@0:8
// Implementation: 0x107e6f914

// -[SCMemoriesFeaturedStoryCellV2 _stopListenToThumbnailUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e6faac

// -[SCMemoriesFeaturedStoryCellV2 _startListenToThumbnailUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e6fabc

// -[SCMemoriesFeaturedStoryCellV2 _startSpinner]
// Type encoding: v16@0:8
// Implementation: 0x107e6fad0

// -[SCMemoriesFeaturedStoryCellV2 _stopSpinner]
// Type encoding: v16@0:8
// Implementation: 0x107e6fc68

// -[SCMemoriesFeaturedStoryCellV2 _setViewingState:viewProgress:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x107e6fc78

// -[SCMemoriesFeaturedStoryCellV2 _getState]
// Type encoding: q16@0:8
// Implementation: 0x107e6fd9c

// -[SCMemoriesFeaturedStoryCellV2 _removeSubtitleIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107e6fe18

// -[SCMemoriesFeaturedStoryCellV2 _displaySubtitleIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107e6fe28

// -[SCMemoriesFeaturedStoryCellV2 _handleLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e6fe4c

// -[SCMemoriesFeaturedStoryCellV2 _handleActionMenuLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70010

// -[SCMemoriesFeaturedStoryCellV2 gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x107e700ec

// -[SCMemoriesFeaturedStoryCellV2 gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e701b0

// -[SCMemoriesFeaturedStoryCellV2 gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107e70208

// -[SCMemoriesFeaturedStoryCellV2 bindViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70220

// -[SCMemoriesFeaturedStoryCellV2 startGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e70224

// -[SCMemoriesFeaturedStoryCellV2 stopGeneratingUpdates]
// Type encoding: v16@0:8
// Implementation: 0x107e7029c

// -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x107e70310

// -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:]
// Type encoding: v56@0:8@16@24@32@40d48
// Implementation: 0x107e7033c

// -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didFailToUpdateStoryThumbnailForSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e705e4

// -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didLoadMiniThumbnail:snap:duration:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x107e70664

// -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateMemoriesCRFeaturedStoryThumbnailWithImage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e706dc

// -[SCMemoriesFeaturedStoryCellV2 thumbnailGenerator:didUpdateChatMediaThumbnailWithImage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e70870

// -[SCMemoriesFeaturedStoryCellV2 setSelected:selectOverlayImage:snapIds:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x107e70a04

// -[SCMemoriesFeaturedStoryCellV2 setSelectMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e70a08

// -[SCMemoriesFeaturedStoryCellV2 setSelectionOrderNumber:orderNumbersBySnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107e70a0c

// -[SCMemoriesFeaturedStoryCellV2 animateLongTapForTouchLocation:reverse:]
// Type encoding: v36@0:8{CGPoint=dd}16B32
// Implementation: 0x107e70a10

// -[SCMemoriesFeaturedStoryCellV2 interactionMode]
// Type encoding: Q16@0:8
// Implementation: 0x107e70b50

// -[SCMemoriesFeaturedStoryCellV2 canSelectAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x107e70b58

// -[SCMemoriesFeaturedStoryCellV2 _sendOutActionWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70bcc

// -[SCMemoriesFeaturedStoryCellV2 disableMode]
// Type encoding: B16@0:8
// Implementation: 0x107e70c80

// -[SCMemoriesFeaturedStoryCellV2 setDisableMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x107e70c90

// -[SCMemoriesFeaturedStoryCellV2 gestureHandler]
// Type encoding: @16@0:8
// Implementation: 0x107e70ca0

// -[SCMemoriesFeaturedStoryCellV2 setGestureHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70cc0

// -[SCMemoriesFeaturedStoryCellV2 thumbnailDownloader]
// Type encoding: @16@0:8
// Implementation: 0x107e70cd4

// -[SCMemoriesFeaturedStoryCellV2 setThumbnailDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70cf4

// -[SCMemoriesFeaturedStoryCellV2 featuredStoryActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x107e70d08

// -[SCMemoriesFeaturedStoryCellV2 setFeaturedStoryActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70d28

// -[SCMemoriesFeaturedStoryCellV2 featuredDataLogging]
// Type encoding: @16@0:8
// Implementation: 0x107e70d3c

// -[SCMemoriesFeaturedStoryCellV2 setFeaturedDataLogging:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70d5c

// -[SCMemoriesFeaturedStoryCellV2 bitmojiFetcher]
// Type encoding: @16@0:8
// Implementation: 0x107e70d70

// -[SCMemoriesFeaturedStoryCellV2 setBitmojiFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70d80

// -[SCMemoriesFeaturedStoryCellV2 memoriesEntryThumbnailGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107e70dc0

// -[SCMemoriesFeaturedStoryCellV2 setMemoriesEntryThumbnailGeneratorBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70dd0

// -[SCMemoriesFeaturedStoryCellV2 memoriesCRFeaturedStoryThumbnailGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107e70e10

// -[SCMemoriesFeaturedStoryCellV2 setMemoriesCRFeaturedStoryThumbnailGeneratorBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70e20

// -[SCMemoriesFeaturedStoryCellV2 memoriesChatMediaThumbnailGeneratorBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107e70e60

// -[SCMemoriesFeaturedStoryCellV2 setMemoriesChatMediaThumbnailGeneratorBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70e80

// -[SCMemoriesFeaturedStoryCellV2 viewModel]
// Type encoding: @16@0:8
// Implementation: 0x107e70e94

// -[SCMemoriesFeaturedStoryCellV2 circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x107e70ea4

// -[SCMemoriesFeaturedStoryCellV2 setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e70eb4

// -[SCMemoriesFeaturedStoryCellV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e70ef4

// +[SCMemoriesFeaturedStoryCellV2 cellHeightWithContainerWidth:circumstanceEngine:shouldUseNewLayout:]
// Type encoding: d36@0:8d16@24B32
// Implementation: 0x107e6ee68

// +[SCMemoriesFeaturedStoryCellV2 cellSizeForFeaturedStoriesWithContainerWidth:numberOfStories:sectionInsets:cellSpacing:circumstanceEngine:shouldUseNewLayout:]
// Type encoding: {CGSize=dd}60@0:8d16q24d32d40@48B56
// Implementation: 0x107e6ee98

@end
