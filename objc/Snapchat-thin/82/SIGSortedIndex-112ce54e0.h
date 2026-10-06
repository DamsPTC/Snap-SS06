// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGSortedIndex
// Superclass: NSObject
// Address: 0x112ce54e0

@interface SIGSortedIndex

// Property: contiguousGroups; attributes: T@"NSOrderedSet",R,N,V_contiguousGroups
// Property: sparseGroups; attributes: T@"NSOrderedSet",R,N,V_sparseGroups

// -[SIGSortedIndex initWithUnsortedEntities:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b804868

// -[SIGSortedIndex initWithUnsortedEntities:orderedPredefinedGroups:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b8048dc

// -[SIGSortedIndex initWithUnsortedEntities:orderedPredefinedGroups:keyLookup:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10b804964

// -[SIGSortedIndex copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b805a8c

// -[SIGSortedIndex sortedEntitiesInGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b805ab0

// -[SIGSortedIndex sortedEntitiesInGroupAtSparseIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b805adc

// -[SIGSortedIndex indexOfContiguousGroupForSparseGroupAtIndex:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10b805ae4

// -[SIGSortedIndex indexOfNearestSparseGroupForContiguousGroup:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10b805b24

// -[SIGSortedIndex indexPathOfNearestSparseGroupForContiguousGroupAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b805b50

// -[SIGSortedIndex indexOfNearestSparseGroupForContiguousGroupAtIndex:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10b805b74

// -[SIGSortedIndex contiguousGroups]
// Type encoding: @16@0:8
// Implementation: 0x10b805cf4

// -[SIGSortedIndex sparseGroups]
// Type encoding: @16@0:8
// Implementation: 0x10b805cfc

// -[SIGSortedIndex .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b805d04

@end
