// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedComponentView
// Superclass: UIView
// Address: 0x112a8e6d8

@interface SCFriendsFeedComponentView

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: imageDownloader; attributes: T@"SCLazy",&,N,V_imageDownloader
// Property: imageFetchingService; attributes: T@"<SCImageFetchingService>",&,N,V_imageFetchingService
// Property: viewModel; attributes: T@"<SCFeedComponentViewModel>",&,N,V_viewModel
// Property: delegate; attributes: T@"<SCFeedComponentViewDelegate>",W,N,V_delegate
// Property: animationHandler; attributes: T@"SCFriendsFeedAnimationHandler",&,N,V_animationHandler
// Property: uberAvatarScopeServices; attributes: T@"_TtC17SCUberAvatarScope25SCUberAvatarScopeServices",&,N,V_uberAvatarScopeServices
// Property: uberAvatarScopeExposer; attributes: T@"SCMultiScopeExposer",&,N,V_uberAvatarScopeExposer
// Property: contextPostSnapFeedScopeExposer; attributes: T@"SCMultiScopeExposer",&,N,V_contextPostSnapFeedScopeExposer
// Property: contextPostSnapFeedScopeServices; attributes: T@"_TtC31SCContextPostSnapFeedScopeProxy34SCContextPostSnapFeedScopeServices",&,N,V_contextPostSnapFeedScopeServices
// Property: lensFriendsFeedContextButtonScopeExposer; attributes: T@"SCMultiScopeExposer",&,N,V_lensFriendsFeedContextButtonScopeExposer
// Property: lensFriendsFeedContextButtonScopeServices; attributes: T@"_TtC40SCLensFriendsFeedContextButtonScopeProxy43SCLensFriendsFeedContextButtonScopeServices",&,N,V_lensFriendsFeedContextButtonScopeServices
// Property: friendsFeedGamingButtonScopeExposer; attributes: T@"SCMultiScopeExposer",&,N,V_friendsFeedGamingButtonScopeExposer
// Property: friendsFeedGamesPresenceButtonScopeServices; attributes: T@"_TtC35FriendsFeedGamesPresenceButtonScope43FriendsFeedGamesPresenceButtonScopeServices",&,N,V_friendsFeedGamesPresenceButtonScopeServices
// Property: baseViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_baseViewController
// Property: simpleSnapchatExperimentConfigProvider; attributes: T@"SCLazy",&,N,V_simpleSnapchatExperimentConfigProvider
// Property: doubleTapGestureRecognizer; attributes: T@"UIGestureRecognizer",&,N,V_doubleTapGestureRecognizer
// Property: configProvider; attributes: T@"<SCConfigProvider>",&,N,V_configProvider
// Property: overlayItem; attributes: T@"SCOverlayItem",&,N,V_overlayItem
// Property: messagingExperimentService; attributes: T@"SCLazy",&,N,V_messagingExperimentService
// Property: avatarFactory; attributes: T@"SCLazy",&,N,V_avatarFactory

// -[SCFriendsFeedComponentView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105bbaa58

// -[SCFriendsFeedComponentView setSimpleSnapchatExperimentConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbb1d0

// -[SCFriendsFeedComponentView setDoubleTapGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbb208

// -[SCFriendsFeedComponentView _isAnimatingPeekAPeek]
// Type encoding: B16@0:8
// Implementation: 0x105bbb26c

// -[SCFriendsFeedComponentView _widthAdjustmentForPeekAPeekAnimation]
// Type encoding: d16@0:8
// Implementation: 0x105bbb32c

// -[SCFriendsFeedComponentView _maxWidthOfLabel]
// Type encoding: d16@0:8
// Implementation: 0x105bbb354

// -[SCFriendsFeedComponentView _maxWidthOfLabelWithRightButtonViewModel:]
// Type encoding: d24@0:8@16
// Implementation: 0x105bbb478

// -[SCFriendsFeedComponentView setMessagingExperimentService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbbab8

// -[SCFriendsFeedComponentView _avatarSize]
// Type encoding: d16@0:8
// Implementation: 0x105bbbcac

// -[SCFriendsFeedComponentView _avatarPreferredImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105bbbcec

// -[SCFriendsFeedComponentView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105bbbd3c

// -[SCFriendsFeedComponentView _layoutButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbddbc

// -[SCFriendsFeedComponentView _layoutButton:buttonMode:bounds:center:]
// Type encoding: v80@0:8@16Q24{CGRect={CGPoint=dd}{CGSize=dd}}32{CGPoint=dd}64
// Implementation: 0x105bbde68

// -[SCFriendsFeedComponentView _rtlSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105bbdf68

// -[SCFriendsFeedComponentView prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x105bbe84c

// -[SCFriendsFeedComponentView feedIconView]
// Type encoding: @16@0:8
// Implementation: 0x105bbeb74

// -[SCFriendsFeedComponentView operaBaseView]
// Type encoding: @16@0:8
// Implementation: 0x105bbeb84

// -[SCFriendsFeedComponentView setUberAvatarScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbec10

// -[SCFriendsFeedComponentView setUberAvatarScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbec48

// -[SCFriendsFeedComponentView setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbec80

// -[SCFriendsFeedComponentView setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbed20

// -[SCFriendsFeedComponentView setAvatarFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbeda0

// -[SCFriendsFeedComponentView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbee48

// -[SCFriendsFeedComponentView setBackgroundAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x105bbf020

// -[SCFriendsFeedComponentView setHighlighted:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105bbf18c

// -[SCFriendsFeedComponentView setHighlighted:animated:delayed:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x105bbf194

// -[SCFriendsFeedComponentView _updateBottomBorder]
// Type encoding: v16@0:8
// Implementation: 0x105bbf624

// -[SCFriendsFeedComponentView _updateAvatarView]
// Type encoding: v16@0:8
// Implementation: 0x105bbf6b0

// -[SCFriendsFeedComponentView _addAvatarContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bbfd74

// -[SCFriendsFeedComponentView _detachAvatarContainer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105bbfdfc

// -[SCFriendsFeedComponentView _animateTypingBubbleViewIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105bbfe5c

// -[SCFriendsFeedComponentView _updateMainLabel]
// Type encoding: v16@0:8
// Implementation: 0x105bc0044

// -[SCFriendsFeedComponentView _updateSubLabel]
// Type encoding: v16@0:8
// Implementation: 0x105bc0360

// -[SCFriendsFeedComponentView _updateSubLabelTapGesture]
// Type encoding: v16@0:8
// Implementation: 0x105bc05a0

// -[SCFriendsFeedComponentView _updateOpacity]
// Type encoding: v16@0:8
// Implementation: 0x105bc05e0

// -[SCFriendsFeedComponentView _updateRightButtonWithRightButtonViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc0624

// -[SCFriendsFeedComponentView _showUnifiedActionButtonWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc0c70

// -[SCFriendsFeedComponentView _showReplyButtonWithButtonMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105bc104c

// -[SCFriendsFeedComponentView _showDefaultReplyButtonWithButtonMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105bc13b0

// -[SCFriendsFeedComponentView _showContextButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc16c0

// -[SCFriendsFeedComponentView _showLensSuggestionButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc19ec

// -[SCFriendsFeedComponentView _showLiveGamingButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc1d30

// -[SCFriendsFeedComponentView _showCallingButtonWithPresenceContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc2054

// -[SCFriendsFeedComponentView _showRetryButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc2344

// -[SCFriendsFeedComponentView _showChatButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc25c8

// -[SCFriendsFeedComponentView _showClearButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc284c

// -[SCFriendsFeedComponentView _showAIBotButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc2ad0

// -[SCFriendsFeedComponentView _showAdCampaignButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc2d30

// -[SCFriendsFeedComponentView _updateStreakRestoreButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc2ff0

// -[SCFriendsFeedComponentView _updateFriendsFeedSublabelFriendmojiView]
// Type encoding: v16@0:8
// Implementation: 0x105bc3278

// -[SCFriendsFeedComponentView _updateSublabelStreakRestoreButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc3470

// -[SCFriendsFeedComponentView _updateAvatarIconView]
// Type encoding: v16@0:8
// Implementation: 0x105bc3634

// -[SCFriendsFeedComponentView _updateAvatarFriendmojiView]
// Type encoding: v16@0:8
// Implementation: 0x105bc3948

// -[SCFriendsFeedComponentView _updateFriendsFeedFriendmojiView]
// Type encoding: v16@0:8
// Implementation: 0x105bc3bbc

// -[SCFriendsFeedComponentView _handleAnimations]
// Type encoding: v16@0:8
// Implementation: 0x105bc3dc4

// -[SCFriendsFeedComponentView _handlePeekAPeekAnimationsForAnimationModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc407c

// -[SCFriendsFeedComponentView _updatePeekAPeekView]
// Type encoding: v16@0:8
// Implementation: 0x105bc40fc

// -[SCFriendsFeedComponentView _getPeekAPeekViews]
// Type encoding: @16@0:8
// Implementation: 0x105bc4188

// -[SCFriendsFeedComponentView _isSublabelAnimationActive]
// Type encoding: B16@0:8
// Implementation: 0x105bc454c

// -[SCFriendsFeedComponentView handleSingleTapUnifiedActionButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc4658

// -[SCFriendsFeedComponentView handleDoubleTapUnifiedActionButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc47b4

// -[SCFriendsFeedComponentView handlePressOnReplyButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc4888

// -[SCFriendsFeedComponentView handlePressOnSnapButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc4b54

// -[SCFriendsFeedComponentView handlePressOnMissedCall]
// Type encoding: v16@0:8
// Implementation: 0x105bc4b88

// -[SCFriendsFeedComponentView handlePressOnFriendshipFlashback]
// Type encoding: v16@0:8
// Implementation: 0x105bc4bbc

// -[SCFriendsFeedComponentView handlePressOnGroupJoinPermission]
// Type encoding: v16@0:8
// Implementation: 0x105bc4bf0

// -[SCFriendsFeedComponentView didTapOnLensButton]
// Type encoding: v16@0:8
// Implementation: 0x105bc4c24

// -[SCFriendsFeedComponentView lensReplyCameraDidCloseWith:]
// Type encoding: v20@0:8B16
// Implementation: 0x105bc4c58

// -[SCFriendsFeedComponentView didTapOnAvatarView]
// Type encoding: v16@0:8
// Implementation: 0x105bc4c5c

// -[SCFriendsFeedComponentView didTapOnStory]
// Type encoding: v16@0:8
// Implementation: 0x105bc4c90

// -[SCFriendsFeedComponentView didTapOnPublisherProfile]
// Type encoding: v16@0:8
// Implementation: 0x105bc4cc4

// -[SCFriendsFeedComponentView handleTapOnStoryIconFromAvatarView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc4cc8

// -[SCFriendsFeedComponentView handleLongPressOnStoryIconFromAvatarView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc4cfc

// -[SCFriendsFeedComponentView handleTapOnBitmojiFromAvatarView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc4d00

// -[SCFriendsFeedComponentView _isSublabelFriendmojiViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc4d34

// -[SCFriendsFeedComponentView _isSublabelStreakRestoreButtonVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc4db0

// -[SCFriendsFeedComponentView _isRightFriendmojiViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc4e2c

// -[SCFriendsFeedComponentView _isUnifiedActionButtonViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc4ea8

// -[SCFriendsFeedComponentView _isCameraReplyButtonViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc4f24

// -[SCFriendsFeedComponentView _isCameraDefaultReplyButtonViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc4fa0

// -[SCFriendsFeedComponentView _isContextButtonViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc501c

// -[SCFriendsFeedComponentView _isContextualLensButtonViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc5044

// -[SCFriendsFeedComponentView _isGamingButtonViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc506c

// -[SCFriendsFeedComponentView _isCallingButtonViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x105bc5094

// -[SCFriendsFeedComponentView _isStreakRestoreButtonV2Visible]
// Type encoding: B16@0:8
// Implementation: 0x105bc5110

// -[SCFriendsFeedComponentView _addTouchDownRecognizerToView:action:]
// Type encoding: v32@0:8@16:24
// Implementation: 0x105bc518c

// -[SCFriendsFeedComponentView _handleReplyButtonTouchDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5284

// -[SCFriendsFeedComponentView _handleUnifiedActionButtonTouchDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc52c0

// -[SCFriendsFeedComponentView _notifyReplyButtonTouchDown]
// Type encoding: v16@0:8
// Implementation: 0x105bc53c8

// -[SCFriendsFeedComponentView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105bc53fc

// -[SCFriendsFeedComponentView touchesBegan:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bc546c

// -[SCFriendsFeedComponentView touchesEnded:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bc5744

// -[SCFriendsFeedComponentView touchesCancelled:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bc5804

// -[SCFriendsFeedComponentView touchesMoved:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bc58c4

// -[SCFriendsFeedComponentView traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5984

// -[SCFriendsFeedComponentView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105bc5a40

// -[SCFriendsFeedComponentView delegate]
// Type encoding: @16@0:8
// Implementation: 0x105bc5c38

// -[SCFriendsFeedComponentView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5c58

// -[SCFriendsFeedComponentView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x105bc5c6c

// -[SCFriendsFeedComponentView imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x105bc5c7c

// -[SCFriendsFeedComponentView imageFetchingService]
// Type encoding: @16@0:8
// Implementation: 0x105bc5c8c

// -[SCFriendsFeedComponentView avatarFactory]
// Type encoding: @16@0:8
// Implementation: 0x105bc5c9c

// -[SCFriendsFeedComponentView animationHandler]
// Type encoding: @16@0:8
// Implementation: 0x105bc5cac

// -[SCFriendsFeedComponentView setAnimationHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5cbc

// -[SCFriendsFeedComponentView uberAvatarScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x105bc5cfc

// -[SCFriendsFeedComponentView uberAvatarScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x105bc5d0c

// -[SCFriendsFeedComponentView contextPostSnapFeedScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x105bc5d1c

// -[SCFriendsFeedComponentView setContextPostSnapFeedScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5d2c

// -[SCFriendsFeedComponentView contextPostSnapFeedScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x105bc5d6c

// -[SCFriendsFeedComponentView setContextPostSnapFeedScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5d7c

// -[SCFriendsFeedComponentView lensFriendsFeedContextButtonScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x105bc5dbc

// -[SCFriendsFeedComponentView setLensFriendsFeedContextButtonScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5dcc

// -[SCFriendsFeedComponentView lensFriendsFeedContextButtonScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x105bc5e0c

// -[SCFriendsFeedComponentView setLensFriendsFeedContextButtonScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5e1c

// -[SCFriendsFeedComponentView friendsFeedGamingButtonScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x105bc5e5c

// -[SCFriendsFeedComponentView setFriendsFeedGamingButtonScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5e6c

// -[SCFriendsFeedComponentView friendsFeedGamesPresenceButtonScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x105bc5eac

// -[SCFriendsFeedComponentView setFriendsFeedGamesPresenceButtonScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5ebc

// -[SCFriendsFeedComponentView baseViewController]
// Type encoding: @16@0:8
// Implementation: 0x105bc5efc

// -[SCFriendsFeedComponentView setBaseViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5f1c

// -[SCFriendsFeedComponentView simpleSnapchatExperimentConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x105bc5f30

// -[SCFriendsFeedComponentView doubleTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x105bc5f40

// -[SCFriendsFeedComponentView configProvider]
// Type encoding: @16@0:8
// Implementation: 0x105bc5f50

// -[SCFriendsFeedComponentView setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5f60

// -[SCFriendsFeedComponentView overlayItem]
// Type encoding: @16@0:8
// Implementation: 0x105bc5fa0

// -[SCFriendsFeedComponentView setOverlayItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bc5fb0

// -[SCFriendsFeedComponentView messagingExperimentService]
// Type encoding: @16@0:8
// Implementation: 0x105bc5ff0

// -[SCFriendsFeedComponentView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bc6000

@end
