// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensContextMetadataStoreDecorator
// Superclass: NSObject
// Address: 0x112bf41f8

@interface SCLensContextMetadataStoreDecorator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCLensContextMetadataStoreDecorator initWithBaseMetadataStore:contextUpdater:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091db0b0

// -[SCLensContextMetadataStoreDecorator updateLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091db154

// -[SCLensContextMetadataStoreDecorator lenses]
// Type encoding: @16@0:8
// Implementation: 0x1091db16c

// -[SCLensContextMetadataStoreDecorator lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x1091db1bc

// -[SCLensContextMetadataStoreDecorator applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091db20c

// -[SCLensContextMetadataStoreDecorator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091db214

// -[SCLensContextMetadataStoreDecorator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091db21c

// -[SCLensContextMetadataStoreDecorator startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091db224

// -[SCLensContextMetadataStoreDecorator stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x1091db278

// -[SCLensContextMetadataStoreDecorator synchronize]
// Type encoding: v16@0:8
// Implementation: 0x1091db2a0

// -[SCLensContextMetadataStoreDecorator warmUp]
// Type encoding: v16@0:8
// Implementation: 0x1091db2a8

// -[SCLensContextMetadataStoreDecorator supportsFilteringForAttribute:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1091db2b0

// -[SCLensContextMetadataStoreDecorator hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x1091db2b8

// -[SCLensContextMetadataStoreDecorator loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x1091db2c0

// -[SCLensContextMetadataStoreDecorator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091db2c8

@end
