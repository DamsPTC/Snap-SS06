// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPItemsLoaderClient
// Superclass: NSObject
// Address: 0x112a46338

@interface CTPItemsLoaderClient

// Property: loaderType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPItemsLoaderClient initWithLoaders:]
// Type encoding: @24@0:8@16
// Implementation: 0x10557591c

// -[CTPItemsLoaderClient _registerLoaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x105575988

// -[CTPItemsLoaderClient _loaderForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x105575b5c

// -[CTPItemsLoaderClient loaderType]
// Type encoding: Q16@0:8
// Implementation: 0x105575be4

// -[CTPItemsLoaderClient itemsForFeed:returnCachedFirst:useChecksum:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x105575bec

// -[CTPItemsLoaderClient continuouslyUpdatingItemsForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x105575e50

// -[CTPItemsLoaderClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105575e5c

@end
