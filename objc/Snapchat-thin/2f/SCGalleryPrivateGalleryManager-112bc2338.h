// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryPrivateGalleryManager
// Superclass: NSObject
// Address: 0x112bc2338

@interface SCGalleryPrivateGalleryManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryPrivateGalleryManager initWithKeyService:featureSettingsService:coreConfigProvider:userTrackedLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108ddd8b8

// -[SCGalleryPrivateGalleryManager isPrivateGalleryTopSecret]
// Type encoding: B16@0:8
// Implementation: 0x108ddda08

// -[SCGalleryPrivateGalleryManager isPrivateGalleryUnlocked]
// Type encoding: B16@0:8
// Implementation: 0x108ddda84

// -[SCGalleryPrivateGalleryManager setPrivateGalleryWithPassphrase:isUpdateOperation:completionHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x108ddda8c

// -[SCGalleryPrivateGalleryManager lockPrivateGallery]
// Type encoding: v16@0:8
// Implementation: 0x108dddda4

// -[SCGalleryPrivateGalleryManager unlockPrivateGalleryWithPassphrase:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108ddde1c

// -[SCGalleryPrivateGalleryManager allowedFutureAuthorizationDate]
// Type encoding: @16@0:8
// Implementation: 0x108ddde20

// -[SCGalleryPrivateGalleryManager requestAuthorizationWithPassphrase:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108ddde68

// -[SCGalleryPrivateGalleryManager stateObservable]
// Type encoding: @16@0:8
// Implementation: 0x108dde08c

// -[SCGalleryPrivateGalleryManager isPassphraseForTopSecret:]
// Type encoding: B24@0:8@16
// Implementation: 0x108dde0b4

// -[SCGalleryPrivateGalleryManager _updatePrivateGalleryEnabledAndTopSecret:completionBlock:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x108dde0d4

// -[SCGalleryPrivateGalleryManager _fireLogForFeatureSettingUpdateIfNeeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108dde254

// -[SCGalleryPrivateGalleryManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108dde2ec

@end
