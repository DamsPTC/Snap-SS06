// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedPublicProfileSubscriptionManager
// Superclass: NSObject
// Address: 0x112ae99e8

@interface SCUnifiedPublicProfileSubscriptionManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedPublicProfileSubscriptionManager initWithCreatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:snapchattersDataFetcher:discoverFeedDataSourceDeprecated:discoverFeedNotificationPromptHandler:bitmojiImageFetcher:imageDownloader:grapheneRegistry:profilesProvider:storiesConfigProvider:imageFetchingService:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x106603394

// -[SCUnifiedPublicProfileSubscriptionManager getStateWithPublicProfileId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106603670

// -[SCUnifiedPublicProfileSubscriptionManager getOptInStateWithHostAccountId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106603bc0

// -[SCUnifiedPublicProfileSubscriptionManager updateSubscribedWithPublicProfileId:subscribed:callback:placementInfo:subscriptionActionAttributions:nonFriendAddPlacementTypeOverride:nonFriendAddSourceOverride:]
// Type encoding: v68@0:8@16B24@?28@36@44@52@60
// Implementation: 0x106603c40

// -[SCUnifiedPublicProfileSubscriptionManager updateOptInNotificationsWithPublicProfileId:optedIn:callback:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x106604010

// -[SCUnifiedPublicProfileSubscriptionManager observeWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x106604180

// -[SCUnifiedPublicProfileSubscriptionManager _fetchPublicProfileDataHandlerWithPublicProfileId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1066043ac

// -[SCUnifiedPublicProfileSubscriptionManager _performOptInNotificationsUpdate:profile:callback:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x106604554

// -[SCUnifiedPublicProfileSubscriptionManager pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106604860

// -[SCUnifiedPublicProfileSubscriptionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10660486c

@end
