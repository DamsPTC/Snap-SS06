// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBaseChatCellViewModel
// Superclass: NSObject
// Address: 0x112b5bef8

@interface SCBaseChatCellViewModel

// Property: topRightCornerIsRounded; attributes: TB,N,V_topRightCornerIsRounded
// Property: bottomRightCornerIsRounded; attributes: TB,N,V_bottomRightCornerIsRounded
// Property: bottomLeftCornerIsRounded; attributes: TB,N,V_bottomLeftCornerIsRounded
// Property: headerIndex; attributes: Ti,N,V_headerIndex
// Property: identifier; attributes: T@"<NSObject>",R,N
// Property: height; attributes: Td,N,V_height
// Property: topMargin; attributes: Td,R,N,V_topMargin
// Property: hidden; attributes: TB,R,N
// Property: conversationId; attributes: T@"NSString",R,N,V_conversationId
// Property: isGroupConversation; attributes: TB,R,N,V_isGroupConversation
// Property: recipientUserId; attributes: T@"NSString",R,N,V_recipientUserId
// Property: senderUserId; attributes: T@"NSString",R,N,V_senderUserId
// Property: analyticsMessageId; attributes: T@"NSString",R,N,V_analyticsMessageId
// Property: reactableViewModel; attributes: T@"SCChatReactableViewModel",R,C,N,V_reactableViewModel
// Property: isFirstViewModel; attributes: TB,N,V_isFirstViewModel
// Property: isLastViewModel; attributes: TB,N,V_isLastViewModel
// Property: isLastMessage; attributes: TB,N,V_isLastMessage
// Property: prefetchPluginIdentifier; attributes: T@"NSString",R,N,V_prefetchPluginIdentifier
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

// -[SCBaseChatCellViewModel initWithProps:]
// Type encoding: @24@0:8@16
// Implementation: 0x107052408

// -[SCBaseChatCellViewModel viewModelType]
// Type encoding: q16@0:8
// Implementation: 0x1070524bc

// -[SCBaseChatCellViewModel calculateHeight]
// Type encoding: d16@0:8
// Implementation: 0x107052510

// -[SCBaseChatCellViewModel hidden]
// Type encoding: B16@0:8
// Implementation: 0x107052564

// -[SCBaseChatCellViewModel renderAsBubble]
// Type encoding: B16@0:8
// Implementation: 0x10705256c

// -[SCBaseChatCellViewModel dateHeaderHeight]
// Type encoding: d16@0:8
// Implementation: 0x107052574

// -[SCBaseChatCellViewModel dateHeaderWidth]
// Type encoding: d16@0:8
// Implementation: 0x1070525a0

// -[SCBaseChatCellViewModel dateHeaderTopMargin]
// Type encoding: d16@0:8
// Implementation: 0x1070525a8

// -[SCBaseChatCellViewModel dateHeaderBottomMargin]
// Type encoding: d16@0:8
// Implementation: 0x1070525f0

// -[SCBaseChatCellViewModel dateHeaderLeadingMargin]
// Type encoding: d16@0:8
// Implementation: 0x10705262c

// -[SCBaseChatCellViewModel dateHeaderTrailingMargin]
// Type encoding: d16@0:8
// Implementation: 0x107052650

// -[SCBaseChatCellViewModel dateHeaderBubbleLeadingInset]
// Type encoding: d16@0:8
// Implementation: 0x107052674

// -[SCBaseChatCellViewModel dateHeaderBubbleTrailingInset]
// Type encoding: d16@0:8
// Implementation: 0x1070526b4

// -[SCBaseChatCellViewModel dateHeaderBubbleTopInset]
// Type encoding: d16@0:8
// Implementation: 0x1070526f4

// -[SCBaseChatCellViewModel dateHeaderBubbleBottomInset]
// Type encoding: d16@0:8
// Implementation: 0x107052734

// -[SCBaseChatCellViewModel foldIndicatorHeight]
// Type encoding: d16@0:8
// Implementation: 0x107052774

// -[SCBaseChatCellViewModel bodyTopMargin]
// Type encoding: d16@0:8
// Implementation: 0x10705277c

// -[SCBaseChatCellViewModel additionalBodyInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x1070527c0

// -[SCBaseChatCellViewModel payloadViewInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10705281c

// -[SCBaseChatCellViewModel identifier]
// Type encoding: @16@0:8
// Implementation: 0x107052830

// -[SCBaseChatCellViewModel reusableCellIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107052834

// -[SCBaseChatCellViewModel shouldDisplayBelowFoldInChat]
// Type encoding: B16@0:8
// Implementation: 0x107052888

// -[SCBaseChatCellViewModel isUnseenMessageInChat]
// Type encoding: B16@0:8
// Implementation: 0x1070528dc

// -[SCBaseChatCellViewModel shouldDisplayBelowFoldInChatForPreviewMode]
// Type encoding: B16@0:8
// Implementation: 0x1070528e4

// -[SCBaseChatCellViewModel needsExtraSpacingOnTop]
// Type encoding: B16@0:8
// Implementation: 0x1070528e8

// -[SCBaseChatCellViewModel shouldShowDateHeader]
// Type encoding: B16@0:8
// Implementation: 0x1070528f0

// -[SCBaseChatCellViewModel shouldShowSenderHeader]
// Type encoding: B16@0:8
// Implementation: 0x107052944

// -[SCBaseChatCellViewModel shouldShowTimestamp]
// Type encoding: B16@0:8
// Implementation: 0x107052998

// -[SCBaseChatCellViewModel shouldShowSenderLine]
// Type encoding: B16@0:8
// Implementation: 0x1070529ec

// -[SCBaseChatCellViewModel shouldShowFoldIndicator]
// Type encoding: B16@0:8
// Implementation: 0x107052a40

// -[SCBaseChatCellViewModel intervalFromPrevious]
// Type encoding: d16@0:8
// Implementation: 0x107052a48

// -[SCBaseChatCellViewModel refreshViewModel]
// Type encoding: v16@0:8
// Implementation: 0x107052a50

// -[SCBaseChatCellViewModel isReactable]
// Type encoding: B16@0:8
// Implementation: 0x107052a54

// -[SCBaseChatCellViewModel reactionsHeight]
// Type encoding: d16@0:8
// Implementation: 0x107052a5c

// -[SCBaseChatCellViewModel reactions]
// Type encoding: @16@0:8
// Implementation: 0x107052a64

// -[SCBaseChatCellViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107052a7c

// -[SCBaseChatCellViewModel xLogObjectInfo]
// Type encoding: @16@0:8
// Implementation: 0x107052bc4

// -[SCBaseChatCellViewModel canBeQuoted]
// Type encoding: B16@0:8
// Implementation: 0x107052bc8

// -[SCBaseChatCellViewModel quotedRenderableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107052c34

// -[SCBaseChatCellViewModel quotedContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107052ca8

// -[SCBaseChatCellViewModel belowMessageAccessoryContent]
// Type encoding: @16@0:8
// Implementation: 0x107052d24

// -[SCBaseChatCellViewModel ctaAccessoryContent]
// Type encoding: @16@0:8
// Implementation: 0x107052d98

// -[SCBaseChatCellViewModel ctaAccessoryContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107052e0c

// -[SCBaseChatCellViewModel senderHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107052e88

// -[SCBaseChatCellViewModel postSnapActionsParams]
// Type encoding: @16@0:8
// Implementation: 0x107052efc

// -[SCBaseChatCellViewModel postSnapActionsSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107052f04

// -[SCBaseChatCellViewModel additionalWidthForWhitespaceTapToSave]
// Type encoding: d16@0:8
// Implementation: 0x107052f14

// -[SCBaseChatCellViewModel height]
// Type encoding: d16@0:8
// Implementation: 0x107052f20

// -[SCBaseChatCellViewModel setHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x107052f28

// -[SCBaseChatCellViewModel isFirstViewModel]
// Type encoding: B16@0:8
// Implementation: 0x107052f30

// -[SCBaseChatCellViewModel setIsFirstViewModel:]
// Type encoding: v20@0:8B16
// Implementation: 0x107052f38

// -[SCBaseChatCellViewModel isLastViewModel]
// Type encoding: B16@0:8
// Implementation: 0x107052f40

// -[SCBaseChatCellViewModel setIsLastViewModel:]
// Type encoding: v20@0:8B16
// Implementation: 0x107052f48

// -[SCBaseChatCellViewModel isLastMessage]
// Type encoding: B16@0:8
// Implementation: 0x107052f50

// -[SCBaseChatCellViewModel setIsLastMessage:]
// Type encoding: v20@0:8B16
// Implementation: 0x107052f58

// -[SCBaseChatCellViewModel topMargin]
// Type encoding: d16@0:8
// Implementation: 0x107052f60

// -[SCBaseChatCellViewModel analyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x107052f68

// -[SCBaseChatCellViewModel prefetchPluginIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107052f70

// -[SCBaseChatCellViewModel isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x107052f78

// -[SCBaseChatCellViewModel conversationId]
// Type encoding: @16@0:8
// Implementation: 0x107052f80

// -[SCBaseChatCellViewModel recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x107052f88

// -[SCBaseChatCellViewModel senderUserId]
// Type encoding: @16@0:8
// Implementation: 0x107052f90

// -[SCBaseChatCellViewModel reactableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107052f98

// -[SCBaseChatCellViewModel topRightCornerIsRounded]
// Type encoding: B16@0:8
// Implementation: 0x107052fa0

// -[SCBaseChatCellViewModel setTopRightCornerIsRounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x107052fa8

// -[SCBaseChatCellViewModel bottomRightCornerIsRounded]
// Type encoding: B16@0:8
// Implementation: 0x107052fb0

// -[SCBaseChatCellViewModel setBottomRightCornerIsRounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x107052fb8

// -[SCBaseChatCellViewModel bottomLeftCornerIsRounded]
// Type encoding: B16@0:8
// Implementation: 0x107052fc0

// -[SCBaseChatCellViewModel setBottomLeftCornerIsRounded:]
// Type encoding: v20@0:8B16
// Implementation: 0x107052fc8

// -[SCBaseChatCellViewModel headerIndex]
// Type encoding: i16@0:8
// Implementation: 0x107052fd0

// -[SCBaseChatCellViewModel setHeaderIndex:]
// Type encoding: v20@0:8i16
// Implementation: 0x107052fd8

// -[SCBaseChatCellViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107052fe0

// +[SCBaseChatCellViewModel dateHeaderLabelFont]
// Type encoding: @16@0:8
// Implementation: 0x107052a70

// +[SCBaseChatCellViewModel dateHeaderLabelColor]
// Type encoding: @16@0:8
// Implementation: 0x107052a74

// +[SCBaseChatCellViewModel notificationLabelFont]
// Type encoding: @16@0:8
// Implementation: 0x107052a78

@end
