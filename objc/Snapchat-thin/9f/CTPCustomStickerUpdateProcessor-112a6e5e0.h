// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPCustomStickerUpdateProcessor
// Superclass: NSObject
// Address: 0x112a6e5e0

@interface CTPCustomStickerUpdateProcessor

// Property: docObjectContext; attributes: T@"SCLazy",&,N,V_docObjectContext
// Property: customStickerClient; attributes: T@"SCLazy",&,N,V_customStickerClient
// Property: contentManager; attributes: T@"SCLazy",&,N,V_contentManager
// Property: persistenceService; attributes: T@"SCLazy",&,N,V_persistenceService
// Property: logger; attributes: T@"CTPCustomStickerServicesLogger",&,N,V_logger
// Property: repositoryExperiments; attributes: T@"SCLazy",&,N,V_repositoryExperiments
// Property: observerLifecycle; attributes: T@"SCDisposableObserverLifecycle",&,N,V_observerLifecycle
// Property: updateQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_updateQueue
// Property: docObjectUpdateQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_docObjectUpdateQueue
// Property: completePendingTasksTriggered; attributes: TB,N,V_completePendingTasksTriggered
// Property: syncInProgress; attributes: TB,N,V_syncInProgress

// -[CTPCustomStickerUpdateProcessor initWithDocObjectContext:customStickerClient:contentManager:persistenceService:logger:repositoryExperiments:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10580d2a4

// -[CTPCustomStickerUpdateProcessor addPendingUpdateForCustomSticker:customStickerImageData:customStickerImageDimensions:customStickerOrigin:isAnimated:completionQueue:completion:]
// Type encoding: v72@0:8@16@24{CGSize=dd}32i48B52@56@?64
// Implementation: 0x10580d470

// -[CTPCustomStickerUpdateProcessor addPendingDeleteForCustomSticker:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10580d8d8

// -[CTPCustomStickerUpdateProcessor completePendingTasks]
// Type encoding: v16@0:8
// Implementation: 0x10580df1c

// -[CTPCustomStickerUpdateProcessor _batchUpdate:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10580e138

// -[CTPCustomStickerUpdateProcessor _boltUpdateForRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10580e59c

// -[CTPCustomStickerUpdateProcessor _ctpUpdateForRequest:contentObject:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10580e7fc

// -[CTPCustomStickerUpdateProcessor _updatePersistedItemForUpdate:item:context:feedType:transactionContext:]
// Type encoding: @56@0:8@16@24Q32Q40@48
// Implementation: 0x10580f3d8

// -[CTPCustomStickerUpdateProcessor _updateTablesForCompletedUpdate:object:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10580f65c

// -[CTPCustomStickerUpdateProcessor _updateTablesForFailedUpdate:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10580f930

// -[CTPCustomStickerUpdateProcessor _shouldRetryUpdate:]
// Type encoding: B24@0:8@16
// Implementation: 0x10580fac8

// -[CTPCustomStickerUpdateProcessor _updateTablesForTooManyFailedAttemptsForUpdate:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10580fbec

// -[CTPCustomStickerUpdateProcessor _removePersistedItemForUpdate:context:feedType:transactionContext:]
// Type encoding: @48@0:8@16Q24Q32@40
// Implementation: 0x10580fe58

// -[CTPCustomStickerUpdateProcessor _batchDelete:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105810030

// -[CTPCustomStickerUpdateProcessor _updateTablesForCompleteDeletes:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058107e4

// -[CTPCustomStickerUpdateProcessor _updateTablesForFailedDeletes:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105810a5c

// -[CTPCustomStickerUpdateProcessor _logSuccessOperation:count:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x105810ce4

// -[CTPCustomStickerUpdateProcessor _logFailureForOperation:errorType:count:]
// Type encoding: v40@0:8q16q24Q32
// Implementation: 0x105810d4c

// -[CTPCustomStickerUpdateProcessor docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x105810e00

// -[CTPCustomStickerUpdateProcessor setDocObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810e08

// -[CTPCustomStickerUpdateProcessor customStickerClient]
// Type encoding: @16@0:8
// Implementation: 0x105810e38

// -[CTPCustomStickerUpdateProcessor setCustomStickerClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810e40

// -[CTPCustomStickerUpdateProcessor contentManager]
// Type encoding: @16@0:8
// Implementation: 0x105810e70

// -[CTPCustomStickerUpdateProcessor setContentManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810e78

// -[CTPCustomStickerUpdateProcessor persistenceService]
// Type encoding: @16@0:8
// Implementation: 0x105810ea8

// -[CTPCustomStickerUpdateProcessor setPersistenceService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810eb0

// -[CTPCustomStickerUpdateProcessor logger]
// Type encoding: @16@0:8
// Implementation: 0x105810ee0

// -[CTPCustomStickerUpdateProcessor setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810ee8

// -[CTPCustomStickerUpdateProcessor repositoryExperiments]
// Type encoding: @16@0:8
// Implementation: 0x105810f18

// -[CTPCustomStickerUpdateProcessor setRepositoryExperiments:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810f20

// -[CTPCustomStickerUpdateProcessor observerLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x105810f50

// -[CTPCustomStickerUpdateProcessor setObserverLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810f58

// -[CTPCustomStickerUpdateProcessor updateQueue]
// Type encoding: @16@0:8
// Implementation: 0x105810f88

// -[CTPCustomStickerUpdateProcessor setUpdateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810f90

// -[CTPCustomStickerUpdateProcessor docObjectUpdateQueue]
// Type encoding: @16@0:8
// Implementation: 0x105810fc0

// -[CTPCustomStickerUpdateProcessor setDocObjectUpdateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x105810fc8

// -[CTPCustomStickerUpdateProcessor completePendingTasksTriggered]
// Type encoding: B16@0:8
// Implementation: 0x105810ff8

// -[CTPCustomStickerUpdateProcessor setCompletePendingTasksTriggered:]
// Type encoding: v20@0:8B16
// Implementation: 0x105811000

// -[CTPCustomStickerUpdateProcessor syncInProgress]
// Type encoding: B16@0:8
// Implementation: 0x105811008

// -[CTPCustomStickerUpdateProcessor setSyncInProgress:]
// Type encoding: v20@0:8B16
// Implementation: 0x105811010

// -[CTPCustomStickerUpdateProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105811018

@end
