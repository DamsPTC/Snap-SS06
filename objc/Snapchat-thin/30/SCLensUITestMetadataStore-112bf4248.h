// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUITestMetadataStore
// Superclass: NSObject
// Address: 0x112bf4248

@interface SCLensUITestMetadataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCLensUITestMetadataStore init]
// Type encoding: @16@0:8
// Implementation: 0x1091db508

// -[SCLensUITestMetadataStore setCentralizedLensMetadataRetrieverLazy:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091db584

// -[SCLensUITestMetadataStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x1091db5b4

// -[SCLensUITestMetadataStore addLensData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091db5b8

// -[SCLensUITestMetadataStore _insertTestLensAtFront:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091db8b8

// -[SCLensUITestMetadataStore _replaceStubLens:withMergedLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091db974

// -[SCLensUITestMetadataStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x1091dba88

// -[SCLensUITestMetadataStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x1091dbb30

// -[SCLensUITestMetadataStore supportsFilteringForAttribute:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1091dbb3c

// -[SCLensUITestMetadataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091dbb48

// -[SCLensUITestMetadataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x1091dbba0

// -[SCLensUITestMetadataStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x1091dbba4

// -[SCLensUITestMetadataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dbba8

// -[SCLensUITestMetadataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dbbb0

// -[SCLensUITestMetadataStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x1091dbbb8

// -[SCLensUITestMetadataStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x1091dbbc0

// -[SCLensUITestMetadataStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dbbc8

// -[SCLensUITestMetadataStore _filteringPredicateWithSettings:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dbc3c

// -[SCLensUITestMetadataStore _filteringPredicateForCameraPosition:]
// Type encoding: @24@0:8q16
// Implementation: 0x1091dbd40

// -[SCLensUITestMetadataStore _filteringPredicateForRemovedLensIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dbe48

// -[SCLensUITestMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091dbf40

// +[SCLensUITestMetadataStore sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x1091db2f8

// +[SCLensUITestMetadataStore liveLensPreviewInstance]
// Type encoding: @16@0:8
// Implementation: 0x1091db3a8

// +[SCLensUITestMetadataStore ucoInstance]
// Type encoding: @16@0:8
// Implementation: 0x1091db458

@end
