// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdUser
// Superclass: NSObject
// Address: 0x112a38418

@interface SCAdUser

// Property: enableAdTracking; attributes: TB,N,V_enableAdTracking
// Property: userAdId; attributes: T@"NSString",C,N,V_userAdId
// Property: persistedDataAdapter; attributes: T@"<SCAdPersistedDataAdapter>",&,V_persistedDataAdapter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdUser initWithPersistedDataAdapter:grapheneRegistry:adConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100b8eed8

// -[SCAdUser initWithPersistedDataAdapter:grapheneRegistry:adConfigProvider:cachedUserAdIdTTL:]
// Type encoding: @48@0:8@16@24@32d40
// Implementation: 0x100b8eee0

// -[SCAdUser updateAdTrackingAdId]
// Type encoding: v16@0:8
// Implementation: 0x100b8f24c

// -[SCAdUser _updateAdvertiserInfoFromDevice]
// Type encoding: v16@0:8
// Implementation: 0x100b91094

// -[SCAdUser setEncrypedUserData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105416bd0

// -[SCAdUser getEncrypedUserData]
// Type encoding: @16@0:8
// Implementation: 0x105416bd8

// -[SCAdUser getEnableAdTracking]
// Type encoding: B16@0:8
// Implementation: 0x105416be0

// -[SCAdUser getUserAdId]
// Type encoding: @16@0:8
// Implementation: 0x105416be8

// -[SCAdUser _monotonicTimeInSeconds]
// Type encoding: d16@0:8
// Implementation: 0x105416d30

// -[SCAdUser getCachedUserAdIdV2]
// Type encoding: @16@0:8
// Implementation: 0x105416d34

// -[SCAdUser getCachedUserAdId]
// Type encoding: @16@0:8
// Implementation: 0x105416e40

// -[SCAdUser prewarmCachedUserAdId]
// Type encoding: v16@0:8
// Implementation: 0x105416f74

// -[SCAdUser _logUserAdIdRetrieveWithLatency:context:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x105416ff8

// -[SCAdUser getLast429ResponseTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x1054170c4

// -[SCAdUser setLast429ResponseTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1054170cc

// -[SCAdUser getPersistedDataAdapter]
// Type encoding: @16@0:8
// Implementation: 0x1054170d4

// -[SCAdUser cleanUserAdInfo]
// Type encoding: v16@0:8
// Implementation: 0x1054170fc

// -[SCAdUser enableAdTracking]
// Type encoding: B16@0:8
// Implementation: 0x105417104

// -[SCAdUser setEnableAdTracking:]
// Type encoding: v20@0:8B16
// Implementation: 0x10541710c

// -[SCAdUser userAdId]
// Type encoding: @16@0:8
// Implementation: 0x105417114

// -[SCAdUser setUserAdId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10541711c

// -[SCAdUser persistedDataAdapter]
// Type encoding: @16@0:8
// Implementation: 0x105417124

// -[SCAdUser setPersistedDataAdapter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105417130

// -[SCAdUser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105417138

@end
