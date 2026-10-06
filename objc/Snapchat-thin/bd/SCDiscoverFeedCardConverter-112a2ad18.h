// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedCardConverter
// Superclass: NSObject
// Address: 0x112a2ad18

@interface SCDiscoverFeedCardConverter


// -[SCDiscoverFeedCardConverter init]
// Type encoding: @16@0:8
// Implementation: 0x105319138

// -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesResponse:feedCardGrapheneMetricsEmitter:isPaginationRequest:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1053191d4

// -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesBatchResponse:feedCardGrapheneMetricsEmitter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10531946c

// -[SCDiscoverFeedCardConverter MFCBatchGetFeedCardsByOwnersResponseToStoriesBatchResponse:feedType:feedCardGrapheneMetricsEmitter:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x1053197e8

// -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesBatchLookupResponse:feedCardGrapheneMetricsEmitter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105319b30

// -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesLookupResponse:feedCardGrapheneMetricsEmitter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105319d9c

// -[SCDiscoverFeedCardConverter _getStoryCardFromFeedCardEnvelope:feedType:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x105319f3c

// -[SCDiscoverFeedCardConverter _createStoriesSteamWithSessionToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x10531a0cc

// -[SCDiscoverFeedCardConverter _createSuccessfullyResponseStatus]
// Type encoding: @16@0:8
// Implementation: 0x10531a118

// -[SCDiscoverFeedCardConverter _updateStoryRespone:withFeed:getFeedsResponse:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10531a14c

// -[SCDiscoverFeedCardConverter _updateStoryRespone:withFeed:userSession:hasUserSession:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10531a1f0

// -[SCDiscoverFeedCardConverter _getStoryCardsFromCardEnvelopes:feedType:isPaginationRequest:feedCardGrapheneMetricsEmitter:]
// Type encoding: @40@0:8@16i24B28@32
// Implementation: 0x10531a3e4

// -[SCDiscoverFeedCardConverter _getSingleSnapStoryCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:]
// Type encoding: @36@0:8i16@20@28
// Implementation: 0x10531a53c

// -[SCDiscoverFeedCardConverter _getPublicUserStoryCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:]
// Type encoding: @36@0:8i16@20@28
// Implementation: 0x10531a668

// -[SCDiscoverFeedCardConverter _getLongFormStoryCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:]
// Type encoding: @36@0:8i16@20@28
// Implementation: 0x10531a794

// -[SCDiscoverFeedCardConverter _getPublisherCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:]
// Type encoding: @36@0:8i16@20@28
// Implementation: 0x10531a8c0

// -[SCDiscoverFeedCardConverter _isLongFormShow:]
// Type encoding: B24@0:8@16
// Implementation: 0x10531a9ec

// -[SCDiscoverFeedCardConverter _baseStoryCardForFeedType:feedCard:feedSnapsArray:]
// Type encoding: @36@0:8i16@20@28
// Implementation: 0x10531ab98

// -[SCDiscoverFeedCardConverter _createJaguarClientLoggingForCardEnvelope:feedCard:feedCardSnap:explorationSource:]
// Type encoding: @44@0:8@16@24@32i40
// Implementation: 0x10531b280

// -[SCDiscoverFeedCardConverter _parseFeedCardSnapsFromFeedCardEnvelope:]
// Type encoding: @24@0:8@16
// Implementation: 0x10531b4b4

// -[SCDiscoverFeedCardConverter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10531b610

@end
