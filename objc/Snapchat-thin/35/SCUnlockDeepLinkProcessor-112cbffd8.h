// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockDeepLinkProcessor
// Superclass: NSObject
// Address: 0x112cbffd8

@interface SCUnlockDeepLinkProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockDeepLinkProcessor initWithNavigationDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b75f180

// -[SCUnlockDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10b75f1ec

// -[SCUnlockDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:source:]
// Type encoding: B48@0:8@16@24@32q40
// Implementation: 0x10b75f1f4

// -[SCUnlockDeepLinkProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b75f3f4

// +[SCUnlockDeepLinkProcessor unlockDeeplinkTypeFromURL:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10b75f34c

// +[SCUnlockDeepLinkProcessor machineReadableCodeResultFromSnapcodeDeepLinkURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b75f3e8

@end
