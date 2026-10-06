// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraLensesInteractor
// Superclass: NSObject
// Address: 0x112bf3a78

@interface SCCameraLensesInteractor

// Property: currentLensDataProvider; attributes: T@"<SCLensCameraScreenDataProviderProtocol>",R,N
// Property: cameraViewType; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraLensesInteractor initWithLensDataProviderRegistry:cameraCapturerStateUpdatesProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1007fc4c0

// -[SCCameraLensesInteractor currentLensDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1007fd130

// -[SCCameraLensesInteractor updateLensDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d1a48

// -[SCCameraLensesInteractor updateLensDataProviderWithCameraType:bitmojiLinked:friendBitmojiLinked:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x1007fe000

// -[SCCameraLensesInteractor updateLensDataProviderWithLensesObservable:activationConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091d1a50

// -[SCCameraLensesInteractor updateLensDataProviderWithCameraType:activationConfiguration:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1091d1a58

// -[SCCameraLensesInteractor contextConfigWithContextId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091d1a60

// -[SCCameraLensesInteractor registerDataProviderWithContextId:contextConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091d1a68

// -[SCCameraLensesInteractor canDeregisterDataProviderWithContextId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091d1a70

// -[SCCameraLensesInteractor activateDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d1a78

// -[SCCameraLensesInteractor deregisterDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d1a80

// -[SCCameraLensesInteractor cameraViewType]
// Type encoding: q16@0:8
// Implementation: 0x1091d1a88

// -[SCCameraLensesInteractor addUpdateListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091d1a90

// -[SCCameraLensesInteractor removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d1a98

// -[SCCameraLensesInteractor _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x1007fcfd0

// -[SCCameraLensesInteractor _lensDataProviderCameraPositionFromDevicePosition:]
// Type encoding: q24@0:8q16
// Implementation: 0x1007fd160

// -[SCCameraLensesInteractor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091d1aa0

@end
