// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverPublisherOperaStatusHandler
// Superclass: NSObject
// Address: 0x112b6f188

@interface SCDiscoverPublisherOperaStatusHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverPublisherOperaStatusHandler initWithPublisherId:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:]
// Type encoding: @48@0:8q16@24@32@40
// Implementation: 0x107ad0064

// -[SCDiscoverPublisherOperaStatusHandler updateSubscribed:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x107ad01a0

// -[SCDiscoverPublisherOperaStatusHandler updateOptInNotifications:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x107ad0318

// -[SCDiscoverPublisherOperaStatusHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ad0498

// -[SCDiscoverPublisherOperaStatusHandler fetchIsSubscribed]
// Type encoding: @16@0:8
// Implementation: 0x107ad05c4

// -[SCDiscoverPublisherOperaStatusHandler canOptInForNotifications]
// Type encoding: B16@0:8
// Implementation: 0x107ad065c

// -[SCDiscoverPublisherOperaStatusHandler isOptedInForNotifications]
// Type encoding: B16@0:8
// Implementation: 0x107ad0660

// -[SCDiscoverPublisherOperaStatusHandler setCallbackForStoryUpdate:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ad06c8

// -[SCDiscoverPublisherOperaStatusHandler _nextIsSubscribed]
// Type encoding: v16@0:8
// Implementation: 0x107ad0740

// -[SCDiscoverPublisherOperaStatusHandler _isSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x107ad0790

// -[SCDiscoverPublisherOperaStatusHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ad07f8

@end
