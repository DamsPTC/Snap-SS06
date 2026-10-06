// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMessageCellViewModel
// Superclass: NSObject
// Address: 0x112b5cb78

@interface SCChatMessageCellViewModel

// Property: identifier; attributes: T@"<NSObject>",R,N
// Property: topRightCornerIsRounded; attributes: TB,N
// Property: bottomRightCornerIsRounded; attributes: TB,N
// Property: bottomLeftCornerIsRounded; attributes: TB,N
// Property: headerIndex; attributes: Ti,N
// Property: height; attributes: Td,N
// Property: topMargin; attributes: Td,R,N
// Property: hidden; attributes: TB,R,N
// Property: conversationId; attributes: T@"NSString",R,N
// Property: isGroupConversation; attributes: TB,R,N
// Property: recipientUserId; attributes: T@"NSString",R,N
// Property: senderUserId; attributes: T@"NSString",R,N
// Property: analyticsMessageId; attributes: T@"NSString",R,N
// Property: reactableViewModel; attributes: T@"SCChatReactableViewModel",R,C,N
// Property: isFirstViewModel; attributes: TB,N
// Property: isLastViewModel; attributes: TB,N
// Property: isLastMessage; attributes: TB,N
// Property: prefetchPluginIdentifier; attributes: T@"NSString",R,N
// Property: reusableCellIdentifier; attributes: T@"NSString",R,N
// Property: shouldDisplayBelowFoldInChat; attributes: TB,R,N
// Property: isUnseenMessageInChat; attributes: TB,R,N
// Property: shouldShowFoldIndicator; attributes: TB,R,N
// Property: shouldShowDateHeader; attributes: TB,R,N
// Property: shouldShowSenderHeader; attributes: TB,R,N
// Property: shouldShowTimestamp; attributes: TB,R,N
// Property: shouldShowSenderLine; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: savableViewModel; attributes: T@"SCChatSavableViewModel",R,C,N,V_savableViewModel
// Property: reactableViewModel; attributes: T@"SCChatReactableViewModel",R,C,N,V_reactableViewModel
// Property: shouldShowSenderHeader; attributes: TB,R,N,V_shouldShowSenderHeader
// Property: senderHeaderViewModel; attributes: T@"SCChatSenderHeaderViewModel",R,C,N,V_senderHeaderViewModel
// Property: senderLine; attributes: T@"SCChatSenderLineViewModel",R,C,N,V_senderLine
// Property: shouldShowFoldIndicator; attributes: TB,R,N,V_shouldShowFoldIndicator
// Property: bodyWidth; attributes: Td,R,N,V_bodyWidth
// Property: payloadWidth; attributes: Td,R,N,V_payloadWidth
// Property: heightExcludingContentHeight; attributes: Td,R,N,V_heightExcludingContentHeight
// Property: minimumContentWidth; attributes: Td,R,N,V_minimumContentWidth
// Property: maximumContentWidth; attributes: Td,R,N,V_maximumContentWidth
// Property: bodyInsets; attributes: T{UIEdgeInsets=dddd},R,N,V_bodyInsets
// Property: payloadContainerViewInsets; attributes: T{UIEdgeInsets=dddd},R,N,V_payloadContainerViewInsets
// Property: payloadContainerViewMargins; attributes: T{UIEdgeInsets=dddd},R,N,V_payloadContainerViewMargins
// Property: payloadContainerCornerRadii; attributes: T@"SCChatMessageCellCornerRadii",R,C,N,V_payloadContainerCornerRadii
// Property: additionalInsets; attributes: T{UIEdgeInsets=dddd},R,N,V_additionalInsets
// Property: payloadViewPosition; attributes: T@"SCChatMessageCellPayloadPosition",R,C,N,V_payloadViewPosition
// Property: reusableCellIdentifier; attributes: T@"NSString",R,C,N,V_reusableCellIdentifier
// Property: shouldDisplayBelowFoldInChat; attributes: TB,R,N,V_shouldDisplayBelowFoldInChat
// Property: isUnseenMessageInChat; attributes: TB,R,N,V_isUnseenMessageInChat
// Property: isAvailableForNewChatsAffordance; attributes: TB,R,N,V_isAvailableForNewChatsAffordance
// Property: isMessageSentBySelf; attributes: TB,R,N,V_isMessageSentBySelf
// Property: dateHeaderViewModel; attributes: T@"SCChatDateHeaderViewModel",R,C,N,V_dateHeaderViewModel
// Property: messageContent; attributes: T@"<SCChatUIContentRenderable>",R,N,V_messageContent
// Property: quotedRenderableViewModel; attributes: T@"SCQuotedRenderableViewModel",R,C,N,V_quotedRenderableViewModel
// Property: belowMessageAccessoryContent; attributes: T@"<SCChatUIContentRenderable>",R,N,V_belowMessageAccessoryContent
// Property: ctaAccessoryContent; attributes: T@"<SCChatUIContentRenderable>",R,N,V_ctaAccessoryContent
// Property: postSnapActionsParams; attributes: T@"SCContextPostSnapParams",R,C,N,V_postSnapActionsParams
// Property: postSnapActionsSize; attributes: T{CGSize=dd},R,N,V_postSnapActionsSize
// Property: timestampViewModel; attributes: T@"SCChatTimestampViewModel",R,C,N,V_timestampViewModel
// Property: identifier; attributes: T@"<NSObject>",R,N,V_identifier
// Property: diffableIdentifier; attributes: T@"<NSObject>",R,N,V_diffableIdentifier
// Property: accessibilityValue; attributes: T@"NSString",R,C,N,V_accessibilityValue
// Property: externalTapAction; attributes: T@"SCActionModel",R,C,N,V_externalTapAction
// Property: externalDoubleTapAction; attributes: T@"SCChatDoubleTapAction",R,C,N,V_externalDoubleTapAction
// Property: prefetchPluginIdentifier; attributes: T@"NSString",R,C,N,V_prefetchPluginIdentifier
// Property: analyticsMessageId; attributes: T@"NSString",R,C,N,V_analyticsMessageId
// Property: message; attributes: T@"SCNMessagingMessage",R,C,N,V_message
// Property: canBeQuoted; attributes: TB,R,N,V_canBeQuoted
// Property: isGroupConversation; attributes: TB,R,N,V_isGroupConversation
// Property: conversationId; attributes: T@"NSString",R,C,N,V_conversationId
// Property: renderAsBubble; attributes: TB,R,N,V_renderAsBubble
// Property: isLastMessage; attributes: TB,R,N,V_isLastMessage
// Property: recipientUserId; attributes: T@"NSString",R,C,N,V_recipientUserId
// Property: senderUserId; attributes: T@"NSString",R,C,N,V_senderUserId
// Property: conversationSubtypeMetadata; attributes: T@"SCChatConversationSubtypeMetadata",R,C,N,V_conversationSubtypeMetadata
// Property: isUnknownMessage; attributes: TB,R,N,V_isUnknownMessage
// Property: messages; attributes: T@"NSArray",R,C,N,V_messages

// -[SCChatMessageCellViewModel xLogObjectInfo]
// Type encoding: @16@0:8
// Implementation: 0x1070711f4

// -[SCChatMessageCellViewModel loadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x107071004

// -[SCChatMessageCellViewModel displayLoadHistoryAction]
// Type encoding: @16@0:8
// Implementation: 0x107071074

// -[SCChatMessageCellViewModel tapLoadHistoryAction]
// Type encoding: @16@0:8
// Implementation: 0x1070710ec

// -[SCChatMessageCellViewModel paginationToken]
// Type encoding: @16@0:8
// Implementation: 0x107071164

// -[SCChatMessageCellViewModel attributedTextForLabel]
// Type encoding: @16@0:8
// Implementation: 0x1065576b8

// -[SCChatMessageCellViewModel headerIndex]
// Type encoding: Q16@0:8
// Implementation: 0x106556204

// -[SCChatMessageCellViewModel setHeaderIndex:]
// Type encoding: v20@0:8i16
// Implementation: 0x10655620c

// -[SCChatMessageCellViewModel bottomRightCornerIsRounded]
// Type encoding: B16@0:8
// Implementation: 0x106556210

// -[SCChatMessageCellViewModel setBottomRightCornerIsRounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x10655624c

// -[SCChatMessageCellViewModel topRightCornerIsRounded]
// Type encoding: B16@0:8
// Implementation: 0x106556250

// -[SCChatMessageCellViewModel setTopRightCornerIsRounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x10655628c

// -[SCChatMessageCellViewModel hidden]
// Type encoding: B16@0:8
// Implementation: 0x106556290

// -[SCChatMessageCellViewModel height]
// Type encoding: d16@0:8
// Implementation: 0x1065562cc

// -[SCChatMessageCellViewModel setHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x106556378

// -[SCChatMessageCellViewModel topMargin]
// Type encoding: d16@0:8
// Implementation: 0x10655637c

// -[SCChatMessageCellViewModel bodyTopMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556384

// -[SCChatMessageCellViewModel additionalBodyInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10655638c

// -[SCChatMessageCellViewModel calculateHeight]
// Type encoding: d16@0:8
// Implementation: 0x106556390

// -[SCChatMessageCellViewModel intervalFromPrevious]
// Type encoding: d16@0:8
// Implementation: 0x106556394

// -[SCChatMessageCellViewModel isSentByUser]
// Type encoding: B16@0:8
// Implementation: 0x10655639c

// -[SCChatMessageCellViewModel needsExtraSpacingOnTop]
// Type encoding: B16@0:8
// Implementation: 0x1065563a0

// -[SCChatMessageCellViewModel refreshViewModel]
// Type encoding: v16@0:8
// Implementation: 0x1065563a4

// -[SCChatMessageCellViewModel shouldShowTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1065563a8

// -[SCChatMessageCellViewModel shouldDisplayBelowFoldInChatForPreviewMode]
// Type encoding: B16@0:8
// Implementation: 0x1065563dc

// -[SCChatMessageCellViewModel setIsFirstViewModel:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065563e0

// -[SCChatMessageCellViewModel shouldShowDateHeader]
// Type encoding: B16@0:8
// Implementation: 0x1065563e4

// -[SCChatMessageCellViewModel isFirstViewModel]
// Type encoding: B16@0:8
// Implementation: 0x106556418

// -[SCChatMessageCellViewModel setIsLastViewModel:]
// Type encoding: v20@0:8B16
// Implementation: 0x106556420

// -[SCChatMessageCellViewModel isLastViewModel]
// Type encoding: B16@0:8
// Implementation: 0x106556424

// -[SCChatMessageCellViewModel bottomLeftCornerIsRounded]
// Type encoding: B16@0:8
// Implementation: 0x10655642c

// -[SCChatMessageCellViewModel setBottomLeftCornerIsRounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x106556468

// -[SCChatMessageCellViewModel isReactable]
// Type encoding: B16@0:8
// Implementation: 0x10655646c

// -[SCChatMessageCellViewModel reactionsHeight]
// Type encoding: d16@0:8
// Implementation: 0x1065564a0

// -[SCChatMessageCellViewModel reactions]
// Type encoding: @16@0:8
// Implementation: 0x1065564e4

// -[SCChatMessageCellViewModel bodyContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x106556528

// -[SCChatMessageCellViewModel messageContentFitWidth]
// Type encoding: d16@0:8
// Implementation: 0x106556530

// -[SCChatMessageCellViewModel payloadContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x106556534

// -[SCChatMessageCellViewModel payloadContentFitWidth]
// Type encoding: d16@0:8
// Implementation: 0x106556578

// -[SCChatMessageCellViewModel payloadViewInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10655661c

// -[SCChatMessageCellViewModel _maxPayloadViewHorizontalInsets]
// Type encoding: d16@0:8
// Implementation: 0x106556700

// -[SCChatMessageCellViewModel _maxContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x1065567c0

// -[SCChatMessageCellViewModel quotedContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1065567c4

// -[SCChatMessageCellViewModel _messageContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106556884

// -[SCChatMessageCellViewModel _belowMessageAccessoryContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1065568f0

// -[SCChatMessageCellViewModel ctaAccessoryContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10655694c

// -[SCChatMessageCellViewModel dateHeaderHeight]
// Type encoding: d16@0:8
// Implementation: 0x106556a04

// -[SCChatMessageCellViewModel dateHeaderWidth]
// Type encoding: d16@0:8
// Implementation: 0x106556a48

// -[SCChatMessageCellViewModel dateHeaderTopMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556a8c

// -[SCChatMessageCellViewModel dateHeaderBottomMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556ad0

// -[SCChatMessageCellViewModel dateHeaderLeadingMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556b14

// -[SCChatMessageCellViewModel dateHeaderTrailingMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556b58

// -[SCChatMessageCellViewModel dateHeaderBubbleLeadingInset]
// Type encoding: d16@0:8
// Implementation: 0x106556b9c

// -[SCChatMessageCellViewModel dateHeaderBubbleTrailingInset]
// Type encoding: d16@0:8
// Implementation: 0x106556be0

// -[SCChatMessageCellViewModel dateHeaderBubbleTopInset]
// Type encoding: d16@0:8
// Implementation: 0x106556c24

// -[SCChatMessageCellViewModel dateHeaderBubbleBottomInset]
// Type encoding: d16@0:8
// Implementation: 0x106556c68

// -[SCChatMessageCellViewModel senderHeaderHeight]
// Type encoding: d16@0:8
// Implementation: 0x106556cac

// -[SCChatMessageCellViewModel senderHeaderWidth]
// Type encoding: d16@0:8
// Implementation: 0x106556cf0

// -[SCChatMessageCellViewModel senderHeaderTopMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556d34

// -[SCChatMessageCellViewModel senderHeaderBottomMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556d78

// -[SCChatMessageCellViewModel senderHeaderLeadingMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556dbc

// -[SCChatMessageCellViewModel senderHeaderTrailingMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556e00

// -[SCChatMessageCellViewModel senderHeaderLeadingInset]
// Type encoding: d16@0:8
// Implementation: 0x106556e44

// -[SCChatMessageCellViewModel senderHeaderTrailingInset]
// Type encoding: d16@0:8
// Implementation: 0x106556e9c

// -[SCChatMessageCellViewModel foldIndicatorHeight]
// Type encoding: d16@0:8
// Implementation: 0x106556ef4

// -[SCChatMessageCellViewModel headerHeight]
// Type encoding: d16@0:8
// Implementation: 0x106556f38

// -[SCChatMessageCellViewModel headerHorizontalMargin]
// Type encoding: d16@0:8
// Implementation: 0x106556fc0

// -[SCChatMessageCellViewModel headerLabelFont]
// Type encoding: @16@0:8
// Implementation: 0x106557018

// -[SCChatMessageCellViewModel headerLabelHeight]
// Type encoding: d16@0:8
// Implementation: 0x10655701c

// -[SCChatMessageCellViewModel payloadHeight]
// Type encoding: d16@0:8
// Implementation: 0x106557060

// -[SCChatMessageCellViewModel payloadBodyHeight]
// Type encoding: d16@0:8
// Implementation: 0x106557098

// -[SCChatMessageCellViewModel payloadLabelHeight]
// Type encoding: d16@0:8
// Implementation: 0x1065570b0

// -[SCChatMessageCellViewModel payloadAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x1065570b8

// -[SCChatMessageCellViewModel payloadHorizontalMargin]
// Type encoding: d16@0:8
// Implementation: 0x1065570d0

// -[SCChatMessageCellViewModel payloadVerticalMargin]
// Type encoding: d16@0:8
// Implementation: 0x1065570e8

// -[SCChatMessageCellViewModel sectionColor]
// Type encoding: @16@0:8
// Implementation: 0x1065570f0

// -[SCChatMessageCellViewModel senderLineColorOption]
// Type encoding: @16@0:8
// Implementation: 0x106557134

// -[SCChatMessageCellViewModel shouldShowStatusMessageHeaderLabel]
// Type encoding: B16@0:8
// Implementation: 0x106557178

// -[SCChatMessageCellViewModel shouldShowURLMediaCards]
// Type encoding: B16@0:8
// Implementation: 0x106557180

// -[SCChatMessageCellViewModel textCheckingTypes]
// Type encoding: Q16@0:8
// Implementation: 0x106557188

// -[SCChatMessageCellViewModel textForDateHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x106557190

// -[SCChatMessageCellViewModel textForHeaderStatusView]
// Type encoding: @16@0:8
// Implementation: 0x1065571d4

// -[SCChatMessageCellViewModel textForSenderHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x106557230

// -[SCChatMessageCellViewModel textForEditedHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x1065572ac

// -[SCChatMessageCellViewModel senderIconResource]
// Type encoding: @16@0:8
// Implementation: 0x106557308

// -[SCChatMessageCellViewModel contextualHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106557364

// -[SCChatMessageCellViewModel groupChatAddButtonViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1065573c0

// -[SCChatMessageCellViewModel textForStatusMessageHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x10655741c

// -[SCChatMessageCellViewModel textForTimeLabel]
// Type encoding: @16@0:8
// Implementation: 0x106557424

// -[SCChatMessageCellViewModel textForActionHeaderTimeLabel]
// Type encoding: @16@0:8
// Implementation: 0x106557468

// -[SCChatMessageCellViewModel messageHasReplyMedias]
// Type encoding: B16@0:8
// Implementation: 0x1065574ac

// -[SCChatMessageCellViewModel colorForBackground]
// Type encoding: @16@0:8
// Implementation: 0x1065574b4

// -[SCChatMessageCellViewModel widthForSenderLine]
// Type encoding: d16@0:8
// Implementation: 0x106557538

// -[SCChatMessageCellViewModel shouldShowSavedLabel]
// Type encoding: B16@0:8
// Implementation: 0x10655757c

// -[SCChatMessageCellViewModel shouldShowSenderLine]
// Type encoding: B16@0:8
// Implementation: 0x1065575b8

// -[SCChatMessageCellViewModel shouldShowSaveOrUnsaveAnimation]
// Type encoding: B16@0:8
// Implementation: 0x1065575ec

// -[SCChatMessageCellViewModel containsAllSavedMessages]
// Type encoding: B16@0:8
// Implementation: 0x1065575f4

// -[SCChatMessageCellViewModel cornerRadiusForSenderLine]
// Type encoding: d16@0:8
// Implementation: 0x106557630

// -[SCChatMessageCellViewModel additionalWidthForWhitespaceTapToSave]
// Type encoding: d16@0:8
// Implementation: 0x106557674

// -[SCChatMessageCellViewModel initWithSavableViewModel:reactableViewModel:shouldShowSenderHeader:senderHeaderViewModel:senderLine:shouldShowFoldIndicator:bodyWidth:payloadWidth:heightExcludingContentHeight:minimumContentWidth:maximumContentWidth:bodyInsets:payloadContainerViewInsets:payloadContainerViewMargins:payloadContainerCornerRadii:additionalInsets:payloadViewPosition:reusableCellIdentifier:shouldDisplayBelowFoldInChat:isUnseenMessageInChat:isAvailableForNewChatsAffordance:isMessageSentBySelf:dateHeaderViewModel:messageContent:quotedRenderableViewModel:belowMessageAccessoryContent:ctaAccessoryContent:postSnapActionsParams:postSnapActionsSize:timestampViewModel:identifier:diffableIdentifier:accessibilityValue:externalTapAction:externalDoubleTapAction:prefetchPluginIdentifier:analyticsMessageId:message:canBeQuoted:isGroupConversation:conversationId:renderAsBubble:isLastMessage:recipientUserId:senderUserId:conversationSubtypeMetadata:isUnknownMessage:messages:]
// Type encoding: @460@0:8@16@24B32@36@44B52d56d64d72d80d88{UIEdgeInsets=dddd}96{UIEdgeInsets=dddd}128{UIEdgeInsets=dddd}160@192{UIEdgeInsets=dddd}200@232@240B248B252B256B260@264@272@280@288@296@304{CGSize=dd}312@328@336@344@352@360@368@376@384@392B400B404@408B416B420@424@432@440B448@452
// Implementation: 0x107073c14

// -[SCChatMessageCellViewModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10707436c

// -[SCChatMessageCellViewModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x107074390

// -[SCChatMessageCellViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107074868

// -[SCChatMessageCellViewModel savableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107074dec

// -[SCChatMessageCellViewModel reactableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107074df4

// -[SCChatMessageCellViewModel shouldShowSenderHeader]
// Type encoding: B16@0:8
// Implementation: 0x107074dfc

// -[SCChatMessageCellViewModel senderHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107074e04

// -[SCChatMessageCellViewModel senderLine]
// Type encoding: @16@0:8
// Implementation: 0x107074e0c

// -[SCChatMessageCellViewModel shouldShowFoldIndicator]
// Type encoding: B16@0:8
// Implementation: 0x107074e14

// -[SCChatMessageCellViewModel bodyWidth]
// Type encoding: d16@0:8
// Implementation: 0x107074e1c

// -[SCChatMessageCellViewModel payloadWidth]
// Type encoding: d16@0:8
// Implementation: 0x107074e24

// -[SCChatMessageCellViewModel heightExcludingContentHeight]
// Type encoding: d16@0:8
// Implementation: 0x107074e2c

// -[SCChatMessageCellViewModel minimumContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x107074e34

// -[SCChatMessageCellViewModel maximumContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x107074e3c

// -[SCChatMessageCellViewModel bodyInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107074e44

// -[SCChatMessageCellViewModel payloadContainerViewInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107074e50

// -[SCChatMessageCellViewModel payloadContainerViewMargins]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107074e5c

// -[SCChatMessageCellViewModel payloadContainerCornerRadii]
// Type encoding: @16@0:8
// Implementation: 0x107074e68

// -[SCChatMessageCellViewModel additionalInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107074e70

// -[SCChatMessageCellViewModel payloadViewPosition]
// Type encoding: @16@0:8
// Implementation: 0x107074e7c

// -[SCChatMessageCellViewModel reusableCellIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107074e84

// -[SCChatMessageCellViewModel shouldDisplayBelowFoldInChat]
// Type encoding: B16@0:8
// Implementation: 0x107074e8c

// -[SCChatMessageCellViewModel isUnseenMessageInChat]
// Type encoding: B16@0:8
// Implementation: 0x107074e94

// -[SCChatMessageCellViewModel isAvailableForNewChatsAffordance]
// Type encoding: B16@0:8
// Implementation: 0x107074e9c

// -[SCChatMessageCellViewModel isMessageSentBySelf]
// Type encoding: B16@0:8
// Implementation: 0x107074ea4

// -[SCChatMessageCellViewModel dateHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107074eac

// -[SCChatMessageCellViewModel messageContent]
// Type encoding: @16@0:8
// Implementation: 0x107074eb4

// -[SCChatMessageCellViewModel quotedRenderableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107074ebc

// -[SCChatMessageCellViewModel belowMessageAccessoryContent]
// Type encoding: @16@0:8
// Implementation: 0x107074ec4

// -[SCChatMessageCellViewModel ctaAccessoryContent]
// Type encoding: @16@0:8
// Implementation: 0x107074ecc

// -[SCChatMessageCellViewModel postSnapActionsParams]
// Type encoding: @16@0:8
// Implementation: 0x107074ed4

// -[SCChatMessageCellViewModel postSnapActionsSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107074edc

// -[SCChatMessageCellViewModel timestampViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107074ee4

// -[SCChatMessageCellViewModel identifier]
// Type encoding: @16@0:8
// Implementation: 0x107074eec

// -[SCChatMessageCellViewModel diffableIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107074ef4

// -[SCChatMessageCellViewModel accessibilityValue]
// Type encoding: @16@0:8
// Implementation: 0x107074efc

// -[SCChatMessageCellViewModel externalTapAction]
// Type encoding: @16@0:8
// Implementation: 0x107074f04

// -[SCChatMessageCellViewModel externalDoubleTapAction]
// Type encoding: @16@0:8
// Implementation: 0x107074f0c

// -[SCChatMessageCellViewModel prefetchPluginIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107074f14

// -[SCChatMessageCellViewModel analyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x107074f1c

// -[SCChatMessageCellViewModel message]
// Type encoding: @16@0:8
// Implementation: 0x107074f24

// -[SCChatMessageCellViewModel canBeQuoted]
// Type encoding: B16@0:8
// Implementation: 0x107074f2c

// -[SCChatMessageCellViewModel isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x107074f34

// -[SCChatMessageCellViewModel conversationId]
// Type encoding: @16@0:8
// Implementation: 0x107074f3c

// -[SCChatMessageCellViewModel renderAsBubble]
// Type encoding: B16@0:8
// Implementation: 0x107074f44

// -[SCChatMessageCellViewModel isLastMessage]
// Type encoding: B16@0:8
// Implementation: 0x107074f4c

// -[SCChatMessageCellViewModel recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x107074f54

// -[SCChatMessageCellViewModel senderUserId]
// Type encoding: @16@0:8
// Implementation: 0x107074f5c

// -[SCChatMessageCellViewModel conversationSubtypeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107074f64

// -[SCChatMessageCellViewModel isUnknownMessage]
// Type encoding: B16@0:8
// Implementation: 0x107074f6c

// -[SCChatMessageCellViewModel messages]
// Type encoding: @16@0:8
// Implementation: 0x107074f74

// -[SCChatMessageCellViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107074f7c

@end
