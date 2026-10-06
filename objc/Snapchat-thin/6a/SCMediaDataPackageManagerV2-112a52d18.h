// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaDataPackageManagerV2
// Superclass: NSObject
// Address: 0x112a52d18

@interface SCMediaDataPackageManagerV2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaDataPackageManagerV2 initWithContentDelivery:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056162e8

// -[SCMediaDataPackageManagerV2 createPackageWithId:mediaFileUrl:overlayData:key:iv:callbackQueue:encryptionCompletion:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x10561638c

// -[SCMediaDataPackageManagerV2 retrievePackageWithId:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056165dc

// -[SCMediaDataPackageManagerV2 createPackageWithId:mediaData:overlayData:key:iv:isLocked:callbackQueue:encryptionCompletion:completion:]
// Type encoding: v84@0:8@16@24@32@40@48B56@60@?68@?76
// Implementation: 0x1056168e4

// -[SCMediaDataPackageManagerV2 mediaDatasWithHandle:callbackQueue:handler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105616afc

// -[SCMediaDataPackageManagerV2 packageHandleWithId:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105617040

// -[SCMediaDataPackageManagerV2 unlockPackage:callbackQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105617338

// -[SCMediaDataPackageManagerV2 _packMediaWithMediaFile:overlayData:zipFilePath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105617524

// -[SCMediaDataPackageManagerV2 _packMediaWithMediaData:overlayData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056178c0

// -[SCMediaDataPackageManagerV2 _copyMediaData:toOutputStream:withError:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x105617c28

// -[SCMediaDataPackageManagerV2 _createPackageWithId:mediaFileUrl:overlayData:key:iv:callbackQueue:encryptionCompletion:completion:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x105617d94

// -[SCMediaDataPackageManagerV2 _createPackageWithId:mediaData:overlayData:isLocked:callbackQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x105618428

// -[SCMediaDataPackageManagerV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105618720

@end
