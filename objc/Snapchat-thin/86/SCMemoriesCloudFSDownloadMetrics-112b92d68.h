// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCloudFSDownloadMetrics
// Superclass: NSObject
// Address: 0x112b92d68

@interface SCMemoriesCloudFSDownloadMetrics

// Property: snapId; attributes: T@"NSString",R,C,N,V_snapId
// Property: assetType; attributes: Tq,R,N,V_assetType
// Property: statusCode; attributes: Tq,R,N,V_statusCode
// Property: latencyInMs; attributes: TQ,R,N,V_latencyInMs
// Property: urlPath; attributes: T@"NSString",R,C,N,V_urlPath
// Property: contentLengthInByte; attributes: TQ,R,N,V_contentLengthInByte
// Property: genericAssetDescriptor; attributes: T@"NSString",R,C,N,V_genericAssetDescriptor

// -[SCMemoriesCloudFSDownloadMetrics initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108018624

// -[SCMemoriesCloudFSDownloadMetrics initWithSnapId:assetType:statusCode:latencyInMs:urlPath:contentLengthInByte:genericAssetDescriptor:]
// Type encoding: @72@0:8@16q24q32Q40@48Q56@64
// Implementation: 0x10801874c

// -[SCMemoriesCloudFSDownloadMetrics copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108018850

// -[SCMemoriesCloudFSDownloadMetrics encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108018874

// -[SCMemoriesCloudFSDownloadMetrics snapId]
// Type encoding: @16@0:8
// Implementation: 0x108018938

// -[SCMemoriesCloudFSDownloadMetrics assetType]
// Type encoding: q16@0:8
// Implementation: 0x108018940

// -[SCMemoriesCloudFSDownloadMetrics statusCode]
// Type encoding: q16@0:8
// Implementation: 0x108018948

// -[SCMemoriesCloudFSDownloadMetrics latencyInMs]
// Type encoding: Q16@0:8
// Implementation: 0x108018950

// -[SCMemoriesCloudFSDownloadMetrics urlPath]
// Type encoding: @16@0:8
// Implementation: 0x108018958

// -[SCMemoriesCloudFSDownloadMetrics contentLengthInByte]
// Type encoding: Q16@0:8
// Implementation: 0x108018960

// -[SCMemoriesCloudFSDownloadMetrics genericAssetDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x108018968

// -[SCMemoriesCloudFSDownloadMetrics .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108018970

@end
