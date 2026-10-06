// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewView
// Superclass: UIView
// Address: 0x112bbdbf8

@interface SCPreviewView

// Property: configuration; attributes: T@"SCPreviewConfiguration",W,N,V_configuration
// Property: delegate; attributes: T@"<SCPreviewViewDelegate>",W,N,V_delegate
// Property: borderOverlayView; attributes: T@"SCBorderOverlayView",R,N,V_borderOverlayView
// Property: rightGradient; attributes: T@"SCGradientView",R,N,V_rightGradient
// Property: bottomGradient; attributes: T@"SCGradientView",R,N,V_bottomGradient
// Property: iconsContainerView; attributes: T@"UIView",R,N,V_iconsContainerView
// Property: containerView; attributes: T@"UIView",R,N,V_containerView
// Property: navBarTheme; attributes: T@"SCPlusNavigationBarTheme",&,N,V_navBarTheme
// Property: customThemeBackgroundImage; attributes: T@"UIImage",&,N,V_customThemeBackgroundImage
// Property: toolbar; attributes: T@"<SCPreviewToolbar>",R,N,V_toolbar
// Property: toolbarTooltip; attributes: T@"<SCPreviewToolBarTooltip>",R,N,V_toolbarTooltip
// Property: contentPortraitBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,V_contentPortraitBounds
// Property: containerPortraitBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_containerPortraitBounds
// Property: saveButtonController; attributes: T@"SCPreviewSaveButtonController",R,N,V_saveButtonController
// Property: saveButton; attributes: T@"SCGrowingButton<SCPreviewSaveButtonProtocol>",R,N,V_saveButton
// Property: transparentExternalShareSheetPopUpView; attributes: T@"UIView",&,N,V_transparentExternalShareSheetPopUpView
// Property: doneButton; attributes: T@"UIButton",&,N,V_doneButton
// Property: xButton; attributes: T@"SCGrowingButton",&,N,V_xButton
// Property: shareButton; attributes: T@"SCGrowingButton",&,N,V_shareButton
// Property: sendConfirmationView; attributes: T@"SCSendConfirmationContainerView",&,N,V_sendConfirmationView
// Property: storyButton; attributes: T@"SCGrowingButton",&,N,V_storyButton
// Property: spotlightButton; attributes: T@"SCGrowingButton",&,N,V_spotlightButton
// Property: sendButton; attributes: T@"SCLabeledGrowingButton",&,N,V_sendButton
// Property: recipientNameReplyView; attributes: T@"SCPreviewRecipientNameReplyView",&,N,V_recipientNameReplyView
// Property: transitionalImageView; attributes: T@"UIImageView",&,N,V_transitionalImageView
// Property: saveLongPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",&,N,V_saveLongPressGestureRecognizer
// Property: storyButtonLongPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",&,N,V_storyButtonLongPressGestureRecognizer
// Property: thumbnailsViewController; attributes: T@"UIViewController<SCPreviewThumbnailsViewController>",W,N,V_thumbnailsViewController
// Property: multiSnapV2ViewController; attributes: T@"UIViewController<SCPreviewThumbnailsViewController>",W,N,V_multiSnapV2ViewController
// Property: batchCaptureViewController; attributes: T@"UIViewController<SCPreviewThumbnailsViewController>",W,N,V_batchCaptureViewController
// Property: timelineThumbnailsViewController; attributes: T@"UIViewController<SCPreviewThumbnailsViewController>",W,N,V_timelineThumbnailsViewController
// Property: creativeToolsDurationViewController; attributes: T@"UIViewController<SCPreviewThumbnailsViewController>",W,N,V_creativeToolsDurationViewController
// Property: videoPlaybackControlsViewController; attributes: T@"UIViewController<SCPreviewThumbnailsViewController>",W,N,V_videoPlaybackControlsViewController
// Property: previewCarouselView; attributes: T@"UIView<SCPreviewBottomComponent>",W,N,V_previewCarouselView
// Property: bottomLeftButtons; attributes: T@"NSMutableArray",&,N,V_bottomLeftButtons
// Property: footerView; attributes: T@"UIView<SCPreviewBottomComponent>",R,N,V_footerView
// Property: footerColor; attributes: Tq,R,N,V_footerColor
// Property: thumbnailsOffset; attributes: T{CGPoint=dd},N,V_thumbnailsOffset
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: bottomViewComponents; attributes: T@"NSMutableArray",&,V_bottomViewComponents
// Property: topContentView; attributes: T@"UIView",&,N,V_topContentView
// Property: topLeftCornerView; attributes: T@"UIView",&,N,V_topLeftCornerView

// -[SCPreviewView initWithFrame:configuration:maxMediaAreaFrame:sendConfirmationViewProvider:delegate:bitmojiSelfieFetcher:myStoriesDataCoordinator:publicStoriesDataCoordinator:customStoriesDataFetcher:previewABProvider:circumstanceEngine:complianceEngine:sendToExperimentConfiguration:sendToUIConfiguration:footerColor:previewExportServices:grapheneRegistry:featureSettingsService:actionBarConfiguration:creativeToolsABProvider:unifiedToolbarServices:filterUIStateProvider:memoriesExperimentService:]
// Type encoding: @248@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48{CGRect={CGPoint=dd}{CGSize=dd}}56@88@96@104@112@120@128@136@144@152@160@168q176@184@192@200@208@216@224@232@240
// Implementation: 0x108cbcfbc

// -[SCPreviewView showHintLabelAtPosition:withText:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108cbe8f8

// -[SCPreviewView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108cbecb8

// -[SCPreviewView ngsBottomActionBar]
// Type encoding: @16@0:8
// Implementation: 0x108cbed0c

// -[SCPreviewView sendButtonFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbed3c

// -[SCPreviewView toolbarFrameWithBottomBarContainView]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbeeb8

// -[SCPreviewView toolbarFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbefec

// -[SCPreviewView _adjustedToolbarHeightWithInitialheight:yValue:]
// Type encoding: d32@0:8d16d24
// Implementation: 0x108cbf13c

// -[SCPreviewView bottomLeftButtonFrameAtIndex:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8q16
// Implementation: 0x108cbf344

// -[SCPreviewView multiSnapViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf48c

// -[SCPreviewView batchCaptureViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf55c

// -[SCPreviewView timelineThumbnailsViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf62c

// -[SCPreviewView directorThumbnailsViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf6fc

// -[SCPreviewView creativeToolsDurationViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf820

// -[SCPreviewView videoPlaybackControlsViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf8a8

// -[SCPreviewView _rightGradientFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf930

// -[SCPreviewView bottomGradientFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cbf9c4

// -[SCPreviewView _thumbnailsViewFrameForController:preferredHeight:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8@16d24
// Implementation: 0x108cbfa60

// -[SCPreviewView addButtonToBottomLeftButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cbfc80

// -[SCPreviewView _addBorderOverlayView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cbfd00

// -[SCPreviewView _addIconsContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cbfd44

// -[SCPreviewView _addContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cbfff0

// -[SCPreviewView _addToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc0034

// -[SCPreviewView shareButton]
// Type encoding: @16@0:8
// Implementation: 0x108cc00b0

// -[SCPreviewView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108cc00e0

// -[SCPreviewView finishBottomViewComponentsSetup]
// Type encoding: v16@0:8
// Implementation: 0x108cc0128

// -[SCPreviewView setBottomBarContainViewUserInteractionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc0230

// -[SCPreviewView layoutBottomComponents]
// Type encoding: v16@0:8
// Implementation: 0x108cc0240

// -[SCPreviewView _layoutBottomLeftButtons]
// Type encoding: v16@0:8
// Implementation: 0x108cc0418

// -[SCPreviewView adjustLayout]
// Type encoding: v16@0:8
// Implementation: 0x108cc04d0

// -[SCPreviewView _updateNGSBottomActionBarLayout]
// Type encoding: v16@0:8
// Implementation: 0x108cc087c

// -[SCPreviewView _pvc_mediaAreaInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108cc0a0c

// -[SCPreviewView _pv_safeAreaInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108cc0a5c

// -[SCPreviewView _sendConfirmationFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cc0a9c

// -[SCPreviewView _sendConfirmationHeight]
// Type encoding: d16@0:8
// Implementation: 0x108cc0bb0

// -[SCPreviewView _replyActionBarPositionMode]
// Type encoding: q16@0:8
// Implementation: 0x108cc0bdc

// -[SCPreviewView _isQuickSendActionBarInLetterbox]
// Type encoding: B16@0:8
// Implementation: 0x108cc0c58

// -[SCPreviewView _sendConfirmationExtendedTapZoneInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108cc0d3c

// -[SCPreviewView _applySendConfirmationViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x108cc0dd4

// -[SCPreviewView quickSendLetterboxContentDownShift]
// Type encoding: d16@0:8
// Implementation: 0x108cc0e28

// -[SCPreviewView _quickSendBottomContentLift]
// Type encoding: d16@0:8
// Implementation: 0x108cc0e4c

// -[SCPreviewView _ngsActionBarFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cc0ec8

// -[SCPreviewView _mediaFrameWillEncroachBottomSafeArea]
// Type encoding: B16@0:8
// Implementation: 0x108cc102c

// -[SCPreviewView traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc106c

// -[SCPreviewView sendConfirmationView]
// Type encoding: @16@0:8
// Implementation: 0x108cc10f8

// -[SCPreviewView setupSendConfirmationView]
// Type encoding: v16@0:8
// Implementation: 0x108cc1128

// -[SCPreviewView setupHintLabels]
// Type encoding: v16@0:8
// Implementation: 0x108cc15a0

// -[SCPreviewView setTransitionalImageIfNecessary:isCropped:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108cc16dc

// -[SCPreviewView disableUserInteractionOfSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108cc1750

// -[SCPreviewView enableUserInteractionOfManuallyDisabledSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108cc18ac

// -[SCPreviewView _togglePreviewUIHidden:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc1900

// -[SCPreviewView isUserInteractionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108cc1a24

// -[SCPreviewView setUserInteractionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc1a88

// -[SCPreviewView setTopContentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc1a98

// -[SCPreviewView setTopLeftCornerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc1d14

// -[SCPreviewView shouldUseNGSBottomActionBar]
// Type encoding: B16@0:8
// Implementation: 0x108cc1fe0

// -[SCPreviewView contentAreaFrameExcludingBottomBar]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cc2020

// -[SCPreviewView _mediaLeavesNoRoomForFooter]
// Type encoding: B16@0:8
// Implementation: 0x108cc2198

// -[SCPreviewView isNGSBarStyleDarkTranslucent]
// Type encoding: B16@0:8
// Implementation: 0x108cc21e8

// -[SCPreviewView _bottomButtonsConfigFromCurrentConfiguration]
// Type encoding: Q16@0:8
// Implementation: 0x108cc2214

// -[SCPreviewView _recalculateButtomButtonsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108cc2280

// -[SCPreviewView _setupNGSBottomButtons]
// Type encoding: v16@0:8
// Implementation: 0x108cc23a4

// -[SCPreviewView _shouldShowCapriFooterView]
// Type encoding: B16@0:8
// Implementation: 0x108cc29d0

// -[SCPreviewView _setupCapriFooterView]
// Type encoding: v16@0:8
// Implementation: 0x108cc2a08

// -[SCPreviewView setNavBarTheme:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc2ce0

// -[SCPreviewView setCustomThemeBackgroundImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc2d20

// -[SCPreviewView _updateBackgroundImage]
// Type encoding: v16@0:8
// Implementation: 0x108cc2d60

// -[SCPreviewView setCustomThemeBackgroundImageHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc303c

// -[SCPreviewView _updateFooterBackground]
// Type encoding: v16@0:8
// Implementation: 0x108cc305c

// -[SCPreviewView _setupNonNGSBottomButtons]
// Type encoding: v16@0:8
// Implementation: 0x108cc3838

// -[SCPreviewView _previewActionBarScopeMode]
// Type encoding: Q16@0:8
// Implementation: 0x108cc3cd4

// -[SCPreviewView _needToShowSaveButton]
// Type encoding: B16@0:8
// Implementation: 0x108cc3d14

// -[SCPreviewView _needToShowStoryButton]
// Type encoding: B16@0:8
// Implementation: 0x108cc3e10

// -[SCPreviewView _needToShowSpotlightButton]
// Type encoding: B16@0:8
// Implementation: 0x108cc3edc

// -[SCPreviewView _needToShowShareButton]
// Type encoding: B16@0:8
// Implementation: 0x108cc40c8

// -[SCPreviewView _showSpotlightButtonSuggestedByLens]
// Type encoding: B16@0:8
// Implementation: 0x108cc41f0

// -[SCPreviewView _resolveSpotlightStyle]
// Type encoding: {SCPreviewNGSSpotlightButtonStyle=BB}16@0:8
// Implementation: 0x108cc42a4

// -[SCPreviewView setupSendButton]
// Type encoding: v16@0:8
// Implementation: 0x108cc43e4

// -[SCPreviewView _removeNGSBottomButtons]
// Type encoding: v16@0:8
// Implementation: 0x108cc454c

// -[SCPreviewView removeSendButton]
// Type encoding: v16@0:8
// Implementation: 0x108cc45d4

// -[SCPreviewView setSendButtonIsInactive:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc4618

// -[SCPreviewView _removeStoryButton]
// Type encoding: v16@0:8
// Implementation: 0x108cc4698

// -[SCPreviewView _removeSpotlightButton]
// Type encoding: v16@0:8
// Implementation: 0x108cc471c

// -[SCPreviewView actionButtons]
// Type encoding: @16@0:8
// Implementation: 0x108cc47a0

// -[SCPreviewView previewButtons]
// Type encoding: @16@0:8
// Implementation: 0x108cc485c

// -[SCPreviewView setPreviewButtonsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc4988

// -[SCPreviewView setActionButtonsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc4a04

// -[SCPreviewView setOpacityForActionButtons:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cc4bec

// -[SCPreviewView setActionButtonsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc4c70

// -[SCPreviewView setActionButtonsHidden:excludeViews:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108cc4d04

// -[SCPreviewView setActionButtonsForDrawingHidden:reappearAfterDelay:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x108cc4e84

// -[SCPreviewView setIconsContainerViewHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc5038

// -[SCPreviewView setElementsHiddenForDurationEditing:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc515c

// -[SCPreviewView setTopContainerViewHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc5288

// -[SCPreviewView _handlePreviewCarouselExpanded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cc5298

// -[SCPreviewView setBorderContentBounds:cornerRadius:]
// Type encoding: v56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
// Implementation: 0x108cc5514

// -[SCPreviewView _updateMediaContainerCornerRadiusForCustomTheme]
// Type encoding: v16@0:8
// Implementation: 0x108cc566c

// -[SCPreviewView _cornerRadiusWithInputCornerRadius:useCapriStyle:]
// Type encoding: d28@0:8d16B24
// Implementation: 0x108cc5774

// -[SCPreviewView showClipLevelTools]
// Type encoding: v16@0:8
// Implementation: 0x108cc57e0

// -[SCPreviewView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108cc57f0

// -[SCPreviewView saveButton]
// Type encoding: @16@0:8
// Implementation: 0x108cc57f8

// -[SCPreviewView borderOverlayView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5808

// -[SCPreviewView iconsContainerView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5818

// -[SCPreviewView saveButtonController]
// Type encoding: @16@0:8
// Implementation: 0x108cc5828

// -[SCPreviewView containerView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5838

// -[SCPreviewView toolbar]
// Type encoding: @16@0:8
// Implementation: 0x108cc5848

// -[SCPreviewView bottomViewComponents]
// Type encoding: @16@0:8
// Implementation: 0x108cc5858

// -[SCPreviewView setBottomViewComponents:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5868

// -[SCPreviewView topContentView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5874

// -[SCPreviewView footerView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5884

// -[SCPreviewView footerColor]
// Type encoding: q16@0:8
// Implementation: 0x108cc5894

// -[SCPreviewView topLeftCornerView]
// Type encoding: @16@0:8
// Implementation: 0x108cc58a4

// -[SCPreviewView rightGradient]
// Type encoding: @16@0:8
// Implementation: 0x108cc58b4

// -[SCPreviewView bottomGradient]
// Type encoding: @16@0:8
// Implementation: 0x108cc58c4

// -[SCPreviewView navBarTheme]
// Type encoding: @16@0:8
// Implementation: 0x108cc58d4

// -[SCPreviewView customThemeBackgroundImage]
// Type encoding: @16@0:8
// Implementation: 0x108cc58e4

// -[SCPreviewView toolbarTooltip]
// Type encoding: @16@0:8
// Implementation: 0x108cc58f4

// -[SCPreviewView contentPortraitBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cc5904

// -[SCPreviewView setContentPortraitBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108cc591c

// -[SCPreviewView containerPortraitBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108cc5934

// -[SCPreviewView transparentExternalShareSheetPopUpView]
// Type encoding: @16@0:8
// Implementation: 0x108cc594c

// -[SCPreviewView setTransparentExternalShareSheetPopUpView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc595c

// -[SCPreviewView doneButton]
// Type encoding: @16@0:8
// Implementation: 0x108cc599c

// -[SCPreviewView setDoneButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc59ac

// -[SCPreviewView xButton]
// Type encoding: @16@0:8
// Implementation: 0x108cc59ec

// -[SCPreviewView setXButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc59fc

// -[SCPreviewView setShareButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5a3c

// -[SCPreviewView setSendConfirmationView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5a7c

// -[SCPreviewView storyButton]
// Type encoding: @16@0:8
// Implementation: 0x108cc5abc

// -[SCPreviewView setStoryButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5acc

// -[SCPreviewView spotlightButton]
// Type encoding: @16@0:8
// Implementation: 0x108cc5b0c

// -[SCPreviewView setSpotlightButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5b1c

// -[SCPreviewView sendButton]
// Type encoding: @16@0:8
// Implementation: 0x108cc5b5c

// -[SCPreviewView setSendButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5b6c

// -[SCPreviewView recipientNameReplyView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5bac

// -[SCPreviewView setRecipientNameReplyView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5bbc

// -[SCPreviewView transitionalImageView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5bfc

// -[SCPreviewView setTransitionalImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5c0c

// -[SCPreviewView saveLongPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x108cc5c4c

// -[SCPreviewView setSaveLongPressGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5c5c

// -[SCPreviewView storyButtonLongPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x108cc5c9c

// -[SCPreviewView setStoryButtonLongPressGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5cac

// -[SCPreviewView thumbnailsViewController]
// Type encoding: @16@0:8
// Implementation: 0x108cc5cec

// -[SCPreviewView setThumbnailsViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5d0c

// -[SCPreviewView multiSnapV2ViewController]
// Type encoding: @16@0:8
// Implementation: 0x108cc5d20

// -[SCPreviewView setMultiSnapV2ViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5d40

// -[SCPreviewView batchCaptureViewController]
// Type encoding: @16@0:8
// Implementation: 0x108cc5d54

// -[SCPreviewView setBatchCaptureViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5d74

// -[SCPreviewView timelineThumbnailsViewController]
// Type encoding: @16@0:8
// Implementation: 0x108cc5d88

// -[SCPreviewView setTimelineThumbnailsViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5da8

// -[SCPreviewView creativeToolsDurationViewController]
// Type encoding: @16@0:8
// Implementation: 0x108cc5dbc

// -[SCPreviewView setCreativeToolsDurationViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5ddc

// -[SCPreviewView videoPlaybackControlsViewController]
// Type encoding: @16@0:8
// Implementation: 0x108cc5df0

// -[SCPreviewView setVideoPlaybackControlsViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5e10

// -[SCPreviewView previewCarouselView]
// Type encoding: @16@0:8
// Implementation: 0x108cc5e24

// -[SCPreviewView setPreviewCarouselView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5e44

// -[SCPreviewView bottomLeftButtons]
// Type encoding: @16@0:8
// Implementation: 0x108cc5e58

// -[SCPreviewView setBottomLeftButtons:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5e68

// -[SCPreviewView thumbnailsOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108cc5ea8

// -[SCPreviewView setThumbnailsOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108cc5ebc

// -[SCPreviewView configuration]
// Type encoding: @16@0:8
// Implementation: 0x108cc5ed0

// -[SCPreviewView setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5ef0

// -[SCPreviewView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108cc5f04

// -[SCPreviewView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cc5f24

// -[SCPreviewView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cc5f38

@end
