// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKServerConfigurationManager
// Superclass: NSObject
// Address: 0x1129e7328

@interface FBSDKServerConfigurationManager

// Property: completionBlocks; attributes: T@"NSMutableArray",&,N,V_completionBlocks
// Property: loadingServerConfiguration; attributes: TB,N,V_loadingServerConfiguration
// Property: serverConfiguration; attributes: T@"FBSDKServerConfiguration",&,N,V_serverConfiguration
// Property: serverConfigurationError; attributes: T@"NSError",&,N,V_serverConfigurationError
// Property: serverConfigurationErrorTimestamp; attributes: T@"NSDate",&,N,V_serverConfigurationErrorTimestamp
// Property: requeryFinishedForAppStart; attributes: TB,N,V_requeryFinishedForAppStart
// Property: graphRequestFactory; attributes: T@"<FBSDKGraphRequestFactory>",&,N,V_graphRequestFactory
// Property: graphRequestConnectionFactory; attributes: T@"<FBSDKGraphRequestConnectionFactory>",&,N,V_graphRequestConnectionFactory
// Property: dialogConfigurationMapBuilder; attributes: T@"<FBSDKDialogConfigurationMapBuilding>",&,N,V_dialogConfigurationMapBuilder

// -[FBSDKServerConfigurationManager init]
// Type encoding: @16@0:8
// Implementation: 0x10498555c

// -[FBSDKServerConfigurationManager configureWithGraphRequestFactory:graphRequestConnectionFactory:dialogConfigurationMapBuilder:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10498561c

// -[FBSDKServerConfigurationManager clearCache]
// Type encoding: v16@0:8
// Implementation: 0x104985690

// -[FBSDKServerConfigurationManager cachedServerConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104985774

// -[FBSDKServerConfigurationManager loadServerConfigurationWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10498585c

// -[FBSDKServerConfigurationManager processLoadRequestResponse:error:appID:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104985e14

// -[FBSDKServerConfigurationManager requestToLoadServerConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x104986770

// -[FBSDKServerConfigurationManager _didProcessConfigurationFromNetwork:appID:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104986a18

// -[FBSDKServerConfigurationManager _parseDialogConfigurations:]
// Type encoding: @24@0:8@16
// Implementation: 0x104986e18

// -[FBSDKServerConfigurationManager _serverConfigurationTimestampIsValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104986edc

// -[FBSDKServerConfigurationManager _wrapperBlockForLoadBlock:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x104986f54

// -[FBSDKServerConfigurationManager graphRequestFactory]
// Type encoding: @16@0:8
// Implementation: 0x104987078

// -[FBSDKServerConfigurationManager setGraphRequestFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104987080

// -[FBSDKServerConfigurationManager graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x10498708c

// -[FBSDKServerConfigurationManager setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104987094

// -[FBSDKServerConfigurationManager dialogConfigurationMapBuilder]
// Type encoding: @16@0:8
// Implementation: 0x1049870a0

// -[FBSDKServerConfigurationManager setDialogConfigurationMapBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049870a8

// -[FBSDKServerConfigurationManager completionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x1049870b4

// -[FBSDKServerConfigurationManager setCompletionBlocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049870bc

// -[FBSDKServerConfigurationManager loadingServerConfiguration]
// Type encoding: B16@0:8
// Implementation: 0x1049870c8

// -[FBSDKServerConfigurationManager setLoadingServerConfiguration:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049870d0

// -[FBSDKServerConfigurationManager serverConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1049870d8

// -[FBSDKServerConfigurationManager setServerConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049870e0

// -[FBSDKServerConfigurationManager serverConfigurationError]
// Type encoding: @16@0:8
// Implementation: 0x1049870ec

// -[FBSDKServerConfigurationManager setServerConfigurationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049870f4

// -[FBSDKServerConfigurationManager serverConfigurationErrorTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104987100

// -[FBSDKServerConfigurationManager setServerConfigurationErrorTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104987108

// -[FBSDKServerConfigurationManager requeryFinishedForAppStart]
// Type encoding: B16@0:8
// Implementation: 0x104987114

// -[FBSDKServerConfigurationManager setRequeryFinishedForAppStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x10498711c

// -[FBSDKServerConfigurationManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104987124

// +[FBSDKServerConfigurationManager shared]
// Type encoding: @16@0:8
// Implementation: 0x1049855c0

@end
