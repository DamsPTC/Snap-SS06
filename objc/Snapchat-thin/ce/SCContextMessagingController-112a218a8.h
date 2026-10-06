// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextMessagingController
// Superclass: NSObject
// Address: 0x112a218a8

@interface SCContextMessagingController

// Property: delegate; attributes: T@"<SCContextMessagingControllerDelegate>",W,N,V_delegate
// Property: groupConversationId; attributes: T@"NSString",R,N,V_groupConversationId
// Property: singleRecipientDisplayName; attributes: T@"NSString",R,N,V_singleRecipientDisplayName
// Property: singleRecipientUsername; attributes: T@"NSString",R,N,V_singleRecipientUsername
// Property: actionMenuViewController; attributes: T@"SCContextV2ActionMenuViewController",&,N
// Property: chatViewControllerShouldShowBackdrop; attributes: TB,N
// Property: chatInputControllerShouldIgnoreSafeAreaBottomInsets; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: contextActionSource; attributes: T@"SCContextLoggingActionSource",&,N,V_contextActionSource

// -[SCContextMessagingController initWithDelegate:sessionParams:userSession:circumstanceEngine:parentViewController:snapchatterServices:logger:animator:conversationIdResolver:notificationManager:storiesSnapReadReceiptCoordinator:groupsDataCreator:groupsDataFetcher:storyShareSender:inputPlugins:userInfoServices:snapProPreferencesManager:blizzardLogger:storiesGrapheneMetricsEmitter:friendmojiFilteredContainer:recipientUserId:plusFeatureGating:plusUpsellManaging:plusUpsellNotificationScopeServices:contextActionParams:contextExperimentService:messagingExperimentService:featureSettingsService:conversationDataFetcher:swipeDirection:replyOptions:nglStudySettingServices:creatorSubscriptionsInfoProvider:preferences:backgroundPerformer:messageActionHandler:]
// Type encoding: @304@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240q248Q256@264@272@280@288@296
// Implementation: 0x1051e6c00

// -[SCContextMessagingController _sourceInformation]
// Type encoding: @16@0:8
// Implementation: 0x1051e7ebc

// -[SCContextMessagingController _recipientSnapchattersForSourceAndStoryMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051e84c0

// -[SCContextMessagingController _activeConversationInformation]
// Type encoding: @16@0:8
// Implementation: 0x1051e88c4

// -[SCContextMessagingController _conversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x1051e9050

// -[SCContextMessagingController _updateActiveConversationInformation]
// Type encoding: v16@0:8
// Implementation: 0x1051e9210

// -[SCContextMessagingController _updateSourceInformation]
// Type encoding: v16@0:8
// Implementation: 0x1051e9234

// -[SCContextMessagingController _updateStoryMetadata]
// Type encoding: v16@0:8
// Implementation: 0x1051e9304

// -[SCContextMessagingController fullscreenViewController]
// Type encoding: @16@0:8
// Implementation: 0x1051e938c

// -[SCContextMessagingController setActionMenuViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051e93b4

// -[SCContextMessagingController actionMenuViewController]
// Type encoding: @16@0:8
// Implementation: 0x1051e93bc

// -[SCContextMessagingController isFullscreen]
// Type encoding: B16@0:8
// Implementation: 0x1051e93c4

// -[SCContextMessagingController isFullscreenOrWillBecomeFullscreen]
// Type encoding: B16@0:8
// Implementation: 0x1051e9414

// -[SCContextMessagingController isCurrentlyVisibleInsideInputBarContainer]
// Type encoding: B16@0:8
// Implementation: 0x1051e944c

// -[SCContextMessagingController inputBarView]
// Type encoding: @16@0:8
// Implementation: 0x1051e94b0

// -[SCContextMessagingController inputBarViewHeight]
// Type encoding: d16@0:8
// Implementation: 0x1051e9530

// -[SCContextMessagingController presentInFullscreenAnimated:inputItemDeeplink:withKeyboardFocused:completion:]
// Type encoding: v40@0:8B16@20B28@?32
// Implementation: 0x1051e953c

// -[SCContextMessagingController _endFullscreenModeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1051e972c

// -[SCContextMessagingController _presentUpsell]
// Type encoding: v16@0:8
// Implementation: 0x1051e97b8

// -[SCContextMessagingController _presentPlusNotification]
// Type encoding: v16@0:8
// Implementation: 0x1051e9adc

// -[SCContextMessagingController _presentCreatorSubscriptionNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051e9ba0

// -[SCContextMessagingController _exposePlusUpsellNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051e9d18

// -[SCContextMessagingController messagingViewControllerWillPresentFullscreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ea03c

// -[SCContextMessagingController messagingViewControllerWasDismissedFromFullscreen:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1051ea0bc

// -[SCContextMessagingController swapReplyRecipient]
// Type encoding: v16@0:8
// Implementation: 0x1051ea2f8

// -[SCContextMessagingController _updateChatPlaceholderTextForRecipientType:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1051ea350

// -[SCContextMessagingController _chatIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1051ea380

// -[SCContextMessagingController _chatRecipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x1051ea40c

// -[SCContextMessagingController _presentChatInChatInputContainerView:viewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1051ea56c

// -[SCContextMessagingController _replied:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051ea834

// -[SCContextMessagingController _messageSendEpilogue:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051ea844

// -[SCContextMessagingController _flushStorySnapReadReceiptIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1051ea848

// -[SCContextMessagingController _oneOnOneConversationIdFromSessionParams]
// Type encoding: @16@0:8
// Implementation: 0x1051eaa68

// -[SCContextMessagingController setChatViewControllerShouldShowBackdrop:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051eab90

// -[SCContextMessagingController chatViewControllerShouldShowBackdrop]
// Type encoding: B16@0:8
// Implementation: 0x1051eab98

// -[SCContextMessagingController setChatInputControllerShouldIgnoreSafeAreaBottomInsets:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051eaba0

// -[SCContextMessagingController chatInputControllerShouldIgnoreSafeAreaBottomInsets]
// Type encoding: B16@0:8
// Implementation: 0x1051eaba8

// -[SCContextMessagingController shouldPresentPublicStoryReplyModal]
// Type encoding: B16@0:8
// Implementation: 0x1051eabb0

// -[SCContextMessagingController _showChatSendTextConfirmationDialogIfNeeded:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1051eac58

// -[SCContextMessagingController _showConfirmationDialogWithTitle:description:confirmButtonText:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1051eae38

// -[SCContextMessagingController updateUserContext]
// Type encoding: v16@0:8
// Implementation: 0x1051eb0d8

// -[SCContextMessagingController didPresentInputBarView]
// Type encoding: v16@0:8
// Implementation: 0x1051eb0dc

// -[SCContextMessagingController didEndPresentingInputBarView]
// Type encoding: v16@0:8
// Implementation: 0x1051eb128

// -[SCContextMessagingController interceptMessageSendAttemptForPlugin:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051eb160

// -[SCContextMessagingController _handleInteractiveDrawerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051eb2d8

// -[SCContextMessagingController inputContext:textViewShouldBeginEditing:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1051eb46c

// -[SCContextMessagingController inputContext:willActivateItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1051eb4b0

// -[SCContextMessagingController pluginDidAttemptToSendMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051eb4f4

// -[SCContextMessagingController pluginDidAttemptToEditMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051eb6a0

// -[SCContextMessagingController pluginWillPresentFullscreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051eb6a4

// -[SCContextMessagingController pluginDidDismissFullscreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051eb724

// -[SCContextMessagingController plugin:didEditMessage:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1051eb79c

// -[SCContextMessagingController plugin:didSendMessage:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1051eb7a0

// -[SCContextMessagingController pluginDidDetachFromAccessoryContainer]
// Type encoding: v16@0:8
// Implementation: 0x1051ebb6c

// -[SCContextMessagingController pluginDidAttachToAccessoryContainer]
// Type encoding: v16@0:8
// Implementation: 0x1051ebb70

// -[SCContextMessagingController pluginDidSelectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ebb74

// -[SCContextMessagingController _subscribeToInputStateEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ebb78

// -[SCContextMessagingController _subscribeToInputSizeEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ebdc8

// -[SCContextMessagingController _subscribeToStickerTappedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ebf0c

// -[SCContextMessagingController _inputSizeDidChange:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1051ec020

// -[SCContextMessagingController _isInputDrawerBeingDragged]
// Type encoding: B16@0:8
// Implementation: 0x1051ec0b8

// -[SCContextMessagingController _operaResizeHeightFromCurrentLayout]
// Type encoding: d16@0:8
// Implementation: 0x1051ec214

// -[SCContextMessagingController _announceOperaResizeWithHeight:duration:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1051ec2e8

// -[SCContextMessagingController _flushPendingOperaResizeAnnounce]
// Type encoding: v16@0:8
// Implementation: 0x1051ec4b4

// -[SCContextMessagingController _didTransitionFromState:toState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1051ec64c

// -[SCContextMessagingController _willTransitionFromState:toState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1051ec688

// -[SCContextMessagingController replyParameters]
// Type encoding: @16@0:8
// Implementation: 0x1051ec68c

// -[SCContextMessagingController replyParametersWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1051ec7b8

// -[SCContextMessagingController isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x1051ec810

// -[SCContextMessagingController recipient]
// Type encoding: @16@0:8
// Implementation: 0x1051ec820

// -[SCContextMessagingController recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x1051ec894

// -[SCContextMessagingController isPartiallyVisible]
// Type encoding: B16@0:8
// Implementation: 0x1051ec918

// -[SCContextMessagingController updateChatStickerFriendmojiInfo]
// Type encoding: v16@0:8
// Implementation: 0x1051ec9d8

// -[SCContextMessagingController _replyCompletionHandlerWithNotificationType:]
// Type encoding: @?24@0:8Q16
// Implementation: 0x1051ecc80

// -[SCContextMessagingController _notifyOperaReplyWasSent]
// Type encoding: v16@0:8
// Implementation: 0x1051ecd70

// -[SCContextMessagingController plusUpsellNotificationPresentationCompleted]
// Type encoding: v16@0:8
// Implementation: 0x1051ece00

// -[SCContextMessagingController groupConversationId]
// Type encoding: @16@0:8
// Implementation: 0x1051ece18

// -[SCContextMessagingController singleRecipientDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x1051ece20

// -[SCContextMessagingController singleRecipientUsername]
// Type encoding: @16@0:8
// Implementation: 0x1051ece28

// -[SCContextMessagingController delegate]
// Type encoding: @16@0:8
// Implementation: 0x1051ece30

// -[SCContextMessagingController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ece48

// -[SCContextMessagingController contextActionSource]
// Type encoding: @16@0:8
// Implementation: 0x1051ece54

// -[SCContextMessagingController setContextActionSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051ece5c

// -[SCContextMessagingController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051ece8c

@end
