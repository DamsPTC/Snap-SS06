// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRemoteStoriesFetchProgress
// Superclass: NSObject
// Address: 0x112b68b08

@interface SCRemoteStoriesFetchProgress

// Property: storyIds; attributes: T@"NSArray",R,N,V_storyIds
// Property: areUserIds; attributes: TB,R,N,V_areUserIds
// Property: ignoreBlockerStories; attributes: TB,R,N,V_ignoreBlockerStories
// Property: source; attributes: T@"NSString",R,N,V_source
// Property: shouldStoreInDatabase; attributes: TB,R,N,V_shouldStoreInDatabase

// -[SCRemoteStoriesFetchProgress initWithUserId:ignoreBlockerStories:shouldStoreInDatabase:source:completionQueue:completion:]
// Type encoding: @56@0:8@16B24B28@32@40@?48
// Implementation: 0x1079e3bf0

// -[SCRemoteStoriesFetchProgress initWithUserIds:ignoreBlockerStories:source:completionQueue:completion:]
// Type encoding: @52@0:8@16B24@28@36@?44
// Implementation: 0x1079e3f00

// -[SCRemoteStoriesFetchProgress initWithStoryIds:ignoreBlockerStories:source:completionQueue:completion:]
// Type encoding: @52@0:8@16B24@28@36@?44
// Implementation: 0x1079e4198

// -[SCRemoteStoriesFetchProgress resolveStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e43f4

// -[SCRemoteStoriesFetchProgress unresolvedStoryIds]
// Type encoding: @16@0:8
// Implementation: 0x1079e446c

// -[SCRemoteStoriesFetchProgress complete]
// Type encoding: v16@0:8
// Implementation: 0x1079e45c0

// -[SCRemoteStoriesFetchProgress failWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079e461c

// -[SCRemoteStoriesFetchProgress _resolvedStoriesList]
// Type encoding: @16@0:8
// Implementation: 0x1079e4660

// -[SCRemoteStoriesFetchProgress storyIds]
// Type encoding: @16@0:8
// Implementation: 0x1079e46d0

// -[SCRemoteStoriesFetchProgress areUserIds]
// Type encoding: B16@0:8
// Implementation: 0x1079e46d8

// -[SCRemoteStoriesFetchProgress ignoreBlockerStories]
// Type encoding: B16@0:8
// Implementation: 0x1079e46e0

// -[SCRemoteStoriesFetchProgress source]
// Type encoding: @16@0:8
// Implementation: 0x1079e46e8

// -[SCRemoteStoriesFetchProgress shouldStoreInDatabase]
// Type encoding: B16@0:8
// Implementation: 0x1079e46f0

// -[SCRemoteStoriesFetchProgress .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079e46f8

@end
