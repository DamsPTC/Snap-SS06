// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesInputView
// Superclass: UIView
// Address: 0x112ad6618

@interface SCSpotlightRepliesInputView

// Property: textView; attributes: T@"SCSpotlightRepliesTextView",R,N,V_textView
// Property: delegate; attributes: T@"<SCSpotlightRepliesInputViewDelegate>",W,N,V_delegate
// Property: stickerDrawerDelegate; attributes: T@"<SCSpotlightCommentsStickerDrawerDelegate>",W,N,V_stickerDrawerDelegate
// Property: createRepliesGestureType; attributes: Tq,N,V_createRepliesGestureType
// Property: creatorBitmojiFriendmojiPolicy; attributes: Tq,N,V_creatorBitmojiFriendmojiPolicy
// Property: createCommentInteractionContext; attributes: Tq,N,V_createCommentInteractionContext
// Property: viewModel; attributes: T@"SCSpotlightRepliesInputViewModel",&,N,V_viewModel
// Property: stickerDrawerContainer; attributes: T@"SCSubviewUIContainer",W,N,V_stickerDrawerContainer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesInputView initWithBitmojiSelfieProvider:avatarProvider:userID:repliesLogger:repliesFetcher:repliesActionsConfig:commentsSnapReplyActionsConfig:commentPosterThumbnailFetcher:circumstanceEngine:storiesConfigProvider:commentsStickerPickerExposer:creatorAvatarId:commentsAttachmentFetcher:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x106258678

// -[SCSpotlightRepliesInputView _createAccessoryStackView]
// Type encoding: v16@0:8
// Implementation: 0x106258a84

// -[SCSpotlightRepliesInputView topAccessoryViewWithType:]
// Type encoding: @24@0:8q16
// Implementation: 0x106258d44

// -[SCSpotlightRepliesInputView addTopAccessoryView:type:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106258e08

// -[SCSpotlightRepliesInputView _stackViewOrderedArray]
// Type encoding: @16@0:8
// Implementation: 0x106259050

// -[SCSpotlightRepliesInputView removeTopAccessoryViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10625905c

// -[SCSpotlightRepliesInputView dismissKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x106259068

// -[SCSpotlightRepliesInputView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062590f8

// -[SCSpotlightRepliesInputView setViewModel:forceUpdate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106259100

// -[SCSpotlightRepliesInputView textDidChangeEvent]
// Type encoding: @16@0:8
// Implementation: 0x10625931c

// -[SCSpotlightRepliesInputView emitTextDidChangeWithRepliesInputTextEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625934c

// -[SCSpotlightRepliesInputView addNewMention:replacementRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10625935c

// -[SCSpotlightRepliesInputView _updateMentionRenderingForText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106259544

// -[SCSpotlightRepliesInputView _isReplyingToCommentWithParentCommentId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106259660

// -[SCSpotlightRepliesInputView _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x10625966c

// -[SCSpotlightRepliesInputView inputViewHeight]
// Type encoding: d16@0:8
// Implementation: 0x106259b70

// -[SCSpotlightRepliesInputView _setupCameraButton]
// Type encoding: v16@0:8
// Implementation: 0x106259b8c

// -[SCSpotlightRepliesInputView _setUpSendButtonV2]
// Type encoding: v16@0:8
// Implementation: 0x106259eb8

// -[SCSpotlightRepliesInputView _setUpMentionButton]
// Type encoding: v16@0:8
// Implementation: 0x10625a19c

// -[SCSpotlightRepliesInputView _updateMentionRangesForFinalTextToBeSent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625a31c

// -[SCSpotlightRepliesInputView _sendCommentFromButton]
// Type encoding: v16@0:8
// Implementation: 0x10625a6c8

// -[SCSpotlightRepliesInputView _sendCommentWithGesture:]
// Type encoding: v24@0:8q16
// Implementation: 0x10625a6d0

// -[SCSpotlightRepliesInputView _cameraButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10625a880

// -[SCSpotlightRepliesInputView _mentionButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10625a8b8

// -[SCSpotlightRepliesInputView _insertTextWhenEligible:selectedRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10625ab28

// -[SCSpotlightRepliesInputView _logCreateCommentIfNeededWithCommentsInteractionContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x10625abb0

// -[SCSpotlightRepliesInputView _setUpStickerDrawerButton]
// Type encoding: v16@0:8
// Implementation: 0x10625af54

// -[SCSpotlightRepliesInputView _stickerButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10625b500

// -[SCSpotlightRepliesInputView _creatorHasValidFriendmojiPolicy]
// Type encoding: B16@0:8
// Implementation: 0x10625b6b0

// -[SCSpotlightRepliesInputView _removeStickerPickerScope]
// Type encoding: v16@0:8
// Implementation: 0x10625b6f0

// -[SCSpotlightRepliesInputView didDismissStickerDrawer]
// Type encoding: v16@0:8
// Implementation: 0x10625b76c

// -[SCSpotlightRepliesInputView _logStickerDrawerEventOpen:]
// Type encoding: v20@0:8B16
// Implementation: 0x10625b7b8

// -[SCSpotlightRepliesInputView stickerPickerDidSelectWithSticker:sectionName:searchQueryText:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10625b854

// -[SCSpotlightRepliesInputView addReplyAttachmentToCurrentComment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625ba84

// -[SCSpotlightRepliesInputView _addAttachmentToCurrentComment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625bce4

// -[SCSpotlightRepliesInputView didTapRemoveAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625bd30

// -[SCSpotlightRepliesInputView _textViewHeight]
// Type encoding: d16@0:8
// Implementation: 0x10625bed0

// -[SCSpotlightRepliesInputView _setupConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10625bf44

// -[SCSpotlightRepliesInputView updateTextViewHeight]
// Type encoding: v16@0:8
// Implementation: 0x10625bf78

// -[SCSpotlightRepliesInputView _setupInputContainerViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10625bfa4

// -[SCSpotlightRepliesInputView _setupContentViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10625c530

// -[SCSpotlightRepliesInputView _setupAvatarConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10625c6fc

// -[SCSpotlightRepliesInputView _setUpMentionButtonConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10625caa8

// -[SCSpotlightRepliesInputView willPasteTextIntoTextInputView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625ce0c

// -[SCSpotlightRepliesInputView textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625ce20

// -[SCSpotlightRepliesInputView textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10625ce5c

// -[SCSpotlightRepliesInputView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625d0e0

// -[SCSpotlightRepliesInputView _updateSendButtonVisibilityIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10625d230

// -[SCSpotlightRepliesInputView _showSendButtonV2]
// Type encoding: v16@0:8
// Implementation: 0x10625d320

// -[SCSpotlightRepliesInputView _hideSendButtonV2]
// Type encoding: v16@0:8
// Implementation: 0x10625d3a0

// -[SCSpotlightRepliesInputView _swapButton:withButton:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10625d420

// -[SCSpotlightRepliesInputView _updateTextViewWidthWithShowSendButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x10625d5c8

// -[SCSpotlightRepliesInputView _fetchBitmojiSelfie]
// Type encoding: v16@0:8
// Implementation: 0x10625d688

// -[SCSpotlightRepliesInputView _didCompleteFetchingSelfieWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625d83c

// -[SCSpotlightRepliesInputView _setupTopShadowToView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625d854

// -[SCSpotlightRepliesInputView _deleteMentionsInRange:replacementText:]
// Type encoding: v40@0:8{_NSRange=QQ}16@32
// Implementation: 0x10625d904

// -[SCSpotlightRepliesInputView _offsetMentionsForFinalText:textView:range:]
// Type encoding: v48@0:8@16@24{_NSRange=QQ}32
// Implementation: 0x10625dad0

// -[SCSpotlightRepliesInputView addTextToCurrentSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625dcd8

// -[SCSpotlightRepliesInputView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x10625de30

// -[SCSpotlightRepliesInputView textView]
// Type encoding: @16@0:8
// Implementation: 0x10625dfac

// -[SCSpotlightRepliesInputView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10625dfbc

// -[SCSpotlightRepliesInputView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625dfdc

// -[SCSpotlightRepliesInputView stickerDrawerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10625dff0

// -[SCSpotlightRepliesInputView setStickerDrawerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625e010

// -[SCSpotlightRepliesInputView createRepliesGestureType]
// Type encoding: q16@0:8
// Implementation: 0x10625e024

// -[SCSpotlightRepliesInputView setCreateRepliesGestureType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10625e034

// -[SCSpotlightRepliesInputView creatorBitmojiFriendmojiPolicy]
// Type encoding: q16@0:8
// Implementation: 0x10625e044

// -[SCSpotlightRepliesInputView setCreatorBitmojiFriendmojiPolicy:]
// Type encoding: v24@0:8q16
// Implementation: 0x10625e054

// -[SCSpotlightRepliesInputView createCommentInteractionContext]
// Type encoding: q16@0:8
// Implementation: 0x10625e064

// -[SCSpotlightRepliesInputView setCreateCommentInteractionContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x10625e074

// -[SCSpotlightRepliesInputView viewModel]
// Type encoding: @16@0:8
// Implementation: 0x10625e084

// -[SCSpotlightRepliesInputView stickerDrawerContainer]
// Type encoding: @16@0:8
// Implementation: 0x10625e094

// -[SCSpotlightRepliesInputView setStickerDrawerContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10625e0b4

// -[SCSpotlightRepliesInputView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10625e0c8

@end
