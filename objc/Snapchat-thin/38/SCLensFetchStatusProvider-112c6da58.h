// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFetchStatusProvider
// Superclass: NSObject
// Address: 0x112c6da58

@interface SCLensFetchStatusProvider

// Property: fetchStatusObservable; attributes: T@"SCObservable",R,N,V_fetchStatusObservable

// -[SCLensFetchStatusProvider initWithLens:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0dae00

// -[SCLensFetchStatusProvider setComponentIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0dae68

// -[SCLensFetchStatusProvider updateComponentId:fetchStatus:progress:error:]
// Type encoding: v48@0:8@16Q24d32@40
// Implementation: 0x10b0daef8

// -[SCLensFetchStatusProvider notifyLensStatusUpdated]
// Type encoding: v16@0:8
// Implementation: 0x10b0dafb8

// -[SCLensFetchStatusProvider _setNewFetchStatus:forComponentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0daff4

// -[SCLensFetchStatusProvider _componentFetchStatuses]
// Type encoding: @16@0:8
// Implementation: 0x10b0daffc

// -[SCLensFetchStatusProvider _lensFetchStatus]
// Type encoding: @16@0:8
// Implementation: 0x10b0db004

// -[SCLensFetchStatusProvider fetchStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0db3b0

// -[SCLensFetchStatusProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0db3b8

// +[SCLensFetchStatusProvider _initialFetchStatusesWithComponentIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0db24c

@end
