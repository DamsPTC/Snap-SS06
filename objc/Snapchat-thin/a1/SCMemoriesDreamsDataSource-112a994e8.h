// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesDreamsDataSource
// Superclass: NSObject
// Address: 0x112a994e8

@interface SCMemoriesDreamsDataSource

// Property: myDreamsSubject; attributes: T@"SCObservable",R,N,V_myDreamsSubject
// Property: genAISnapsSubject; attributes: T@"SCObservable",R,N,V_genAISnapsSubject
// Property: myDreamsGalleryItems; attributes: T@"NSArray",R,N,V_myDreamsGalleryItems
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesDreamsDataSource initWithMergedDataSource:genAIDreamsService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105cd47fc

// -[SCMemoriesDreamsDataSource prepareForUnpack:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cd497c

// -[SCMemoriesDreamsDataSource nextGenerationDreamsPackObservable]
// Type encoding: @16@0:8
// Implementation: 0x105cd49ac

// -[SCMemoriesDreamsDataSource nextGenerationGallerySnapsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105cd49d4

// -[SCMemoriesDreamsDataSource selectedGalleryItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x105cd49fc

// -[SCMemoriesDreamsDataSource _updateDreamsSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cd4bb0

// -[SCMemoriesDreamsDataSource _extractGenAISnapFromGallerySnap:inGalleryEntry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105cd543c

// -[SCMemoriesDreamsDataSource _extractDreamsSnapFromGallerySnap:inGalleryEntry:nextGenerationDreamIds:newGenerationDreams:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105cd59ec

// -[SCMemoriesDreamsDataSource gallerySnapsForSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105cd5e90

// -[SCMemoriesDreamsDataSource galleryEntriesForSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105cd5fd8

// -[SCMemoriesDreamsDataSource genAISnapAnalyticsDataForSnapId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105cd6120

// -[SCMemoriesDreamsDataSource dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105cd6288

// -[SCMemoriesDreamsDataSource myDreamsGalleryItems]
// Type encoding: @16@0:8
// Implementation: 0x105cd6564

// -[SCMemoriesDreamsDataSource myDreamsSubject]
// Type encoding: @16@0:8
// Implementation: 0x105cd656c

// -[SCMemoriesDreamsDataSource genAISnapsSubject]
// Type encoding: @16@0:8
// Implementation: 0x105cd6574

// -[SCMemoriesDreamsDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cd657c

@end
