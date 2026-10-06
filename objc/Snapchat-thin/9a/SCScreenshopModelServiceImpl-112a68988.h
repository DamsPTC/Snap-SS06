// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScreenshopModelServiceImpl
// Superclass: NSObject
// Address: 0x112a68988

@interface SCScreenshopModelServiceImpl

// Property: fashionThreshold; attributes: Tf,R,N

// -[SCScreenshopModelServiceImpl initWithCommerceConfigProvider:mlModelProvider:applicationLifecycleEvents:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057a4c44

// -[SCScreenshopModelServiceImpl fashionThreshold]
// Type encoding: f16@0:8
// Implementation: 0x1057a4d80

// -[SCScreenshopModelServiceImpl checkForFashionWithImage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057a4dc4

// -[SCScreenshopModelServiceImpl getDownloadModelLatency]
// Type encoding: @16@0:8
// Implementation: 0x1057a4ef8

// -[SCScreenshopModelServiceImpl getDownloadModelStatus]
// Type encoding: Q16@0:8
// Implementation: 0x1057a4f30

// -[SCScreenshopModelServiceImpl _paddedImageFromImage:scaledToSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1057a4f44

// -[SCScreenshopModelServiceImpl _checkForFashionWithImage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057a5034

// -[SCScreenshopModelServiceImpl _destroyModelExpirationTimer]
// Type encoding: v16@0:8
// Implementation: 0x1057a54f0

// -[SCScreenshopModelServiceImpl _safelyDestroyModelExpirationTimer]
// Type encoding: v16@0:8
// Implementation: 0x1057a551c

// -[SCScreenshopModelServiceImpl _startModelExpirationTimer]
// Type encoding: v16@0:8
// Implementation: 0x1057a55d0

// -[SCScreenshopModelServiceImpl _createModelExpirationTimer]
// Type encoding: v16@0:8
// Implementation: 0x1057a5684

// -[SCScreenshopModelServiceImpl _startObservingAppLifecycle]
// Type encoding: v16@0:8
// Implementation: 0x1057a57a8

// -[SCScreenshopModelServiceImpl _respondToModelExpirationTimer]
// Type encoding: v16@0:8
// Implementation: 0x1057a58dc

// -[SCScreenshopModelServiceImpl _respondToMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x1057a59b4

// -[SCScreenshopModelServiceImpl _finishModelExpirationTimerExecution]
// Type encoding: v16@0:8
// Implementation: 0x1057a5a8c

// -[SCScreenshopModelServiceImpl _finishMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x1057a5a9c

// -[SCScreenshopModelServiceImpl _canContinueProcessing]
// Type encoding: B16@0:8
// Implementation: 0x1057a5ae4

// -[SCScreenshopModelServiceImpl _vendFashionModelInfo]
// Type encoding: @16@0:8
// Implementation: 0x1057a5b6c

// -[SCScreenshopModelServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057a5c18

@end
