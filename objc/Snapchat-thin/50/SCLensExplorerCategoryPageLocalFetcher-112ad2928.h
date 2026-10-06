// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerCategoryPageLocalFetcher
// Superclass: NSObject
// Address: 0x112ad2928

@interface SCLensExplorerCategoryPageLocalFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerCategoryPageLocalFetcher initWithPageFetcher:preferences:preferencesKey:localCacheTimeOut:performer:timeProvider:]
// Type encoding: @64@0:8@16@24@32d40@48@56
// Implementation: 0x1061eaa48

// -[SCLensExplorerCategoryPageLocalFetcher fetchPageWithStreamToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061eab80

// -[SCLensExplorerCategoryPageLocalFetcher _fetchPageWithPromise:streamToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061eacf0

// -[SCLensExplorerCategoryPageLocalFetcher _storeCacheFromResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061eaec4

// -[SCLensExplorerCategoryPageLocalFetcher _loadStoredCacheEntity]
// Type encoding: @16@0:8
// Implementation: 0x1061eafb0

// -[SCLensExplorerCategoryPageLocalFetcher _removeStoredCacheEntity]
// Type encoding: v16@0:8
// Implementation: 0x1061eb044

// -[SCLensExplorerCategoryPageLocalFetcher _isCacheEntityStillValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061eb0a4

// -[SCLensExplorerCategoryPageLocalFetcher _fulfillPromise:entity:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061eb13c

// -[SCLensExplorerCategoryPageLocalFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061eb1d8

@end
