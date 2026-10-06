// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatVideoPlaybackProvider
// Superclass: NSObject
// Address: 0x112ae6a68

@interface SCChatVideoPlaybackProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatVideoPlaybackProvider initWithAvPlayerProvider:chatMediaFetcher:chatContentDelivery:travelModeSignalProvider:configProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106590594

// -[SCChatVideoPlaybackProvider createPlayerForContextObject:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065906d4

// -[SCChatVideoPlaybackProvider _fetchThumbnailMediaFromCache:waitForSavedToCache:renderStaticThumbnail:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x106590a88

// -[SCChatVideoPlaybackProvider _waitForLocalMediaToSaveInCache:renderStaticThumbnail:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x106590c78

// -[SCChatVideoPlaybackProvider _processFetchedThumbnailImageForMedia:thumbnailImage:renderStaticThumbnail:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x106591134

// -[SCChatVideoPlaybackProvider _fetchOverlayImageForMedia:thumbnailImage:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106591240

// -[SCChatVideoPlaybackProvider _fetchVideoUrlForMedia:thumbnailImage:overlayImage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1065913f8

// -[SCChatVideoPlaybackProvider _logFetchThumbnailForMedia:error:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1065916bc

// -[SCChatVideoPlaybackProvider _logFetchVideoUrlForMedia:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106591760

// -[SCChatVideoPlaybackProvider _logLocalCacheMissForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065917b8

// -[SCChatVideoPlaybackProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106591800

@end
