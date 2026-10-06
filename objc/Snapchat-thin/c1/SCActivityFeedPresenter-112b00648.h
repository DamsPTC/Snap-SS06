// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCActivityFeedPresenter
// Superclass: NSObject
// Address: 0x112b00648

@interface SCActivityFeedPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCActivityFeedPresenter initWithActivityFeedScopeExposer:viewController:businessProfileAndUserData:snapIdFromPushNotification:onLoadEventId:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1068143f8

// -[SCActivityFeedPresenter presentActivityFeedWithProfileId:sourceType:bellIconLastSeenTimestamp:bellIconIsBadged:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106814514

// -[SCActivityFeedPresenter showActivityFeedForBusinessProfileAndUserData:notification:sourceType:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106814554

// -[SCActivityFeedPresenter showActivityFeedForProfileId:snapId:businessProfileAndUserData:onLoadEventId:notificationType:sourceType:animated:bellIconLastSeenTimestamp:bellIconIsBadged:]
// Type encoding: v84@0:8@16@24@32@40@48@56B64@68@76
// Implementation: 0x106814780

// -[SCActivityFeedPresenter showActivityFeedContinuationForProfileId:snapId:businessProfileAndUserData:onLoadEventId:notificationType:sourceType:animated:bellIconLastSeenTimestamp:bellIconIsBadged:]
// Type encoding: v84@0:8@16@24@32@40@48@56B64@68@76
// Implementation: 0x106814a28

// -[SCActivityFeedPresenter activityFeedDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106814d2c

// -[SCActivityFeedPresenter activityFeedNeedsRemoval]
// Type encoding: v16@0:8
// Implementation: 0x106814d74

// -[SCActivityFeedPresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106814eac

// -[SCActivityFeedPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106814eb8

@end
