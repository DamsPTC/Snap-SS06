// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPremiumStoryShareDataProvider
// Superclass: NSObject
// Address: 0x112ab3028

@interface SCPremiumStoryShareDataProvider

// Property: storyShareDataListener; attributes: T@"<SCPremiumStoryShareDataListening>",W,N,V_storyShareDataListener
// Property: storySharePlaybackPresenterDelegate; attributes: T@"<SCStorySharePlaybackScopeDelegate>",W,N,V_storySharePlaybackPresenterDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPremiumStoryShareDataProvider initWithMessage:renderForQuotedMessage:renderForQuotedMessagePreview:storyFetcher:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedEventsLogger:chatContentDelivery:forwardabilityListener:messagingMessageProvider:]
// Type encoding: @96@0:8@16B24B28@32@40@48@56@64@72@80@88
// Implementation: 0x105f942ec

// -[SCPremiumStoryShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x105f94538

// -[SCPremiumStoryShareDataProvider _fetchStoryForShareModel:storyThumbnailUrlUpdateBlock:videoContextUpdateBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105f94a78

// -[SCPremiumStoryShareDataProvider _renderTileWithDiscoverFeedStory:shareModel:thumbnailUrlUpdateBlock:videoContextUpdateBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x105f94c30

// -[SCPremiumStoryShareDataProvider discoverFeedStory]
// Type encoding: @16@0:8
// Implementation: 0x105f9581c

// -[SCPremiumStoryShareDataProvider storyShareModel]
// Type encoding: @16@0:8
// Implementation: 0x105f95858

// -[SCPremiumStoryShareDataProvider publisher]
// Type encoding: @16@0:8
// Implementation: 0x105f95894

// -[SCPremiumStoryShareDataProvider storyThumbnailUrl]
// Type encoding: @16@0:8
// Implementation: 0x105f958d0

// -[SCPremiumStoryShareDataProvider bitmojiAvatarIds]
// Type encoding: @16@0:8
// Implementation: 0x105f9590c

// -[SCPremiumStoryShareDataProvider subscribe]
// Type encoding: v16@0:8
// Implementation: 0x105f95948

// -[SCPremiumStoryShareDataProvider shouldOverrideMediaSize]
// Type encoding: B16@0:8
// Implementation: 0x105f95b7c

// -[SCPremiumStoryShareDataProvider overrideMediaSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105f95b98

// -[SCPremiumStoryShareDataProvider _updateUiBlockWithSubscribed:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f95bac

// -[SCPremiumStoryShareDataProvider _logSubscriptionEvent]
// Type encoding: v16@0:8
// Implementation: 0x105f95d74

// -[SCPremiumStoryShareDataProvider _constructPremiumStoryShareModelFromLegacyMessage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f95e70

// -[SCPremiumStoryShareDataProvider _postProcessChatMediaForMessage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f96088

// -[SCPremiumStoryShareDataProvider _handleBitmojiStoryWithIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f963e4

// -[SCPremiumStoryShareDataProvider _fetchChatMediaForBitmojiStory:compositeStoryId:snapId:overrideTimestamp:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x105f96414

// -[SCPremiumStoryShareDataProvider _postProcessChatMediaForBitmojiStoriesMessage:shareModel:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105f966cc

// -[SCPremiumStoryShareDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105f968e0

// -[SCPremiumStoryShareDataProvider removeCreatorSettingsListener]
// Type encoding: v16@0:8
// Implementation: 0x105f96b2c

// -[SCPremiumStoryShareDataProvider storySharePlaybackPresenterDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105f96b68

// -[SCPremiumStoryShareDataProvider setStorySharePlaybackPresenterDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f96b80

// -[SCPremiumStoryShareDataProvider storyShareDataListener]
// Type encoding: @16@0:8
// Implementation: 0x105f96b8c

// -[SCPremiumStoryShareDataProvider setStoryShareDataListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f96ba4

// -[SCPremiumStoryShareDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f96bb0

@end
