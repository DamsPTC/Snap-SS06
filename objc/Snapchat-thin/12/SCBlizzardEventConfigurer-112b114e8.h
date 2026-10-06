// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEventConfigurer
// Superclass: NSObject
// Address: 0x112b114e8

@interface SCBlizzardEventConfigurer

// Property: appOpenTs; attributes: T@"NSDate",&,N,V_appOpenTs
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",R,N,V_experimentProvider
// Property: sessionIdProvider; attributes: T@"SCBlizzardSessionIdProvider",R,N,V_sessionIdProvider
// Property: configVersion; attributes: T@"NSString",R,N,V_configVersion
// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",R,N,V_graphene
// Property: timeProvider; attributes: T@"<SCTimeProviding>",R,N,V_timeProvider
// Property: eventFieldProvider; attributes: T@"SCBlizzardEventFieldProvider",R,N,V_eventFieldProvider
// Property: samplingRateResolver; attributes: T@"SCBlizzardSamplingRateResolver",R,N,V_samplingRateResolver
// Property: appInsightsMetadataStorage; attributes: T@"SCLazy",R,N,V_appInsightsMetadataStorage

// -[SCBlizzardEventConfigurer initWithSessionIdProvider:configVersion:timeProvider:experimentProvider:graphene:eventFieldProvider:samplingRateResolver:appInsightsMetadataStorage:geoSignalProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1002d1de0

// -[SCBlizzardEventConfigurer eventWithCommonParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003673ac

// -[SCBlizzardEventConfigurer eventWithCommonParametersFromBlizzardEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10036817c

// -[SCBlizzardEventConfigurer accountAgeDays]
// Type encoding: Q16@0:8
// Implementation: 0x1004d2bc4

// -[SCBlizzardEventConfigurer appBuild]
// Type encoding: @16@0:8
// Implementation: 0x1004d2a2c

// -[SCBlizzardEventConfigurer appStartupType]
// Type encoding: i16@0:8
// Implementation: 0x100553bb4

// -[SCBlizzardEventConfigurer appVersion]
// Type encoding: @16@0:8
// Implementation: 0x1004d2a70

// -[SCBlizzardEventConfigurer clientId]
// Type encoding: @16@0:8
// Implementation: 0x1004d2af8

// -[SCBlizzardEventConfigurer deviceModel]
// Type encoding: @16@0:8
// Implementation: 0x1004d2b80

// -[SCBlizzardEventConfigurer osVersion]
// Type encoding: @16@0:8
// Implementation: 0x1004d2ab4

// -[SCBlizzardEventConfigurer osMinorVersion]
// Type encoding: @16@0:8
// Implementation: 0x106ad3154

// -[SCBlizzardEventConfigurer sessionId]
// Type encoding: @16@0:8
// Implementation: 0x1004d29e8

// -[SCBlizzardEventConfigurer userGuid]
// Type encoding: @16@0:8
// Implementation: 0x1003e9c18

// -[SCBlizzardEventConfigurer userLocale]
// Type encoding: @16@0:8
// Implementation: 0x1004d2b3c

// -[SCBlizzardEventConfigurer configureAppOpenInformationForBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003e9c44

// -[SCBlizzardEventConfigurer configureEventConfigVersionForBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003e9e98

// -[SCBlizzardEventConfigurer configureSamplingRatesForBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003e9f44

// -[SCBlizzardEventConfigurer removeBaseFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ad3198

// -[SCBlizzardEventConfigurer appOpenTs]
// Type encoding: @16@0:8
// Implementation: 0x1008eeb48

// -[SCBlizzardEventConfigurer setAppOpenTs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad345c

// -[SCBlizzardEventConfigurer experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ad348c

// -[SCBlizzardEventConfigurer sessionIdProvider]
// Type encoding: @16@0:8
// Implementation: 0x1003e8c50

// -[SCBlizzardEventConfigurer configVersion]
// Type encoding: @16@0:8
// Implementation: 0x106ad3494

// -[SCBlizzardEventConfigurer graphene]
// Type encoding: @16@0:8
// Implementation: 0x1003e8f14

// -[SCBlizzardEventConfigurer timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1007b25ec

// -[SCBlizzardEventConfigurer eventFieldProvider]
// Type encoding: @16@0:8
// Implementation: 0x100368d04

// -[SCBlizzardEventConfigurer samplingRateResolver]
// Type encoding: @16@0:8
// Implementation: 0x1003ea0d0

// -[SCBlizzardEventConfigurer appInsightsMetadataStorage]
// Type encoding: @16@0:8
// Implementation: 0x100367618

// -[SCBlizzardEventConfigurer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad349c

// +[SCBlizzardEventConfigurer setBitmojiFetchServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad308c

// +[SCBlizzardEventConfigurer setUserInfoServices:userGuid:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100286cd0

// +[SCBlizzardEventConfigurer setUserVerificationScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad30d8

// +[SCBlizzardEventConfigurer setStartupInfoService:]
// Type encoding: v24@0:8@16
// Implementation: 0x100281a70

// +[SCBlizzardEventConfigurer setStoriesExperimentServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x100967e68

// +[SCBlizzardEventConfigurer setTalkServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad3108

// +[SCBlizzardEventConfigurer getBitmojiFetchServicesLock]
// Type encoding: ^{sc_lock={os_unfair_lock_s=I}}16@0:8
// Implementation: 0x10036d2d8

// +[SCBlizzardEventConfigurer getTalkServicesLock]
// Type encoding: ^{sc_lock={os_unfair_lock_s=I}}16@0:8
// Implementation: 0x10036d3cc

// +[SCBlizzardEventConfigurer _hasBitmoji]
// Type encoding: B16@0:8
// Implementation: 0x10036d240

// +[SCBlizzardEventConfigurer _isInCall]
// Type encoding: B16@0:8
// Implementation: 0x10036d324

@end
