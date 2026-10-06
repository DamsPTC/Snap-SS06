// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTextChatTableViewCellV2
// Superclass: SCSavableItemChatTableViewCell
// Address: 0x112ae4858

@interface SCTextChatTableViewCellV2

// Property: chatLabel; attributes: T@"SCChatTextLabel",&,N,V_chatLabel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: actionHandler; attributes: T@"<SCActionHandling>",&,N,V_actionHandler

// -[SCTextChatTableViewCellV2 _immutableViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106522f48

// -[SCTextChatTableViewCellV2 textViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106522fa4

// -[SCTextChatTableViewCellV2 initWithParameters:chatAttachmentHandlerScopeExposer:circumstanceEngine:grapheneRegistry:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106523034

// -[SCTextChatTableViewCellV2 renderPayload]
// Type encoding: v16@0:8
// Implementation: 0x106523490

// -[SCTextChatTableViewCellV2 prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x1065234e0

// -[SCTextChatTableViewCellV2 setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106523538

// -[SCTextChatTableViewCellV2 layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106523580

// -[SCTextChatTableViewCellV2 renderChatLabel]
// Type encoding: v16@0:8
// Implementation: 0x1065238a4

// -[SCTextChatTableViewCellV2 didChangeVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065238fc

// -[SCTextChatTableViewCellV2 _openAttachment:senderUserId:otherParticipantId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10652397c

// -[SCTextChatTableViewCellV2 _buildAttachmentCardViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106523ad0

// -[SCTextChatTableViewCellV2 _logThumbnailLoadForUrl:loadSuccess:attachmentCardType:]
// Type encoding: v32@0:8@16B24i28
// Implementation: 0x106524fa4

// -[SCTextChatTableViewCellV2 _getMediaCardViewModels]
// Type encoding: @16@0:8
// Implementation: 0x106524fc4

// -[SCTextChatTableViewCellV2 _getIsInlineOnlyMediaCardsEnabled]
// Type encoding: @16@0:8
// Implementation: 0x106525058

// -[SCTextChatTableViewCellV2 _webViewFactory]
// Type encoding: @16@0:8
// Implementation: 0x1065250bc

// -[SCTextChatTableViewCellV2 _resetMediaCardsWithMaxCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106525164

// -[SCTextChatTableViewCellV2 renderMediaCards]
// Type encoding: v16@0:8
// Implementation: 0x106525264

// -[SCTextChatTableViewCellV2 attributedLabel:didSelectLinkWithURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065254b0

// -[SCTextChatTableViewCellV2 didSelectMention:]
// Type encoding: v24@0:8@16
// Implementation: 0x106525610

// -[SCTextChatTableViewCellV2 didSelectMediaCard:]
// Type encoding: v24@0:8@16
// Implementation: 0x10652566c

// -[SCTextChatTableViewCellV2 actionSheetWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x106525aa0

// -[SCTextChatTableViewCellV2 actionSheetWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106525ad4

// -[SCTextChatTableViewCellV2 _openActionForUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x106525b28

// -[SCTextChatTableViewCellV2 _copyActionForUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x106525c0c

// -[SCTextChatTableViewCellV2 _openURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106525d48

// -[SCTextChatTableViewCellV2 _canOpenURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x106525f2c

// -[SCTextChatTableViewCellV2 actionMenuIndexForPointInsideCell:]
// Type encoding: q32@0:8{CGPoint=dd}16
// Implementation: 0x106525fec

// -[SCTextChatTableViewCellV2 configureWithCollectionViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065261e4

// -[SCTextChatTableViewCellV2 contentViewForFocusedContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065261e8

// -[SCTextChatTableViewCellV2 resetWithOriginalContent]
// Type encoding: v16@0:8
// Implementation: 0x106526370

// -[SCTextChatTableViewCellV2 setPlaceholderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106526584

// -[SCTextChatTableViewCellV2 setActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x106526604

// -[SCTextChatTableViewCellV2 didDismissChatAttachment]
// Type encoding: v16@0:8
// Implementation: 0x10652663c

// -[SCTextChatTableViewCellV2 mapScopeDidPresent]
// Type encoding: v16@0:8
// Implementation: 0x106526640

// -[SCTextChatTableViewCellV2 mapScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106526674

// -[SCTextChatTableViewCellV2 _removeChatAttachmentHandlerScope]
// Type encoding: v16@0:8
// Implementation: 0x1065266a8

// -[SCTextChatTableViewCellV2 actionHandler]
// Type encoding: @16@0:8
// Implementation: 0x106526700

// -[SCTextChatTableViewCellV2 chatLabel]
// Type encoding: @16@0:8
// Implementation: 0x106526710

// -[SCTextChatTableViewCellV2 setChatLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106526720

// -[SCTextChatTableViewCellV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106526760

@end
