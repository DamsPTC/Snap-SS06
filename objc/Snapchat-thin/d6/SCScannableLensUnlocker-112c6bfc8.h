// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScannableLensUnlocker
// Superclass: NSObject
// Address: 0x112c6bfc8

@interface SCScannableLensUnlocker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScannableLensUnlocker initWithSnapcodeMetadataProvider:unlockNetworkManager:lensMetadataRetriever:dataStoreWriter:queuePerformer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100bc8df8

// -[SCScannableLensUnlocker performAction:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10b0b4ea4

// -[SCScannableLensUnlocker _performAction:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b0b5298

// -[SCScannableLensUnlocker _retrieveLensMetadataForLensId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b0b5380

// -[SCScannableLensUnlocker _retrieveLensIdWithAction:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b0b580c

// -[SCScannableLensUnlocker _fetchLensForMachineReadableCode:expirationDate:actionType:completion:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x10b0b58b8

// -[SCScannableLensUnlocker _handleLensSnapcodeMetadata:error:machineReadableCode:actionType:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x10b0b5bb8

// -[SCScannableLensUnlocker _handleRetrievedLensId:forMachineReadableCode:actionType:completion:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x10b0b5d3c

// -[SCScannableLensUnlocker _performUnlockForLensId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b0b5d50

// -[SCScannableLensUnlocker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b6184

// +[SCScannableLensUnlocker _handleSuccessfulUnlock:dataWriter:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b0b5f7c

// +[SCScannableLensUnlocker _unlockResultWithError:description:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b0b6060

// +[SCScannableLensUnlocker _errorWithCode:description:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b0b60ac

@end
