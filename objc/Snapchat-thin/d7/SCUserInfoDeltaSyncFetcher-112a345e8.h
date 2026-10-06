// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserInfoDeltaSyncFetcher
// Superclass: NSObject
// Address: 0x112a345e8

@interface SCUserInfoDeltaSyncFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserInfoDeltaSyncFetcher initWithUserId:userSessionContext:unskippableKinds:allKinds:updatesFrequency:deltaSyncService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10076f964

// -[SCUserInfoDeltaSyncFetcher beginFetching]
// Type encoding: v16@0:8
// Implementation: 0x10076fab8

// -[SCUserInfoDeltaSyncFetcher endFetching]
// Type encoding: v16@0:8
// Implementation: 0x1053f1c64

// -[SCUserInfoDeltaSyncFetcher forceSyncUserInfo]
// Type encoding: @16@0:8
// Implementation: 0x1053f1c6c

// -[SCUserInfoDeltaSyncFetcher _fetchDeltaSyncIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10076fbac

// -[SCUserInfoDeltaSyncFetcher _fetchUserInfoForKinds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10076fc14

// -[SCUserInfoDeltaSyncFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053f1c74

@end
