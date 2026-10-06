// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAAnalyticsComponent
// Superclass: LSABaseComponent
// Address: 0x112bf88e8

@interface LSAAnalyticsComponent

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAAnalyticsComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ad8ac98

// -[LSAAnalyticsComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10ad8ad6c

// -[LSAAnalyticsComponent addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad8af60

// -[LSAAnalyticsComponent removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad8af70

// -[LSAAnalyticsComponent didPreparePerformanceReport:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad8af80

// -[LSAAnalyticsComponent didPrepareEffectAnalyticEventsForLensId:analyticsManager:]
// Type encoding: v32@0:8@16^v24
// Implementation: 0x10ad8b06c

// -[LSAAnalyticsComponent reportAnalyticsEventsWithEventData:lensId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10ad8b16c

// -[LSAAnalyticsComponent reportLensCreatorsAnalyticsEventsWithEventData:lensId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10ad8b3d0

// -[LSAAnalyticsComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad8b5e0

// -[LSAAnalyticsComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad8b650

@end
