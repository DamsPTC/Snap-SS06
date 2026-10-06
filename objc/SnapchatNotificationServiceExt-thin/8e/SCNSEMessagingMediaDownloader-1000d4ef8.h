// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNSEMessagingMediaDownloader
// Superclass: NSObject
// Address: 0x1000d4ef8

@interface SCNSEMessagingMediaDownloader


// -[SCNSEMessagingMediaDownloader initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x10003a300

// -[SCNSEMessagingMediaDownloader initWithTimeProvider:userSession:event:networkingApiClient:fetchMediaTaskTimeLimitInSec:grapheneLogger:]
// Type encoding: @64@0:8@16@24@32@40Q48@56
// Implementation: 0x10003a528

// -[SCNSEMessagingMediaDownloader initWithTimeProvider:userSession:event:networkingApiClient:fetchMediaTaskTimeLimitInSec:bypassChatMessageMediaTypeInPrefetch:bypassSnapMessageMediaTypeInPrefetch:skipMediaFetchWhenAppForegrounded:appIsInForeground:nseMediaDbEnabled:grapheneLogger:]
// Type encoding: @88@0:8@16@24@32@40Q48B56B60B64@68B76@80
// Implementation: 0x10003a558

// -[SCNSEMessagingMediaDownloader downloadMedia:conversationId:messageSenderUserId:analyticsMessageId:serverMessageId:messageMediaType:notificationType:completionHandler:]
// Type encoding: v80@0:8@16@24@32@40q48Q56@64@?72
// Implementation: 0x10003a74c

// -[SCNSEMessagingMediaDownloader _prefetchMediaWithURL:mediaReferenceKey:messageSenderUserId:contentId:conversationId:serverMessageId:mediaDownloadGroup:notificationType:analyticsMessageId:messageMediaType:]
// Type encoding: v96@0:8@16@24@32@40@48q56@64@72@80Q88
// Implementation: 0x10003aaec

// -[SCNSEMessagingMediaDownloader _shouldSkipPrefetchForForegroundedApp]
// Type encoding: B16@0:8
// Implementation: 0x10003b784

// -[SCNSEMessagingMediaDownloader _shouldBypassPrefetchForMessageMediaType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10003b7d8

// -[SCNSEMessagingMediaDownloader _recordPrefetchedMediaWithContentId:conversationId:serverMessageId:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10003b808

// -[SCNSEMessagingMediaDownloader _createSymbolicLinkToFile:inDirectory:mediaReferenceKey:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10003b8c8

// -[SCNSEMessagingMediaDownloader _logGrapheneExtensionMediaPrefetchLatency:notificationType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10003b988

// -[SCNSEMessagingMediaDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003ba90

@end
