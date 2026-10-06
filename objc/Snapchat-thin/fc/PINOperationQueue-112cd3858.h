// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: PINOperationQueue
// Superclass: NSObject
// Address: 0x112cd3858

@interface PINOperationQueue

// Property: maxConcurrentOperations; attributes: TQ

// -[PINOperationQueue initWithMaxConcurrentOperations:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1004488f0

// -[PINOperationQueue initWithMaxConcurrentOperations:concurrentQueue:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x100448964

// -[PINOperationQueue dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b7d8710

// -[PINOperationQueue nextOperationReference]
// Type encoding: @16@0:8
// Implementation: 0x10044ab88

// -[PINOperationQueue addOperation:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b7d8788

// -[PINOperationQueue addOperation:withPriority:]
// Type encoding: @32@0:8@?16Q24
// Implementation: 0x10044aa28

// -[PINOperationQueue addOperation:withPriority:identifier:coalescingData:dataCoalescingBlock:completion:]
// Type encoding: @64@0:8@?16Q24@32@40@?48@?56
// Implementation: 0x10b7d87a8

// -[PINOperationQueue locked_addOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10044af10

// -[PINOperationQueue cancelAllOperations]
// Type encoding: v16@0:8
// Implementation: 0x10b7d8a20

// -[PINOperationQueue cancelOperation:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7d8ba4

// -[PINOperationQueue maxConcurrentOperations]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d8c18

// -[PINOperationQueue setMaxConcurrentOperations:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d8c48

// -[PINOperationQueue locked_cancelOperation:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7d8d88

// -[PINOperationQueue setOperationPriority:withReference:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b7d8e54

// -[PINOperationQueue scheduleNextOperations:]
// Type encoding: v20@0:8B16
// Implementation: 0x10044b1b8

// -[PINOperationQueue operationQueueWithPriority:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10044b050

// -[PINOperationQueue locked_nextOperationByPriority]
// Type encoding: @16@0:8
// Implementation: 0x10044c2d0

// -[PINOperationQueue locked_nextOperationByQueue]
// Type encoding: @16@0:8
// Implementation: 0x10044b2b4

// -[PINOperationQueue waitUntilAllOperationsAreFinished]
// Type encoding: v16@0:8
// Implementation: 0x10b7d8f8c

// -[PINOperationQueue locked_removeOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10044b308

// -[PINOperationQueue lock]
// Type encoding: v16@0:8
// Implementation: 0x10044abec

// -[PINOperationQueue unlock]
// Type encoding: v16@0:8
// Implementation: 0x10044abf4

// -[PINOperationQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7d8fb8

// +[PINOperationQueue sharedOperationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10044880c

@end
