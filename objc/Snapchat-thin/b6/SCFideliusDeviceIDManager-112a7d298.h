// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusDeviceIDManager
// Superclass: NSObject
// Address: 0x112a7d298

@interface SCFideliusDeviceIDManager


// -[SCFideliusDeviceIDManager initWithLogger:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1006e8c80

// -[SCFideliusDeviceIDManager deviceIDString]
// Type encoding: @16@0:8
// Implementation: 0x1006efd78

// -[SCFideliusDeviceIDManager deviceIDBytes]
// Type encoding: @16@0:8
// Implementation: 0x1006efe0c

// -[SCFideliusDeviceIDManager _computeDeviceIDFromUUIDBytes:]
// Type encoding: @24@0:8[16C]16
// Implementation: 0x1006eff24

// -[SCFideliusDeviceIDManager _createAndSaveDeviceID]
// Type encoding: @16@0:8
// Implementation: 0x10592ec50

// -[SCFideliusDeviceIDManager clear]
// Type encoding: v16@0:8
// Implementation: 0x10592edd0

// -[SCFideliusDeviceIDManager _loadDeviceID]
// Type encoding: @16@0:8
// Implementation: 0x1006e8d88

// -[SCFideliusDeviceIDManager _loadDeviceIDFromArchive]
// Type encoding: @16@0:8
// Implementation: 0x1006e8e78

// -[SCFideliusDeviceIDManager _loadDeviceIDFromKeyChain]
// Type encoding: @16@0:8
// Implementation: 0x10592ee6c

// -[SCFideliusDeviceIDManager _save:]
// Type encoding: B24@0:8@16
// Implementation: 0x10592efa0

// -[SCFideliusDeviceIDManager _saveToArchive:]
// Type encoding: B24@0:8@16
// Implementation: 0x10592f03c

// -[SCFideliusDeviceIDManager _saveToKeychain:]
// Type encoding: B24@0:8@16
// Implementation: 0x10592f144

// -[SCFideliusDeviceIDManager _clearArchive]
// Type encoding: v16@0:8
// Implementation: 0x10592f364

// -[SCFideliusDeviceIDManager _clearKeychain]
// Type encoding: v16@0:8
// Implementation: 0x10592f3c4

// -[SCFideliusDeviceIDManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10592f450

// +[SCFideliusDeviceIDManager _fideliusDeviceIDPath]
// Type encoding: @16@0:8
// Implementation: 0x1006e8f60

@end
