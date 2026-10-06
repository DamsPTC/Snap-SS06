// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesScreenshopItemScanner
// Superclass: NSObject
// Address: 0x112b39e48

@interface SCMemoriesScreenshopItemScanner


// -[SCMemoriesScreenshopItemScanner initWithDelegate:performer:userTrackedLogger:screenshopPersistenceService:screenshopModelService:screenshopNetworkService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106dbcfd0

// -[SCMemoriesScreenshopItemScanner processEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x106dbd120

// -[SCMemoriesScreenshopItemScanner getSessionTotalItemCount]
// Type encoding: Q16@0:8
// Implementation: 0x106dbd144

// -[SCMemoriesScreenshopItemScanner getScanFinishedDate]
// Type encoding: @16@0:8
// Implementation: 0x106dbd14c

// -[SCMemoriesScreenshopItemScanner getScanStartedDate]
// Type encoding: @16@0:8
// Implementation: 0x106dbd174

// -[SCMemoriesScreenshopItemScanner _setNextState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106dbd19c

// -[SCMemoriesScreenshopItemScanner _processNextItemIfAvailable]
// Type encoding: v16@0:8
// Implementation: 0x106dbd25c

// -[SCMemoriesScreenshopItemScanner _checkFashionPersistingResultFor:assetId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106dbd6a8

// -[SCMemoriesScreenshopItemScanner _incrementScanningSessionCounts:]
// Type encoding: v20@0:8B16
// Implementation: 0x106dbd958

// -[SCMemoriesScreenshopItemScanner _logAndResetScanningSessionCounts]
// Type encoding: v16@0:8
// Implementation: 0x106dbd978

// -[SCMemoriesScreenshopItemScanner .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106dbda08

@end
