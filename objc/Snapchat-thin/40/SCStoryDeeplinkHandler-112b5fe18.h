// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryDeeplinkHandler
// Superclass: NSObject
// Address: 0x112b5fe18

@interface SCStoryDeeplinkHandler

// Property: friendStories; attributes: T@"FriendStories",R,N,V_friendStories
// Property: username; attributes: T@"NSString",R,C,N,V_username
// Property: delegate; attributes: T@"<SCOperaPlaylistFetcherDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryDeeplinkHandler initWithURL:additionalInfo:userSession:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1071bcb18

// -[SCStoryDeeplinkHandler _wasDeniedDeepLinkingWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bcc34

// -[SCStoryDeeplinkHandler _deeplinkValidationDidFail]
// Type encoding: v16@0:8
// Implementation: 0x1071bcdb4

// -[SCStoryDeeplinkHandler currentLoadingProperties]
// Type encoding: @16@0:8
// Implementation: 0x1071bcdbc

// -[SCStoryDeeplinkHandler resolvedDataModels]
// Type encoding: @16@0:8
// Implementation: 0x1071bce24

// -[SCStoryDeeplinkHandler firstDisplayGroupDataModel]
// Type encoding: @16@0:8
// Implementation: 0x1071bcedc

// -[SCStoryDeeplinkHandler fetchPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x1071bcee4

// -[SCStoryDeeplinkHandler _resolveHttpsURLIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1071bcee8

// -[SCStoryDeeplinkHandler loadingState]
// Type encoding: Q16@0:8
// Implementation: 0x1071bd20c

// -[SCStoryDeeplinkHandler setLoadingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071bd214

// -[SCStoryDeeplinkHandler friendStories]
// Type encoding: @16@0:8
// Implementation: 0x1071bd25c

// -[SCStoryDeeplinkHandler username]
// Type encoding: @16@0:8
// Implementation: 0x1071bd264

// -[SCStoryDeeplinkHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x1071bd26c

// -[SCStoryDeeplinkHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071bd284

// -[SCStoryDeeplinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071bd290

// +[SCStoryDeeplinkHandler resolveStoriesURL:requestManager:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1071bd024

@end
