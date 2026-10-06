// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessageChatViewModel
// Superclass: SCBaseChatCellViewModel
// Address: 0x112b5bfc0

@interface SCMessageChatViewModel

// Property: message; attributes: T@"SCNMessagingMessage",&,N,V_message
// Property: hasDateHeader; attributes: TB,R,N,V_hasDateHeader
// Property: hasSenderHeader; attributes: TB,R,N,V_hasSenderHeader
// Property: hasSenderLine; attributes: TB,R,N,V_hasSenderLine
// Property: hasTimestamp; attributes: TB,R,N,V_hasTimestamp
// Property: hasFoldIndicator; attributes: TB,R,N,V_hasFoldIndicator
// Property: displayBelowTheFold; attributes: TB,R,N,V_displayBelowTheFold
// Property: isUnseenMessage; attributes: TB,R,N,V_isUnseenMessage
// Property: messageBodyType; attributes: Tq,R,N,V_messageBodyType
// Property: mediaList; attributes: T@"NSArray",R,C,N,V_mediaList
// Property: messageMediaType; attributes: Tq,R,N,V_messageMediaType
// Property: currentUserId; attributes: T@"NSString",R,C,N,V_currentUserId
// Property: snapchattersData; attributes: T@"NSDictionary",R,C,N,V_snapchattersData
// Property: chatReplySenderUserId; attributes: T@"NSString",R,N,V_chatReplySenderUserId
// Property: chatReplyMessageId; attributes: T@"NSString",R,N,V_chatReplyMessageId
// Property: chatReplyIsSaved; attributes: TB,R,N,V_chatReplyIsSaved
// Property: canBeSaved; attributes: TB,R,N,V_canBeSaved
// Property: canChatReply; attributes: TB,R,N
// Property: canSnapReply; attributes: TB,R,N
// Property: isSavedByCurrentUser; attributes: TB,R,N,V_isSavedByCurrentUser
// Property: isFailed; attributes: TB,R,N,V_isFailed
// Property: isSending; attributes: TB,R,N,V_isSending
// Property: isErasable; attributes: TB,R,N,V_isErasable
// Property: isStatusMessage; attributes: TB,R,N,V_isStatusMessage
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",R,N,V_circumstanceEngine
// Property: messagingExperimentService; attributes: T@"SCLazy",&,N,V_messagingExperimentService
// Property: chatMediaFetcher; attributes: T@"SCLazy",R,N,V_chatMediaFetcher
// Property: contentDelivery; attributes: T@"SCLazy",&,N,V_contentDelivery
// Property: snapchattersDataTracking; attributes: T@"SCLazy",&,N,V_snapchattersDataTracking
// Property: messageId; attributes: T@"NSString",R,C,N,V_messageId
// Property: isLockedConversation; attributes: TB,R,N,V_isLockedConversation
// Property: conversationSubtype; attributes: Tq,R,N,V_conversationSubtype
// Property: timestamp; attributes: T@"NSDate",R,C,N,V_timestamp
// Property: orderKey; attributes: T@"NSNumber",R,C,N,V_orderKey
// Property: summarizedUserListsEnabled; attributes: TB,R,N,V_summarizedUserListsEnabled
// Property: readByParticipants; attributes: T@"NSSet",R,C,N,V_readByParticipants
// Property: senderDisplayname; attributes: T@"NSString",R,C,N,V_senderDisplayname
// Property: recipientDisplayName; attributes: T@"NSString",R,C,N,V_recipientDisplayName
// Property: senderColor; attributes: T@"UIColor",R,C,N,V_senderColor
// Property: senderLineColorOption; attributes: T@"SCConversationColor",C,N,V_senderLineColorOption
// Property: group; attributes: T@"<SCChatGroup>",R,C,N,V_group
// Property: messageHasReplyMedias; attributes: TB,R,N,V_messageHasReplyMedias
// Property: payloadHorizontalMargin; attributes: Td,R,N,V_payloadHorizontalMargin
// Property: headerLabelHeight; attributes: Td,R,N
// Property: payloadViewPosition; attributes: T@"SCChatMessageCellPayloadPosition",R,C,N,V_payloadViewPosition
// Property: quotedRenderableViewModel; attributes: T@"SCQuotedRenderableViewModel",R,N,V_quotedRenderableViewModel
// Property: belowMessageAccessoryContent; attributes: T@"<SCChatUIContentRenderable>",R,N,V_belowMessageAccessoryContent
// Property: ctaAccessoryContent; attributes: T@"<SCChatUIContentRenderable>",R,N,V_ctaAccessoryContent
// Property: postSnapActionsParams; attributes: T@"SCContextPostSnapParams",R,C,N,V_postSnapActionsParams
// Property: senderHeaderViewModel; attributes: T@"SCChatSenderHeaderViewModel",R,C,N,V_senderHeaderViewModel
// Property: blizzardLogger; attributes: T@"SCLazy",&,N,V_blizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessageChatViewModel payloadVerticalMargin]
// Type encoding: d16@0:8
// Implementation: 0x107053aa0

// -[SCMessageChatViewModel payloadHeight]
// Type encoding: d16@0:8
// Implementation: 0x107053aa8

// -[SCMessageChatViewModel payloadBodyHeight]
// Type encoding: d16@0:8
// Implementation: 0x107053ae0

// -[SCMessageChatViewModel payloadLabelHeight]
// Type encoding: d16@0:8
// Implementation: 0x107053b34

// -[SCMessageChatViewModel payloadAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x107053b3c

// -[SCMessageChatViewModel bodyWidth]
// Type encoding: d16@0:8
// Implementation: 0x107053b90

// -[SCMessageChatViewModel payloadWidth]
// Type encoding: d16@0:8
// Implementation: 0x107053be0

// -[SCMessageChatViewModel payloadContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x107053c14

// -[SCMessageChatViewModel bodyContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x107053c70

// -[SCMessageChatViewModel bodyHeight]
// Type encoding: d16@0:8
// Implementation: 0x107053cc4

// -[SCMessageChatViewModel initWithMessage:props:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107053e34

// -[SCMessageChatViewModel canChatReply]
// Type encoding: B16@0:8
// Implementation: 0x1070545c0

// -[SCMessageChatViewModel canSnapReply]
// Type encoding: B16@0:8
// Implementation: 0x1070545ec

// -[SCMessageChatViewModel needsExtraSpacingOnTop]
// Type encoding: B16@0:8
// Implementation: 0x107054614

// -[SCMessageChatViewModel shouldShowDateHeader]
// Type encoding: B16@0:8
// Implementation: 0x107054618

// -[SCMessageChatViewModel shouldShowSenderHeader]
// Type encoding: B16@0:8
// Implementation: 0x107054628

// -[SCMessageChatViewModel shouldShowFoldIndicator]
// Type encoding: B16@0:8
// Implementation: 0x107054638

// -[SCMessageChatViewModel foldIndicatorHeight]
// Type encoding: d16@0:8
// Implementation: 0x107054648

// -[SCMessageChatViewModel shouldShowSenderLine]
// Type encoding: B16@0:8
// Implementation: 0x10705468c

// -[SCMessageChatViewModel shouldShowTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x1070546dc

// -[SCMessageChatViewModel shouldDisplayBelowFoldInChat]
// Type encoding: B16@0:8
// Implementation: 0x1070546ec

// -[SCMessageChatViewModel isUnseenMessageInChat]
// Type encoding: B16@0:8
// Implementation: 0x1070546fc

// -[SCMessageChatViewModel intervalFromPrevious]
// Type encoding: d16@0:8
// Implementation: 0x10705470c

// -[SCMessageChatViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10705471c

// -[SCMessageChatViewModel widthForSenderLine]
// Type encoding: d16@0:8
// Implementation: 0x107054d74

// -[SCMessageChatViewModel isSentByUser]
// Type encoding: B16@0:8
// Implementation: 0x107054d7c

// -[SCMessageChatViewModel sectionColor]
// Type encoding: @16@0:8
// Implementation: 0x107054e04

// -[SCMessageChatViewModel senderLineColorOption]
// Type encoding: @16@0:8
// Implementation: 0x107054e5c

// -[SCMessageChatViewModel payloadContentFitWidth]
// Type encoding: d16@0:8
// Implementation: 0x107054e8c

// -[SCMessageChatViewModel messageContentFitWidth]
// Type encoding: d16@0:8
// Implementation: 0x107054ec4

// -[SCMessageChatViewModel payloadContainerViewInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107054ec8

// -[SCMessageChatViewModel payloadContainerViewMargins]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107054f00

// -[SCMessageChatViewModel payloadViewInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107054f8c

// -[SCMessageChatViewModel textForTimeLabel]
// Type encoding: @16@0:8
// Implementation: 0x107055034

// -[SCMessageChatViewModel textForActionHeaderTimeLabel]
// Type encoding: @16@0:8
// Implementation: 0x1070550a8

// -[SCMessageChatViewModel dateHeaderWidth]
// Type encoding: d16@0:8
// Implementation: 0x10705516c

// -[SCMessageChatViewModel textForDateHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x107055270

// -[SCMessageChatViewModel identifier]
// Type encoding: @16@0:8
// Implementation: 0x1070553b4

// -[SCMessageChatViewModel calculateHeight]
// Type encoding: d16@0:8
// Implementation: 0x1070553b8

// -[SCMessageChatViewModel textForHeaderStatusView]
// Type encoding: @16@0:8
// Implementation: 0x107055460

// -[SCMessageChatViewModel textForSenderHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x1070554a4

// -[SCMessageChatViewModel textForEditedHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x1070554f4

// -[SCMessageChatViewModel senderIconResource]
// Type encoding: @16@0:8
// Implementation: 0x107055538

// -[SCMessageChatViewModel contextualHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107055548

// -[SCMessageChatViewModel groupChatAddButtonViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107055558

// -[SCMessageChatViewModel senderHeaderHeight]
// Type encoding: d16@0:8
// Implementation: 0x107055568

// -[SCMessageChatViewModel senderHeaderWidth]
// Type encoding: d16@0:8
// Implementation: 0x1070555a4

// -[SCMessageChatViewModel senderHeaderTopMargin]
// Type encoding: d16@0:8
// Implementation: 0x1070555dc

// -[SCMessageChatViewModel senderHeaderBottomMargin]
// Type encoding: d16@0:8
// Implementation: 0x107055614

// -[SCMessageChatViewModel senderHeaderLeadingMargin]
// Type encoding: d16@0:8
// Implementation: 0x107055650

// -[SCMessageChatViewModel senderHeaderTrailingMargin]
// Type encoding: d16@0:8
// Implementation: 0x10705568c

// -[SCMessageChatViewModel senderHeaderLeadingInset]
// Type encoding: d16@0:8
// Implementation: 0x1070556c8

// -[SCMessageChatViewModel senderHeaderTrailingInset]
// Type encoding: d16@0:8
// Implementation: 0x10705571c

// -[SCMessageChatViewModel headerLabelFont]
// Type encoding: @16@0:8
// Implementation: 0x107055770

// -[SCMessageChatViewModel headerLabelHeight]
// Type encoding: d16@0:8
// Implementation: 0x107055774

// -[SCMessageChatViewModel isReactable]
// Type encoding: B16@0:8
// Implementation: 0x107055798

// -[SCMessageChatViewModel reactionsHeight]
// Type encoding: d16@0:8
// Implementation: 0x1070557cc

// -[SCMessageChatViewModel reactions]
// Type encoding: @16@0:8
// Implementation: 0x107055810

// -[SCMessageChatViewModel shouldShowStatusMessageHeaderLabel]
// Type encoding: B16@0:8
// Implementation: 0x107055bfc

// -[SCMessageChatViewModel textForStatusMessageHeaderLabel]
// Type encoding: @16@0:8
// Implementation: 0x107055c04

// -[SCMessageChatViewModel _payloadContentFitWidth]
// Type encoding: d16@0:8
// Implementation: 0x107055c0c

// -[SCMessageChatViewModel quotedContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107055cd0

// -[SCMessageChatViewModel ctaAccessoryContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107055d90

// -[SCMessageChatViewModel postSnapActionsSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107055e48

// -[SCMessageChatViewModel additionalWidthForWhitespaceTapToSave]
// Type encoding: d16@0:8
// Implementation: 0x107055ea4

// -[SCMessageChatViewModel payloadViewPosition]
// Type encoding: @16@0:8
// Implementation: 0x107055ec4

// -[SCMessageChatViewModel recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x107055ed4

// -[SCMessageChatViewModel analyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x107055ee4

// -[SCMessageChatViewModel conversationId]
// Type encoding: @16@0:8
// Implementation: 0x107055ef4

// -[SCMessageChatViewModel isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x107055f04

// -[SCMessageChatViewModel senderUserId]
// Type encoding: @16@0:8
// Implementation: 0x107055f14

// -[SCMessageChatViewModel reactableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107055f24

// -[SCMessageChatViewModel message]
// Type encoding: @16@0:8
// Implementation: 0x107055f34

// -[SCMessageChatViewModel setMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107055f44

// -[SCMessageChatViewModel messageBodyType]
// Type encoding: q16@0:8
// Implementation: 0x107055f84

// -[SCMessageChatViewModel mediaList]
// Type encoding: @16@0:8
// Implementation: 0x107055f94

// -[SCMessageChatViewModel messageMediaType]
// Type encoding: q16@0:8
// Implementation: 0x107055fa4

// -[SCMessageChatViewModel currentUserId]
// Type encoding: @16@0:8
// Implementation: 0x107055fb4

// -[SCMessageChatViewModel snapchattersData]
// Type encoding: @16@0:8
// Implementation: 0x107055fc4

// -[SCMessageChatViewModel chatReplySenderUserId]
// Type encoding: @16@0:8
// Implementation: 0x107055fd4

// -[SCMessageChatViewModel chatReplyMessageId]
// Type encoding: @16@0:8
// Implementation: 0x107055fe4

// -[SCMessageChatViewModel chatReplyIsSaved]
// Type encoding: B16@0:8
// Implementation: 0x107055ff4

// -[SCMessageChatViewModel canBeSaved]
// Type encoding: B16@0:8
// Implementation: 0x107056004

// -[SCMessageChatViewModel isSavedByCurrentUser]
// Type encoding: B16@0:8
// Implementation: 0x107056014

// -[SCMessageChatViewModel isFailed]
// Type encoding: B16@0:8
// Implementation: 0x107056024

// -[SCMessageChatViewModel isSending]
// Type encoding: B16@0:8
// Implementation: 0x107056034

// -[SCMessageChatViewModel isErasable]
// Type encoding: B16@0:8
// Implementation: 0x107056044

// -[SCMessageChatViewModel isStatusMessage]
// Type encoding: B16@0:8
// Implementation: 0x107056054

// -[SCMessageChatViewModel circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x107056064

// -[SCMessageChatViewModel messagingExperimentService]
// Type encoding: @16@0:8
// Implementation: 0x107056074

// -[SCMessageChatViewModel setMessagingExperimentService:]
// Type encoding: v24@0:8@16
// Implementation: 0x107056084

// -[SCMessageChatViewModel chatMediaFetcher]
// Type encoding: @16@0:8
// Implementation: 0x1070560c4

// -[SCMessageChatViewModel contentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x1070560d4

// -[SCMessageChatViewModel setContentDelivery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070560e4

// -[SCMessageChatViewModel snapchattersDataTracking]
// Type encoding: @16@0:8
// Implementation: 0x107056124

// -[SCMessageChatViewModel setSnapchattersDataTracking:]
// Type encoding: v24@0:8@16
// Implementation: 0x107056134

// -[SCMessageChatViewModel messageId]
// Type encoding: @16@0:8
// Implementation: 0x107056174

// -[SCMessageChatViewModel isLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x107056184

// -[SCMessageChatViewModel conversationSubtype]
// Type encoding: q16@0:8
// Implementation: 0x107056194

// -[SCMessageChatViewModel timestamp]
// Type encoding: @16@0:8
// Implementation: 0x1070561a4

// -[SCMessageChatViewModel orderKey]
// Type encoding: @16@0:8
// Implementation: 0x1070561b4

// -[SCMessageChatViewModel summarizedUserListsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1070561c4

// -[SCMessageChatViewModel readByParticipants]
// Type encoding: @16@0:8
// Implementation: 0x1070561d4

// -[SCMessageChatViewModel senderDisplayname]
// Type encoding: @16@0:8
// Implementation: 0x1070561e4

// -[SCMessageChatViewModel recipientDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x1070561f4

// -[SCMessageChatViewModel senderColor]
// Type encoding: @16@0:8
// Implementation: 0x107056204

// -[SCMessageChatViewModel setSenderLineColorOption:]
// Type encoding: v24@0:8@16
// Implementation: 0x107056214

// -[SCMessageChatViewModel group]
// Type encoding: @16@0:8
// Implementation: 0x107056220

// -[SCMessageChatViewModel messageHasReplyMedias]
// Type encoding: B16@0:8
// Implementation: 0x107056230

// -[SCMessageChatViewModel payloadHorizontalMargin]
// Type encoding: d16@0:8
// Implementation: 0x107056240

// -[SCMessageChatViewModel quotedRenderableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107056250

// -[SCMessageChatViewModel belowMessageAccessoryContent]
// Type encoding: @16@0:8
// Implementation: 0x107056260

// -[SCMessageChatViewModel ctaAccessoryContent]
// Type encoding: @16@0:8
// Implementation: 0x107056270

// -[SCMessageChatViewModel postSnapActionsParams]
// Type encoding: @16@0:8
// Implementation: 0x107056280

// -[SCMessageChatViewModel senderHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107056290

// -[SCMessageChatViewModel blizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x1070562a0

// -[SCMessageChatViewModel setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070562b0

// -[SCMessageChatViewModel hasDateHeader]
// Type encoding: B16@0:8
// Implementation: 0x1070562f0

// -[SCMessageChatViewModel hasSenderHeader]
// Type encoding: B16@0:8
// Implementation: 0x107056300

// -[SCMessageChatViewModel hasSenderLine]
// Type encoding: B16@0:8
// Implementation: 0x107056310

// -[SCMessageChatViewModel hasTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x107056320

// -[SCMessageChatViewModel hasFoldIndicator]
// Type encoding: B16@0:8
// Implementation: 0x107056330

// -[SCMessageChatViewModel displayBelowTheFold]
// Type encoding: B16@0:8
// Implementation: 0x107056340

// -[SCMessageChatViewModel isUnseenMessage]
// Type encoding: B16@0:8
// Implementation: 0x107056350

// -[SCMessageChatViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107056360

// +[SCMessageChatViewModel grayChatColor]
// Type encoding: @16@0:8
// Implementation: 0x107055854

// +[SCMessageChatViewModel timeLabelWidth]
// Type encoding: d16@0:8
// Implementation: 0x107055864

// +[SCMessageChatViewModel widthCache]
// Type encoding: @16@0:8
// Implementation: 0x107055b7c

@end
