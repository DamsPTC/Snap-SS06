// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCKeyService
// Superclass: NSObject
// Address: 0x112bc2428

@interface SCKeyService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCKeyService initWithProfile:networker:featureSettingsService:effects:userTrackedLogger:grapheneRegistry:performer:memoriesExperimentService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x108dde9c0

// -[SCKeyService addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ddec38

// -[SCKeyService removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ddec40

// -[SCKeyService requestAuthorizationWithPassphrase:queue:completionHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x108ddec48

// -[SCKeyService _requestWithAuthorizationRequestHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ddeedc

// -[SCKeyService _requestWithAuthorizationRequestHandlerWithPassphrase:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ddefcc

// -[SCKeyService masterKey]
// Type encoding: @16@0:8
// Implementation: 0x108ddf458

// -[SCKeyService allowedFutureAuthorizationDate]
// Type encoding: @16@0:8
// Implementation: 0x108ddf57c

// -[SCKeyService startFromKeychain]
// Type encoding: v16@0:8
// Implementation: 0x108ddf694

// -[SCKeyService requestMasterKeyWithOptions:queue:completionHandler:]
// Type encoding: @40@0:8Q16@24@?32
// Implementation: 0x108ddf6f4

// -[SCKeyService setMasterKeyWithPassphrase:isUpdateOperation:queue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x108ddfb8c

// -[SCKeyService isPersistedKeyPresent:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108ddfec4

// -[SCKeyService removeMasterKeyRequestForUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ddff70

// -[SCKeyService removeAuthorizationRequestForUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de00b8

// -[SCKeyService cancelPromptForMasterKeyRequestUUIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de01e8

// -[SCKeyService _deliverWhenMasterKeyAvailable]
// Type encoding: v16@0:8
// Implementation: 0x108de0370

// -[SCKeyService _deliverErrorForPassphraseAuth:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de04f8

// -[SCKeyService _retrieveMasterKeyFromRemoteWithPassprhase:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108de0658

// -[SCKeyService _retrieveMasterKeyWithKeyService:passprhase:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108de082c

// -[SCKeyService _registerMasterKeyWithKeyService:passprhase:isUpdateOperation:queue:completionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x108de16e0

// -[SCKeyService _requestAssertionForPurpose:successHandler:failureHandler:retryCount:]
// Type encoding: v48@0:8q16@?24@?32Q40
// Implementation: 0x108de21d8

// -[SCKeyService _allowedFutureDateFromServer:]
// Type encoding: @24@0:8@16
// Implementation: 0x108de2b1c

// -[SCKeyService _isAuthorizationAttemptAllowed]
// Type encoding: B16@0:8
// Implementation: 0x108de2bc4

// -[SCKeyService _announceEmptyAllowedFutureAuthorizationDate]
// Type encoding: v16@0:8
// Implementation: 0x108de2c2c

// -[SCKeyService _decideAttemptTimeByCOFWithCurrentAttempt:]
// Type encoding: @24@0:8q16
// Implementation: 0x108de2cb4

// -[SCKeyService _trackFailedAuthorizationAttemptWithAllowedFutureDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de2cd4

// -[SCKeyService resetRateLimit]
// Type encoding: v16@0:8
// Implementation: 0x108de2f30

// -[SCKeyService _startFromKeychainOnce]
// Type encoding: v16@0:8
// Implementation: 0x108de2fb0

// -[SCKeyService _retrievePersistedKeyFromKeychain]
// Type encoding: B16@0:8
// Implementation: 0x108de2ff8

// -[SCKeyService _removePersistedKeyFromKeychain]
// Type encoding: v16@0:8
// Implementation: 0x108de31c4

// -[SCKeyService _setPersistedKeyIntoKeychain]
// Type encoding: v16@0:8
// Implementation: 0x108de31fc

// -[SCKeyService _retrieveAuthorizationAttemptFromKeychain]
// Type encoding: v16@0:8
// Implementation: 0x108de3258

// -[SCKeyService _removeAuthorizationAttemptFromKeychain]
// Type encoding: v16@0:8
// Implementation: 0x108de3390

// -[SCKeyService _setAuthorizationAttemptIntoKeychain]
// Type encoding: v16@0:8
// Implementation: 0x108de33c8

// -[SCKeyService requestMeoAssertionWithPurpose:completionHandler:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x108de3424

// -[SCKeyService retrieveMeoKeyWithAssertion:auth:signedNonce:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108de3690

// -[SCKeyService registerMeoKeyWithAssertion:auth:key:keyType:operation:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x108de3aa4

// -[SCKeyService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108de3e0c

@end
