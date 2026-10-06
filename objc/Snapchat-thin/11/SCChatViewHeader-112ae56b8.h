// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatViewHeader
// Superclass: NSObject
// Address: 0x112ae56b8

@interface SCChatViewHeader

// Property: header; attributes: T@"SCHeader",R,N,V_header
// Property: backButton; attributes: T@"SIGButton",R,N,V_backButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatViewHeader initWithDelegate:headerDelegate:headerDataSource:headerStyle:parentView:uberAvatarScopeServices:uberAvatarScopeExposer:userTrackedLogger:composerRuntime:chatTooltipsService:useAsyncWaitUntilRenderCompleted:]
// Type encoding: @104@0:8@16@24@32Q40@48@56@64@72@80@88@96
// Implementation: 0x1065630c4

// -[SCChatViewHeader _initHeaderWithDelegate:headerStyle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1065635c4

// -[SCChatViewHeader _createSubtext]
// Type encoding: @16@0:8
// Implementation: 0x106563824

// -[SCChatViewHeader _createBanner]
// Type encoding: @16@0:8
// Implementation: 0x106563fcc

// -[SCChatViewHeader _createAddFriendButton]
// Type encoding: @16@0:8
// Implementation: 0x106564224

// -[SCChatViewHeader headerBottom]
// Type encoding: @16@0:8
// Implementation: 0x106564688

// -[SCChatViewHeader headerFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106564690

// -[SCChatViewHeader setHeaderFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106564698

// -[SCChatViewHeader gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1065646a0

// -[SCChatViewHeader hideHeaderViewsOnStartEdit]
// Type encoding: v16@0:8
// Implementation: 0x106564714

// -[SCChatViewHeader showHeaderViewsOnEndEdit]
// Type encoding: v16@0:8
// Implementation: 0x10656479c

// -[SCChatViewHeader headerText]
// Type encoding: @16@0:8
// Implementation: 0x1065647fc

// -[SCChatViewHeader _initBackButton]
// Type encoding: v16@0:8
// Implementation: 0x106564804

// -[SCChatViewHeader _onTapBackButton]
// Type encoding: v16@0:8
// Implementation: 0x106564c6c

// -[SCChatViewHeader _backButtonCircleView]
// Type encoding: @16@0:8
// Implementation: 0x106564c74

// -[SCChatViewHeader _initAvatarContainerWithHeaderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106564f10

// -[SCChatViewHeader _setAvatarConstraints]
// Type encoding: v16@0:8
// Implementation: 0x1065650c4

// -[SCChatViewHeader didSetBackgroundImage]
// Type encoding: v16@0:8
// Implementation: 0x106565408

// -[SCChatViewHeader didTapOnAvatarView]
// Type encoding: v16@0:8
// Implementation: 0x10656540c

// -[SCChatViewHeader didTapOnPublisherProfile]
// Type encoding: v16@0:8
// Implementation: 0x106565410

// -[SCChatViewHeader didTapOnStory]
// Type encoding: v16@0:8
// Implementation: 0x106565414

// -[SCChatViewHeader viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106565464

// -[SCChatViewHeader viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106565470

// -[SCChatViewHeader reloadHeader]
// Type encoding: v16@0:8
// Implementation: 0x106565478

// -[SCChatViewHeader _avatarIconViewTopOffset]
// Type encoding: d16@0:8
// Implementation: 0x1065654a0

// -[SCChatViewHeader _updateLeftIconConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065654f4

// -[SCChatViewHeader _updateViewOptions]
// Type encoding: v16@0:8
// Implementation: 0x1065654fc

// -[SCChatViewHeader _headerHeight]
// Type encoding: d16@0:8
// Implementation: 0x106565578

// -[SCChatViewHeader _height]
// Type encoding: d16@0:8
// Implementation: 0x10656559c

// -[SCChatViewHeader _avatarPadding]
// Type encoding: d16@0:8
// Implementation: 0x10656562c

// -[SCChatViewHeader _avatarWidth]
// Type encoding: d16@0:8
// Implementation: 0x106565670

// -[SCChatViewHeader _avatarOccupiedWidth]
// Type encoding: d16@0:8
// Implementation: 0x1065656b0

// -[SCChatViewHeader _avatarHeight]
// Type encoding: d16@0:8
// Implementation: 0x1065656e8

// -[SCChatViewHeader didConversationViewModelChange:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106565728

// -[SCChatViewHeader _updateAddFriendButtonStatusIfNecessaryFromPrevious:]
// Type encoding: v24@0:8@16
// Implementation: 0x106566100

// -[SCChatViewHeader heightForHeaderTextView:bottomInset:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x10656617c

// -[SCChatViewHeader backgroundColorForHeader]
// Type encoding: @16@0:8
// Implementation: 0x106566214

// -[SCChatViewHeader titleForHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106566280

// -[SCChatViewHeader trailingAccessoriesForHeaderTitle]
// Type encoding: @16@0:8
// Implementation: 0x106566300

// -[SCChatViewHeader _legalHoldBadgeViewIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x106566408

// -[SCChatViewHeader _updateLegalHoldBadge]
// Type encoding: v16@0:8
// Implementation: 0x10656649c

// -[SCChatViewHeader _legalHoldBadgeReservedWidth]
// Type encoding: d16@0:8
// Implementation: 0x10656670c

// -[SCChatViewHeader placeholderAttributedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106566770

// -[SCChatViewHeader fontForHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106566a38

// -[SCChatViewHeader textColorForHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106566a9c

// -[SCChatViewHeader imageForLeftButtonInState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106566b00

// -[SCChatViewHeader imageForRightButtonInState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106566b48

// -[SCChatViewHeader imageForXButtonInState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106566bb4

// -[SCChatViewHeader shouldEnableTextField:]
// Type encoding: B24@0:8@16
// Implementation: 0x106566bfc

// -[SCChatViewHeader returnKeyTypeForHeaderTextField:]
// Type encoding: q24@0:8@16
// Implementation: 0x106566c00

// -[SCChatViewHeader tintColorForHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106566c20

// -[SCChatViewHeader shouldEnableXButtonForTextField:]
// Type encoding: B24@0:8@16
// Implementation: 0x106566c74

// -[SCChatViewHeader isValidValueForHeaderTextField:value:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106566c78

// -[SCChatViewHeader additionalXOffsetForHeader]
// Type encoding: d16@0:8
// Implementation: 0x106566cc8

// -[SCChatViewHeader headerContentViewAdditionalHorizontalPadding]
// Type encoding: d16@0:8
// Implementation: 0x106566dcc

// -[SCChatViewHeader _gapBetweenTitleAndCallButtons]
// Type encoding: d16@0:8
// Implementation: 0x106566e5c

// -[SCChatViewHeader _accessoryButtonWidth]
// Type encoding: d16@0:8
// Implementation: 0x106566e80

// -[SCChatViewHeader _rtlAccessoryClusterLeadingPadding]
// Type encoding: d16@0:8
// Implementation: 0x106566f90

// -[SCChatViewHeader _deltaBetweenAvatarAndOriginalLeftButton]
// Type encoding: d16@0:8
// Implementation: 0x106567004

// -[SCChatViewHeader setHeaderContentAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x106567050

// -[SCChatViewHeader setHeaderAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x1065670a4

// -[SCChatViewHeader setButtonsAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x1065670ac

// -[SCChatViewHeader displayWithVerticalTranslationUp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106567114

// -[SCChatViewHeader _updateAlphaWithProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x10656717c

// -[SCChatViewHeader _updateBackButtonCircleWithVerticalTranslationUp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106567234

// -[SCChatViewHeader _setSubtext]
// Type encoding: @?16@0:8
// Implementation: 0x10656746c

// -[SCChatViewHeader _setSubtext:isAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106567830

// -[SCChatViewHeader _fadeSubtextViewOutAndInWithDelay:onFadeOut:onFadeIn:]
// Type encoding: v40@0:8d16@?24@?32
// Implementation: 0x106567b58

// -[SCChatViewHeader _getSubtextColorWithDefault:]
// Type encoding: @24@0:8@16
// Implementation: 0x106567f08

// -[SCChatViewHeader _isRTL]
// Type encoding: B16@0:8
// Implementation: 0x106567f70

// -[SCChatViewHeader _isEditing]
// Type encoding: B16@0:8
// Implementation: 0x106567fb8

// -[SCChatViewHeader backgroundTintView]
// Type encoding: @16@0:8
// Implementation: 0x106567ff8

// -[SCChatViewHeader didDismissBackgroundTintView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106568308

// -[SCChatViewHeader _setAddButtonStatus:]
// Type encoding: v20@0:8i16
// Implementation: 0x106568310

// -[SCChatViewHeader _didTapAddFriendButton]
// Type encoding: v16@0:8
// Implementation: 0x1065683d8

// -[SCChatViewHeader _handleAddFriendCompletionForUserId:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1065684f0

// -[SCChatViewHeader _didTapHeaderText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065685a8

// -[SCChatViewHeader _tappableSubtextEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1065685ac

// -[SCChatViewHeader _didTapHeaderSubtext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065685bc

// -[SCChatViewHeader _showLocationContextTooltipIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106568618

// -[SCChatViewHeader _completeLocationContextTooltipIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10656890c

// -[SCChatViewHeader _cleanUpLocationContextTooltipIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106568950

// -[SCChatViewHeader _titleTrailingIconsReservedWidth]
// Type encoding: d16@0:8
// Implementation: 0x10656897c

// -[SCChatViewHeader _handleHeaderTextPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065689c0

// -[SCChatViewHeader _handleHeaderSubtextPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106568b78

// -[SCChatViewHeader _handleLeftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106568ca0

// -[SCChatViewHeader _handleSubtextPressed]
// Type encoding: v16@0:8
// Implementation: 0x106568d44

// -[SCChatViewHeader _shouldShowEditableHeader]
// Type encoding: B16@0:8
// Implementation: 0x106568d98

// -[SCChatViewHeader attachCallButtonsPane:]
// Type encoding: v24@0:8@16
// Implementation: 0x106568da0

// -[SCChatViewHeader detachCallButtonsPane]
// Type encoding: v16@0:8
// Implementation: 0x1065690a0

// -[SCChatViewHeader _shouldShowSpotlightHeaderButtonPane]
// Type encoding: B16@0:8
// Implementation: 0x1065690f0

// -[SCChatViewHeader _spotlightHeaderButtonCallPaneVisualInset]
// Type encoding: d16@0:8
// Implementation: 0x106569134

// -[SCChatViewHeader _remakeSpotlightHeaderButtonPaneConstraints]
// Type encoding: v16@0:8
// Implementation: 0x106569148

// -[SCChatViewHeader _updateSpotlightHeaderButtonPaneVisibilityAndConstraints]
// Type encoding: v16@0:8
// Implementation: 0x1065694f0

// -[SCChatViewHeader attachSpotlightHeaderButtonPane:]
// Type encoding: v24@0:8@16
// Implementation: 0x106569530

// -[SCChatViewHeader detachSpotlightHeaderButtonPane]
// Type encoding: v16@0:8
// Implementation: 0x1065695ac

// -[SCChatViewHeader _initBlurEffect]
// Type encoding: v16@0:8
// Implementation: 0x1065695f4

// -[SCChatViewHeader updateBlurViewVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x106569888

// -[SCChatViewHeader _backButtonWidth]
// Type encoding: d16@0:8
// Implementation: 0x106569b44

// -[SCChatViewHeader tooltipDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106569b50

// -[SCChatViewHeader tooltipTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x106569b64

// -[SCChatViewHeader _showBanner]
// Type encoding: v16@0:8
// Implementation: 0x106569b78

// -[SCChatViewHeader _hideBanner]
// Type encoding: v16@0:8
// Implementation: 0x106569be8

// -[SCChatViewHeader updateForWidthChangeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106569c68

// -[SCChatViewHeader _isNotificationPermissionBannerType:]
// Type encoding: B24@0:8q16
// Implementation: 0x106569d3c

// -[SCChatViewHeader showNotificationPermissionBannerIfAvailable]
// Type encoding: v16@0:8
// Implementation: 0x106569d4c

// -[SCChatViewHeader hideNotificationPermissionBannerIfShown]
// Type encoding: v16@0:8
// Implementation: 0x106569da4

// -[SCChatViewHeader hideLocationUpsellBannerIfShown]
// Type encoding: v16@0:8
// Implementation: 0x106569dfc

// -[SCChatViewHeader header]
// Type encoding: @16@0:8
// Implementation: 0x106569e4c

// -[SCChatViewHeader backButton]
// Type encoding: @16@0:8
// Implementation: 0x106569e54

// -[SCChatViewHeader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106569e5c

// +[SCChatViewHeader rightButtonCircleBorderColor]
// Type encoding: @16@0:8
// Implementation: 0x106567ef0

@end
