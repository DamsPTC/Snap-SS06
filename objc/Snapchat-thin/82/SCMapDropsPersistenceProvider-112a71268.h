// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDropsPersistenceProvider
// Superclass: NSObject
// Address: 0x112a71268

@interface SCMapDropsPersistenceProvider

// Property: persistedDropsObservable; attributes: T@"SCObservable",R,N
// Property: deletedDropObservable; attributes: T@"SCObservable",R,N

// -[SCMapDropsPersistenceProvider initWithPinsService:snapchatterPublicDataFetcher:userInfoServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058352c4

// -[SCMapDropsPersistenceProvider fetchPersistedDrops]
// Type encoding: v16@0:8
// Implementation: 0x1058353e8

// -[SCMapDropsPersistenceProvider persistedDropsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105835530

// -[SCMapDropsPersistenceProvider deletedDropObservable]
// Type encoding: @16@0:8
// Implementation: 0x105835558

// -[SCMapDropsPersistenceProvider verifyDropTitle:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105835580

// -[SCMapDropsPersistenceProvider saveDrop:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1058356f8

// -[SCMapDropsPersistenceProvider deleteDrop:forEveryone:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x105835a80

// -[SCMapDropsPersistenceProvider _updateMapWithSavedDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105835d04

// -[SCMapDropsPersistenceProvider _emitDeletedDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105835dbc

// -[SCMapDropsPersistenceProvider _handlePersistedPinsResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105835dc4

// -[SCMapDropsPersistenceProvider _getPersistedPinsFromResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105835f20

// -[SCMapDropsPersistenceProvider _buildDropFromPin:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058361a0

// -[SCMapDropsPersistenceProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10583684c

@end
