// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataProviderSimpleUpdater
// Superclass: NSObject
// Address: 0x112b1ffe8

@interface SCLensDataProviderSimpleUpdater

// Property: lensDataProviderUpdateEventsObservable; attributes: T@"SCObservable",R,N
// Property: currentLensDataProviderProxy; attributes: T@"<SCLensCameraScreenDataProviderProtocol>",R,N

// -[SCLensDataProviderSimpleUpdater initWithUIUpdateAnnouncer:activationSourceMapper:contextRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106bd308c

// -[SCLensDataProviderSimpleUpdater currentLensDataProviderProxy]
// Type encoding: @16@0:8
// Implementation: 0x106bd3174

// -[SCLensDataProviderSimpleUpdater lensDataProviderUpdateEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106bd319c

// -[SCLensDataProviderSimpleUpdater setUpLensesWithLensDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd31c4

// -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithCameraType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bd3228

// -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithCameraType:updatingStrategy:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106bd322c

// -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithFeatureLensCarouselType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bd3230

// -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithActivationSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bd3234

// -[SCLensDataProviderSimpleUpdater updateLensDataProviderWithLensesObservable:activationConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bd3238

// -[SCLensDataProviderSimpleUpdater updateLensDataProvider:updatingStrategy:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106bd323c

// -[SCLensDataProviderSimpleUpdater updateLensDataProvider:updatingStrategy:lensIdToRestore:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106bd3244

// -[SCLensDataProviderSimpleUpdater setStrategyContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd3394

// -[SCLensDataProviderSimpleUpdater registerDataProviderWithContextId:contextConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bd33a0

// -[SCLensDataProviderSimpleUpdater activateDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd33a8

// -[SCLensDataProviderSimpleUpdater deregisterDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd345c

// -[SCLensDataProviderSimpleUpdater _updatingStrategyForContextId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bd3464

// -[SCLensDataProviderSimpleUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bd35d0

@end
