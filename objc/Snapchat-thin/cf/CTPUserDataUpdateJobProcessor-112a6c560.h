// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPUserDataUpdateJobProcessor
// Superclass: NSObject
// Address: 0x112a6c560

@interface CTPUserDataUpdateJobProcessor

// Property: docObjectContext; attributes: T@"SCLazy",&,N,V_docObjectContext
// Property: userDataClient; attributes: T@"SCLazy",&,N,V_userDataClient
// Property: logger; attributes: T@"CTPUserDataFeedServiceLogger",&,N,V_logger
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: retryJobProvider; attributes: T@"SCLazy",W,N,V_retryJobProvider
// Property: persistenceService; attributes: T@"SCLazy",&,N,V_persistenceService
// Property: cancellableTasks; attributes: T@"NSCache",&,N,V_cancellableTasks
// Property: updateQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_updateQueue
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPUserDataUpdateJobProcessor initWithDocObjectContext:userDataClient:logger:circumstanceEngine:retryJobProvider:persistenceService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1057ebeb4

// -[CTPUserDataUpdateJobProcessor _maxAttemptsForItemsInCategory:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1057ec058

// -[CTPUserDataUpdateJobProcessor _shouldUseSimpleUpload:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1057ec098

// -[CTPUserDataUpdateJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1057ec0c8

// -[CTPUserDataUpdateJobProcessor dataForFeedCategory:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1057ec180

// -[CTPUserDataUpdateJobProcessor addTaskForItem:category:isDelete:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1057ec1b8

// -[CTPUserDataUpdateJobProcessor _updateBackendWithOneUpdate:category:isDelete:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1057ec7f8

// -[CTPUserDataUpdateJobProcessor _updateBackendWithChanges:onComplete:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1057ed0d8

// -[CTPUserDataUpdateJobProcessor _updateItemsPersistenceService:removingItemIds:category:]
// Type encoding: v36@0:8@16@24c32
// Implementation: 0x1057ee344

// -[CTPUserDataUpdateJobProcessor _updateChatHometabFeedIfNecessaryWithUpdatingItems:removingItemIds:category:]
// Type encoding: v36@0:8@16@24c32
// Implementation: 0x1057eeaf4

// -[CTPUserDataUpdateJobProcessor _fetchUpdateExternalIDs:]
// Type encoding: @20@0:8c16
// Implementation: 0x1057eeb80

// -[CTPUserDataUpdateJobProcessor _fetchDeleteExternalIDs:]
// Type encoding: @20@0:8c16
// Implementation: 0x1057ef0cc

// -[CTPUserDataUpdateJobProcessor _incrementAttempts:maxAttempts:completionBlock:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x1057ef460

// -[CTPUserDataUpdateJobProcessor _cleanupTasks:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057ef75c

// -[CTPUserDataUpdateJobProcessor _successfullyCompleteJob:callback:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1057ef9d4

// -[CTPUserDataUpdateJobProcessor _failedJob:callback:errors:]
// Type encoding: v40@0:8Q16@?24@32
// Implementation: 0x1057efa68

// -[CTPUserDataUpdateJobProcessor docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x1057efb1c

// -[CTPUserDataUpdateJobProcessor setDocObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efb24

// -[CTPUserDataUpdateJobProcessor userDataClient]
// Type encoding: @16@0:8
// Implementation: 0x1057efb54

// -[CTPUserDataUpdateJobProcessor setUserDataClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efb5c

// -[CTPUserDataUpdateJobProcessor logger]
// Type encoding: @16@0:8
// Implementation: 0x1057efb8c

// -[CTPUserDataUpdateJobProcessor setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efb94

// -[CTPUserDataUpdateJobProcessor circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x1057efbc4

// -[CTPUserDataUpdateJobProcessor setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efbcc

// -[CTPUserDataUpdateJobProcessor retryJobProvider]
// Type encoding: @16@0:8
// Implementation: 0x1057efbfc

// -[CTPUserDataUpdateJobProcessor setRetryJobProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efc14

// -[CTPUserDataUpdateJobProcessor persistenceService]
// Type encoding: @16@0:8
// Implementation: 0x1057efc20

// -[CTPUserDataUpdateJobProcessor setPersistenceService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efc28

// -[CTPUserDataUpdateJobProcessor cancellableTasks]
// Type encoding: @16@0:8
// Implementation: 0x1057efc58

// -[CTPUserDataUpdateJobProcessor setCancellableTasks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efc60

// -[CTPUserDataUpdateJobProcessor updateQueue]
// Type encoding: @16@0:8
// Implementation: 0x1057efc90

// -[CTPUserDataUpdateJobProcessor setUpdateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057efc98

// -[CTPUserDataUpdateJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057efcc8

@end
