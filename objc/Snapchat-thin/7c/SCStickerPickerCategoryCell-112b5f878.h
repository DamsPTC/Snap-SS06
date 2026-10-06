// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerPickerCategoryCell
// Superclass: UICollectionViewCell
// Address: 0x112b5f878

@interface SCStickerPickerCategoryCell

// Property: layout; attributes: T@"SCStickerPickerCategoryLayout",R,N,V_layout
// Property: expandedStickerKind; attributes: T@"NSString",&,N,V_expandedStickerKind
// Property: expandedStickerIndexPath; attributes: T@"NSIndexPath",&,N,V_expandedStickerIndexPath
// Property: delegate; attributes: T@"<SCStickerPickerCategoryDelegate>",W,N,V_delegate
// Property: pickerMenuDelegate; attributes: T@"<SCStickerPickerMenuDelegate>",W,N,V_pickerMenuDelegate
// Property: itemPresentationModelSource; attributes: T@"<SCStickerItemPresentationModelSource>",W,N,V_itemPresentationModelSource
// Property: bitmojiPickerDelegate; attributes: T@"<SCBitmojiFriendmojiPickerScopeDelegate>",W,N,V_bitmojiPickerDelegate
// Property: isDisplaying; attributes: TB,N,V_isDisplaying
// Property: contentOffsetY; attributes: Td,N
// Property: bottomInset; attributes: Td,N,V_bottomInset
// Property: isAtTop; attributes: TB,R,N
// Property: sourceType; attributes: TQ,N,V_sourceType
// Property: userBlizzardLogger; attributes: T@"SCLazy",&,N,V_userBlizzardLogger
// Property: superCategoryType; attributes: Tq,R,N,V_superCategoryType
// Property: ctpItemViewService; attributes: T@"SCLazy",&,N,V_ctpItemViewService
// Property: friendmojiFilteredContainer; attributes: T@"<SCChatFriendmojiUserFilteredContainer>",&,N,V_friendmojiFilteredContainer
// Property: showAutocompleteToggle; attributes: TB,N,V_showAutocompleteToggle
// Property: aiStickersService; attributes: T@"<PlusAIStickersService>",&,N,V_aiStickersService
// Property: runtime; attributes: T@"<SCValdiRuntimeProtocol>",&,N,V_runtime
// Property: creativeToolsABProvider; attributes: T@"<SCCreativeToolsABProviding>",&,N,V_creativeToolsABProvider
// Property: bitmoji3DContentFetcher; attributes: T@"SCLazy",&,N,V_bitmoji3DContentFetcher
// Property: preferences; attributes: T@"SCLazy",&,N,V_preferences
// Property: avatarProvider; attributes: T@"SCLazy",&,N,V_avatarProvider
// Property: timeToDisplayMetrics; attributes: T@"NSMutableDictionary",R,N,V_timeToDisplayMetrics
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStickerPickerCategoryCell initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10718ddc4

// -[SCStickerPickerCategoryCell initWithFrame:shouldIncludeQueryHeader:useVerticalGiphySection:sourceType:ctpItemViewService:friendmojiFilteredContainer:bitmoji3DContentFetcher:preferences:userBlizzardLogger:avatarProvider:]
// Type encoding: @112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16B48B52Q56@64@72@80@88@96@104
// Implementation: 0x10718de00

// -[SCStickerPickerCategoryCell _registerReusableViews]
// Type encoding: v16@0:8
// Implementation: 0x10718e5d8

// -[SCStickerPickerCategoryCell _addUIStateSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10718e9a0

// -[SCStickerPickerCategoryCell _addChatStickerSearchBarViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10718ef18

// -[SCStickerPickerCategoryCell _stickerSearchSource]
// Type encoding: q16@0:8
// Implementation: 0x10718f248

// -[SCStickerPickerCategoryCell _shouldExplicitSearchBarBeVisible]
// Type encoding: B16@0:8
// Implementation: 0x10718f284

// -[SCStickerPickerCategoryCell updateExplicitSearchBarText]
// Type encoding: v16@0:8
// Implementation: 0x10718f314

// -[SCStickerPickerCategoryCell _updateDirectionalLockEnabled]
// Type encoding: v16@0:8
// Implementation: 0x10718f38c

// -[SCStickerPickerCategoryCell setCreativeToolsABProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10718f4b4

// -[SCStickerPickerCategoryCell _updateStyles]
// Type encoding: v16@0:8
// Implementation: 0x10718f4f4

// -[SCStickerPickerCategoryCell dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10718f554

// -[SCStickerPickerCategoryCell observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x10718f5c4

// -[SCStickerPickerCategoryCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x10718f698

// -[SCStickerPickerCategoryCell performCollectionViewUpdates:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10718f790

// -[SCStickerPickerCategoryCell _modelForState]
// Type encoding: @16@0:8
// Implementation: 0x10718f7ac

// -[SCStickerPickerCategoryCell _updateUIState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10718f9d8

// -[SCStickerPickerCategoryCell _displayFeedZeroState]
// Type encoding: v16@0:8
// Implementation: 0x10718fb18

// -[SCStickerPickerCategoryCell _displayCustomStickerZeroState]
// Type encoding: v16@0:8
// Implementation: 0x107190220

// -[SCStickerPickerCategoryCell _removeFeedZeroState]
// Type encoding: v16@0:8
// Implementation: 0x1071905d8

// -[SCStickerPickerCategoryCell _collectionViewInsetDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10719060c

// -[SCStickerPickerCategoryCell _collectionTopInset]
// Type encoding: d16@0:8
// Implementation: 0x107190678

// -[SCStickerPickerCategoryCell _subscribeToKeyboardNotifications]
// Type encoding: v16@0:8
// Implementation: 0x1071906ec

// -[SCStickerPickerCategoryCell _unsubscribeFromKeyboardNotifications]
// Type encoding: v16@0:8
// Implementation: 0x107190788

// -[SCStickerPickerCategoryCell _keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x107190814

// -[SCStickerPickerCategoryCell _keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x107190828

// -[SCStickerPickerCategoryCell setUserBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719083c

// -[SCStickerPickerCategoryCell setCtpItemViewService:]
// Type encoding: v24@0:8@16
// Implementation: 0x107190874

// -[SCStickerPickerCategoryCell setSourceType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071908b4

// -[SCStickerPickerCategoryCell _spacing]
// Type encoding: d16@0:8
// Implementation: 0x107190900

// -[SCStickerPickerCategoryCell _sectionTopSpacing]
// Type encoding: d16@0:8
// Implementation: 0x107190970

// -[SCStickerPickerCategoryCell _sectionBottomSpacing]
// Type encoding: d16@0:8
// Implementation: 0x1071909f4

// -[SCStickerPickerCategoryCell _itemHeightWithSpacing:shouldDisplayScrollbar:]
// Type encoding: d28@0:8d16B24
// Implementation: 0x107190a78

// -[SCStickerPickerCategoryCell _scrollScrollbarToCurrentSectionAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107190ad0

// -[SCStickerPickerCategoryCell updateStickersInSection:columnCount:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107190bac

// -[SCStickerPickerCategoryCell removeSection:]
// Type encoding: v24@0:8q16
// Implementation: 0x107190c94

// -[SCStickerPickerCategoryCell resetLayout]
// Type encoding: v16@0:8
// Implementation: 0x107190d3c

// -[SCStickerPickerCategoryCell layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107190f4c

// -[SCStickerPickerCategoryCell _layoutCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x107190f94

// -[SCStickerPickerCategoryCell _calculateContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x107190fe8

// -[SCStickerPickerCategoryCell setStickerCategory:superCategoryType:queryKeywords:enableWhiteUI:columnCount:userSession:explicitSearchDelegate:stickerInjector:ctpItemViewService:]
// Type encoding: v84@0:8@16q24@32B40q44@52@60@68@76
// Implementation: 0x107191024

// -[SCStickerPickerCategoryCell _updateBirthdaySearchPillIfNeededForFriendmojiUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107191470

// -[SCStickerPickerCategoryCell _onAvatarCreatedFromBitmojiCTA]
// Type encoding: v16@0:8
// Implementation: 0x107191634

// -[SCStickerPickerCategoryCell _updateStickerSearchDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107191684

// -[SCStickerPickerCategoryCell _reloadCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x107191ae4

// -[SCStickerPickerCategoryCell setContentOffsetY:]
// Type encoding: v24@0:8d16
// Implementation: 0x107191b64

// -[SCStickerPickerCategoryCell contentOffsetY]
// Type encoding: d16@0:8
// Implementation: 0x107191c18

// -[SCStickerPickerCategoryCell setBottomInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x107191c3c

// -[SCStickerPickerCategoryCell isAtTop]
// Type encoding: B16@0:8
// Implementation: 0x107191d34

// -[SCStickerPickerCategoryCell scrollToTop]
// Type encoding: v16@0:8
// Implementation: 0x107191d7c

// -[SCStickerPickerCategoryCell isCollectionViewGestureRecognizer:]
// Type encoding: B24@0:8@16
// Implementation: 0x107191dc8

// -[SCStickerPickerCategoryCell canSubCellCollectionViewHandleGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x107191e10

// -[SCStickerPickerCategoryCell fadeOutTooltip]
// Type encoding: v16@0:8
// Implementation: 0x10719201c

// -[SCStickerPickerCategoryCell showToolTipBelowFirstCellWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719210c

// -[SCStickerPickerCategoryCell layoutSublayersOfLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107192458

// -[SCStickerPickerCategoryCell numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x10719263c

// -[SCStickerPickerCategoryCell collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10719271c

// -[SCStickerPickerCategoryCell collectionView:layout:referenceSizeForHeaderInSection:]
// Type encoding: {CGSize=dd}40@0:8@16@24q32
// Implementation: 0x1071928f0

// -[SCStickerPickerCategoryCell collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x107192a58

// -[SCStickerPickerCategoryCell collectionView:layout:minimumInteritemSpacingForSectionAt:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x107192dbc

// -[SCStickerPickerCategoryCell collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107192ddc

// -[SCStickerPickerCategoryCell _indexPathForCTAInPreviewIsValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x10719362c

// -[SCStickerPickerCategoryCell _shouldUpdateIndexPathAfterCTAIsInPreview:]
// Type encoding: B24@0:8@16
// Implementation: 0x107193684

// -[SCStickerPickerCategoryCell _querySuggestorCellForItemAtIndexPath:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071936dc

// -[SCStickerPickerCategoryCell _horizontallyScrollingCellForItemAtIndexPath:correctedSection:collectionView:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x107193a08

// -[SCStickerPickerCategoryCell _lineSpacingForItems:width:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x107193dfc

// -[SCStickerPickerCategoryCell _dummyCellForItemAtIndexPath:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107193f88

// -[SCStickerPickerCategoryCell _bitmojiCTAUpsellCellForItemAtIndexPath:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107193f9c

// -[SCStickerPickerCategoryCell _giphySectionCellForItemAtIndexPath:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107194024

// -[SCStickerPickerCategoryCell isGiphySectionAtIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x1071940b4

// -[SCStickerPickerCategoryCell customStickerCreateCell:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10719414c

// -[SCStickerPickerCategoryCell _locationButtonCell:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071944a0

// -[SCStickerPickerCategoryCell _planButtonCell:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071947f0

// -[SCStickerPickerCategoryCell _pollButtonCell:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107194b40

// -[SCStickerPickerCategoryCell _applyChatDrawerStylingToPillView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107194edc

// -[SCStickerPickerCategoryCell _applyColorTokensToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107194ee0

// -[SCStickerPickerCategoryCell _customStickerCellForItemAtIndexPath:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071950f8

// -[SCStickerPickerCategoryCell _stickerCellForItemAtIndexPath:itemIndexPath:collectionView:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107195194

// -[SCStickerPickerCategoryCell _trackSticker:timeToDisplay:indexPath:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x10719555c

// -[SCStickerPickerCategoryCell collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107195704

// -[SCStickerPickerCategoryCell _didSelectSticker:cell:thumbnailImage:indexPath:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107195b54

// -[SCStickerPickerCategoryCell collectionView:viewForSupplementaryElementOfKind:atIndexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107195c6c

// -[SCStickerPickerCategoryCell collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107195f44

// -[SCStickerPickerCategoryCell collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107196234

// -[SCStickerPickerCategoryCell collectionView:willDisplaySupplementaryView:forElementKind:atIndexPath:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107196330

// -[SCStickerPickerCategoryCell _correctSectionIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x1071963fc

// -[SCStickerPickerCategoryCell _uncorrectSectionIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x10719641c

// -[SCStickerPickerCategoryCell _contextsForNetworkRequest]
// Type encoding: @16@0:8
// Implementation: 0x107196430

// -[SCStickerPickerCategoryCell _disposeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107196600

// -[SCStickerPickerCategoryCell _subscribeToFeedCategoryIfAppropriate]
// Type encoding: v16@0:8
// Implementation: 0x107196634

// -[SCStickerPickerCategoryCell _updateUIStateForFeedCategory]
// Type encoding: v16@0:8
// Implementation: 0x107196888

// -[SCStickerPickerCategoryCell _numberOfSectionsForFeedCategory:collectionView:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x107196a60

// -[SCStickerPickerCategoryCell _numberOfItemsInSection:forFeedCategory:collectionView:]
// Type encoding: q40@0:8q16@24@32
// Implementation: 0x107196aa0

// -[SCStickerPickerCategoryCell _itemCellForItem:atIndexPath:collectionView:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107196c34

// -[SCStickerPickerCategoryCell _refreshItemCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x107196e44

// -[SCStickerPickerCategoryCell appendSkinTone:cell:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107196fb8

// -[SCStickerPickerCategoryCell showSkinTonePicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719710c

// -[SCStickerPickerCategoryCell hideSkinTonePicker]
// Type encoding: v16@0:8
// Implementation: 0x1071973b8

// -[SCStickerPickerCategoryCell touchInSkinTonePickerRange:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x107197434

// -[SCStickerPickerCategoryCell skinToneFromLoc:]
// Type encoding: q32@0:8{CGPoint=dd}16
// Implementation: 0x10719747c

// -[SCStickerPickerCategoryCell setOpacityForVisibleEmojis:userInteractionEnabled:selectedStickerCell:duration:]
// Type encoding: v44@0:8d16B24@28d36
// Implementation: 0x10719755c

// -[SCStickerPickerCategoryCell presentTooltipForCell:title:dismissalDelay:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x107197704

// -[SCStickerPickerCategoryCell _showStickerTooltipForCell:title:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10719781c

// -[SCStickerPickerCategoryCell _initStickerTooltipWithCell:tooltipEdges:]
// Type encoding: v56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x1071979f0

// -[SCStickerPickerCategoryCell _setTooltipTitle:textSize:]
// Type encoding: v40@0:8@16{CGSize=dd}24
// Implementation: 0x107197b9c

// -[SCStickerPickerCategoryCell _setTooltipTransform]
// Type encoding: v16@0:8
// Implementation: 0x107197d38

// -[SCStickerPickerCategoryCell _setTooltipPathWithTooltipPathCenter:tooltipEdges:]
// Type encoding: v56@0:8d16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x107198190

// -[SCStickerPickerCategoryCell _hideStickerTooltip]
// Type encoding: v16@0:8
// Implementation: 0x107198278

// -[SCStickerPickerCategoryCell bitmojiFriendmojiPickerComplete]
// Type encoding: v16@0:8
// Implementation: 0x10719828c

// -[SCStickerPickerCategoryCell bitmojiFriendmojiPickerUserSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x107198290

// -[SCStickerPickerCategoryCell _avatarPickerBitmojiUserSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719835c

// -[SCStickerPickerCategoryCell _didCloseAvatarPickerWithoutSelectingAvatar]
// Type encoding: v16@0:8
// Implementation: 0x1071986b0

// -[SCStickerPickerCategoryCell _tooltipBalloonDismissed]
// Type encoding: v16@0:8
// Implementation: 0x10719870c

// -[SCStickerPickerCategoryCell bitmojiFriendmojiHintComplete]
// Type encoding: v16@0:8
// Implementation: 0x107198770

// -[SCStickerPickerCategoryCell _showFriendmojiPickerFromStickerCell:]
// Type encoding: B24@0:8@16
// Implementation: 0x107198774

// -[SCStickerPickerCategoryCell _showFriendmojiPickerFromItemCell:]
// Type encoding: B24@0:8@16
// Implementation: 0x107198804

// -[SCStickerPickerCategoryCell _showFriendmojiPickerFromCell:]
// Type encoding: B24@0:8@16
// Implementation: 0x10719890c

// -[SCStickerPickerCategoryCell showFriendmojiHintIfPossible]
// Type encoding: B16@0:8
// Implementation: 0x107198a38

// -[SCStickerPickerCategoryCell _tooltipYOffsetForCell:extraHeight:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x107198b44

// -[SCStickerPickerCategoryCell _bestCellForFriendmojiHint]
// Type encoding: @16@0:8
// Implementation: 0x107198c24

// -[SCStickerPickerCategoryCell _cellForGestureRecognizer:]
// Type encoding: @24@0:8@16
// Implementation: 0x107198f44

// -[SCStickerPickerCategoryCell _stickerCellFromCollectionViewCell:gestureRecognizer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107198fb8

// -[SCStickerPickerCategoryCell _stickerCellForGestureRecognizer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10719906c

// -[SCStickerPickerCategoryCell _itemCellForGestureRecognizer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071990e4

// -[SCStickerPickerCategoryCell collectionViewTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x107199148

// -[SCStickerPickerCategoryCell collectionViewLongPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107199208

// -[SCStickerPickerCategoryCell _doesStickerTypeSupportDisplayingStickerMenu:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1071998fc

// -[SCStickerPickerCategoryCell _doesEntityTypeSupportDisplayingStickerMenu:]
// Type encoding: B24@0:8Q16
// Implementation: 0x107199918

// -[SCStickerPickerCategoryCell querySuggestControllerDidSelectItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107199934

// -[SCStickerPickerCategoryCell sectionCell:stickerSelected:center:thumbnail:index:]
// Type encoding: v64@0:8@16@24{CGPoint=dd}32@48Q56
// Implementation: 0x107199984

// -[SCStickerPickerCategoryCell willDisplayHorizontalStickerPickerItemCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x107199a94

// -[SCStickerPickerCategoryCell stickerPickerHorizontalItemCell:didDisplayContentInTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107199a98

// -[SCStickerPickerCategoryCell gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x107199a9c

// -[SCStickerPickerCategoryCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107199b44

// -[SCStickerPickerCategoryCell gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107199c68

// -[SCStickerPickerCategoryCell gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107199d00

// -[SCStickerPickerCategoryCell categoryCellScrollbar:didScrollToSection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107199e1c

// -[SCStickerPickerCategoryCell scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x107199f24

// -[SCStickerPickerCategoryCell scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x107199fd0

// -[SCStickerPickerCategoryCell scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x10719a0cc

// -[SCStickerPickerCategoryCell scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10719a0e0

// -[SCStickerPickerCategoryCell scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719a258

// -[SCStickerPickerCategoryCell hideSuggestor]
// Type encoding: v16@0:8
// Implementation: 0x10719a390

// -[SCStickerPickerCategoryCell showSuggestor]
// Type encoding: v16@0:8
// Implementation: 0x10719a3d0

// -[SCStickerPickerCategoryCell visibleStickers]
// Type encoding: @16@0:8
// Implementation: 0x10719a410

// -[SCStickerPickerCategoryCell visibleIndexPaths]
// Type encoding: @16@0:8
// Implementation: 0x10719a5fc

// -[SCStickerPickerCategoryCell updateCollectionViewAnimated:topMargin:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10719a60c

// -[SCStickerPickerCategoryCell _horizontalStickersFromCTPItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x10719a8b0

// -[SCStickerPickerCategoryCell _legacyStickerForCTPItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10719a910

// -[SCStickerPickerCategoryCell stickerForUncorrectedIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10719aad8

// -[SCStickerPickerCategoryCell kindForToggleableUIForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10719ac28

// -[SCStickerPickerCategoryCell shouldShowToggleableUIForIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x10719ad1c

// -[SCStickerPickerCategoryCell heightForToggleableUIForCollectionView:kind:layout:]
// Type encoding: d40@0:8@16@24@32
// Implementation: 0x10719adbc

// -[SCStickerPickerCategoryCell sourceRectForToggleableUIForCollectionView:indexPath:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8@16@24
// Implementation: 0x10719adf8

// -[SCStickerPickerCategoryCell logVisibleItems]
// Type encoding: v16@0:8
// Implementation: 0x10719b0c8

// -[SCStickerPickerCategoryCell setIsDisplaying:]
// Type encoding: v20@0:8B16
// Implementation: 0x10719b600

// -[SCStickerPickerCategoryCell willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x10719b658

// -[SCStickerPickerCategoryCell didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x10719b840

// -[SCStickerPickerCategoryCell close]
// Type encoding: v16@0:8
// Implementation: 0x10719b884

// -[SCStickerPickerCategoryCell _toggleExpandablePickerOfKind:atIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10719b8a8

// -[SCStickerPickerCategoryCell _didSelectVenueStickerAtIndexPath:categoryCell:stickerSelected:index:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x10719b984

// -[SCStickerPickerCategoryCell _didSelectPlanStickerAtIndexPath:categoryCell:stickerSelected:index:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x10719ba4c

// -[SCStickerPickerCategoryCell stickerTopicPicker:didSelectSticker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10719bb80

// -[SCStickerPickerCategoryCell horizontalCell:stickerCell:stickerSelected:center:thumbnail:index:]
// Type encoding: v72@0:8@16@24@32{CGPoint=dd}40@56Q64
// Implementation: 0x10719bc9c

// -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellEmptyView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10719bee0

// -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellShouldShowLoadingSpinner:]
// Type encoding: B24@0:8@16
// Implementation: 0x10719bee8

// -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellViewDidScrollCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10719bef0

// -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCellAnnounceDataChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719bf00

// -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCell:willDisplayCellWithSticker:indexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10719bf04

// -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCell:didStartLoadingSticker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10719bff0

// -[SCStickerPickerCategoryCell stickerPickerHorizontalScrollCell:didShowSticker:timeToDisplay:indexPath:downloadSource:]
// Type encoding: v56@0:8@16@24d32@40q48
// Implementation: 0x10719c04c

// -[SCStickerPickerCategoryCell stickerPickerCellDidStartLoadingSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719c20c

// -[SCStickerPickerCategoryCell stickerPickerCellDidShowSticker:timeToDisplay:downloadSource:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x10719c288

// -[SCStickerPickerCategoryCell _updateCollectionContentInsetsWithTopInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10719c354

// -[SCStickerPickerCategoryCell _collectionViewBottomInset]
// Type encoding: d16@0:8
// Implementation: 0x10719c3c4

// -[SCStickerPickerCategoryCell collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x10719c3f4

// -[SCStickerPickerCategoryCell _showHorizontalContentInsetsInSection:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10719c508

// -[SCStickerPickerCategoryCell _isInteractiveStickersSectionWithCorrectedSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x10719c554

// -[SCStickerPickerCategoryCell _endDisplayCells]
// Type encoding: v16@0:8
// Implementation: 0x10719c5fc

// -[SCStickerPickerCategoryCell willDisplayStickerPickerItemCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719c7b8

// -[SCStickerPickerCategoryCell stickerPickerItemCell:didDisplayContentInTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10719c81c

// -[SCStickerPickerCategoryCell _stickerFromItemCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x10719c910

// -[SCStickerPickerCategoryCell setAiStickersService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719cb44

// -[SCStickerPickerCategoryCell _aiStickerCellForItemAtIndexPath:collectionView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10719cbe8

// -[SCStickerPickerCategoryCell _shouldDisplayAIStickerCell]
// Type encoding: B16@0:8
// Implementation: 0x10719cccc

// -[SCStickerPickerCategoryCell _updateAIStickersDataSourceForInputText:]
// Type encoding: B24@0:8@16
// Implementation: 0x10719cd0c

// -[SCStickerPickerCategoryCell interactiveStickersCell:contentSizeDidChange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10719cf68

// -[SCStickerPickerCategoryCell didTapSticker:atIndex:inInteractiveStickersCell:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10719cfe4

// -[SCStickerPickerCategoryCell interactiveStickersCell:didShowSticker:timeToDisplay:index:]
// Type encoding: v48@0:8@16@24d32Q40
// Implementation: 0x10719d178

// -[SCStickerPickerCategoryCell _shouldShowCreateStickerButtonInSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x10719d308

// -[SCStickerPickerCategoryCell _shouldShowBitmojiCTAUpsellInSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x10719d3c4

// -[SCStickerPickerCategoryCell _shouldShowLocationButtonInSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x10719d410

// -[SCStickerPickerCategoryCell _shouldShowPlanButtonInSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x10719d4a4

// -[SCStickerPickerCategoryCell _shouldShowPollButtonInSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x10719d538

// -[SCStickerPickerCategoryCell _leadingActionCellsForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x10719d5cc

// -[SCStickerPickerCategoryCell _cellForLeadingActionCell:atIndexPath:collectionView:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x10719d6b0

// -[SCStickerPickerCategoryCell _handleTapOnLeadingActionCell:]
// Type encoding: v24@0:8q16
// Implementation: 0x10719d7c4

// -[SCStickerPickerCategoryCell delegate]
// Type encoding: @16@0:8
// Implementation: 0x10719d8a0

// -[SCStickerPickerCategoryCell setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719d8c0

// -[SCStickerPickerCategoryCell pickerMenuDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10719d8d4

// -[SCStickerPickerCategoryCell setPickerMenuDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719d8f4

// -[SCStickerPickerCategoryCell itemPresentationModelSource]
// Type encoding: @16@0:8
// Implementation: 0x10719d908

// -[SCStickerPickerCategoryCell setItemPresentationModelSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719d928

// -[SCStickerPickerCategoryCell bitmojiPickerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10719d93c

// -[SCStickerPickerCategoryCell setBitmojiPickerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719d95c

// -[SCStickerPickerCategoryCell isDisplaying]
// Type encoding: B16@0:8
// Implementation: 0x10719d970

// -[SCStickerPickerCategoryCell bottomInset]
// Type encoding: d16@0:8
// Implementation: 0x10719d980

// -[SCStickerPickerCategoryCell sourceType]
// Type encoding: Q16@0:8
// Implementation: 0x10719d990

// -[SCStickerPickerCategoryCell userBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x10719d9a0

// -[SCStickerPickerCategoryCell superCategoryType]
// Type encoding: q16@0:8
// Implementation: 0x10719d9b0

// -[SCStickerPickerCategoryCell ctpItemViewService]
// Type encoding: @16@0:8
// Implementation: 0x10719d9c0

// -[SCStickerPickerCategoryCell friendmojiFilteredContainer]
// Type encoding: @16@0:8
// Implementation: 0x10719d9d0

// -[SCStickerPickerCategoryCell setFriendmojiFilteredContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719d9e0

// -[SCStickerPickerCategoryCell showAutocompleteToggle]
// Type encoding: B16@0:8
// Implementation: 0x10719da20

// -[SCStickerPickerCategoryCell setShowAutocompleteToggle:]
// Type encoding: v20@0:8B16
// Implementation: 0x10719da30

// -[SCStickerPickerCategoryCell aiStickersService]
// Type encoding: @16@0:8
// Implementation: 0x10719da40

// -[SCStickerPickerCategoryCell runtime]
// Type encoding: @16@0:8
// Implementation: 0x10719da50

// -[SCStickerPickerCategoryCell setRuntime:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719da60

// -[SCStickerPickerCategoryCell creativeToolsABProvider]
// Type encoding: @16@0:8
// Implementation: 0x10719daa0

// -[SCStickerPickerCategoryCell bitmoji3DContentFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10719dab0

// -[SCStickerPickerCategoryCell setBitmoji3DContentFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719dac0

// -[SCStickerPickerCategoryCell preferences]
// Type encoding: @16@0:8
// Implementation: 0x10719db00

// -[SCStickerPickerCategoryCell setPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719db10

// -[SCStickerPickerCategoryCell avatarProvider]
// Type encoding: @16@0:8
// Implementation: 0x10719db50

// -[SCStickerPickerCategoryCell setAvatarProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719db60

// -[SCStickerPickerCategoryCell timeToDisplayMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10719dba0

// -[SCStickerPickerCategoryCell layout]
// Type encoding: @16@0:8
// Implementation: 0x10719dbb0

// -[SCStickerPickerCategoryCell expandedStickerKind]
// Type encoding: @16@0:8
// Implementation: 0x10719dbc0

// -[SCStickerPickerCategoryCell setExpandedStickerKind:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719dbd0

// -[SCStickerPickerCategoryCell expandedStickerIndexPath]
// Type encoding: @16@0:8
// Implementation: 0x10719dc10

// -[SCStickerPickerCategoryCell setExpandedStickerIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10719dc20

// -[SCStickerPickerCategoryCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10719dc60

@end
