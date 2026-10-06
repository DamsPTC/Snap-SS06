// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCreatorSubscriptionProvider
// Superclass: NSObject
// Address: 0x112af3e98

@interface SCLensCreatorSubscriptionProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCreatorSubscriptionProvider initWithCreatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1067371dc

// -[SCLensCreatorSubscriptionProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1067372d8

// -[SCLensCreatorSubscriptionProvider setUpdateHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10673733c

// -[SCLensCreatorSubscriptionProvider updateHandler]
// Type encoding: @16@0:8
// Implementation: 0x106737384

// -[SCLensCreatorSubscriptionProvider isSubscribedToCreatorWithId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1067373c0

// -[SCLensCreatorSubscriptionProvider subscribeToCreatorWithId:snapProId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106737440

// -[SCLensCreatorSubscriptionProvider unsubscribeFromCreatorWithId:snapProId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106737454

// -[SCLensCreatorSubscriptionProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106737468

// -[SCLensCreatorSubscriptionProvider _updateSubscribed:onCreatorId:snapProId:completion:]
// Type encoding: v44@0:8B16@20@28@?36
// Implementation: 0x106737598

// -[SCLensCreatorSubscriptionProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067378b0

@end
