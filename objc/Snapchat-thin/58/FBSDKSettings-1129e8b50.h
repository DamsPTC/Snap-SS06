// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKSettings
// Superclass: NSObject
// Address: 0x1129e8b50

@interface FBSDKSettings

// Property: sdkVersion; attributes: T@"NSString",N,R
// Property: defaultGraphAPIVersion; attributes: T@"NSString",N,R
// Property: JPEGCompressionQuality; attributes: Td,N
// Property: autoLogAppEventsEnabled; attributes: TB,N
// Property: isAutoLogAppEventsEnabled; attributes: TB,N
// Property: isAutoLogAppEventsEnabledLocally; attributes: TB,N
// Property: codelessDebugLogEnabled; attributes: TB,N
// Property: isCodelessDebugLogEnabled; attributes: TB,N
// Property: advertiserIDCollectionEnabled; attributes: TB,N
// Property: isAdvertiserIDCollectionEnabled; attributes: TB,N
// Property: skAdNetworkReportEnabled; attributes: TB,N
// Property: isSKAdNetworkReportEnabled; attributes: TB,N
// Property: isEventDataUsageLimited; attributes: TB,N
// Property: shouldUseCachedValuesForExpensiveMetadata; attributes: TB,N
// Property: isGraphErrorRecoveryEnabled; attributes: TB,N,VisGraphErrorRecoveryEnabled
// Property: appID; attributes: T@"NSString",N,C
// Property: appURLSchemeSuffix; attributes: T@"NSString",N,C
// Property: _appURLSchemeSuffix; attributes: T@"NSString",N,C
// Property: clientToken; attributes: T@"NSString",N,C
// Property: _clientToken; attributes: T@"NSString",N,C
// Property: displayName; attributes: T@"NSString",N,C
// Property: _displayName; attributes: T@"NSString",N,C
// Property: facebookDomainPart; attributes: T@"NSString",N,C
// Property: _facebookDomainPart; attributes: T@"NSString",N,C
// Property: graphAPIVersion; attributes: T@"NSString",N,C
// Property: userAgentSuffix; attributes: T@"NSString",N,C
// Property: advertiserTrackingEnabled; attributes: TB,N
// Property: isAdvertiserTrackingEnabled; attributes: TB,N
// Property: advertisingTrackingStatus; attributes: TQ,N
// Property: isDataProcessingRestricted; attributes: TB,N,R
// Property: persistableDataProcessingOptions; attributes: T@"NSDictionary",N,C
// Property: loggingBehaviors; attributes: T@"NSSet",N,C
// Property: shouldUseTokenOptimizations; attributes: TB,N
// Property: isSetATETimeExceedsInstallTime; attributes: TB,N,R
// Property: isATETimeSufficientlyDelayed; attributes: TB,N,R
// Property: installTimestamp; attributes: T@"NSDate",N,R
// Property: advertiserTrackingEnabledTimestamp; attributes: T@"NSDate",N,R
// Property: graphAPIDebugParamValue; attributes: T@"NSString",N,R
// Property: graphAPIDebugParameterValue; attributes: T@"NSString",N,R
// Property: isDomainErrorEnabled; attributes: TB,N,VisDomainErrorEnabled

// -[FBSDKSettings validateConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x1049ea61c

// -[FBSDKSettings recordInstall]
// Type encoding: v16@0:8
// Implementation: 0x1049e2218

// -[FBSDKSettings recordSetAdvertiserTrackingEnabled]
// Type encoding: v16@0:8
// Implementation: 0x1049e2400

// -[FBSDKSettings logWarnings]
// Type encoding: v16@0:8
// Implementation: 0x1049e2720

// -[FBSDKSettings logIfSDKSettingsChanged]
// Type encoding: v16@0:8
// Implementation: 0x1049e2d28

// -[FBSDKSettings checkAutoLogAppEventsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049e1acc

// -[FBSDKSettings sdkVersion]
// Type encoding: @16@0:8
// Implementation: 0x1049e4960

// -[FBSDKSettings defaultGraphAPIVersion]
// Type encoding: @16@0:8
// Implementation: 0x1049e4998

// -[FBSDKSettings JPEGCompressionQuality]
// Type encoding: d16@0:8
// Implementation: 0x1049e49d0

// -[FBSDKSettings setJPEGCompressionQuality:]
// Type encoding: v24@0:8d16
// Implementation: 0x1049e4a10

// -[FBSDKSettings autoLogAppEventsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaf38

// -[FBSDKSettings setAutoLogAppEventsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eae78

// -[FBSDKSettings isAutoLogAppEventsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaf34

// -[FBSDKSettings setIsAutoLogAppEventsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eae74

// -[FBSDKSettings isAutoLogAppEventsEnabledLocally]
// Type encoding: B16@0:8
// Implementation: 0x1049e4eb0

// -[FBSDKSettings setIsAutoLogAppEventsEnabledLocally:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eae7c

// -[FBSDKSettings codelessDebugLogEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaef8

// -[FBSDKSettings setCodelessDebugLogEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eae84

// -[FBSDKSettings isCodelessDebugLogEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaef4

// -[FBSDKSettings setIsCodelessDebugLogEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eae80

// -[FBSDKSettings advertiserIDCollectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaf00

// -[FBSDKSettings setAdvertiserIDCollectionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eae8c

// -[FBSDKSettings isAdvertiserIDCollectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaefc

// -[FBSDKSettings setIsAdvertiserIDCollectionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eae88

// -[FBSDKSettings skAdNetworkReportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaf40

// -[FBSDKSettings setSkAdNetworkReportEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eaee8

// -[FBSDKSettings isSKAdNetworkReportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaf3c

// -[FBSDKSettings setIsSKAdNetworkReportEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eaee4

// -[FBSDKSettings isEventDataUsageLimited]
// Type encoding: B16@0:8
// Implementation: 0x1049e5c54

// -[FBSDKSettings setIsEventDataUsageLimited:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049e5c8c

// -[FBSDKSettings shouldUseCachedValuesForExpensiveMetadata]
// Type encoding: B16@0:8
// Implementation: 0x1049e60dc

// -[FBSDKSettings setShouldUseCachedValuesForExpensiveMetadata:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049e6114

// -[FBSDKSettings isGraphErrorRecoveryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049e6564

// -[FBSDKSettings setIsGraphErrorRecoveryEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049e65e8

// -[FBSDKSettings appID]
// Type encoding: @16@0:8
// Implementation: 0x1049e66c4

// -[FBSDKSettings setAppID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e66d4

// -[FBSDKSettings appURLSchemeSuffix]
// Type encoding: @16@0:8
// Implementation: 0x1049e6af8

// -[FBSDKSettings setAppURLSchemeSuffix:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e6b38

// -[FBSDKSettings _appURLSchemeSuffix]
// Type encoding: @16@0:8
// Implementation: 0x1049e6c18

// -[FBSDKSettings set_appURLSchemeSuffix:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e6c30

// -[FBSDKSettings clientToken]
// Type encoding: @16@0:8
// Implementation: 0x1049e6c88

// -[FBSDKSettings setClientToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e6cc8

// -[FBSDKSettings _clientToken]
// Type encoding: @16@0:8
// Implementation: 0x1049e6dac

// -[FBSDKSettings set_clientToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e6dc4

// -[FBSDKSettings displayName]
// Type encoding: @16@0:8
// Implementation: 0x1049e6e20

// -[FBSDKSettings setDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e6e60

// -[FBSDKSettings _displayName]
// Type encoding: @16@0:8
// Implementation: 0x1049e6f40

// -[FBSDKSettings set_displayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e6f58

// -[FBSDKSettings facebookDomainPart]
// Type encoding: @16@0:8
// Implementation: 0x1049e6fb0

// -[FBSDKSettings setFacebookDomainPart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e70e4

// -[FBSDKSettings _facebookDomainPart]
// Type encoding: @16@0:8
// Implementation: 0x1049e74d8

// -[FBSDKSettings set_facebookDomainPart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e74f0

// -[FBSDKSettings graphAPIVersion]
// Type encoding: @16@0:8
// Implementation: 0x1049e7548

// -[FBSDKSettings setGraphAPIVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e75e0

// -[FBSDKSettings userAgentSuffix]
// Type encoding: @16@0:8
// Implementation: 0x1049e768c

// -[FBSDKSettings setUserAgentSuffix:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e7768

// -[FBSDKSettings advertiserTrackingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaea8

// -[FBSDKSettings setAdvertiserTrackingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eaef0

// -[FBSDKSettings isAdvertiserTrackingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049eaea4

// -[FBSDKSettings setIsAdvertiserTrackingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049eaeec

// -[FBSDKSettings advertisingTrackingStatus]
// Type encoding: Q16@0:8
// Implementation: 0x1049e7dcc

// -[FBSDKSettings setAdvertisingTrackingStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1049e7e00

// -[FBSDKSettings isDataProcessingRestricted]
// Type encoding: B16@0:8
// Implementation: 0x1049e8158

// -[FBSDKSettings persistableDataProcessingOptions]
// Type encoding: @16@0:8
// Implementation: 0x1049e8390

// -[FBSDKSettings setPersistableDataProcessingOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e8400

// -[FBSDKSettings setDataProcessingOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e8b70

// -[FBSDKSettings setDataProcessingOptions:country:state:]
// Type encoding: v32@0:8@16i24i28
// Implementation: 0x1049e8bd4

// -[FBSDKSettings loggingBehaviors]
// Type encoding: @16@0:8
// Implementation: 0x1049e8c4c

// -[FBSDKSettings setLoggingBehaviors:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e8cb0

// -[FBSDKSettings enableLoggingBehavior:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e925c

// -[FBSDKSettings disableLoggingBehavior:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049e935c

// -[FBSDKSettings shouldUseTokenOptimizations]
// Type encoding: B16@0:8
// Implementation: 0x1049e93e8

// -[FBSDKSettings setShouldUseTokenOptimizations:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049e9420

// -[FBSDKSettings isSetATETimeExceedsInstallTime]
// Type encoding: B16@0:8
// Implementation: 0x1049eaf44

// -[FBSDKSettings isATETimeSufficientlyDelayed]
// Type encoding: B16@0:8
// Implementation: 0x1049eaf48

// -[FBSDKSettings installTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1049e9e78

// -[FBSDKSettings advertiserTrackingEnabledTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1049e9e84

// -[FBSDKSettings graphAPIDebugParamValue]
// Type encoding: @16@0:8
// Implementation: 0x1049e9f54

// -[FBSDKSettings graphAPIDebugParameterValue]
// Type encoding: @16@0:8
// Implementation: 0x1049ea084

// -[FBSDKSettings isDomainErrorEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049ea090

// -[FBSDKSettings setIsDomainErrorEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049ea114

// -[FBSDKSettings init]
// Type encoding: @16@0:8
// Implementation: 0x1049ea378

// -[FBSDKSettings .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049ea3cc

// +[FBSDKSettings unconfiguredDebugMessage]
// Type encoding: @16@0:8
// Implementation: 0x1049ea648

// +[FBSDKSettings sharedSettings]
// Type encoding: @16@0:8
// Implementation: 0x1049e4920

@end
