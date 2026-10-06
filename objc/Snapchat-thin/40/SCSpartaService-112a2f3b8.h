// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpartaService
// Superclass: NSObject
// Address: 0x112a2f3b8

@interface SCSpartaService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpartaService initWithSyncService:syncClient:metricsReporter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10076f6a4

// -[SCSpartaService processLogInSyncData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053b5c60

// -[SCSpartaService observeLoginComplete:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053b5c68

// -[SCSpartaService syncGroupWithKey:client:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10076ff6c

// -[SCSpartaService hasSynced:]
// Type encoding: B24@0:8@16
// Implementation: 0x1053b5c70

// -[SCSpartaService putItem:client:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053b5c78

// -[SCSpartaService putLargerValueItem:client:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053b5c88

// -[SCSpartaService updateItemKey:addValue:client:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1053b5d14

// -[SCSpartaService shutdown]
// Type encoding: v16@0:8
// Implementation: 0x1053b617c

// -[SCSpartaService clearSyncTokenForGroupKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053b6184

// -[SCSpartaService syncGroupWithKey:client:processor:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1053b618c

// -[SCSpartaService processLogout:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1053b6194

// -[SCSpartaService _putItem:conditions:client:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1053b619c

// -[SCSpartaService _deltaforcePutRequestForItem:conditions:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053b6600

// -[SCSpartaService _deltaforceUpdateRequestForItemKey:addValue:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1053b67a8

// -[SCSpartaService _putErrorFromStatusCode:]
// Type encoding: Q24@0:8q16
// Implementation: 0x1053b6ab4

// -[SCSpartaService _updateErrorFromStatusCode:]
// Type encoding: Q24@0:8q16
// Implementation: 0x1053b6ac4

// -[SCSpartaService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053b6ad4

@end
