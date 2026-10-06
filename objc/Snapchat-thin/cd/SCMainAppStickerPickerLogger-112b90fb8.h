// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainAppStickerPickerLogger
// Superclass: NSObject
// Address: 0x112b90fb8

@interface SCMainAppStickerPickerLogger

// Property: stickerSessionId; attributes: T@"NSString",R,N,V_stickerSessionId

// -[SCMainAppStickerPickerLogger initWithSourceType:commonLoggingParamsBuilder:cameoMetricsService:blizzardLogger:valdiReportedMetrics:valdiPickerSessionId:]
// Type encoding: @60@0:8Q16@24@32@40B48@52
// Implementation: 0x107fbc5f4

// -[SCMainAppStickerPickerLogger resetStickerSession]
// Type encoding: v16@0:8
// Implementation: 0x107fbc710

// -[SCMainAppStickerPickerLogger stickerPickerOpened]
// Type encoding: v16@0:8
// Implementation: 0x107fbc8e0

// -[SCMainAppStickerPickerLogger stickerPickerClosed]
// Type encoding: v16@0:8
// Implementation: 0x107fbc9cc

// -[SCMainAppStickerPickerLogger setupSearchQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fbcd84

// -[SCMainAppStickerPickerLogger didStartLoadingSticker:superCategoryType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107fbcdd8

// -[SCMainAppStickerPickerLogger didShowSticker:superCategoryType:timeToDisplay:indexPath:downloadSource:]
// Type encoding: v56@0:8@16q24d32@40q48
// Implementation: 0x107fbcff8

// -[SCMainAppStickerPickerLogger superCategoryDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fbd34c

// -[SCMainAppStickerPickerLogger searchDidChangeSuperCategory:loadedFromGifMetaSticker:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107fbd47c

// -[SCMainAppStickerPickerLogger logStickerPickerSessionEnded:categoryCellSourceType:searchQuery:index:bitmojiTabVisible:tabSource:stickerPickerType:captureSessionId:hasCameos:]
// Type encoding: v80@0:8@16Q24@32Q40B48q52q60@68B76
// Implementation: 0x107fbd484

// -[SCMainAppStickerPickerLogger logStickerPickerSearchEvent:results:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fbd688

// -[SCMainAppStickerPickerLogger viewStickerCategoryAtIndex:type:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107fbd750

// -[SCMainAppStickerPickerLogger _logChatDrawerTabSessionWithSourceTab:destinationTab:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107fbd8d4

// -[SCMainAppStickerPickerLogger _logCommentsStickerDrawerSessionWithSourceTab:destinationTab:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107fbdad4

// -[SCMainAppStickerPickerLogger _logStickerPickerSessionWithSticker:fromSearch:searchQuery:bitmojiTabVisible:sourceTab:stickerPickerType:captureSessionId:]
// Type encoding: v64@0:8@16B24@28B36q40q48@56
// Implementation: 0x107fbdc78

// -[SCMainAppStickerPickerLogger _logStickerPickerSearch:results:captureSessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107fbdf94

// -[SCMainAppStickerPickerLogger _logStickerPickerStickerPick:categoryCellSourceType:searchQuery:index:sourceTab:stickerPickerType:captureSessionId:hasCameos:]
// Type encoding: v76@0:8@16Q24@32Q40q48q56@64B72
// Implementation: 0x107fbe260

// -[SCMainAppStickerPickerLogger _logStickerPickerStickerPickEvent:sticker:categoryCellSourceType:searchQuery:index:sourceTab:stickerPickerType:captureSessionId:hasCameos:]
// Type encoding: v84@0:8@16@24Q32@40Q48q56q64@72B80
// Implementation: 0x107fbe390

// -[SCMainAppStickerPickerLogger _logCreativeToolsStickerPick:position:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107fbe660

// -[SCMainAppStickerPickerLogger _logStickerSearchStickerPickerEvents:categoryCellSourceType:query:index:sourceTab:stickerPickerType:]
// Type encoding: v64@0:8@16Q24@32Q40q48q56
// Implementation: 0x107fbe85c

// -[SCMainAppStickerPickerLogger _logPickerTabViewWithStickers:destinationTab:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107fbe9d0

// -[SCMainAppStickerPickerLogger _sentSticker:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107fbf1b4

// -[SCMainAppStickerPickerLogger _didLoadSticker:sourceTab:indexPath:timeToDisplay:downloadSource:]
// Type encoding: v56@0:8@16q24@32d40q48
// Implementation: 0x107fbf3d0

// -[SCMainAppStickerPickerLogger _logStickerLoadLatencyWithSticker:timeToDisplay:sourceTab:downloadSource:]
// Type encoding: v48@0:8@16d24q32q40
// Implementation: 0x107fbf790

// -[SCMainAppStickerPickerLogger _chatDrawerLogFromDictionary:keyType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107fbf974

// -[SCMainAppStickerPickerLogger _isValidSearchQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x107fbfd08

// -[SCMainAppStickerPickerLogger _isActive]
// Type encoding: B16@0:8
// Implementation: 0x107fbfd30

// -[SCMainAppStickerPickerLogger _fireEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fbfd58

// -[SCMainAppStickerPickerLogger _sanitizeSearchTerm:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fbfe00

// -[SCMainAppStickerPickerLogger didUpdateVisibleItemsWithStickers:sourceTab:hasCameos:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x107fbfe84

// -[SCMainAppStickerPickerLogger logDrawerTabLatencyOnStickerPickerMenuSourceType:sourceTab:stickerPickerTabSection:timeToFirstAsset:avgTimeToRenderVisibleAssets:]
// Type encoding: v56@0:8Q16q24q32d40d48
// Implementation: 0x107fc05f4

// -[SCMainAppStickerPickerLogger logStickerQuickSearchBarActionDisplayedSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc06bc

// -[SCMainAppStickerPickerLogger logStickerQuickSearchBarActionWithSearchType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fc07a8

// -[SCMainAppStickerPickerLogger _resetStickerDrawerLoggingDictionaries]
// Type encoding: v16@0:8
// Implementation: 0x107fc09dc

// -[SCMainAppStickerPickerLogger willStartSearchWithQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc0a58

// -[SCMainAppStickerPickerLogger didLoadHometabContent]
// Type encoding: v16@0:8
// Implementation: 0x107fc0a88

// -[SCMainAppStickerPickerLogger stickerSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107fc0a94

// -[SCMainAppStickerPickerLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fc0a9c

// +[SCMainAppStickerPickerLogger logFriendmojiPickerCloseWithSourceType:stickerId:friendmojiType:snapSessionId:mischiefId:blizzardLogger:]
// Type encoding: v64@0:8q16@24q32@40@48@56
// Implementation: 0x107fbd7d4

@end
