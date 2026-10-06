// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaDataPackageManager
// Superclass: NSObject
// Address: 0x112a52cc8

@interface SCMediaDataPackageManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaDataPackageManager initWithPersister:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056150e8

// -[SCMediaDataPackageManager createPackageWithId:mediaData:overlayData:key:iv:isLocked:callbackQueue:encryptionCompletion:completion:]
// Type encoding: v84@0:8@16@24@32@40@48B56@60@?68@?76
// Implementation: 0x1056151a8

// -[SCMediaDataPackageManager packageHandleWithId:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105615604

// -[SCMediaDataPackageManager mediaDatasWithHandle:callbackQueue:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056159c4

// -[SCMediaDataPackageManager unlockPackage:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105615e20

// -[SCMediaDataPackageManager createPackageWithId:mediaFileUrl:overlayData:key:iv:callbackQueue:encryptionCompletion:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x105615fb8

// -[SCMediaDataPackageManager retrievePackageWithId:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105615fbc

// -[SCMediaDataPackageManager didReleasePackage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105615fc0

// -[SCMediaDataPackageManager _createHandleForPackageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056160e0

// -[SCMediaDataPackageManager _deleteDataIfPossible:]
// Type encoding: v24@0:8@16
// Implementation: 0x105616148

// -[SCMediaDataPackageManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056162ac

@end
