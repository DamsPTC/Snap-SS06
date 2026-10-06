// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBaseMediaThumbnailViewModel
// Superclass: NSObject
// Address: 0x112b5bb38

@interface SCBaseMediaThumbnailViewModel

// Property: image; attributes: T@"UIImage",&,N,V_image
// Property: videoOverlayThumbnailImage; attributes: T@"UIImage",&,V_videoOverlayThumbnailImage
// Property: thumbnailSize; attributes: T{CGSize=dd},N,V_thumbnailSize
// Property: messageId; attributes: T@"NSString",C,N,V_messageId
// Property: analyticsMessageId; attributes: T@"NSString",C,N,V_analyticsMessageId
// Property: conversationId; attributes: T@"NSString",C,N,V_conversationId
// Property: senderDisplayName; attributes: T@"NSString",C,N,V_senderDisplayName
// Property: recipientDisplayName; attributes: T@"NSString",C,N,V_recipientDisplayName
// Property: senderUserId; attributes: T@"NSString",C,N,V_senderUserId
// Property: recipientUserId; attributes: T@"NSString",&,N,V_recipientUserId
// Property: bodyType; attributes: Tq,N,V_bodyType
// Property: isFailed; attributes: TB,N,V_isFailed
// Property: isSending; attributes: TB,N,V_isSending
// Property: isSentByUser; attributes: TB,N,V_isSentByUser
// Property: isSaved; attributes: TB,N,V_isSaved
// Property: chatMessageActionHandler; attributes: T@"<SCChatMessageActionHandling>",&,N,V_chatMessageActionHandler
// Property: contentDelivery; attributes: T@"SCLazy",&,N,V_contentDelivery
// Property: chatMediaFetcher; attributes: T@"SCLazy",&,N,V_chatMediaFetcher
// Property: isLockedConversation; attributes: TB,N,V_isLockedConversation
// Property: renderAsBubble; attributes: TB,N,V_renderAsBubble
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBaseMediaThumbnailViewModel clearOldData]
// Type encoding: v16@0:8
// Implementation: 0x107047344

// -[SCBaseMediaThumbnailViewModel displayedMedia]
// Type encoding: @16@0:8
// Implementation: 0x107047374

// -[SCBaseMediaThumbnailViewModel representsMedia:]
// Type encoding: B24@0:8@16
// Implementation: 0x1070473c8

// -[SCBaseMediaThumbnailViewModel mediaIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107047428

// -[SCBaseMediaThumbnailViewModel trackingId]
// Type encoding: @16@0:8
// Implementation: 0x10704747c

// -[SCBaseMediaThumbnailViewModel loadMedia]
// Type encoding: v16@0:8
// Implementation: 0x107047484

// -[SCBaseMediaThumbnailViewModel height]
// Type encoding: d16@0:8
// Implementation: 0x1070474d8

// -[SCBaseMediaThumbnailViewModel width]
// Type encoding: d16@0:8
// Implementation: 0x10704752c

// -[SCBaseMediaThumbnailViewModel isCircular]
// Type encoding: B16@0:8
// Implementation: 0x107047580

// -[SCBaseMediaThumbnailViewModel mediaSaved]
// Type encoding: B16@0:8
// Implementation: 0x107047588

// -[SCBaseMediaThumbnailViewModel mediaLoaded]
// Type encoding: B16@0:8
// Implementation: 0x1070475dc

// -[SCBaseMediaThumbnailViewModel shouldDisplayActivityIndicator]
// Type encoding: B16@0:8
// Implementation: 0x107047630

// -[SCBaseMediaThumbnailViewModel shouldDisplaySendingOverlay]
// Type encoding: B16@0:8
// Implementation: 0x107047684

// -[SCBaseMediaThumbnailViewModel shouldDisplayFailedToSend]
// Type encoding: B16@0:8
// Implementation: 0x1070476d8

// -[SCBaseMediaThumbnailViewModel shouldDisplayTapToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10704772c

// -[SCBaseMediaThumbnailViewModel shouldDisplayFailedToLoad]
// Type encoding: B16@0:8
// Implementation: 0x107047780

// -[SCBaseMediaThumbnailViewModel fetchMediaAvailability]
// Type encoding: @16@0:8
// Implementation: 0x107047788

// -[SCBaseMediaThumbnailViewModel fetchImageToSaveWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1070477dc

// -[SCBaseMediaThumbnailViewModel fetchImageToDisplayWithCompletionHandler:scaledToSize:]
// Type encoding: v40@0:8@?16{CGSize=dd}24
// Implementation: 0x10704783c

// -[SCBaseMediaThumbnailViewModel imageToDisplay]
// Type encoding: @16@0:8
// Implementation: 0x10704789c

// -[SCBaseMediaThumbnailViewModel containsGif]
// Type encoding: B16@0:8
// Implementation: 0x1070478c4

// -[SCBaseMediaThumbnailViewModel containsVideo]
// Type encoding: B16@0:8
// Implementation: 0x1070478cc

// -[SCBaseMediaThumbnailViewModel fetchVideoOverlayForExportWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107047920

// -[SCBaseMediaThumbnailViewModel fetchVideoOverlayThumbnailWithSize:WithCompletionHandler:]
// Type encoding: v40@0:8{CGSize=dd}16@?32
// Implementation: 0x107047980

// -[SCBaseMediaThumbnailViewModel videoURL]
// Type encoding: @16@0:8
// Implementation: 0x1070479e0

// -[SCBaseMediaThumbnailViewModel saveableVideoURL]
// Type encoding: @16@0:8
// Implementation: 0x107047a34

// -[SCBaseMediaThumbnailViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107047a38

// -[SCBaseMediaThumbnailViewModel thumbnailSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107047cb8

// -[SCBaseMediaThumbnailViewModel setThumbnailSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107047cc0

// -[SCBaseMediaThumbnailViewModel messageId]
// Type encoding: @16@0:8
// Implementation: 0x107047cc8

// -[SCBaseMediaThumbnailViewModel setMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047cd0

// -[SCBaseMediaThumbnailViewModel analyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x107047cd8

// -[SCBaseMediaThumbnailViewModel setAnalyticsMessageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047ce0

// -[SCBaseMediaThumbnailViewModel conversationId]
// Type encoding: @16@0:8
// Implementation: 0x107047ce8

// -[SCBaseMediaThumbnailViewModel setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047cf0

// -[SCBaseMediaThumbnailViewModel senderDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x107047cf8

// -[SCBaseMediaThumbnailViewModel setSenderDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047d00

// -[SCBaseMediaThumbnailViewModel recipientDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x107047d08

// -[SCBaseMediaThumbnailViewModel setRecipientDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047d10

// -[SCBaseMediaThumbnailViewModel senderUserId]
// Type encoding: @16@0:8
// Implementation: 0x107047d18

// -[SCBaseMediaThumbnailViewModel setSenderUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047d20

// -[SCBaseMediaThumbnailViewModel recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x107047d28

// -[SCBaseMediaThumbnailViewModel setRecipientUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047d30

// -[SCBaseMediaThumbnailViewModel bodyType]
// Type encoding: q16@0:8
// Implementation: 0x107047d60

// -[SCBaseMediaThumbnailViewModel setBodyType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107047d68

// -[SCBaseMediaThumbnailViewModel isFailed]
// Type encoding: B16@0:8
// Implementation: 0x107047d70

// -[SCBaseMediaThumbnailViewModel setIsFailed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107047d78

// -[SCBaseMediaThumbnailViewModel isSending]
// Type encoding: B16@0:8
// Implementation: 0x107047d80

// -[SCBaseMediaThumbnailViewModel setIsSending:]
// Type encoding: v20@0:8B16
// Implementation: 0x107047d88

// -[SCBaseMediaThumbnailViewModel isSentByUser]
// Type encoding: B16@0:8
// Implementation: 0x107047d90

// -[SCBaseMediaThumbnailViewModel setIsSentByUser:]
// Type encoding: v20@0:8B16
// Implementation: 0x107047d98

// -[SCBaseMediaThumbnailViewModel isSaved]
// Type encoding: B16@0:8
// Implementation: 0x107047da0

// -[SCBaseMediaThumbnailViewModel setIsSaved:]
// Type encoding: v20@0:8B16
// Implementation: 0x107047da8

// -[SCBaseMediaThumbnailViewModel chatMessageActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x107047db0

// -[SCBaseMediaThumbnailViewModel setChatMessageActionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047db8

// -[SCBaseMediaThumbnailViewModel contentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x107047de8

// -[SCBaseMediaThumbnailViewModel setContentDelivery:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047df0

// -[SCBaseMediaThumbnailViewModel chatMediaFetcher]
// Type encoding: @16@0:8
// Implementation: 0x107047e20

// -[SCBaseMediaThumbnailViewModel setChatMediaFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047e28

// -[SCBaseMediaThumbnailViewModel isLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x107047e58

// -[SCBaseMediaThumbnailViewModel setIsLockedConversation:]
// Type encoding: v20@0:8B16
// Implementation: 0x107047e60

// -[SCBaseMediaThumbnailViewModel renderAsBubble]
// Type encoding: B16@0:8
// Implementation: 0x107047e68

// -[SCBaseMediaThumbnailViewModel setRenderAsBubble:]
// Type encoding: v20@0:8B16
// Implementation: 0x107047e70

// -[SCBaseMediaThumbnailViewModel image]
// Type encoding: @16@0:8
// Implementation: 0x107047e78

// -[SCBaseMediaThumbnailViewModel setImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047e80

// -[SCBaseMediaThumbnailViewModel videoOverlayThumbnailImage]
// Type encoding: @16@0:8
// Implementation: 0x107047eb0

// -[SCBaseMediaThumbnailViewModel setVideoOverlayThumbnailImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107047ebc

// -[SCBaseMediaThumbnailViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107047ec4

@end
