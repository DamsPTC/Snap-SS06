// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCListSectionExpansionTracker
// Superclass: NSObject
// Address: 0x112bde768

@interface SCListSectionExpansionTracker

// Property: numberOfExpansions; attributes: TQ,N,V_numberOfExpansions
// Property: hasMoreElements; attributes: TB,N,V_hasMoreElements
// Property: numberOfAllElements; attributes: TQ,N,V_numberOfAllElements
// Property: numberOfExpandedElements; attributes: TQ,N,V_numberOfExpandedElements

// -[SCListSectionExpansionTracker initWithMinimumThreshold:maximumThreshold:incrementThreshold:]
// Type encoding: @40@0:8Q16Q24Q32
// Implementation: 0x108fd4240

// -[SCListSectionExpansionTracker copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108fd429c

// -[SCListSectionExpansionTracker setNumberOfAllElements:shouldResetExpansion:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x108fd42f0

// -[SCListSectionExpansionTracker hasMoreElements]
// Type encoding: B16@0:8
// Implementation: 0x108fd4300

// -[SCListSectionExpansionTracker setNumberOfExpansions:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108fd4310

// -[SCListSectionExpansionTracker numberOfExpansionsWithOneMoreExpansion:]
// Type encoding: Q20@0:8B16
// Implementation: 0x108fd4370

// -[SCListSectionExpansionTracker numberOfExpandedElementsWithNumberOfAllElements:numberOfExpansions:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x108fd43b4

// -[SCListSectionExpansionTracker numberOfExpandedElementsWithNumberOfExpansions:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x108fd43b8

// -[SCListSectionExpansionTracker _updateStatusWithNumberOfElements]
// Type encoding: v16@0:8
// Implementation: 0x108fd43c4

// -[SCListSectionExpansionTracker _numberOfExpandedElementsWithNumberOfAllElements:numberOfExpansions:]
// Type encoding: Q32@0:8Q16Q24
// Implementation: 0x108fd442c

// -[SCListSectionExpansionTracker numberOfExpansions]
// Type encoding: Q16@0:8
// Implementation: 0x108fd4468

// -[SCListSectionExpansionTracker setHasMoreElements:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fd4470

// -[SCListSectionExpansionTracker numberOfAllElements]
// Type encoding: Q16@0:8
// Implementation: 0x108fd4478

// -[SCListSectionExpansionTracker setNumberOfAllElements:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108fd4480

// -[SCListSectionExpansionTracker numberOfExpandedElements]
// Type encoding: Q16@0:8
// Implementation: 0x108fd4488

// -[SCListSectionExpansionTracker setNumberOfExpandedElements:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108fd4490

@end
