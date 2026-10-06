// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSpotlightShareDataProvider
// Superclass: NSObject
// Address: 0x112ab2a38

@interface SCLensSpotlightShareDataProvider

// Property: spotlightStory; attributes: T@"SCSpotlightShareStory",&,N,V_spotlightStory
// Property: thumbnailData; attributes: T@"NSData",&,N,V_thumbnailData
// Property: storySharePlaybackPresenterDelegate; attributes: T@"<SCStorySharePlaybackScopeDelegate>",W,N,V_storySharePlaybackPresenterDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensSpotlightShareDataProvider initWithCompositeStoryId:senderUserId:shouldUseSmallThumbnail:layoutDirection:spotlightDataFetcher:publicProfileManager:thumbnailCoordinator:mediaCoordinator:]
// Type encoding: @76@0:8@16@24B32q36@44@52@60@68
// Implementation: 0x105f7cbcc

// -[SCLensSpotlightShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x105f7cd3c

// -[SCLensSpotlightShareDataProvider _initiateDataFetch]
// Type encoding: v16@0:8
// Implementation: 0x105f7cf3c

// -[SCLensSpotlightShareDataProvider _prefetchMediaWithSpotlightStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7d074

// -[SCLensSpotlightShareDataProvider _handleDataWithUIUpdateBlock:storyThumbnailUrlUpdateBlock:videoContextUpdateBlock:spotlightStory:]
// Type encoding: v48@0:8@?16@?24@?32@40
// Implementation: 0x105f7d158

// -[SCLensSpotlightShareDataProvider _handleErrorStateWithUIUpdateBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105f7d610

// -[SCLensSpotlightShareDataProvider _getPublicProfileManagerWithManager:uiUpdateBlock:uiConfigBuilder:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x105f7d6bc

// -[SCLensSpotlightShareDataProvider _fetchThumbnailDataForSpotlightStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7da20

// -[SCLensSpotlightShareDataProvider storyViewAccessibilityId]
// Type encoding: @16@0:8
// Implementation: 0x105f7db08

// -[SCLensSpotlightShareDataProvider shouldOverrideMediaSize]
// Type encoding: B16@0:8
// Implementation: 0x105f7db14

// -[SCLensSpotlightShareDataProvider overrideMediaSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105f7db1c

// -[SCLensSpotlightShareDataProvider storySharePlaybackPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105f7db30

// -[SCLensSpotlightShareDataProvider setStorySharePlaybackPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7db48

// -[SCLensSpotlightShareDataProvider spotlightStory]
// Type encoding: @16@0:8
// Implementation: 0x105f7db54

// -[SCLensSpotlightShareDataProvider setSpotlightStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7db5c

// -[SCLensSpotlightShareDataProvider thumbnailData]
// Type encoding: @16@0:8
// Implementation: 0x105f7db8c

// -[SCLensSpotlightShareDataProvider setThumbnailData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f7db94

// -[SCLensSpotlightShareDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f7dbc4

@end
