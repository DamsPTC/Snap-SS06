// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaSubscriptionStore
// Superclass: NSObject
// Address: 0x112ae9ad8

@interface SCImpalaSubscriptionStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaSubscriptionStore initWithCreatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:discoverFeedNotificationPromptHandler:discoverFeedDataSource:interactionHistoryMananger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106608114

// -[SCImpalaSubscriptionStore getSubscriptionWithEntityID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106608268

// -[SCImpalaSubscriptionStore getSubscriptionsWithEntityIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106608514

// -[SCImpalaSubscriptionStore updateSubscriptionWithEntityID:isSubscribed:placementInfo:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x106608834

// -[SCImpalaSubscriptionStore updateNotificationSubscriptionWithEntityID:isSubscribedToNotifications:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10660914c

// -[SCImpalaSubscriptionStore updateHiddenWithEntityID:isHidden:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x106609524

// -[SCImpalaSubscriptionStore observeWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1066098d4

// -[SCImpalaSubscriptionStore shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106609cac

// -[SCImpalaSubscriptionStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106609cb4

// -[SCImpalaSubscriptionStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106609cc0

// -[SCImpalaSubscriptionStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106609d10

// -[SCImpalaSubscriptionStore discoverFeedStoryForEntityId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106609d60

// -[SCImpalaSubscriptionStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106609e50

@end
