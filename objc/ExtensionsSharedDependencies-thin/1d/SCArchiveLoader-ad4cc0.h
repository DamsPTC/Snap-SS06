// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArchiveLoader
// Superclass: NSObject
// Address: 0xad4cc0

@interface SCArchiveLoader

// Property: queuePerformer; attributes: T@"SCQueuePerformer",R,N,V_queuePerformer
// Property: loadState; attributes: TQ,N,V_loadState

// -[SCArchiveLoader initWithClass:fileName:performerContext:]
// Type encoding: @40@0:8#16@24Q32
// Implementation: 0x4393fc

// -[SCArchiveLoader loadFromDiskAsync:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x4394e4

// -[SCArchiveLoader _unarchive]
// Type encoding: v16@0:8
// Implementation: 0x4396bc

// -[SCArchiveLoader waitUntilLoadFromDiskCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x439804

// -[SCArchiveLoader _didFinishLoadingFromDiskWithObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x439920

// -[SCArchiveLoader saveObject:]
// Type encoding: B24@0:8@16
// Implementation: 0x439ae4

// -[SCArchiveLoader queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x439b54

// -[SCArchiveLoader loadState]
// Type encoding: Q16@0:8
// Implementation: 0x439b5c

// -[SCArchiveLoader setLoadState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x439b64

// -[SCArchiveLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x439b6c

@end
