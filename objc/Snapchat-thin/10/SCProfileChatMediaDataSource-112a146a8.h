// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatMediaDataSource
// Superclass: NSObject
// Address: 0x112a146a8

@interface SCProfileChatMediaDataSource

// Property: mediaDownloader; attributes: T@"<SCLegacyItemDownloading>",R,N,V_mediaDownloader
// Property: imageDownloader; attributes: T@"SCLazy",R,N,V_imageDownloader
// Property: ownerId; attributes: T@"NSString",R,C,N,V_ownerId
// Property: conversationId; attributes: T@"NSString",R,C,N,V_conversationId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileChatMediaDataSource initWithSessionUsername:sessionRequestManager:imageDownloader:chatRequestManager:ownerId:conversationId:conversationType:displayName:conversationParticipants:chatMediaDataStore:profileSavedMediaFetcher:profileChatMessagesUpdateTracker:chatMessageActionHandler:grapheneServices:contentDelivery:circumstanceEngine:chatMediaFetcher:]
// Type encoding: @152@0:8@16@24@32@40@48@56q64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x105089684

// -[SCProfileChatMediaDataSource addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105089b04

// -[SCProfileChatMediaDataSource removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105089b0c

// -[SCProfileChatMediaDataSource addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105089b20

// -[SCProfileChatMediaDataSource removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105089b28

// -[SCProfileChatMediaDataSource displayName]
// Type encoding: @16@0:8
// Implementation: 0x105089b30

// -[SCProfileChatMediaDataSource conversationParticipants]
// Type encoding: @16@0:8
// Implementation: 0x105089b58

// -[SCProfileChatMediaDataSource conversationParticipantByUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105089b80

// -[SCProfileChatMediaDataSource chatMediaDataModels]
// Type encoding: @16@0:8
// Implementation: 0x105089bec

// -[SCProfileChatMediaDataSource chatMediaDataModelsWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105089bf4

// -[SCProfileChatMediaDataSource hasUnloadedContent]
// Type encoding: B16@0:8
// Implementation: 0x105089d5c

// -[SCProfileChatMediaDataSource fetchMoreSavedInChatMediaDataModels]
// Type encoding: v16@0:8
// Implementation: 0x105089d64

// -[SCProfileChatMediaDataSource getIntendedRecipientUserIdForOneonOne:currentUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105089d6c

// -[SCProfileChatMediaDataSource _dispatchSavedInChatCardsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105089e20

// -[SCProfileChatMediaDataSource didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105089ee4

// -[SCProfileChatMediaDataSource mediaDownloader]
// Type encoding: @16@0:8
// Implementation: 0x105089f68

// -[SCProfileChatMediaDataSource imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x105089f70

// -[SCProfileChatMediaDataSource ownerId]
// Type encoding: @16@0:8
// Implementation: 0x105089f78

// -[SCProfileChatMediaDataSource conversationId]
// Type encoding: @16@0:8
// Implementation: 0x105089f80

// -[SCProfileChatMediaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105089f88

// +[SCProfileChatMediaDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105089b14

@end
