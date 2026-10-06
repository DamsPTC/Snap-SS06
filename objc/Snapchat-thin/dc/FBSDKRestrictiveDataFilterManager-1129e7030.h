// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKRestrictiveDataFilterManager
// Superclass: NSObject
// Address: 0x1129e7030

@interface FBSDKRestrictiveDataFilterManager

// Property: isRestrictiveEventFilterEnabled; attributes: TB,N,V_isRestrictiveEventFilterEnabled
// Property: params; attributes: T@"NSMutableArray",&,N,V_params
// Property: restrictedEvents; attributes: T@"NSMutableSet",&,N,V_restrictedEvents
// Property: serverConfigurationProvider; attributes: T@"<FBSDKServerConfigurationProviding>",&,N,V_serverConfigurationProvider

// -[FBSDKRestrictiveDataFilterManager initWithServerConfigurationProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10497c658

// -[FBSDKRestrictiveDataFilterManager enable]
// Type encoding: v16@0:8
// Implementation: 0x10497c67c

// -[FBSDKRestrictiveDataFilterManager processParameters:eventName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10497c758

// -[FBSDKRestrictiveDataFilterManager processEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497ca00

// -[FBSDKRestrictiveDataFilterManager isRestrictedEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x10497cbe4

// -[FBSDKRestrictiveDataFilterManager getMatchedDataTypeWithEventName:paramKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10497cc7c

// -[FBSDKRestrictiveDataFilterManager updateFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497ce3c

// -[FBSDKRestrictiveDataFilterManager isRestrictiveEventFilterEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10497d154

// -[FBSDKRestrictiveDataFilterManager setIsRestrictiveEventFilterEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10497d15c

// -[FBSDKRestrictiveDataFilterManager params]
// Type encoding: @16@0:8
// Implementation: 0x10497d164

// -[FBSDKRestrictiveDataFilterManager setParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497d16c

// -[FBSDKRestrictiveDataFilterManager restrictedEvents]
// Type encoding: @16@0:8
// Implementation: 0x10497d178

// -[FBSDKRestrictiveDataFilterManager setRestrictedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497d180

// -[FBSDKRestrictiveDataFilterManager serverConfigurationProvider]
// Type encoding: @16@0:8
// Implementation: 0x10497d18c

// -[FBSDKRestrictiveDataFilterManager setServerConfigurationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10497d194

// -[FBSDKRestrictiveDataFilterManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10497d1a0

@end
