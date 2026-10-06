// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaylistPrefetcherPlugin
// Superclass: NSObject
// Address: 0x112adae98

@interface SCPlaylistPrefetcherPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaylistPrefetcherPlugin initWithConfigProvider:mediaResolver:prefetchProvider:viewSource:prefetchPluginConfig:playlistAdaptiveContentFetcher:]
// Type encoding: @64@0:8@16@24@32q40@48@56
// Implementation: 0x1062f7840

// -[SCPlaylistPrefetcherPlugin isACFEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1062f7b68

// -[SCPlaylistPrefetcherPlugin dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1062f7b70

// -[SCPlaylistPrefetcherPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f7c98

// -[SCPlaylistPrefetcherPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1062f7ca4

// -[SCPlaylistPrefetcherPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062f7d84

// -[SCPlaylistPrefetcherPlugin _createPendingPrefetches]
// Type encoding: @16@0:8
// Implementation: 0x1062f8030

// -[SCPlaylistPrefetcherPlugin _startPrefetch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f837c

// -[SCPlaylistPrefetcherPlugin _onPrefetchCompletion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f87e8

// -[SCPlaylistPrefetcherPlugin _completeAndStartNextRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062f88f4

// -[SCPlaylistPrefetcherPlugin _prefetchAmount]
// Type encoding: Q16@0:8
// Implementation: 0x1062f8988

// -[SCPlaylistPrefetcherPlugin _prefetchRequestFromItem:gestureDistance:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1062f89cc

// -[SCPlaylistPrefetcherPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062f8a54

@end
