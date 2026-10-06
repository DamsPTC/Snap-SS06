// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesEncryptedDatabaseLogger
// Superclass: NSObject
// Address: 0x112bc1938

@interface SCMemoriesEncryptedDatabaseLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesEncryptedDatabaseLogger initWithUserTrackedLogger:grapheneRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d4d118

// -[SCMemoriesEncryptedDatabaseLogger _callsitesWithMemoriesGrapheneContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d4d1bc

// -[SCMemoriesEncryptedDatabaseLogger _emitEncryptedDatabaseErrorGrapheneWithMethodName:errorName:memoriesGrapheneContext:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108d4d25c

// -[SCMemoriesEncryptedDatabaseLogger _emitEncryptedDatabaseErrorGrapheneWithMethod:error:memoriesGrapheneContext:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x108d4d418

// -[SCMemoriesEncryptedDatabaseLogger _emitGalleryExceptionBlizzardMetricWithMethod:error:description:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x108d4d504

// -[SCMemoriesEncryptedDatabaseLogger _emitAllErrorMetricsWithMethod:error:description:memoriesGrapheneContext:]
// Type encoding: v48@0:8q16q24@32@40
// Implementation: 0x108d4d62c

// -[SCMemoriesEncryptedDatabaseLogger failedToInvokeRequestKeyResultHandlerForSnapId:keyIVLength:validIsEncryptedField:hasResultHandler:memoriesGrapheneContext:]
// Type encoding: v48@0:8@16Q24B32B36@40
// Implementation: 0x108d4d778

// -[SCMemoriesEncryptedDatabaseLogger failedToRequestKeyForEmptySnapIdWithSnapId:memoriesGrapheneContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d4d824

// -[SCMemoriesEncryptedDatabaseLogger missingEGOCipherForRequestingKeyForSnapId:memoriesGrapheneContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d4d8cc

// -[SCMemoriesEncryptedDatabaseLogger missingQueueForRequestingKeyForSnapId:memoriesGrapheneContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d4d954

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFailedGetSnapsNetworkCallForSnapIds:statusCode:isSynchronous:memoriesGrapheneContext:]
// Type encoding: v44@0:8@16q24B32@36
// Implementation: 0x108d4d9dc

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFailedToFetchKeyIVForNoNetworkerForSnapIds:memoriesGrapheneContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108d4da78

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundNoResultsInEGOCipherForSnapId:isLocalOnly:memoriesGrapheneContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108d4db00

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundNoResultsInInMemoryCacheForSnapId:isLocalOnly:memoriesGrapheneContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108d4db94

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundResultButNoKeyIVInEGOCipherForSnapId:isLocalOnly:memoriesGrapheneContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108d4dc28

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVFoundResultButNoKeyIVInInMemoryCacheForSnapId:isLocalOnly:memoriesGrapheneContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108d4dcbc

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVGotUnsuccessfulStatusCodeForSnapIds:statusCode:isSynchronous:memoriesGrapheneContext:]
// Type encoding: v44@0:8@16q24B32@36
// Implementation: 0x108d4dd50

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVResponseFromGetSnapsHadNoEncryptionBlobForSnapId:isSynchronous:memoriesGrapheneContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108d4ddec

// -[SCMemoriesEncryptedDatabaseLogger readThroughKeyIVSucceededInFetchingKeyIVButFailedToDeserializeResponseForSnapIds:isSynchronous:memoriesGrapheneContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108d4de80

// -[SCMemoriesEncryptedDatabaseLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d4df14

@end
