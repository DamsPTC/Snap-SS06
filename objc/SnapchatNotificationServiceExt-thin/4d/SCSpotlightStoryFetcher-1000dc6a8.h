// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightStoryFetcher
// Superclass: NSObject
// Address: 0x1000dc6a8

@interface SCSpotlightStoryFetcher


// -[SCSpotlightStoryFetcher initWithUserSession:networkingAPIClient:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10005dd74

// -[SCSpotlightStoryFetcher initWithUserSession:networkingAPIClient:skipMediaDownloadInNSE:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10005dd7c

// -[SCSpotlightStoryFetcher fetchStory:url:notificationType:notificationId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10005de28

// -[SCSpotlightStoryFetcher _prefetchMediaWithUrl:notificationType:compositeStoryId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10005e358

// -[SCSpotlightStoryFetcher _makeRequestToFetchVideoMetadataWithSnapToken:compositeStoryId:successBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10005e56c

// -[SCSpotlightStoryFetcher _requestWithCompositeStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10005e7b8

// -[SCSpotlightStoryFetcher _SCSSMEXTCompositeStoryIdFromCompositeStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10005e96c

// -[SCSpotlightStoryFetcher _saveToFileWithMetadata:notificationType:compositeStoryId:response:error:]
// Type encoding: B56@0:8@16@24@32@40@48
// Implementation: 0x10005ea64

// -[SCSpotlightStoryFetcher _storeDataToFile:notificationType:compositeStoryId:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10005eb50

// -[SCSpotlightStoryFetcher _clientInfo]
// Type encoding: @16@0:8
// Implementation: 0x10005ec5c

// -[SCSpotlightStoryFetcher _finishPrefetching:success:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10005edb8

// -[SCSpotlightStoryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10005edd0

@end
