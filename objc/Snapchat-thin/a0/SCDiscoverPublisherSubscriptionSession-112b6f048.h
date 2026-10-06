// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverPublisherSubscriptionSession
// Superclass: NSObject
// Address: 0x112b6f048

@interface SCDiscoverPublisherSubscriptionSession

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverPublisherSubscriptionSession initWithPublisherName:subscriptionStore:discoverFeedEventsController:discoverFeedDataFetcher:loggingContext:editionId:discoverBlizzardLogger:creatorSettingsFetcher:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107ac3b7c

// -[SCDiscoverPublisherSubscriptionSession setLoggingContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac3cf4

// -[SCDiscoverPublisherSubscriptionSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107ac3d00

// -[SCDiscoverPublisherSubscriptionSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ac3e4c

// -[SCDiscoverPublisherSubscriptionSession _performSubscriptionFromSource:publisherId:editionId:snapId:]
// Type encoding: v48@0:8Q16@24@32@40
// Implementation: 0x107ac41e8

// -[SCDiscoverPublisherSubscriptionSession _subscriptionStateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x107ac4574

// -[SCDiscoverPublisherSubscriptionSession _logSubscribeToStoryWithIsSubscribed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ac4600

// -[SCDiscoverPublisherSubscriptionSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107ac4744

// -[SCDiscoverPublisherSubscriptionSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac475c

// -[SCDiscoverPublisherSubscriptionSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ac4768

// +[SCDiscoverPublisherSubscriptionSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ac3b70

@end
