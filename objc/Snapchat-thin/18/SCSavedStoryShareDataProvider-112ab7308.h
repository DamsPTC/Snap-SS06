// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSavedStoryShareDataProvider
// Superclass: NSObject
// Address: 0x112ab7308

@interface SCSavedStoryShareDataProvider

// Property: story; attributes: T@"SCDiscoverFeedStory",R
// Property: storyThumbnailUrl; attributes: T@"NSString",R
// Property: initialSnapClientId; attributes: T@"NSString",R
// Property: storySharePlaybackPresenterDelegate; attributes: T@"<SCStorySharePlaybackScopeDelegate>",W,N,V_storySharePlaybackPresenterDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSavedStoryShareDataProvider initWithProfileId:storyId:highlightSnapId:publicProfileManager:storiesNetworkRequester:discoverFeedDataFetcher:discoverFeedDataMutator:networkConnectivityMonitor:locationProvider:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:adConfigProvider:adRenderDataParser:storiesConfigProvider:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x105fdc400

// -[SCSavedStoryShareDataProvider story]
// Type encoding: @16@0:8
// Implementation: 0x105fdc798

// -[SCSavedStoryShareDataProvider storyThumbnailUrl]
// Type encoding: @16@0:8
// Implementation: 0x105fdc7d4

// -[SCSavedStoryShareDataProvider initialSnapClientId]
// Type encoding: @16@0:8
// Implementation: 0x105fdc810

// -[SCSavedStoryShareDataProvider _getSnapProProfileWithManager:uiUpdateBlock:videoContextUpdateBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105fdc868

// -[SCSavedStoryShareDataProvider _fetchStoryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105fdca5c

// -[SCSavedStoryShareDataProvider _fetchStoryFromMixerWithStoryId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105fdcc84

// -[SCSavedStoryShareDataProvider _storyFromStoryLookupResponse:responseTimestamp:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fdcef0

// -[SCSavedStoryShareDataProvider _setStory:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105fdd048

// -[SCSavedStoryShareDataProvider _updateUiWithUiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:storySnap:]
// Type encoding: v48@0:8@?16@?24@?32@40
// Implementation: 0x105fdd49c

// -[SCSavedStoryShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x105fdd768

// -[SCSavedStoryShareDataProvider storySharePlaybackPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105fdd9cc

// -[SCSavedStoryShareDataProvider setStorySharePlaybackPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fdd9e4

// -[SCSavedStoryShareDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fdd9f0

@end
