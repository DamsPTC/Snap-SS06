// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAppEventsUtility
// Superclass: NSObject
// Address: 0x1129e5cd0

@interface FBSDKAppEventsUtility

// Property: cachedAdvertiserIdentifierManager; attributes: T@"ASIdentifierManager",&,N,V_cachedAdvertiserIdentifierManager
// Property: advertiserID; attributes: T@"NSString",R,C,N
// Property: isDebugBuild; attributes: TB,R,N
// Property: shouldDropAppEvents; attributes: TB,R,N
// Property: appEventsConfigurationProvider; attributes: T@"<FBSDKAppEventsConfigurationProviding>",&,N,V_appEventsConfigurationProvider
// Property: deviceInformationProvider; attributes: T@"<FBSDKDeviceInformationProviding>",&,N,V_deviceInformationProvider
// Property: settings; attributes: T@"<FBSDKSettings>",&,N,V_settings
// Property: internalUtility; attributes: T@"<FBSDKInternalUtility>",&,N,V_internalUtility
// Property: errorFactory; attributes: T@"<FBSDKErrorCreating>",&,N,V_errorFactory
// Property: dataStore; attributes: T@"<FBSDKDataPersisting>",&,N,V_dataStore
// Property: unixTimeNow; attributes: Td,R,N

// -[FBSDKAppEventsUtility configureWithAppEventsConfigurationProvider:deviceInformationProvider:settings:internalUtility:errorFactory:dataStore:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x10494a85c

// -[FBSDKAppEventsUtility activityParametersDictionaryForEvent:shouldAccessAdvertisingID:userID:userData:]
// Type encoding: @44@0:8@16B24@28@36
// Implementation: 0x10494a94c

// -[FBSDKAppEventsUtility advertiserID]
// Type encoding: @16@0:8
// Implementation: 0x10494af24

// -[FBSDKAppEventsUtility _advertiserIDFromDynamicFrameworkResolver:shouldUseCachedManager:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10494afa8

// -[FBSDKAppEventsUtility _asIdentifierManagerWithShouldUseCachedManager:dynamicFrameworkResolver:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x10494b0c4

// -[FBSDKAppEventsUtility isStandardEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x10494b164

// -[FBSDKAppEventsUtility getStandardEvents]
// Type encoding: @16@0:8
// Implementation: 0x10494b1d4

// -[FBSDKAppEventsUtility saveCampaignIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494b378

// -[FBSDKAppEventsUtility getCampaignIDs]
// Type encoding: @16@0:8
// Implementation: 0x10494b4d0

// -[FBSDKAppEventsUtility clearLibraryFiles]
// Type encoding: v16@0:8
// Implementation: 0x10494b54c

// -[FBSDKAppEventsUtility ensureOnMainThread:className:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10494b618

// -[FBSDKAppEventsUtility flushReasonToString:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10494b6c0

// -[FBSDKAppEventsUtility logAndNotify:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494b6e4

// -[FBSDKAppEventsUtility logAndNotify:allowLogAsDeveloperError:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10494b6ec

// -[FBSDKAppEventsUtility matchString:firstCharacterSet:restOfStringCharacterSet:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10494b848

// -[FBSDKAppEventsUtility regexValidateIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x10494b91c

// -[FBSDKAppEventsUtility validateIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x10494ba98

// -[FBSDKAppEventsUtility tokenStringToUseFor:loggingOverrideAppID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10494bb54

// -[FBSDKAppEventsUtility unixTimeNow]
// Type encoding: d16@0:8
// Implementation: 0x10494be38

// -[FBSDKAppEventsUtility convertToUnixTime:]
// Type encoding: d24@0:8@16
// Implementation: 0x10494be84

// -[FBSDKAppEventsUtility isDebugBuild]
// Type encoding: B16@0:8
// Implementation: 0x10494bea0

// -[FBSDKAppEventsUtility shouldDropAppEvents]
// Type encoding: B16@0:8
// Implementation: 0x10494c06c

// -[FBSDKAppEventsUtility isSensitiveUserData:]
// Type encoding: B24@0:8@16
// Implementation: 0x10494c124

// -[FBSDKAppEventsUtility isCreditCardNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x10494c190

// -[FBSDKAppEventsUtility isEmailAddress:]
// Type encoding: B24@0:8@16
// Implementation: 0x10494c360

// -[FBSDKAppEventsUtility appEventsConfigurationProvider]
// Type encoding: @16@0:8
// Implementation: 0x10494c3f4

// -[FBSDKAppEventsUtility setAppEventsConfigurationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494c3fc

// -[FBSDKAppEventsUtility deviceInformationProvider]
// Type encoding: @16@0:8
// Implementation: 0x10494c408

// -[FBSDKAppEventsUtility setDeviceInformationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494c410

// -[FBSDKAppEventsUtility settings]
// Type encoding: @16@0:8
// Implementation: 0x10494c41c

// -[FBSDKAppEventsUtility setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494c424

// -[FBSDKAppEventsUtility internalUtility]
// Type encoding: @16@0:8
// Implementation: 0x10494c430

// -[FBSDKAppEventsUtility setInternalUtility:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494c438

// -[FBSDKAppEventsUtility errorFactory]
// Type encoding: @16@0:8
// Implementation: 0x10494c444

// -[FBSDKAppEventsUtility setErrorFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494c44c

// -[FBSDKAppEventsUtility dataStore]
// Type encoding: @16@0:8
// Implementation: 0x10494c458

// -[FBSDKAppEventsUtility setDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494c460

// -[FBSDKAppEventsUtility cachedAdvertiserIdentifierManager]
// Type encoding: @16@0:8
// Implementation: 0x10494c46c

// -[FBSDKAppEventsUtility setCachedAdvertiserIdentifierManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494c474

// -[FBSDKAppEventsUtility .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10494c480

// +[FBSDKAppEventsUtility shared]
// Type encoding: @16@0:8
// Implementation: 0x10494a7dc

// +[FBSDKAppEventsUtility setShared:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494a84c

@end
