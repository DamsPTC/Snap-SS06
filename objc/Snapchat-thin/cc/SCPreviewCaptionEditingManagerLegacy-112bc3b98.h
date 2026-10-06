// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewCaptionEditingManagerLegacy
// Superclass: NSObject
// Address: 0x112bc3b98

@interface SCPreviewCaptionEditingManagerLegacy

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewCaptionEditingManagerDelegate>",W,N,V_delegate
// Property: editingCaption; attributes: T@"<SCCaption>",R,N,V_editingCaption
// Property: blackBackgroundView; attributes: T@"UIView",R,N,V_blackBackgroundView

// -[SCPreviewCaptionEditingManagerLegacy initWithStaticCaptionsContainerView:originalContentBounds:superviewBounds:superviewContentBounds:isSpectacleMedia:shouldEnableUserTagging:userTaggingFriendsProvider:captionDataProvider:previewCaptionLogger:circumstanceEngine:valdiRuntimeProvider:dynamicCaptionFetcher:creativeToolsABProvider:previewView:asyncQueueProvider:networkingClient:customojiFeature:stickerContainer:captionStickerSuggestionsServices:stickerSuggestionsActionHandler:aiFontsEnabled:]
// Type encoding: @244@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24{CGRect={CGPoint=dd}{CGSize=dd}}56{CGRect={CGPoint=dd}{CGSize=dd}}88B120B124@128@136@144@152@160@168@176@184@192@200@208@216@224@232B240
// Implementation: 0x108e2c418

// -[SCPreviewCaptionEditingManagerLegacy _setupBlackBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x108e2c7d0

// -[SCPreviewCaptionEditingManagerLegacy _updateEditingBackgroundViewsVisibility]
// Type encoding: v16@0:8
// Implementation: 0x108e2c878

// -[SCPreviewCaptionEditingManagerLegacy _showRemixExplanationLabelIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108e2c8f0

// -[SCPreviewCaptionEditingManagerLegacy setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e2ca44

// -[SCPreviewCaptionEditingManagerLegacy tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e2ca70

// -[SCPreviewCaptionEditingManagerLegacy newCaptionWithState:shouldKeepStyles:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108e2ce20

// -[SCPreviewCaptionEditingManagerLegacy _newCaptionWithState:fromGesture:shouldKeepStyles:]
// Type encoding: @36@0:8@16Q24B32
// Implementation: 0x108e2ce2c

// -[SCPreviewCaptionEditingManagerLegacy _newCaptionWithState:fromGesture:defaultCaptionStyleType:shouldKeepStyles:]
// Type encoding: @44@0:8@16Q24q32B40
// Implementation: 0x108e2cf14

// -[SCPreviewCaptionEditingManagerLegacy deleteCaption:deleteType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108e2d25c

// -[SCPreviewCaptionEditingManagerLegacy captionButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x108e2d2e8

// -[SCPreviewCaptionEditingManagerLegacy alignmentPressed]
// Type encoding: v16@0:8
// Implementation: 0x108e2d4c8

// -[SCPreviewCaptionEditingManagerLegacy updateLayoutWithSuperviewBounds:superviewContentBounds:superviewEdgeInset:]
// Type encoding: v112@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48{UIEdgeInsets=dddd}80
// Implementation: 0x108e2d548

// -[SCPreviewCaptionEditingManagerLegacy _resetEditingCaptionWithGesture:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e2d5a0

// -[SCPreviewCaptionEditingManagerLegacy _replacementCaptionForUnavailableCaption:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e2d6c0

// -[SCPreviewCaptionEditingManagerLegacy canStartEditingCaption]
// Type encoding: B16@0:8
// Implementation: 0x108e2d80c

// -[SCPreviewCaptionEditingManagerLegacy prepareCaptionEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e2d850

// -[SCPreviewCaptionEditingManagerLegacy didSwitchToStyleMode]
// Type encoding: v16@0:8
// Implementation: 0x108e2d888

// -[SCPreviewCaptionEditingManagerLegacy willStopEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e2d8c4

// -[SCPreviewCaptionEditingManagerLegacy stoppedEditing]
// Type encoding: v16@0:8
// Implementation: 0x108e2d958

// -[SCPreviewCaptionEditingManagerLegacy didStartEditingCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e2df30

// -[SCPreviewCaptionEditingManagerLegacy captionEditingLayoutDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e2dfb8

// -[SCPreviewCaptionEditingManagerLegacy textChanged]
// Type encoding: v16@0:8
// Implementation: 0x108e2dfec

// -[SCPreviewCaptionEditingManagerLegacy textViewDidChangeSelectionRange:text:]
// Type encoding: v40@0:8{_NSRange=QQ}16@32
// Implementation: 0x108e2e03c

// -[SCPreviewCaptionEditingManagerLegacy captionDidMove:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e2e044

// -[SCPreviewCaptionEditingManagerLegacy didSwitchToTaggingMode]
// Type encoding: v16@0:8
// Implementation: 0x108e2e094

// -[SCPreviewCaptionEditingManagerLegacy userToggledAppliedStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e2e0d0

// -[SCPreviewCaptionEditingManagerLegacy _toggleCaptionStylePreferenceForState:]
// Type encoding: q24@0:8@16
// Implementation: 0x108e2e2ac

// -[SCPreviewCaptionEditingManagerLegacy caption:didPasteImageData:isAnimated:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108e2e394

// -[SCPreviewCaptionEditingManagerLegacy canStopEditingCaption:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e2e3fc

// -[SCPreviewCaptionEditingManagerLegacy beginEditingWithText:carouselMode:defaultCaptionStyleType:openAction:customBackgroundView:]
// Type encoding: v56@0:8@16Q24q32@40@48
// Implementation: 0x108e2e45c

// -[SCPreviewCaptionEditingManagerLegacy _createCaptionFromState:shouldKeepStyles:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108e2e808

// -[SCPreviewCaptionEditingManagerLegacy _createCaptionStateWithRecentCaptionStyleType]
// Type encoding: @16@0:8
// Implementation: 0x108e2e978

// -[SCPreviewCaptionEditingManagerLegacy _createCaptionStateWithDefaultCaptionStyleType:]
// Type encoding: @24@0:8q16
// Implementation: 0x108e2eb0c

// -[SCPreviewCaptionEditingManagerLegacy _transferStateToCurrentMode:captionStyle:appliedStyle:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108e2f2f8

// -[SCPreviewCaptionEditingManagerLegacy _constructCarouselControllerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108e2f5dc

// -[SCPreviewCaptionEditingManagerLegacy _constructCaptionCarousel]
// Type encoding: v16@0:8
// Implementation: 0x108e2f62c

// -[SCPreviewCaptionEditingManagerLegacy _setupStickerSuggestionsControllerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x108e2f7f8

// -[SCPreviewCaptionEditingManagerLegacy _constructStickerSuggestionsController]
// Type encoding: v16@0:8
// Implementation: 0x108e2f8d8

// -[SCPreviewCaptionEditingManagerLegacy _showStickerSuggestionsIfAvailable]
// Type encoding: v16@0:8
// Implementation: 0x108e2fa80

// -[SCPreviewCaptionEditingManagerLegacy _hideStickerSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x108e2fbec

// -[SCPreviewCaptionEditingManagerLegacy _updateCaptionStyleWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e2fc24

// -[SCPreviewCaptionEditingManagerLegacy _updateEditingCaptionWithStyle:fromGesture:withStylePreference:]
// Type encoding: v40@0:8@16Q24q32
// Implementation: 0x108e2fe30

// -[SCPreviewCaptionEditingManagerLegacy _appliedStyleForCaptionStyle:captionStylePreference:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108e2fea4

// -[SCPreviewCaptionEditingManagerLegacy _updateEditingCaptionWithCaptionStyle:appliedStyle:withGesture:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108e2ff2c

// -[SCPreviewCaptionEditingManagerLegacy _useFirstNamesForTagging]
// Type encoding: B16@0:8
// Implementation: 0x108e30048

// -[SCPreviewCaptionEditingManagerLegacy _beginEditingWithCaption:customBackgroundView:prepareCaptionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108e30064

// -[SCPreviewCaptionEditingManagerLegacy _layoutStickerSuggestionsForEditingCaption:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e301a0

// -[SCPreviewCaptionEditingManagerLegacy _resizeEditingCaptionForStickerSuggestionsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108e30394

// -[SCPreviewCaptionEditingManagerLegacy _prepareBackgroundsViewsForEditingWithCustomBackgroundView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e30400

// -[SCPreviewCaptionEditingManagerLegacy captionCarouselView]
// Type encoding: @16@0:8
// Implementation: 0x108e304a8

// -[SCPreviewCaptionEditingManagerLegacy captionScrollCount]
// Type encoding: q16@0:8
// Implementation: 0x108e304b0

// -[SCPreviewCaptionEditingManagerLegacy captionStyleLoadingTime]
// Type encoding: d16@0:8
// Implementation: 0x108e304b8

// -[SCPreviewCaptionEditingManagerLegacy updateCaptionStylesFromMemoriesWithSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e304c0

// -[SCPreviewCaptionEditingManagerLegacy isCaptionToolOpened]
// Type encoding: B16@0:8
// Implementation: 0x108e304c8

// -[SCPreviewCaptionEditingManagerLegacy currentEditingCaption]
// Type encoding: @16@0:8
// Implementation: 0x108e304d8

// -[SCPreviewCaptionEditingManagerLegacy selectedStyleUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e30500

// -[SCPreviewCaptionEditingManagerLegacy selectedColorUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e30504

// -[SCPreviewCaptionEditingManagerLegacy handleTaggedUser:taggingStartIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x108e3050c

// -[SCPreviewCaptionEditingManagerLegacy handleExternalAction:]
// Type encoding: v20@0:8i16
// Implementation: 0x108e30570

// -[SCPreviewCaptionEditingManagerLegacy didTapCustomojiButton]
// Type encoding: v16@0:8
// Implementation: 0x108e3058c

// -[SCPreviewCaptionEditingManagerLegacy updatedCarouselType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e30600

// -[SCPreviewCaptionEditingManagerLegacy _displayColorEyeDropperPicker]
// Type encoding: v16@0:8
// Implementation: 0x108e30604

// -[SCPreviewCaptionEditingManagerLegacy _hideOverlay]
// Type encoding: v16@0:8
// Implementation: 0x108e30760

// -[SCPreviewCaptionEditingManagerLegacy _hideEditingCaption]
// Type encoding: v16@0:8
// Implementation: 0x108e3079c

// -[SCPreviewCaptionEditingManagerLegacy _displayEditingCaption]
// Type encoding: v16@0:8
// Implementation: 0x108e3080c

// -[SCPreviewCaptionEditingManagerLegacy _handleTaggedSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e30958

// -[SCPreviewCaptionEditingManagerLegacy didFinishPickingWithColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e309c4

// -[SCPreviewCaptionEditingManagerLegacy customojiPickerDidDismissWithDidSelectSticker:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e309f8

// -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidTapSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e30a48

// -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidTapViewAll]
// Type encoding: v16@0:8
// Implementation: 0x108e30acc

// -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidTapCutout]
// Type encoding: v16@0:8
// Implementation: 0x108e30b18

// -[SCPreviewCaptionEditingManagerLegacy captionStickerSuggestionsControllerDidUpdateAvailableSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x108e30b64

// -[SCPreviewCaptionEditingManagerLegacy _finishCaptionEditingForStickerSuggestionAction]
// Type encoding: B16@0:8
// Implementation: 0x108e30b94

// -[SCPreviewCaptionEditingManagerLegacy delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e30c0c

// -[SCPreviewCaptionEditingManagerLegacy setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e30c24

// -[SCPreviewCaptionEditingManagerLegacy editingCaption]
// Type encoding: @16@0:8
// Implementation: 0x108e30c30

// -[SCPreviewCaptionEditingManagerLegacy blackBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x108e30c38

// -[SCPreviewCaptionEditingManagerLegacy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e30c40

@end
