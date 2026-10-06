// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArchiveLoader
// Superclass: NSObject
// Address: 0x112cb49f8

@interface SCArchiveLoader

// Property: queuePerformer; attributes: T@"SCQueuePerformer",R,N,V_queuePerformer
// Property: loadState; attributes: TQ,N,V_loadState

// -[SCArchiveLoader initWithClass:fileName:performerContext:]
// Type encoding: @40@0:8#16@24Q32
// Implementation: 0x10b7386a8

// -[SCArchiveLoader loadFromDiskAsync:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10b738790

// -[SCArchiveLoader _unarchive]
// Type encoding: v16@0:8
// Implementation: 0x10b738968

// -[SCArchiveLoader waitUntilLoadFromDiskCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b738ab0

// -[SCArchiveLoader _didFinishLoadingFromDiskWithObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b738bcc

// -[SCArchiveLoader saveObject:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b738d90

// -[SCArchiveLoader queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10b738e00

// -[SCArchiveLoader loadState]
// Type encoding: Q16@0:8
// Implementation: 0x10b738e08

// -[SCArchiveLoader setLoadState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b738e10

// -[SCArchiveLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b738e18

@end
