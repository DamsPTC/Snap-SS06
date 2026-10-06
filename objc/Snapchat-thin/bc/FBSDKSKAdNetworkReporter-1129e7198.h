// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKSKAdNetworkReporter
// Superclass: NSObject
// Address: 0x1129e7198

@interface FBSDKSKAdNetworkReporter

// Property: isSKAdNetworkReportEnabled; attributes: TB,N,V_isSKAdNetworkReportEnabled
// Property: completionBlocks; attributes: T@"NSMutableArray",&,N,V_completionBlocks
// Property: isRequestStarted; attributes: TB,N,V_isRequestStarted
// Property: serialQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_serialQueue
// Property: configuration; attributes: T@"FBSDKSKAdNetworkConversionConfiguration",&,N,V_configuration
// Property: configRefreshTimestamp; attributes: T@"NSDate",&,N,V_configRefreshTimestamp
// Property: conversionValue; attributes: Tq,N,V_conversionValue
// Property: timestamp; attributes: T@"NSDate",&,N,V_timestamp
// Property: recordedEvents; attributes: T@"NSMutableSet",&,N,V_recordedEvents
// Property: recordedValues; attributes: T@"NSMutableDictionary",&,N,V_recordedValues
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: dataStore; attributes: T@"<FBSDKDataPersisting>",&,N,V_dataStore
// Property: conversionValueUpdater; attributes: T#,&,N,V_conversionValueUpdater

// -[FBSDKSKAdNetworkReporter initWithGraphRequestFactory:dataStore:conversionValueUpdater:]
// Type encoding: @40@0:8@16@24#32
// Implementation: 0x10497f578

// -[FBSDKSKAdNetworkReporter enable]
// Type encoding: v16@0:8
// Implementation: 0x10497f62c

// -[FBSDKSKAdNetworkReporter checkAndRevokeTimer]
// Type encoding: v16@0:8
// Implementation: 0x10497f7a4

// -[FBSDKSKAdNetworkReporter recordAndUpdateEvent:currency:value:parameters:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10497f830

// -[FBSDKSKAdNetworkReporter recordAndUpdateEvent:currency:value:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10497f834

// -[FBSDKSKAdNetworkReporter _loadConfigurationWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10497f95c

// -[FBSDKSKAdNetworkReporter _checkAndRevokeTimer]
// Type encoding: v16@0:8
// Implementation: 0x104980184

// -[FBSDKSKAdNetworkReporter _recordAndUpdateEvent:currency:value:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1049802d4

// -[FBSDKSKAdNetworkReporter _checkAndUpdateConversionValue]
// Type encoding: v16@0:8
// Implementation: 0x104980684

// -[FBSDKSKAdNetworkReporter _updateConversionValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x104980824

// -[FBSDKSKAdNetworkReporter shouldCutoff]
// Type encoding: B16@0:8
// Implementation: 0x1049808f4

// -[FBSDKSKAdNetworkReporter isReportingEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x104980a10

// -[FBSDKSKAdNetworkReporter _loadReportData]
// Type encoding: v16@0:8
// Implementation: 0x104980abc

// -[FBSDKSKAdNetworkReporter _saveReportData]
// Type encoding: v16@0:8
// Implementation: 0x104980ebc

// -[FBSDKSKAdNetworkReporter dispatchOnQueue:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104981050

// -[FBSDKSKAdNetworkReporter _isConfigRefreshTimestampValid]
// Type encoding: B16@0:8
// Implementation: 0x1049810c8

// -[FBSDKSKAdNetworkReporter graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x10498116c

// -[FBSDKSKAdNetworkReporter setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104981174

// -[FBSDKSKAdNetworkReporter dataStore]
// Type encoding: @16@0:8
// Implementation: 0x104981180

// -[FBSDKSKAdNetworkReporter setDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104981188

// -[FBSDKSKAdNetworkReporter conversionValueUpdater]
// Type encoding: #16@0:8
// Implementation: 0x104981194

// -[FBSDKSKAdNetworkReporter setConversionValueUpdater:]
// Type encoding: v24@0:8#16
// Implementation: 0x10498119c

// -[FBSDKSKAdNetworkReporter isSKAdNetworkReportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1049811a8

// -[FBSDKSKAdNetworkReporter setIsSKAdNetworkReportEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049811b0

// -[FBSDKSKAdNetworkReporter completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x1049811b8

// -[FBSDKSKAdNetworkReporter setCompletionBlocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049811c0

// -[FBSDKSKAdNetworkReporter isRequestStarted]
// Type encoding: B16@0:8
// Implementation: 0x1049811cc

// -[FBSDKSKAdNetworkReporter setIsRequestStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049811d4

// -[FBSDKSKAdNetworkReporter serialQueue]
// Type encoding: @16@0:8
// Implementation: 0x1049811dc

// -[FBSDKSKAdNetworkReporter setSerialQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049811e4

// -[FBSDKSKAdNetworkReporter configuration]
// Type encoding: @16@0:8
// Implementation: 0x1049811f0

// -[FBSDKSKAdNetworkReporter setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049811f8

// -[FBSDKSKAdNetworkReporter configRefreshTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104981204

// -[FBSDKSKAdNetworkReporter setConfigRefreshTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498120c

// -[FBSDKSKAdNetworkReporter conversionValue]
// Type encoding: q16@0:8
// Implementation: 0x104981218

// -[FBSDKSKAdNetworkReporter setConversionValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x104981220

// -[FBSDKSKAdNetworkReporter timestamp]
// Type encoding: @16@0:8
// Implementation: 0x104981228

// -[FBSDKSKAdNetworkReporter setTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104981230

// -[FBSDKSKAdNetworkReporter recordedEvents]
// Type encoding: @16@0:8
// Implementation: 0x10498123c

// -[FBSDKSKAdNetworkReporter setRecordedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x104981244

// -[FBSDKSKAdNetworkReporter recordedValues]
// Type encoding: @16@0:8
// Implementation: 0x104981250

// -[FBSDKSKAdNetworkReporter setRecordedValues:]
// Type encoding: v24@0:8@16
// Implementation: 0x104981258

// -[FBSDKSKAdNetworkReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104981264

@end
