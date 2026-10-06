// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebUtil
// Superclass: NSObject
// Address: 0x112cec150

@interface SCWebUtil


// +[SCWebUtil sharedProcessPool]
// Type encoding: @16@0:8
// Implementation: 0x10b88e360

// +[SCWebUtil sharedDataStore]
// Type encoding: @16@0:8
// Implementation: 0x10b88e3e0

// +[SCWebUtil browserCachesAndCookiesSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b88e468

// +[SCWebUtil clearBrowserCachesAndCookiesWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b88e4ec

// +[SCWebUtil clearBrowserCachesAndCookies]
// Type encoding: v16@0:8
// Implementation: 0x10b88e744

// +[SCWebUtil markClearDiskCacheOnNextColdStartupIfExceeds:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b88e754

// +[SCWebUtil createOrUpdateWebViewConfigWhichScalesToPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b88e830

// +[SCWebUtil WKWebViewWithFrame:configuration:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x10b88e930

// +[SCWebUtil WKWebViewWithFrame:configuration:enableSharedCookie:]
// Type encoding: @60@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48B56
// Implementation: 0x10b88e9b4

// +[SCWebUtil _guardFilePath]
// Type encoding: @16@0:8
// Implementation: 0x10b88eb18

// +[SCWebUtil _cachePersistentDomainsPath]
// Type encoding: @16@0:8
// Implementation: 0x10b88eb64

// +[SCWebUtil _persistentDomains]
// Type encoding: @16@0:8
// Implementation: 0x10b88ebb0

// +[SCWebUtil _calculateWebKitCacheUsage]
// Type encoding: Q16@0:8
// Implementation: 0x10b88ecd4

@end
