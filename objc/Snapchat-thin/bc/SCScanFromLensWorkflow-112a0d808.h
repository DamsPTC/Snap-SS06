// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanFromLensWorkflow
// Superclass: NSObject
// Address: 0x112a0d808

@interface SCScanFromLensWorkflow

// Property: scanFromLensUpdateObservable; attributes: T@"SCObservable",R,N

// -[SCScanFromLensWorkflow initWithUserNetworkServices:endpointConfiguration:snapTokenProvider:cameraHardwareServicesAPI:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104fa7ae4

// -[SCScanFromLensWorkflow beginScanningWithContexts:lensId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104fa7f04

// -[SCScanFromLensWorkflow endScanningForToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa80d0

// -[SCScanFromLensWorkflow analyzeSingleFrameWithContexts:lensId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104fa81dc

// -[SCScanFromLensWorkflow analyzeLensTextureWithContexts:imageData:lensId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104fa82a8

// -[SCScanFromLensWorkflow forceEndAllActiveSessions]
// Type encoding: v16@0:8
// Implementation: 0x104fa8590

// -[SCScanFromLensWorkflow scanFromLensUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x104fa8764

// -[SCScanFromLensWorkflow scanCapturer:didCaptureFrame:cameraPosition:analysisResults:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x104fa878c

// -[SCScanFromLensWorkflow _createScanCapturer]
// Type encoding: @16@0:8
// Implementation: 0x104fa8ab8

// -[SCScanFromLensWorkflow _didGetScanFromLensNetworkUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa8af8

// -[SCScanFromLensWorkflow _activeContexts]
// Type encoding: @16@0:8
// Implementation: 0x104fa8ce4

// -[SCScanFromLensWorkflow _updateProviderForUserNetworkServices:endpointConfiguration:snapTokenProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104fa8dc4

// -[SCScanFromLensWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fa8f68

@end
