// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessageChatTableViewCell
// Superclass: SCChatTableViewCell
// Address: 0x112b5bea8

@interface SCMessageChatTableViewCell

// Property: payloadView; attributes: T@"UIView",&,N,V_payloadView
// Property: payloadContainerView; attributes: T@"UIView",R,N
// Property: statusLabelView; attributes: T@"SCLazy",&,N,V_statusLabelView
// Property: payloadAccessoryView; attributes: T@"SCLazy",&,N,V_payloadAccessoryView
// Property: timeLabel; attributes: T@"UILabel",&,N,V_timeLabel
// Property: senderLine; attributes: T@"SCSenderLineView",&,N,V_senderLine
// Property: headerStatusView; attributes: T@"SCHeaderStatusView",&,N,V_headerStatusView
// Property: quotedMessageView; attributes: T@"SCChatComposerContextHolderView",&,N,V_quotedMessageView
// Property: reactableDelegate; attributes: T@"<SCChatReactableMessageDelegate>",W,N,V_reactableDelegate
// Property: quotedMessageDelegate; attributes: T@"<SCChatQuotedMessageDelegate>",W,N,V_quotedMessageDelegate
// Property: valdiRuntimeProvider; attributes: T@"SCLazy",&,N,V_valdiRuntimeProvider

// -[SCMessageChatTableViewCell initWithParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x10704c010

// -[SCMessageChatTableViewCell gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10704c5c4

// -[SCMessageChatTableViewCell gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x10704c67c

// -[SCMessageChatTableViewCell pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x10704c8f4

// -[SCMessageChatTableViewCell initHeader]
// Type encoding: v16@0:8
// Implementation: 0x10704cb00

// -[SCMessageChatTableViewCell initMetadataViews]
// Type encoding: v16@0:8
// Implementation: 0x10704cbb0

// -[SCMessageChatTableViewCell _buildStatusLabelView]
// Type encoding: @16@0:8
// Implementation: 0x10704cc3c

// -[SCMessageChatTableViewCell _buildPayloadAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x10704cca4

// -[SCMessageChatTableViewCell _buildAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x10704cd0c

// -[SCMessageChatTableViewCell _buildStackedAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x10704cd94

// -[SCMessageChatTableViewCell _buildPostSnapActionsView]
// Type encoding: @16@0:8
// Implementation: 0x10704ce1c

// -[SCMessageChatTableViewCell initPayloadView]
// Type encoding: v16@0:8
// Implementation: 0x10704cec4

// -[SCMessageChatTableViewCell _initStatusMessageHeaderLabel]
// Type encoding: v16@0:8
// Implementation: 0x10704d580

// -[SCMessageChatTableViewCell payloadContainerView]
// Type encoding: @16@0:8
// Implementation: 0x10704d600

// -[SCMessageChatTableViewCell prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x10704d630

// -[SCMessageChatTableViewCell displayCell]
// Type encoding: v16@0:8
// Implementation: 0x10704d85c

// -[SCMessageChatTableViewCell didChangeVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x10704d860

// -[SCMessageChatTableViewCell _renderHeaderWithDateHeader:withSenderHeader:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10704d8a8

// -[SCMessageChatTableViewCell layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10704db48

// -[SCMessageChatTableViewCell setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10704f37c

// -[SCMessageChatTableViewCell _updateQuotedMessageViewWithRenderableViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10704f64c

// -[SCMessageChatTableViewCell _onTapQuotedMessageView]
// Type encoding: v16@0:8
// Implementation: 0x10704f798

// -[SCMessageChatTableViewCell _updateAccessoryWithContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10704f834

// -[SCMessageChatTableViewCell _updateCtaAccessoryWithContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10704f9fc

// -[SCMessageChatTableViewCell _updatePostSnapActions:previousPostSnapActions:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10704faf0

// -[SCMessageChatTableViewCell setIsScrollViewScrolling:]
// Type encoding: v20@0:8B16
// Implementation: 0x10704fc34

// -[SCMessageChatTableViewCell _updateTimeLabelVisibility]
// Type encoding: v16@0:8
// Implementation: 0x10704fc6c

// -[SCMessageChatTableViewCell _updateTimeLabelVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x10704fc94

// -[SCMessageChatTableViewCell _shouldHideTimeLabel]
// Type encoding: B16@0:8
// Implementation: 0x10704fccc

// -[SCMessageChatTableViewCell _animateUpdateTimeLabelVisibility]
// Type encoding: v16@0:8
// Implementation: 0x10704fd24

// -[SCMessageChatTableViewCell _animateHideTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x10704fd84

// -[SCMessageChatTableViewCell _getCtaCenter:payloadContainerViewX:payloadContainerViewWidth:messageContentWidthForCta:margins:shouldShrinkToFitCta:]
// Type encoding: {CGPoint=dd}68@0:8{CGSize=dd}16d32d40d48d56B64
// Implementation: 0x10704fe80

// -[SCMessageChatTableViewCell messageChatViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107050018

// -[SCMessageChatTableViewCell renderBody]
// Type encoding: v16@0:8
// Implementation: 0x10705001c

// -[SCMessageChatTableViewCell renderPayload]
// Type encoding: v16@0:8
// Implementation: 0x107050040

// -[SCMessageChatTableViewCell renderRoundCorners]
// Type encoding: v16@0:8
// Implementation: 0x107050044

// -[SCMessageChatTableViewCell _statusMessageLabelVerticalOffset]
// Type encoding: d16@0:8
// Implementation: 0x107050160

// -[SCMessageChatTableViewCell _senderLineCornerMask]
// Type encoding: Q16@0:8
// Implementation: 0x1070501a8

// -[SCMessageChatTableViewCell renderMetadata]
// Type encoding: v16@0:8
// Implementation: 0x107050220

// -[SCMessageChatTableViewCell _configureReactionsView]
// Type encoding: v16@0:8
// Implementation: 0x107050298

// -[SCMessageChatTableViewCell _didTapOnReactionsView:]
// Type encoding: B24@0:8@16
// Implementation: 0x10705051c

// -[SCMessageChatTableViewCell setContentIsFocused:focusedMessageContent:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1070505a4

// -[SCMessageChatTableViewCell payloadHeight]
// Type encoding: d16@0:8
// Implementation: 0x1070505c4

// -[SCMessageChatTableViewCell thumbnailViewForMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107050694

// -[SCMessageChatTableViewCell contentFrameInPayloadView]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10705069c

// -[SCMessageChatTableViewCell shouldHandleDoubleTapGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x107050700

// -[SCMessageChatTableViewCell _animateChatReplyInitiated]
// Type encoding: v16@0:8
// Implementation: 0x10705077c

// -[SCMessageChatTableViewCell animateChatReplyTransformWithCurrentOffset:iconScale:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1070508ec

// -[SCMessageChatTableViewCell _animateSwipeGestureReset]
// Type encoding: v16@0:8
// Implementation: 0x107050a4c

// -[SCMessageChatTableViewCell _animateChatReplyIconEnlarge]
// Type encoding: v16@0:8
// Implementation: 0x107050b18

// -[SCMessageChatTableViewCell _animateChatReplyIconShrink]
// Type encoding: v16@0:8
// Implementation: 0x107050bb0

// -[SCMessageChatTableViewCell animateViewCellSlideBack]
// Type encoding: v16@0:8
// Implementation: 0x107050c38

// -[SCMessageChatTableViewCell resetPanAnimation]
// Type encoding: v16@0:8
// Implementation: 0x107050d1c

// -[SCMessageChatTableViewCell _chatReplyPopAnimation]
// Type encoding: v16@0:8
// Implementation: 0x107050e14

// -[SCMessageChatTableViewCell handleEndOfPanAnimation]
// Type encoding: v16@0:8
// Implementation: 0x107050e70

// -[SCMessageChatTableViewCell _resetChatReply]
// Type encoding: v16@0:8
// Implementation: 0x107050f34

// -[SCMessageChatTableViewCell _handleGetQuotedMessage]
// Type encoding: v16@0:8
// Implementation: 0x107050f60

// -[SCMessageChatTableViewCell _resetChatReplyIcon]
// Type encoding: v16@0:8
// Implementation: 0x107051094

// -[SCMessageChatTableViewCell _transformCta:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x1070510dc

// -[SCMessageChatTableViewCell handleVerticalScrolling:]
// Type encoding: v20@0:8B16
// Implementation: 0x107051184

// -[SCMessageChatTableViewCell _ctaRendersOverMessage]
// Type encoding: B16@0:8
// Implementation: 0x1070511f8

// -[SCMessageChatTableViewCell _shouldDisplayCta]
// Type encoding: B16@0:8
// Implementation: 0x107051278

// -[SCMessageChatTableViewCell applyTransformToPayloadContent:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x107051320

// -[SCMessageChatTableViewCell removePayloadContentAnimations]
// Type encoding: v16@0:8
// Implementation: 0x107051450

// -[SCMessageChatTableViewCell _getTableView]
// Type encoding: @16@0:8
// Implementation: 0x1070515c4

// -[SCMessageChatTableViewCell _neighboringCellAtOffset:]
// Type encoding: @24@0:8q16
// Implementation: 0x107051690

// -[SCMessageChatTableViewCell _cornerRadiiFromMask:originalRadii:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1070517d4

// -[SCMessageChatTableViewCell _calculateCondensedCorners:previousWidth:nextWidth:]
// Type encoding: Q40@0:8d16d24d32
// Implementation: 0x1070518c8

// -[SCMessageChatTableViewCell _adjustCornersBasedOnPhysicalWidths:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107051b34

// -[SCMessageChatTableViewCell payloadView]
// Type encoding: @16@0:8
// Implementation: 0x107051f0c

// -[SCMessageChatTableViewCell setPayloadView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107051f1c

// -[SCMessageChatTableViewCell statusLabelView]
// Type encoding: @16@0:8
// Implementation: 0x107051f5c

// -[SCMessageChatTableViewCell setStatusLabelView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107051f6c

// -[SCMessageChatTableViewCell payloadAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x107051fac

// -[SCMessageChatTableViewCell setPayloadAccessoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107051fbc

// -[SCMessageChatTableViewCell timeLabel]
// Type encoding: @16@0:8
// Implementation: 0x107051ffc

// -[SCMessageChatTableViewCell setTimeLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10705200c

// -[SCMessageChatTableViewCell senderLine]
// Type encoding: @16@0:8
// Implementation: 0x10705204c

// -[SCMessageChatTableViewCell setSenderLine:]
// Type encoding: v24@0:8@16
// Implementation: 0x10705205c

// -[SCMessageChatTableViewCell headerStatusView]
// Type encoding: @16@0:8
// Implementation: 0x10705209c

// -[SCMessageChatTableViewCell setHeaderStatusView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070520ac

// -[SCMessageChatTableViewCell quotedMessageView]
// Type encoding: @16@0:8
// Implementation: 0x1070520ec

// -[SCMessageChatTableViewCell setQuotedMessageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070520fc

// -[SCMessageChatTableViewCell reactableDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10705213c

// -[SCMessageChatTableViewCell setReactableDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10705215c

// -[SCMessageChatTableViewCell quotedMessageDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107052170

// -[SCMessageChatTableViewCell setQuotedMessageDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107052190

// -[SCMessageChatTableViewCell valdiRuntimeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1070521a4

// -[SCMessageChatTableViewCell setValdiRuntimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070521b4

// -[SCMessageChatTableViewCell .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070521f4

@end
