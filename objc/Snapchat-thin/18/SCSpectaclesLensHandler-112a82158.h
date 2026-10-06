// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLensHandler
// Superclass: NSObject
// Address: 0x112a82158

@interface SCSpectaclesLensHandler

// Property: hasConnectedLensLaunchableDevice; attributes: TB,R,N
// Property: lensLaunchableDeviceName; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLensHandler initWithSpectaclesManager:unlockableNetworkManagerProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059e49f4

// -[SCSpectaclesLensHandler lensLaunchableDeviceName]
// Type encoding: @16@0:8
// Implementation: 0x1059e4a98

// -[SCSpectaclesLensHandler hasConnectedLensLaunchableDevice]
// Type encoding: B16@0:8
// Implementation: 0x1059e4b34

// -[SCSpectaclesLensHandler _connectedLaunchableDevice]
// Type encoding: @16@0:8
// Implementation: 0x1059e4b68

// -[SCSpectaclesLensHandler checkIfLensPinned:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059e4bf8

// -[SCSpectaclesLensHandler hasSpectaclesWithPinLensCapability]
// Type encoding: B16@0:8
// Implementation: 0x1059e4e20

// -[SCSpectaclesLensHandler canLaunchLens]
// Type encoding: B16@0:8
// Implementation: 0x1059e4f40

// -[SCSpectaclesLensHandler lens:supportsOpeningIn:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059e4fac

// -[SCSpectaclesLensHandler pinLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e52c4

// -[SCSpectaclesLensHandler _pinLens:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059e52cc

// -[SCSpectaclesLensHandler unpinLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e554c

// -[SCSpectaclesLensHandler launchLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e56b8

// -[SCSpectaclesLensHandler _launchLensOnDevice:lensId:isPinned:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1059e5794

// -[SCSpectaclesLensHandler _lensLaunchableDevice]
// Type encoding: @16@0:8
// Implementation: 0x1059e5948

// -[SCSpectaclesLensHandler _pinnedLensAPI]
// Type encoding: @16@0:8
// Implementation: 0x1059e5a74

// -[SCSpectaclesLensHandler _lensGroups]
// Type encoding: @16@0:8
// Implementation: 0x1059e5ae0

// -[SCSpectaclesLensHandler _isLensPinned:data:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1059e5b78

// -[SCSpectaclesLensHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059e5ce0

@end
