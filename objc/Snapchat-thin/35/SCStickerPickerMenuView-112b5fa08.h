// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerPickerMenuView
// Superclass: UIView
// Address: 0x112b5fa08

@interface SCStickerPickerMenuView

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lastSelectedSubCategory; attributes: T@"NSMutableDictionary",&,N,V_lastSelectedSubCategory
// Property: delegate; attributes: T@"<SCStickerPickerMenuDelegate>",W,N,V_delegate
// Property: searchQueryObservable; attributes: T@"SCObservable",R,N
// Property: explicitSearchQueryObservable; attributes: T@"SCObservable",R,N
// Property: dataSource; attributes: T@"<SCStickerPickerMenuDataSource>",W,N,V_dataSource
// Property: venueReloader; attributes: T@"<SCVenueInfoReloader>",W,N,V_venueReloader
// Property: isOpen; attributes: TB,N,V_isOpen
// Property: itemPresentationModelSource; attributes: T@"<SCStickerItemPresentationModelSource>",W,N,V_itemPresentationModelSource
// Property: interactionLoggingDelegate; attributes: T@"<SCStickerPickerMenuInteractionLoggingDelegate>",W,N,V_interactionLoggingDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStickerPickerMenuView openAtCategory:stickerOffset:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10719e708

// -[SCStickerPickerMenuView initWithFrame:sourceType:isQuickSend:hideGiphy:commonLoggingParamsBuilder:userSession:bottomInset:stickerPickerLogger:ctpItemViewService:presentationModelProvider:friendmojiFilteredContainer:stickerSearcher:stickerInjector:customStickerManager:creativeToolsABProvider:aiStickersService:runtime:bitmojiPickerDelegate:bitmoji3DContentFetcher:userBlizzardLogger:avatarProvider:hideCategoryIcons:removeTopInset:]
// Type encoding: @208@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16Q48B56B60@64@72d80@88@96@104@112@120@128@136@144@152@160@168@176@184@192B200B204
// Implementation: 0x10719e8d8

// -[SCStickerPickerMenuView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1071a1e50

// -[SCStickerPickerMenuView isSearchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1071a1eb0

// -[SCStickerPickerMenuView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1071a1edc

// -[SCStickerPickerMenuView setupSafeAreaFrame:bottomInset:]
// Type encoding: v56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
// Implementation: 0x1071a1f68

// -[SCStickerPickerMenuView _backgroundColorForBlurViewWithAlpha:]
// Type encoding: @24@0:8d16
// Implementation: 0x1071a1f78

// -[SCStickerPickerMenuView setGradientWithinSearchCell:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071a1ff4

// -[SCStickerPickerMenuView reloadDataWithDataSourceUpdateHint:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a24d0

// -[SCStickerPickerMenuView reloadDataWithDataSourceUpdateHint:shouldRefreshSuperCategoryIcons:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071a24d8

// -[SCStickerPickerMenuView resetLayout]
// Type encoding: v16@0:8
// Implementation: 0x1071a24dc

// -[SCStickerPickerMenuView _resetLayoutWithUpdateHint:shouldRefreshSuperCategoryIcons:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071a24e8

// -[SCStickerPickerMenuView _topInsetForBackgroundView]
// Type encoding: d16@0:8
// Implementation: 0x1071a2e00

// -[SCStickerPickerMenuView _configureStickerCategoryIconCell:categoryIcon:defaultAlpha:isHighlighted:]
// Type encoding: v44@0:8@16@24d32B40
// Implementation: 0x1071a2e6c

// -[SCStickerPickerMenuView _didDisplayStickerPageAtIndexPath:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071a31a4

// -[SCStickerPickerMenuView _checkWillDisplayFriendmojiHintForCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a3380

// -[SCStickerPickerMenuView _didEndDisplayingStickerPageAtIndexPath:cell:isDragging:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1071a342c

// -[SCStickerPickerMenuView searchViewStyle]
// Type encoding: q16@0:8
// Implementation: 0x1071a3604

// -[SCStickerPickerMenuView searchQueryObservable]
// Type encoding: @16@0:8
// Implementation: 0x1071a361c

// -[SCStickerPickerMenuView explicitSearchQueryObservable]
// Type encoding: @16@0:8
// Implementation: 0x1071a364c

// -[SCStickerPickerMenuView _ctpSearchLoggerSectionForIndexPath:stickerType:]
// Type encoding: Q32@0:8@16Q24
// Implementation: 0x1071a367c

// -[SCStickerPickerMenuView searchBarFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1071a36d8

// -[SCStickerPickerMenuView stickerSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1071a3714

// -[SCStickerPickerMenuView enterSearchCount]
// Type encoding: q16@0:8
// Implementation: 0x1071a3724

// -[SCStickerPickerMenuView pretypeStickerTagSelectCount]
// Type encoding: q16@0:8
// Implementation: 0x1071a3734

// -[SCStickerPickerMenuView prefixMatchStickerTagSelectCount]
// Type encoding: q16@0:8
// Implementation: 0x1071a3744

// -[SCStickerPickerMenuView searchViewBackButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a3754

// -[SCStickerPickerMenuView searchView:didChangeToText:byChangingCharactersInRange:replacementString:]
// Type encoding: v56@0:8@16@24{_NSRange=QQ}32@48
// Implementation: 0x1071a3854

// -[SCStickerPickerMenuView searchViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a390c

// -[SCStickerPickerMenuView searchViewDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a3974

// -[SCStickerPickerMenuView searchViewShouldReturn:withSearchText:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1071a3978

// -[SCStickerPickerMenuView searchViewShouldDeleteCharacter:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071a3980

// -[SCStickerPickerMenuView _updatePretypeSearchView]
// Type encoding: v16@0:8
// Implementation: 0x1071a3988

// -[SCStickerPickerMenuView _configurePreTypeWithQueryKeywords:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a3be4

// -[SCStickerPickerMenuView stickerPickerCatogoryCellCanSelectSticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071a3d20

// -[SCStickerPickerMenuView categoryCell:stickerSelected:center:thumbnail:indexPath:searchSource:]
// Type encoding: v72@0:8@16@24{CGPoint=dd}32@48@56q64
// Implementation: 0x1071a3d64

// -[SCStickerPickerMenuView categoryCell:metaStickerSelected:index:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1071a40d0

// -[SCStickerPickerMenuView currentSuperCategoryType]
// Type encoding: q16@0:8
// Implementation: 0x1071a4128

// -[SCStickerPickerMenuView _tabTypeForIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x1071a4174

// -[SCStickerPickerMenuView stickerPickerType]
// Type encoding: q16@0:8
// Implementation: 0x1071a41e4

// -[SCStickerPickerMenuView openStickerExplicitSearch]
// Type encoding: v16@0:8
// Implementation: 0x1071a41ec

// -[SCStickerPickerMenuView closeSearch]
// Type encoding: v16@0:8
// Implementation: 0x1071a42b4

// -[SCStickerPickerMenuView performSearchPillSearch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a432c

// -[SCStickerPickerMenuView explicitSearch]
// Type encoding: @16@0:8
// Implementation: 0x1071a4404

// -[SCStickerPickerMenuView lockScroll]
// Type encoding: v16@0:8
// Implementation: 0x1071a4434

// -[SCStickerPickerMenuView unlockScroll]
// Type encoding: v16@0:8
// Implementation: 0x1071a4474

// -[SCStickerPickerMenuView _useRevertedPreviewStickerPickerScrollBehavior]
// Type encoding: B16@0:8
// Implementation: 0x1071a44b4

// -[SCStickerPickerMenuView stickerPickerCategoryCellScrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a4514

// -[SCStickerPickerMenuView stickerPickerCategoryCellDidTapEmptyScreen]
// Type encoding: v16@0:8
// Implementation: 0x1071a45d8

// -[SCStickerPickerMenuView stickerPickerCategoryCellScrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a4650

// -[SCStickerPickerMenuView stickerPickerCategoryCellScrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071a46e0

// -[SCStickerPickerMenuView didUpdateVisibleItemsWithStickers:sourceTab:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1071a4770

// -[SCStickerPickerMenuView createCustomStickerButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x1071a4784

// -[SCStickerPickerMenuView locationButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x1071a482c

// -[SCStickerPickerMenuView planButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x1071a48a8

// -[SCStickerPickerMenuView pollButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x1071a4924

// -[SCStickerPickerMenuView updateCustomStickerDataToBeDeleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a49a0

// -[SCStickerPickerMenuView _convertStickerLocation:]
// Type encoding: {CGPoint=dd}24@0:8@16
// Implementation: 0x1071a4a24

// -[SCStickerPickerMenuView stickerPickerCategoryFriendmojiAvatarIdChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a4ab4

// -[SCStickerPickerMenuView avatarPickerRequestedWithBitmojiUsers:targetView:friendmojiPickerScopeDelegate:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1071a4af8

// -[SCStickerPickerMenuView friendmojiHintRequestedWithTargetView:friendmojiHintScopeDelegate:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1071a4b94

// -[SCStickerPickerMenuView friendmojiAvatarPickerClosedWithFriendmojiType:selectedStickerId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1071a4c10

// -[SCStickerPickerMenuView bitmojiCTAStickerButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x1071a4c70

// -[SCStickerPickerMenuView stickerSearchQuerySuggestionTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a4ca4

// -[SCStickerPickerMenuView stickerPickerCategoryCell:presentStickerMenuForItem:presentationModelProvider:itemViewService:indexPath:superCategoryType:]
// Type encoding: v64@0:8@16@24@32@40@48q56
// Implementation: 0x1071a4d7c

// -[SCStickerPickerMenuView stickerPickerCategoryCell:willDisplayCellWithSticker:indexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071a4e68

// -[SCStickerPickerMenuView stickerPickerCategoryCell:didStartLoadingSticker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071a4f38

// -[SCStickerPickerMenuView stickerPickerCategoryCell:didShowSticker:timeToDisplay:indexPath:downloadSource:]
// Type encoding: v56@0:8@16@24d32@40q48
// Implementation: 0x1071a4fbc

// -[SCStickerPickerMenuView currentSearchQueryForStickerPickerCategoryCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071a51d0

// -[SCStickerPickerMenuView venuesInfoToDisplayForVenueStickerInCategoryCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071a5200

// -[SCStickerPickerMenuView categoryCellDidTapToReloadVenues:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a528c

// -[SCStickerPickerMenuView didTapVenueSticker:categoryCell:locationSticker:index:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x1071a52bc

// -[SCStickerPickerMenuView topicsInfoToDisplayForTopicStickerInCategoryCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071a545c

// -[SCStickerPickerMenuView bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a54e8

// -[SCStickerPickerMenuView collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071a54ec

// -[SCStickerPickerMenuView collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071a5820

// -[SCStickerPickerMenuView numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071a58d0

// -[SCStickerPickerMenuView collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1071a5918

// -[SCStickerPickerMenuView collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071a599c

// -[SCStickerPickerMenuView collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1071a60e8

// -[SCStickerPickerMenuView scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a65f0

// -[SCStickerPickerMenuView scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a67cc

// -[SCStickerPickerMenuView scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071a683c

// -[SCStickerPickerMenuView scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a68bc

// -[SCStickerPickerMenuView setSelectedIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a6988

// -[SCStickerPickerMenuView setSelectedIndex:highlightedIndex:selectionPercentage:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x1071a69d0

// -[SCStickerPickerMenuView categoryTypeForIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x1071a6c6c

// -[SCStickerPickerMenuView _saveCategoryContentOffsetY]
// Type encoding: v16@0:8
// Implementation: 0x1071a6cdc

// -[SCStickerPickerMenuView selectedCategoryIndexPath]
// Type encoding: @16@0:8
// Implementation: 0x1071a6e68

// -[SCStickerPickerMenuView openAtCategory:sticker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071a6e98

// -[SCStickerPickerMenuView openSuperCategoryIfAvailableWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071a7274

// -[SCStickerPickerMenuView prepareToAnimateViewsInIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1071a7380

// -[SCStickerPickerMenuView animateViewsInWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071a73b0

// -[SCStickerPickerMenuView animateViewsInWithDuration:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x1071a73bc

// -[SCStickerPickerMenuView _animateViewsOut]
// Type encoding: v16@0:8
// Implementation: 0x1071a74c8

// -[SCStickerPickerMenuView animateViewsOutWithDuration:completion:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x1071a7580

// -[SCStickerPickerMenuView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x1071a7684

// -[SCStickerPickerMenuView close]
// Type encoding: v16@0:8
// Implementation: 0x1071a77a8

// -[SCStickerPickerMenuView closeWithShouldClearSearchBar:shouldAnimate:withStickerPicked:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x1071a77bc

// -[SCStickerPickerMenuView _closeWithShouldClearSearchBar:shouldAnimate:withStickerPicked:shouldHandleTransition:]
// Type encoding: v32@0:8B16B20B24B28
// Implementation: 0x1071a77c4

// -[SCStickerPickerMenuView _removeBlurAnimationAndFreezeLayerTree:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071a7c0c

// -[SCStickerPickerMenuView _beginBlurAnimation]
// Type encoding: v16@0:8
// Implementation: 0x1071a8098

// -[SCStickerPickerMenuView _panVertical:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a8144

// -[SCStickerPickerMenuView _pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a8344

// -[SCStickerPickerMenuView _updateTranslationForDismissalAnimationWithAlpha:translation:isDragging:]
// Type encoding: v36@0:8d16d24B32
// Implementation: 0x1071a86a0

// -[SCStickerPickerMenuView _updateTranslationForDismissalAnimationWithPercentage:]
// Type encoding: v24@0:8d16
// Implementation: 0x1071a8a3c

// -[SCStickerPickerMenuView _didTapOnIconsCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a8ba4

// -[SCStickerPickerMenuView _updateAndSelectStickerCategoryCellWithSubCategory:withCurrentSelectedCategoryIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071a8d6c

// -[SCStickerPickerMenuView _logStickerCategoryViewedAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a8f88

// -[SCStickerPickerMenuView _updateContextBasedOnCategory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a9038

// -[SCStickerPickerMenuView _removeStickerPackContext]
// Type encoding: v16@0:8
// Implementation: 0x1071a9174

// -[SCStickerPickerMenuView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071a91c4

// -[SCStickerPickerMenuView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1071a9358

// -[SCStickerPickerMenuView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1071a9418

// -[SCStickerPickerMenuView updateVisibleStickerCategoryCellCollectionViewAnimated:topMargin:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x1071a947c

// -[SCStickerPickerMenuView resetStickerScrollPositionsToTop]
// Type encoding: v16@0:8
// Implementation: 0x1071a9768

// -[SCStickerPickerMenuView updateChatExplicitSearchText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a98cc

// -[SCStickerPickerMenuView _currentStickerPickerCategoryCell]
// Type encoding: @16@0:8
// Implementation: 0x1071a9940

// -[SCStickerPickerMenuView _selectedStickerPickerCategoryCell]
// Type encoding: @16@0:8
// Implementation: 0x1071a99c8

// -[SCStickerPickerMenuView _startStickerSearch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a9acc

// -[SCStickerPickerMenuView _updateSearchSession]
// Type encoding: v16@0:8
// Implementation: 0x1071a9b18

// -[SCStickerPickerMenuView _startCTPStickerSearch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a9bd4

// -[SCStickerPickerMenuView _handleCTPStickerSearchResults:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a9c9c

// -[SCStickerPickerMenuView _handleCTPStickerSearching:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a9d6c

// -[SCStickerPickerMenuView _handleCTPStrategyCompleteWithStateWrapper:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a9dd0

// -[SCStickerPickerMenuView _handleCTPStickerSearchCompleteWithStateWrapper:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071a9e4c

// -[SCStickerPickerMenuView _handleCTPStickerSearchError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071aa108

// -[SCStickerPickerMenuView stickerSearchDebugHTML]
// Type encoding: @16@0:8
// Implementation: 0x1071aa110

// -[SCStickerPickerMenuView _avatarIdForSearch]
// Type encoding: @16@0:8
// Implementation: 0x1071aa140

// -[SCStickerPickerMenuView _friendAvatarIdForSearch]
// Type encoding: @16@0:8
// Implementation: 0x1071aa1fc

// -[SCStickerPickerMenuView _startForYouResults]
// Type encoding: v16@0:8
// Implementation: 0x1071aa2c4

// -[SCStickerPickerMenuView _convertForYouSectionsToSCStickers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071aa70c

// -[SCStickerPickerMenuView _handleForYouStickersLoaded:columnCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1071aa988

// -[SCStickerPickerMenuView _startCTPGiphyTrending]
// Type encoding: v16@0:8
// Implementation: 0x1071aaa24

// -[SCStickerPickerMenuView _handleCTPGiphyTrendingLoaded:columnCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1071aae64

// -[SCStickerPickerMenuView _updatePreTypeSearchResultsSection:stickers:columnCount:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x1071aaf04

// -[SCStickerPickerMenuView _removeGiphyTrendingFromPreType]
// Type encoding: v16@0:8
// Implementation: 0x1071ab060

// -[SCStickerPickerMenuView _removeForYouFromPreType]
// Type encoding: v16@0:8
// Implementation: 0x1071ab0c0

// -[SCStickerPickerMenuView _removeResultsFromPreTypeSection:activeCategoryCell:currentActiveStickerCategory:giphyTrending:sectionIndex:]
// Type encoding: v52@0:8q16@24@32B40Q44
// Implementation: 0x1071ab11c

// -[SCStickerPickerMenuView _forYouStickerCategoryIndex:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1071ab278

// -[SCStickerPickerMenuView _giphyStickerCategoryIndex:giphyTrending:]
// Type encoding: Q28@0:8@16B24
// Implementation: 0x1071ab2e4

// -[SCStickerPickerMenuView _stopStickerSearch]
// Type encoding: v16@0:8
// Implementation: 0x1071ab3e4

// -[SCStickerPickerMenuView _queryKeywordsFromPrefixMatchedQueries:searchText:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071ab428

// -[SCStickerPickerMenuView _filteredSearchResultsFromCTPItemResults:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071ab618

// -[SCStickerPickerMenuView _handleIntermixedStickerSearchResult:searchText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071ab854

// -[SCStickerPickerMenuView _handleStickerIntermixedCategory:flatResults:prefixMatchedQuerys:searchText:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1071ab8d4

// -[SCStickerPickerMenuView _queuedHandleStickerIntermixedCategory:flatResults:prefixMatchedQueries:searchText:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1071aba6c

// -[SCStickerPickerMenuView _putSearchUIIntoState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071abd00

// -[SCStickerPickerMenuView _categoryIconCellAccessibilityIdentifierFromIndexPath:]
// Type encoding: @24@0:8q16
// Implementation: 0x1071ac6a4

// -[SCStickerPickerMenuView _addStickerPickerDebuggingView]
// Type encoding: v16@0:8
// Implementation: 0x1071ac6f8

// -[SCStickerPickerMenuView _viewWasDoubleTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ac9e4

// -[SCStickerPickerMenuView isOpen]
// Type encoding: B16@0:8
// Implementation: 0x1071acaa0

// -[SCStickerPickerMenuView setIsOpen:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071acab0

// -[SCStickerPickerMenuView _correctIndexForSuperIcon:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071acac0

// -[SCStickerPickerMenuView _subIconIndexToCategoryIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071acaf4

// -[SCStickerPickerMenuView _categoryIndexToSubIconIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071acb48

// -[SCStickerPickerMenuView setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071acb7c

// -[SCStickerPickerMenuView didSelectSuperIconAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071acc64

// -[SCStickerPickerMenuView _logTimeToDisplayMetricsForCurrentStickerPickerCategoryCell]
// Type encoding: v16@0:8
// Implementation: 0x1071accfc

// -[SCStickerPickerMenuView _updateScissorIconIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1071ace38

// -[SCStickerPickerMenuView _selectedCategoryhasSubCategories]
// Type encoding: B16@0:8
// Implementation: 0x1071ad034

// -[SCStickerPickerMenuView pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x1071ad0b0

// -[SCStickerPickerMenuView canPresentPlanCreation]
// Type encoding: B16@0:8
// Implementation: 0x1071ad168

// -[SCStickerPickerMenuView didTapPlanSticker:categoryCell:index:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1071ad1ac

// -[SCStickerPickerMenuView delegate]
// Type encoding: @16@0:8
// Implementation: 0x1071ad31c

// -[SCStickerPickerMenuView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ad33c

// -[SCStickerPickerMenuView dataSource]
// Type encoding: @16@0:8
// Implementation: 0x1071ad350

// -[SCStickerPickerMenuView venueReloader]
// Type encoding: @16@0:8
// Implementation: 0x1071ad370

// -[SCStickerPickerMenuView setVenueReloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ad390

// -[SCStickerPickerMenuView itemPresentationModelSource]
// Type encoding: @16@0:8
// Implementation: 0x1071ad3a4

// -[SCStickerPickerMenuView setItemPresentationModelSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ad3c4

// -[SCStickerPickerMenuView interactionLoggingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1071ad3d8

// -[SCStickerPickerMenuView setInteractionLoggingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ad3f8

// -[SCStickerPickerMenuView lastSelectedSubCategory]
// Type encoding: @16@0:8
// Implementation: 0x1071ad40c

// -[SCStickerPickerMenuView setLastSelectedSubCategory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ad41c

// -[SCStickerPickerMenuView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071ad45c

// +[SCStickerPickerMenuView pickerMenuCornerRadiusForPreview]
// Type encoding: d16@0:8
// Implementation: 0x1071803d0

// +[SCStickerPickerMenuView shouldEnableStickerSearchPretyping]
// Type encoding: B16@0:8
// Implementation: 0x10719e828

@end
