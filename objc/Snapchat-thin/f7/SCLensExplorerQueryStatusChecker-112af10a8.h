// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerQueryStatusChecker
// Superclass: NSObject
// Address: 0x112af10a8

@interface SCLensExplorerQueryStatusChecker

// Property: lastQuery; attributes: T@"SCLensExplorerQuery",&,V_lastQuery
// Property: lastPassedQueryCheckTime; attributes: T@"NSDate",&,V_lastPassedQueryCheckTime
// Property: currentQuery; attributes: T@"SCLensExplorerQuery",R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerQueryStatusChecker initWithQueryDeduplicationGap:]
// Type encoding: @24@0:8d16
// Implementation: 0x1066f5560

// -[SCLensExplorerQueryStatusChecker canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066f5614

// -[SCLensExplorerQueryStatusChecker finishMonitoringQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f5808

// -[SCLensExplorerQueryStatusChecker activateCacheForQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f5964

// -[SCLensExplorerQueryStatusChecker cancelInProgressQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f59d4

// -[SCLensExplorerQueryStatusChecker cancelAllInProgressQueries]
// Type encoding: v16@0:8
// Implementation: 0x1066f5b0c

// -[SCLensExplorerQueryStatusChecker _isDuplicatedQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066f5b60

// -[SCLensExplorerQueryStatusChecker _hasInProgressQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066f5bf8

// -[SCLensExplorerQueryStatusChecker currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066f5e50

// -[SCLensExplorerQueryStatusChecker lastQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066f5e94

// -[SCLensExplorerQueryStatusChecker setLastQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f5ea0

// -[SCLensExplorerQueryStatusChecker lastPassedQueryCheckTime]
// Type encoding: @16@0:8
// Implementation: 0x1066f5ea8

// -[SCLensExplorerQueryStatusChecker setLastPassedQueryCheckTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066f5eb4

// -[SCLensExplorerQueryStatusChecker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066f5ebc

@end
