// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlight916ShareDataProvider
// Superclass: NSObject
// Address: 0x112b0f468

@interface SCSpotlight916ShareDataProvider

// Property: spotlightStory; attributes: T@"SCSpotlightShareStory",&,N,V_spotlightStory
// Property: thumbnailData; attributes: T@"NSData",&,N,V_thumbnailData
// Property: storySharePlaybackPresenterDelegate; attributes: T@"<SCStorySharePlaybackScopeDelegate>",W,N,V_storySharePlaybackPresenterDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlight916ShareDataProvider initWithCompositeStoryId:senderUserId:shouldUseSmallThumbnail:spotlightDataFetcher:publicProfileManager:thumbnailCoordinator:mediaCoordinator:layoutDirection:]
// Type encoding: @76@0:8@16@24B32@36@44@52@60q68
// Implementation: 0x106a8e6a4

// -[SCSpotlight916ShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x106a8e818

// -[SCSpotlight916ShareDataProvider _initiateDataFetch]
// Type encoding: v16@0:8
// Implementation: 0x106a8ea18

// -[SCSpotlight916ShareDataProvider _prefetchMediaWithSpotlightStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8eb50

// -[SCSpotlight916ShareDataProvider _handleDataWithUIUpdateBlock:storyThumbnailUrlUpdateBlock:videoContextUpdateBlock:spotlightStory:]
// Type encoding: v48@0:8@?16@?24@?32@40
// Implementation: 0x106a8ec34

// -[SCSpotlight916ShareDataProvider _updateVideoContextWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a8f264

// -[SCSpotlight916ShareDataProvider _handleErrorStateWithUIUpdateBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a8f318

// -[SCSpotlight916ShareDataProvider _getPublicProfileManagerWithManager:uiUpdateBlock:uiConfigBuilder:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x106a8f3c4

// -[SCSpotlight916ShareDataProvider _fetchThumbnailDataForSpotlightStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8f728

// -[SCSpotlight916ShareDataProvider storyViewAccessibilityId]
// Type encoding: @16@0:8
// Implementation: 0x106a8f810

// -[SCSpotlight916ShareDataProvider shouldOverrideMediaSize]
// Type encoding: B16@0:8
// Implementation: 0x106a8f81c

// -[SCSpotlight916ShareDataProvider overrideMediaSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106a8f824

// -[SCSpotlight916ShareDataProvider autoPlayPreviewDurationMs]
// Type encoding: @16@0:8
// Implementation: 0x106a8f838

// -[SCSpotlight916ShareDataProvider storySharePlaybackPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106a8f870

// -[SCSpotlight916ShareDataProvider setStorySharePlaybackPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8f888

// -[SCSpotlight916ShareDataProvider spotlightStory]
// Type encoding: @16@0:8
// Implementation: 0x106a8f894

// -[SCSpotlight916ShareDataProvider setSpotlightStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8f89c

// -[SCSpotlight916ShareDataProvider thumbnailData]
// Type encoding: @16@0:8
// Implementation: 0x106a8f8cc

// -[SCSpotlight916ShareDataProvider setThumbnailData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8f8d4

// -[SCSpotlight916ShareDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a8f904

@end
