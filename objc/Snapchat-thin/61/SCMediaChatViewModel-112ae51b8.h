// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaChatViewModel
// Superclass: SCSavableItemChatViewModel
// Address: 0x112ae51b8

@interface SCMediaChatViewModel

// Property: mediaV3; attributes: T@"SCChatMediaContent",R,N,V_mediaV3
// Property: mediaHeight; attributes: Td,N,V_mediaHeight
// Property: mediaWidth; attributes: Td,N,V_mediaWidth
// Property: bodyType; attributes: Tq,N,V_bodyType
// Property: isSending; attributes: TB,R,N,V_isSending
// Property: firstLabelSize; attributes: T{CGSize=dd},R,N,V_firstLabelSize
// Property: secondLabelSize; attributes: T{CGSize=dd},R,N,V_secondLabelSize
// Property: thirdLabelSize; attributes: T{CGSize=dd},R,N,V_thirdLabelSize
// Property: fourthLabelSize; attributes: T{CGSize=dd},R,N,V_fourthLabelSize
// Property: totalLabelHeight; attributes: Td,R,N,V_totalLabelHeight
// Property: attributedFirstLabelText; attributes: T@"NSAttributedString",R,N,V_attributedFirstLabelText
// Property: attributedSecondLabelText; attributes: T@"NSAttributedString",R,N,V_attributedSecondLabelText
// Property: attributedThirdLabelText; attributes: T@"NSAttributedString",R,N,V_attributedThirdLabelText
// Property: attributedFourthLabelText; attributes: T@"NSAttributedString",R,N,V_attributedFourthLabelText
// Property: statusLabelMargins; attributes: T{UIEdgeInsets=dddd},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
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

// -[SCMediaChatViewModel initWithMessage:props:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10655bc98

// -[SCMediaChatViewModel reusableCellIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10655bea0

// -[SCMediaChatViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10655bee8

// -[SCMediaChatViewModel viewModelType]
// Type encoding: q16@0:8
// Implementation: 0x10655bfdc

// -[SCMediaChatViewModel payloadBodyHeight]
// Type encoding: d16@0:8
// Implementation: 0x10655bfe4

// -[SCMediaChatViewModel payloadLabelHeight]
// Type encoding: d16@0:8
// Implementation: 0x10655bffc

// -[SCMediaChatViewModel payloadVerticalMargin]
// Type encoding: d16@0:8
// Implementation: 0x10655c000

// -[SCMediaChatViewModel bodyContentWidth]
// Type encoding: d16@0:8
// Implementation: 0x10655c024

// -[SCMediaChatViewModel shouldDisplayTapToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10655c084

// -[SCMediaChatViewModel statusLabelMargins]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10655c0c0

// -[SCMediaChatViewModel thumbnailWidth]
// Type encoding: d16@0:8
// Implementation: 0x10655c100

// -[SCMediaChatViewModel thumbnailHeight]
// Type encoding: d16@0:8
// Implementation: 0x10655c104

// -[SCMediaChatViewModel updatedThumbnailViewModel]
// Type encoding: @16@0:8
// Implementation: 0x10655c11c

// -[SCMediaChatViewModel thumbnailSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10655c358

// -[SCMediaChatViewModel _payloadViewInsetsForWidth:maxHeight:]
// Type encoding: {UIEdgeInsets=dddd}32@0:8d16d24
// Implementation: 0x10655c4c8

// -[SCMediaChatViewModel isSending]
// Type encoding: B16@0:8
// Implementation: 0x10655c5a4

// -[SCMediaChatViewModel firstLabelSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10655c5b4

// -[SCMediaChatViewModel secondLabelSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10655c5c8

// -[SCMediaChatViewModel thirdLabelSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10655c5dc

// -[SCMediaChatViewModel fourthLabelSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10655c5f0

// -[SCMediaChatViewModel totalLabelHeight]
// Type encoding: d16@0:8
// Implementation: 0x10655c604

// -[SCMediaChatViewModel attributedFirstLabelText]
// Type encoding: @16@0:8
// Implementation: 0x10655c614

// -[SCMediaChatViewModel attributedSecondLabelText]
// Type encoding: @16@0:8
// Implementation: 0x10655c624

// -[SCMediaChatViewModel attributedThirdLabelText]
// Type encoding: @16@0:8
// Implementation: 0x10655c634

// -[SCMediaChatViewModel attributedFourthLabelText]
// Type encoding: @16@0:8
// Implementation: 0x10655c644

// -[SCMediaChatViewModel mediaV3]
// Type encoding: @16@0:8
// Implementation: 0x10655c654

// -[SCMediaChatViewModel mediaHeight]
// Type encoding: d16@0:8
// Implementation: 0x10655c664

// -[SCMediaChatViewModel setMediaHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x10655c674

// -[SCMediaChatViewModel mediaWidth]
// Type encoding: d16@0:8
// Implementation: 0x10655c684

// -[SCMediaChatViewModel setMediaWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x10655c694

// -[SCMediaChatViewModel bodyType]
// Type encoding: q16@0:8
// Implementation: 0x10655c6a4

// -[SCMediaChatViewModel setBodyType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10655c6b4

// -[SCMediaChatViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10655c6c4

@end
