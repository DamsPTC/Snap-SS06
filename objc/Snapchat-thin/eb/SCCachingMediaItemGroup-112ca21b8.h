// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaItemGroup
// Superclass: NSObject
// Address: 0x112ca21b8

@interface SCCachingMediaItemGroup

// Property: entity; attributes: T@"<SCCachingMediaEntity>",&,N,V_entity

// -[SCCachingMediaItemGroup initWithEntity:cachingMediaManager:performer:contentURL:logger:shouldEnableMemoryOptimization:shouldSkipFileIO:]
// Type encoding: @64@0:8@16@24@32@40@48B56B60
// Implementation: 0x10b68346c

// -[SCCachingMediaItemGroup imagesForTargetSize:requestOptions:cacheMissHandler:resultHandler:]
// Type encoding: @56@0:8{CGSize=dd}16@32@?40@?48
// Implementation: 0x10b68379c

// -[SCCachingMediaItemGroup evict]
// Type encoding: v16@0:8
// Implementation: 0x10b685418

// -[SCCachingMediaItemGroup trimDiskItemsByDate:shouldSkipHighestLevelSource:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b685468

// -[SCCachingMediaItemGroup setEntity:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68585c

// -[SCCachingMediaItemGroup _bestRepresentedItemForTargetSize:items:retiredItems:]
// Type encoding: @48@0:8{CGSize=dd}16@32@40
// Implementation: 0x10b685904

// -[SCCachingMediaItemGroup _bestSourceItemForTargetSize:sourceLevel:items:]
// Type encoding: @48@0:8{CGSize=dd}16q32@40
// Implementation: 0x10b685d30

// -[SCCachingMediaItemGroup _newItemForTargetSize:]
// Type encoding: @32@0:8{CGSize=dd}16
// Implementation: 0x10b686018

// -[SCCachingMediaItemGroup _toBeItemForTargetSize:]
// Type encoding: @32@0:8{CGSize=dd}16
// Implementation: 0x10b6860c4

// -[SCCachingMediaItemGroup _removeFromToBeItemsForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68615c

// -[SCCachingMediaItemGroup _identifierForTargetSize:]
// Type encoding: @32@0:8{CGSize=dd}16
// Implementation: 0x10b6861e0

// -[SCCachingMediaItemGroup entity]
// Type encoding: @16@0:8
// Implementation: 0x10b6861f8

// -[SCCachingMediaItemGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b686200

// +[SCCachingMediaItemGroup contentURLForUUID:cacheURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6833d4

// +[SCCachingMediaItemGroup diskFileURLForUUID:sourceLevel:contentURL:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10b6833dc

@end
