// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKSKAdNetworkReporterV2
// Superclass: NSObject
// Address: 0x1129e71e8

@interface FBSDKSKAdNetworkReporterV2

// Property: isSKAdNetworkReportEnabled; attributes: TB,N,V_isSKAdNetworkReportEnabled
// Property: completionBlocks; attributes: T@"NSMutableArray",&,N,V_completionBlocks
// Property: isRequestStarted; attributes: TB,N,V_isRequestStarted
// Property: serialQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_serialQueue
// Property: configuration; attributes: T@"FBSDKSKAdNetworkConversionConfiguration",&,N,V_configuration
// Property: configRefreshTimestamp; attributes: T@"NSDate",&,N,V_configRefreshTimestamp
// Property: conversionValue; attributes: Tq,N,V_conversionValue
// Property: lastUpdatedConversionValue; attributes: Tq,N,V_lastUpdatedConversionValue
// Property: coarseConversionValue; attributes: T@"NSString",&,N,V_coarseConversionValue
// Property: timestamp; attributes: T@"NSDate",&,N,V_timestamp
// Property: coarseCVUpdateTimestamp; attributes: T@"NSDate",&,N,V_coarseCVUpdateTimestamp
// Property: recordedEvents; attributes: T@"NSMutableSet",&,N,V_recordedEvents
// Property: recordedValues; attributes: T@"NSMutableDictionary",&,N,V_recordedValues
// Property: recordedCoarseEvents; attributes: T@"NSMutableSet",&,N,V_recordedCoarseEvents
// Property: recordedCoarseValues; attributes: T@"NSMutableDictionary",&,N,V_recordedCoarseValues
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: dataStore; attributes: T@"<FBSDKDataPersisting>",&,N,V_dataStore
// Property: conversionValueUpdater; attributes: T#,&,N,V_conversionValueUpdater

// -[FBSDKSKAdNetworkReporterV2 initWithGraphRequestFactory:dataStore:conversionValueUpdater:]
// Type encoding: @40@0:8@16@24#32
// Implementation: 0x1049812f4

// -[FBSDKSKAdNetworkReporterV2 enable]
// Type encoding: v16@0:8
// Implementation: 0x1049813a8

// -[FBSDKSKAdNetworkReporterV2 checkAndRevokeTimer]
// Type encoding: v16@0:8
// Implementation: 0x104981520

// -[FBSDKSKAdNetworkReporterV2 recordAndUpdateEvent:currency:value:parameters:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104981524

// -[FBSDKSKAdNetworkReporterV2 recordAndUpdateEvent:currency:value:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104981528

// -[FBSDKSKAdNetworkReporterV2 _loadConfigurationWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104981650

// -[FBSDKSKAdNetworkReporterV2 _recordAndUpdateEvent:currency:value:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104981e78

// -[FBSDKSKAdNetworkReporterV2 _checkAndUpdateConversionValue]
// Type encoding: v16@0:8
// Implementation: 0x1049825c4

// -[FBSDKSKAdNetworkReporterV2 _checkAndUpdateCoarseConversionValue]
// Type encoding: v16@0:8
// Implementation: 0x104982764

// -[FBSDKSKAdNetworkReporterV2 _updateConversionValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x1049829c0

// -[FBSDKSKAdNetworkReporterV2 _updateCoarseConversionValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104982a9c

// -[FBSDKSKAdNetworkReporterV2 shouldCutoff]
// Type encoding: B16@0:8
// Implementation: 0x104982bc8

// -[FBSDKSKAdNetworkReporterV2 isReportingEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x104982ce4

// -[FBSDKSKAdNetworkReporterV2 _loadReportData]
// Type encoding: v16@0:8
// Implementation: 0x104982d90

// -[FBSDKSKAdNetworkReporterV2 _saveReportData]
// Type encoding: v16@0:8
// Implementation: 0x1049833b4

// -[FBSDKSKAdNetworkReporterV2 dispatchOnQueue:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104983670

// -[FBSDKSKAdNetworkReporterV2 _isConfigRefreshTimestampValid]
// Type encoding: B16@0:8
// Implementation: 0x1049836e8

// -[FBSDKSKAdNetworkReporterV2 _getCurrentPostbackSequenceIndex]
// Type encoding: q16@0:8
// Implementation: 0x10498378c

// -[FBSDKSKAdNetworkReporterV2 graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x104983874

// -[FBSDKSKAdNetworkReporterV2 setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498387c

// -[FBSDKSKAdNetworkReporterV2 dataStore]
// Type encoding: @16@0:8
// Implementation: 0x104983888

// -[FBSDKSKAdNetworkReporterV2 setDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104983890

// -[FBSDKSKAdNetworkReporterV2 conversionValueUpdater]
// Type encoding: #16@0:8
// Implementation: 0x10498389c

// -[FBSDKSKAdNetworkReporterV2 setConversionValueUpdater:]
// Type encoding: v24@0:8#16
// Implementation: 0x1049838a4

// -[FBSDKSKAdNetworkReporterV2 isSKAdNetworkReportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049838b0

// -[FBSDKSKAdNetworkReporterV2 setIsSKAdNetworkReportEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049838b8

// -[FBSDKSKAdNetworkReporterV2 completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x1049838c0

// -[FBSDKSKAdNetworkReporterV2 setCompletionBlocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049838c8

// -[FBSDKSKAdNetworkReporterV2 isRequestStarted]
// Type encoding: B16@0:8
// Implementation: 0x1049838d4

// -[FBSDKSKAdNetworkReporterV2 setIsRequestStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049838dc

// -[FBSDKSKAdNetworkReporterV2 serialQueue]
// Type encoding: @16@0:8
// Implementation: 0x1049838e4

// -[FBSDKSKAdNetworkReporterV2 setSerialQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049838ec

// -[FBSDKSKAdNetworkReporterV2 configuration]
// Type encoding: @16@0:8
// Implementation: 0x1049838f8

// -[FBSDKSKAdNetworkReporterV2 setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104983900

// -[FBSDKSKAdNetworkReporterV2 configRefreshTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10498390c

// -[FBSDKSKAdNetworkReporterV2 setConfigRefreshTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104983914

// -[FBSDKSKAdNetworkReporterV2 conversionValue]
// Type encoding: q16@0:8
// Implementation: 0x104983920

// -[FBSDKSKAdNetworkReporterV2 setConversionValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x104983928

// -[FBSDKSKAdNetworkReporterV2 lastUpdatedConversionValue]
// Type encoding: q16@0:8
// Implementation: 0x104983930

// -[FBSDKSKAdNetworkReporterV2 setLastUpdatedConversionValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x104983938

// -[FBSDKSKAdNetworkReporterV2 coarseConversionValue]
// Type encoding: @16@0:8
// Implementation: 0x104983940

// -[FBSDKSKAdNetworkReporterV2 setCoarseConversionValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104983948

// -[FBSDKSKAdNetworkReporterV2 timestamp]
// Type encoding: @16@0:8
// Implementation: 0x104983954

// -[FBSDKSKAdNetworkReporterV2 setTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498395c

// -[FBSDKSKAdNetworkReporterV2 coarseCVUpdateTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104983968

// -[FBSDKSKAdNetworkReporterV2 setCoarseCVUpdateTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104983970

// -[FBSDKSKAdNetworkReporterV2 recordedEvents]
// Type encoding: @16@0:8
// Implementation: 0x10498397c

// -[FBSDKSKAdNetworkReporterV2 setRecordedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x104983984

// -[FBSDKSKAdNetworkReporterV2 recordedValues]
// Type encoding: @16@0:8
// Implementation: 0x104983990

// -[FBSDKSKAdNetworkReporterV2 setRecordedValues:]
// Type encoding: v24@0:8@16
// Implementation: 0x104983998

// -[FBSDKSKAdNetworkReporterV2 recordedCoarseEvents]
// Type encoding: @16@0:8
// Implementation: 0x1049839a4

// -[FBSDKSKAdNetworkReporterV2 setRecordedCoarseEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049839ac

// -[FBSDKSKAdNetworkReporterV2 recordedCoarseValues]
// Type encoding: @16@0:8
// Implementation: 0x1049839b8

// -[FBSDKSKAdNetworkReporterV2 setRecordedCoarseValues:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049839c0

// -[FBSDKSKAdNetworkReporterV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049839cc

@end
