// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSafeAreaBaselinePersistence
// Superclass: NSObject
// Address: 0x112ce8a78

@interface SCSafeAreaBaselinePersistence

// Property: hasSavedThisSession; attributes: TB,N,V_hasSavedThisSession
// Property: userDefaults; attributes: T@"NSUserDefaults",R,N,V_userDefaults

// -[SCSafeAreaBaselinePersistence init]
// Type encoding: @16@0:8
// Implementation: 0x10052b1a0

// -[SCSafeAreaBaselinePersistence initWithUserDefaults:]
// Type encoding: @24@0:8@16
// Implementation: 0x10052b1f0

// -[SCSafeAreaBaselinePersistence baselineInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10052b290

// -[SCSafeAreaBaselinePersistence updateBaselineInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x100c6a390

// -[SCSafeAreaBaselinePersistence clearBaselineInsets]
// Type encoding: v16@0:8
// Implementation: 0x10b86d9f4

// -[SCSafeAreaBaselinePersistence userDefaults]
// Type encoding: @16@0:8
// Implementation: 0x10052b4e4

// -[SCSafeAreaBaselinePersistence hasSavedThisSession]
// Type encoding: B16@0:8
// Implementation: 0x100c6a66c

// -[SCSafeAreaBaselinePersistence setHasSavedThisSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c6a6d0

// -[SCSafeAreaBaselinePersistence .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b86da4c

// +[SCSafeAreaBaselinePersistence _isBaselineInsets:]
// Type encoding: B48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x100c6a674

// +[SCSafeAreaBaselinePersistence _currentDeviceKey]
// Type encoding: @16@0:8
// Implementation: 0x10052b4ec

// +[SCSafeAreaBaselinePersistence _isIPhoneDevice]
// Type encoding: B16@0:8
// Implementation: 0x10052b478

@end
