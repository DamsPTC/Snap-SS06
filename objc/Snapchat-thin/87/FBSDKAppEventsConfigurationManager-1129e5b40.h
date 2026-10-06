// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAppEventsConfigurationManager
// Superclass: NSObject
// Address: 0x1129e5b40

@interface FBSDKAppEventsConfigurationManager

// Property: store; attributes: T@"<FBSDKDataPersisting>",&,N,V_store
// Property: settings; attributes: T@"<FBSDKSettings>",&,N,V_settings
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: graphRequestConnectionFactory; attributes: T@"<FBSDKGraphRequestConnectionFactory>",&,N,V_graphRequestConnectionFactory
// Property: configuration; attributes: T@"<FBSDKAppEventsConfiguration>",&,N,V_configuration
// Property: isLoadingConfiguration; attributes: TB,N,V_isLoadingConfiguration
// Property: hasRequeryFinishedForAppStart; attributes: TB,N,V_hasRequeryFinishedForAppStart
// Property: timestamp; attributes: T@"NSDate",&,N,V_timestamp
// Property: completionBlocks; attributes: T@"NSMutableArray",&,N,V_completionBlocks
// Property: cachedAppEventsConfiguration; attributes: T@"<FBSDKAppEventsConfiguration>",R,N

// -[FBSDKAppEventsConfigurationManager configureWithStore:settings:graphRequestFactory:graphRequestConnectionFactory:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104947ad8

// -[FBSDKAppEventsConfigurationManager cachedAppEventsConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104947ccc

// -[FBSDKAppEventsConfigurationManager loadAppEventsConfigurationWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104947cd0

// -[FBSDKAppEventsConfigurationManager _processResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104948084

// -[FBSDKAppEventsConfigurationManager _isTimestampValid]
// Type encoding: B16@0:8
// Implementation: 0x10494840c

// -[FBSDKAppEventsConfigurationManager store]
// Type encoding: @16@0:8
// Implementation: 0x1049484b0

// -[FBSDKAppEventsConfigurationManager setStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049484b8

// -[FBSDKAppEventsConfigurationManager settings]
// Type encoding: @16@0:8
// Implementation: 0x1049484c4

// -[FBSDKAppEventsConfigurationManager setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049484cc

// -[FBSDKAppEventsConfigurationManager graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x1049484d8

// -[FBSDKAppEventsConfigurationManager setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049484e0

// -[FBSDKAppEventsConfigurationManager graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x1049484ec

// -[FBSDKAppEventsConfigurationManager setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049484f4

// -[FBSDKAppEventsConfigurationManager configuration]
// Type encoding: @16@0:8
// Implementation: 0x104948500

// -[FBSDKAppEventsConfigurationManager setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104948508

// -[FBSDKAppEventsConfigurationManager isLoadingConfiguration]
// Type encoding: B16@0:8
// Implementation: 0x104948514

// -[FBSDKAppEventsConfigurationManager setIsLoadingConfiguration:]
// Type encoding: v20@0:8B16
// Implementation: 0x10494851c

// -[FBSDKAppEventsConfigurationManager hasRequeryFinishedForAppStart]
// Type encoding: B16@0:8
// Implementation: 0x104948524

// -[FBSDKAppEventsConfigurationManager setHasRequeryFinishedForAppStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x10494852c

// -[FBSDKAppEventsConfigurationManager timestamp]
// Type encoding: @16@0:8
// Implementation: 0x104948534

// -[FBSDKAppEventsConfigurationManager setTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494853c

// -[FBSDKAppEventsConfigurationManager completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x104948548

// -[FBSDKAppEventsConfigurationManager setCompletionBlocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x104948550

// -[FBSDKAppEventsConfigurationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10494855c

// +[FBSDKAppEventsConfigurationManager shared]
// Type encoding: @16@0:8
// Implementation: 0x104947a68

@end
