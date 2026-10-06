// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaDataPackagePersister
// Superclass: NSObject
// Address: 0x112a52c28

@interface SCMediaDataPackagePersister

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaDataPackagePersister initWithKeyValueStore:grapheneRegistryLazy:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105613e24

// -[SCMediaDataPackagePersister allPackageIdsWithCallbackQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105613f54

// -[SCMediaDataPackagePersister addPackageWithPackageId:mediaData:overlayData:isLocked:callbackQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x105614164

// -[SCMediaDataPackagePersister mediaDataForPackageId:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056144c0

// -[SCMediaDataPackagePersister overlayDataForPackageId:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056146ac

// -[SCMediaDataPackagePersister isPackageLocked:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105614898

// -[SCMediaDataPackagePersister unlockPackage:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105614a94

// -[SCMediaDataPackagePersister removePackageForId:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105614c48

// -[SCMediaDataPackagePersister _logForMediaDataPackageSaveFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x105614e68

// -[SCMediaDataPackagePersister .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105614f04

@end
