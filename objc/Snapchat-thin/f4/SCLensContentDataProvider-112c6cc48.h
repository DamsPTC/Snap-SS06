// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensContentDataProvider
// Superclass: NSObject
// Address: 0x112c6cc48

@interface SCLensContentDataProvider

// Property: fetchedLensIdsFuture; attributes: T@"SCFuture",R,N
// Property: fetchedLensResourceIdsFuture; attributes: T@"SCFuture",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensContentDataProvider initWithCachedDataProvider:lifecycleEvent:lensContentCacheLogger:lensDataConfigProvider:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10b0be7f8

// -[SCLensContentDataProvider fetchedLensIdsFuture]
// Type encoding: @16@0:8
// Implementation: 0x10b0be918

// -[SCLensContentDataProvider fetchedLensResourceIdsFuture]
// Type encoding: @16@0:8
// Implementation: 0x10b0be97c

// -[SCLensContentDataProvider isFetchedLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0bed30

// -[SCLensContentDataProvider isFetchedLensContentForId:checksum:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b0bee24

// -[SCLensContentDataProvider _subscribeOnLifecycleEventsIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0beed4

// -[SCLensContentDataProvider _cleanupResources]
// Type encoding: v16@0:8
// Implementation: 0x10b0bf0e0

// -[SCLensContentDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0bf144

@end
