// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkActivityAttributionIdentifier
// Superclass: NSObject
// Address: 0x112c2bbf8

@interface SCNetworkActivityAttributionIdentifier

// Property: networkActivitySourceType; attributes: Tq,N,V_networkActivitySourceType
// Property: requestTypeStr; attributes: T@"NSString",C,N,V_requestTypeStr
// Property: isUIAssetRequest; attributes: TB,N,V_isUIAssetRequest
// Property: host; attributes: T@"NSString",C,N,V_host
// Property: formattedPath; attributes: T@"NSString",C,N,V_formattedPath
// Property: boltUseCase; attributes: TQ,N,V_boltUseCase
// Property: mediaContextType; attributes: T@"NSString",C,N,V_mediaContextType
// Property: grpcFeature; attributes: T@"NSString",C,N,V_grpcFeature
// Property: descriptionStr; attributes: T@"NSString",C,N,V_descriptionStr

// -[SCNetworkActivityAttributionIdentifier initWithNetworkActivityAttributionInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af88170

// -[SCNetworkActivityAttributionIdentifier initWithNetworkActivitySourceType:requestTypeStr:isUIAssetRequest:host:formattedPath:boltUseCase:mediaContextType:grpcFeature:]
// Type encoding: @76@0:8q16@24B32@36@44Q52@60@68
// Implementation: 0x10af88340

// -[SCNetworkActivityAttributionIdentifier _formattedPathForAttributionWithOriginalPath:url:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af88490

// -[SCNetworkActivityAttributionIdentifier _parseBoltUseCaseFromUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af8886c

// -[SCNetworkActivityAttributionIdentifier _buildActivityAttributionIdentifierDescription]
// Type encoding: v16@0:8
// Implementation: 0x10af88a4c

// -[SCNetworkActivityAttributionIdentifier networkTaskType]
// Type encoding: q16@0:8
// Implementation: 0x10af88c74

// -[SCNetworkActivityAttributionIdentifier networkActivityGroup]
// Type encoding: q16@0:8
// Implementation: 0x10af88d78

// -[SCNetworkActivityAttributionIdentifier networkActivitySourceType]
// Type encoding: q16@0:8
// Implementation: 0x10af88dcc

// -[SCNetworkActivityAttributionIdentifier setNetworkActivitySourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af88dd4

// -[SCNetworkActivityAttributionIdentifier requestTypeStr]
// Type encoding: @16@0:8
// Implementation: 0x10af88ddc

// -[SCNetworkActivityAttributionIdentifier setRequestTypeStr:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af88de4

// -[SCNetworkActivityAttributionIdentifier isUIAssetRequest]
// Type encoding: B16@0:8
// Implementation: 0x10af88dec

// -[SCNetworkActivityAttributionIdentifier setIsUIAssetRequest:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af88df4

// -[SCNetworkActivityAttributionIdentifier host]
// Type encoding: @16@0:8
// Implementation: 0x10af88dfc

// -[SCNetworkActivityAttributionIdentifier setHost:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af88e04

// -[SCNetworkActivityAttributionIdentifier formattedPath]
// Type encoding: @16@0:8
// Implementation: 0x10af88e0c

// -[SCNetworkActivityAttributionIdentifier setFormattedPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af88e14

// -[SCNetworkActivityAttributionIdentifier boltUseCase]
// Type encoding: Q16@0:8
// Implementation: 0x10af88e1c

// -[SCNetworkActivityAttributionIdentifier setBoltUseCase:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10af88e24

// -[SCNetworkActivityAttributionIdentifier mediaContextType]
// Type encoding: @16@0:8
// Implementation: 0x10af88e2c

// -[SCNetworkActivityAttributionIdentifier setMediaContextType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af88e34

// -[SCNetworkActivityAttributionIdentifier grpcFeature]
// Type encoding: @16@0:8
// Implementation: 0x10af88e3c

// -[SCNetworkActivityAttributionIdentifier setGrpcFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af88e44

// -[SCNetworkActivityAttributionIdentifier descriptionStr]
// Type encoding: @16@0:8
// Implementation: 0x10af88e4c

// -[SCNetworkActivityAttributionIdentifier setDescriptionStr:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af88e54

// -[SCNetworkActivityAttributionIdentifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af88e5c

// +[SCNetworkActivityAttributionIdentifier extractAttributionIdentifierFromDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af87e6c

@end
