// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCollectionViewSectionSeenCellTracker
// Superclass: NSObject
// Address: 0x112bdc148

@interface SCCollectionViewSectionSeenCellTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCollectionViewSectionSeenCellTracker initWithPerformer:seenSource:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f854d4

// -[SCCollectionViewSectionSeenCellTracker startMonitoringSeenEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f855f0

// -[SCCollectionViewSectionSeenCellTracker stopMonitoringSeenEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f85600

// -[SCCollectionViewSectionSeenCellTracker sectionToSeenViewModelsMapping]
// Type encoding: @16@0:8
// Implementation: 0x108f85610

// -[SCCollectionViewSectionSeenCellTracker sectionToSeenVisibilityMapping]
// Type encoding: @16@0:8
// Implementation: 0x108f85628

// -[SCCollectionViewSectionSeenCellTracker sectionToSeenContactMapping]
// Type encoding: @16@0:8
// Implementation: 0x108f85640

// -[SCCollectionViewSectionSeenCellTracker reset]
// Type encoding: v16@0:8
// Implementation: 0x108f85658

// -[SCCollectionViewSectionSeenCellTracker didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108f856f0

// -[SCCollectionViewSectionSeenCellTracker _onNewSeenRecipientWithSectionIdentifier:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108f85880

// -[SCCollectionViewSectionSeenCellTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f85e0c

@end
