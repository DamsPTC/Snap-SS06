// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSharedStoryManagerNetworkRequester
// Superclass: NSObject
// Address: 0x112b06638

@interface SCSharedStoryManagerNetworkRequester


// -[SCSharedStoryManagerNetworkRequester initWithProtobufRequestManager:currentUserId:networkConnectivityMonitor:locationProvider:customStoriesDataFetcher:remoteSnapchattersDataFetcher:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106918c90

// -[SCSharedStoryManagerNetworkRequester fetchStoryElementWithStoryId:requestSuccessCallBack:requestFailureCallBack:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106918e0c

// -[SCSharedStoryManagerNetworkRequester _createSnapElementRequestWithSnapId:accessToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10691938c

// -[SCSharedStoryManagerNetworkRequester _conversationStoryElementResponseFromMessage:response:story:requestSuccessCallBack:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10691946c

// -[SCSharedStoryManagerNetworkRequester _customStoryConversationStoryElementResponseFromMessage:response:story:requestSuccessCallBack:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106919518

// -[SCSharedStoryManagerNetworkRequester _customStoryConversationStoryElementResponseWithCreator:customStoryMetadata:message:response:story:requestSuccessCallBack:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x106919a68

// -[SCSharedStoryManagerNetworkRequester _fetchStoryElementFromMessage:response:story:requestSuccessCallBack:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106919f14

// -[SCSharedStoryManagerNetworkRequester _mapStorySharedStatusWithSTMSStatus:]
// Type encoding: q20@0:8i16
// Implementation: 0x106919f30

// -[SCSharedStoryManagerNetworkRequester _mapPostingStoryTypeWithSTMSType:]
// Type encoding: q20@0:8i16
// Implementation: 0x106919f54

// -[SCSharedStoryManagerNetworkRequester _mapMobStoryTypeWithSTMSType:]
// Type encoding: q20@0:8i16
// Implementation: 0x106919f78

// -[SCSharedStoryManagerNetworkRequester _buildSOJUPublisherDataWithSnap:publisherData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106919f9c

// -[SCSharedStoryManagerNetworkRequester _buildSOJOStoryWithSnap:publisherData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10691a20c

// -[SCSharedStoryManagerNetworkRequester _mapSOJUAnmatedSnapTypeWithAnimatedSnapType:]
// Type encoding: q20@0:8i16
// Implementation: 0x10691ac68

// -[SCSharedStoryManagerNetworkRequester _buildFriendStoryWithStoryId:storyDisplayName:status:snap:publisherData:storyType:]
// Type encoding: @56@0:8@16@24i32@36@44i52
// Implementation: 0x10691ac8c

// -[SCSharedStoryManagerNetworkRequester _mapFriendStorySharedStatusWithSTMSStatus:]
// Type encoding: q20@0:8i16
// Implementation: 0x10691b4a4

// -[SCSharedStoryManagerNetworkRequester _mapFriendStoryTypeWithSTMSType:]
// Type encoding: q20@0:8i16
// Implementation: 0x10691b4b4

// -[SCSharedStoryManagerNetworkRequester _mapCustomStoryTypeWithSTMSType:]
// Type encoding: q20@0:8i16
// Implementation: 0x10691b4d8

// -[SCSharedStoryManagerNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10691b4fc

@end
