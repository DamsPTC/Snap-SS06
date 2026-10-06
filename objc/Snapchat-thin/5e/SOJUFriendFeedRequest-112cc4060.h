// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SOJUFriendFeedRequest
// Superclass: SCSojuMessage
// Address: 0x112cc4060

@interface SOJUFriendFeedRequest

// Property: chatFeedRequest; attributes: T@"SOJUChatFeedRequest",R,D,N
// Property: storyFriendFeedRequest; attributes: T@"SOJUBroadcastStoryFriendFeedRequest",R,D,N
// Property: sessionId; attributes: T@"NSString",R,D,N
// Property: requestId; attributes: T@"NSString",R,D,N
// Property: callOriginationType; attributes: T@"NSString",R,D,N
// Property: creationTimestamp; attributes: T@"NSNumber",R,D,N
// Property: layoutType; attributes: T@"NSString",R,D,N
// Property: conversationIdsToFetch; attributes: T@"NSArray",R,D,N
// Property: previousPagesItemIds; attributes: T@"NSArray",R,D,N
// Property: debugParam; attributes: T@"SOJUFriendFeedRequestDebugParam",R,D,N
// Property: lastFullSyncTimestamp; attributes: T@"NSNumber",R,D,N
// Property: returnRankedStoriesOnly; attributes: T@"NSNumber",R,D,N
// Property: notificationId; attributes: T@"NSString",R,D,N
// Property: sinceTimestamp; attributes: T@"NSNumber",R,D,N
// Property: limit; attributes: T@"NSNumber",R,D,N
// Property: returnFriendStoriesOnly; attributes: T@"NSNumber",R,D,N
// Property: returnFeedItemWithSignals; attributes: T@"NSNumber",R,D,N
// Property: userStoryInteractionHistory; attributes: T@"NSArray",R,D,N
// Property: friendRankingSignals; attributes: T@"NSArray",R,D,N
// Property: filterOutUnidirectionalFriendStories; attributes: T@"NSNumber",R,D,N
// Property: friendStoryRankingSignals; attributes: T@"NSString",R,D,N
// Property: timestamp; attributes: T@"NSString",R,D,N
// Property: reqToken; attributes: T@"NSString",R,D,N
// Property: username; attributes: T@"NSString",R,D,N
// Property: snapchatUserId; attributes: T@"NSString",R,D,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SOJUFriendFeedRequest initWithTimestamp:reqToken:username:snapchatUserId:chatFeedRequest:storyFriendFeedRequest:sessionId:requestId:callOriginationType:creationTimestamp:layoutType:conversationIdsToFetch:previousPagesItemIds:debugParam:lastFullSyncTimestamp:returnRankedStoriesOnly:notificationId:sinceTimestamp:limit:returnFriendStoriesOnly:returnFeedItemWithSignals:userStoryInteractionHistory:friendRankingSignals:filterOutUnidirectionalFriendStories:friendStoryRankingSignals:]
// Type encoding: @216@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208
// Implementation: 0x10b773398

// +[SOJUFriendFeedRequest registerMessageFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b773408

@end
