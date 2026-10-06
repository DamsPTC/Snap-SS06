// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardClientIdProviderImpl
// Superclass: NSObject
// Address: 0x112b11038

@interface SCBlizzardClientIdProviderImpl

// Property: cachedClientId; attributes: T@"NSString",C,V_cachedClientId
// Property: cachedClientIdTimestamp; attributes: T@"NSDate",C,V_cachedClientIdTimestamp
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",R,N,V_experimentProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBlizzardClientIdProviderImpl pstCalendar]
// Type encoding: @16@0:8
// Implementation: 0x1003e9b4c

// -[SCBlizzardClientIdProviderImpl initWithExperimentProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003e959c

// -[SCBlizzardClientIdProviderImpl getClientId]
// Type encoding: @16@0:8
// Implementation: 0x1003e9640

// -[SCBlizzardClientIdProviderImpl renewClientId]
// Type encoding: @16@0:8
// Implementation: 0x106ad14d8

// -[SCBlizzardClientIdProviderImpl _isClientIdWithinOneMonth:clientIdDate:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1003e9a50

// -[SCBlizzardClientIdProviderImpl _addClientIdToKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad155c

// -[SCBlizzardClientIdProviderImpl _retrieveClientIdFromKeychain]
// Type encoding: @16@0:8
// Implementation: 0x106ad1570

// -[SCBlizzardClientIdProviderImpl _updateBothMemCacheAndUserDefaults:date:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ad1584

// -[SCBlizzardClientIdProviderImpl _cacheInMemory:date:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1003e9bac

// -[SCBlizzardClientIdProviderImpl _saveClientIdToUserDefaults:date:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ad15ec

// -[SCBlizzardClientIdProviderImpl _saveClientIdToKeychain:date:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ad16e8

// -[SCBlizzardClientIdProviderImpl _renewClientIdAndUpdateSources:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ad17f8

// -[SCBlizzardClientIdProviderImpl _getMonthlyClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003e96c4

// -[SCBlizzardClientIdProviderImpl _loadClientIdFromUserDefaultsOrKeychain:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003e9754

// -[SCBlizzardClientIdProviderImpl experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ad1874

// -[SCBlizzardClientIdProviderImpl cachedClientId]
// Type encoding: @16@0:8
// Implementation: 0x106ad187c

// -[SCBlizzardClientIdProviderImpl setCachedClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad1888

// -[SCBlizzardClientIdProviderImpl cachedClientIdTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x106ad1890

// -[SCBlizzardClientIdProviderImpl setCachedClientIdTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad189c

// -[SCBlizzardClientIdProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad18a4

@end
