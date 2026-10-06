// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GIDSignIn
// Superclass: NSObject
// Address: 0x1129ed918

@interface GIDSignIn

// Property: currentUser; attributes: T@"GIDGoogleUser",&,N,V_currentUser
// Property: configuration; attributes: T@"GIDConfiguration",&,N,V_configuration

// -[GIDSignIn handleURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a68fb4

// -[GIDSignIn hasPreviousSignIn]
// Type encoding: B16@0:8
// Implementation: 0x104a69088

// -[GIDSignIn restorePreviousSignInWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a69104

// -[GIDSignIn restorePreviousSignInNoRefresh]
// Type encoding: B16@0:8
// Implementation: 0x104a69254

// -[GIDSignIn signInWithPresentingViewController:hint:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a69364

// -[GIDSignIn signInWithPresentingViewController:hint:additionalScopes:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a693bc

// -[GIDSignIn signInWithPresentingViewController:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a69418

// -[GIDSignIn addScopes:presentingViewController:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a69424

// -[GIDSignIn signOut]
// Type encoding: v16@0:8
// Implementation: 0x104a696e4

// -[GIDSignIn disconnectWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a69718

// -[GIDSignIn initWithKeychainStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x10097a12c

// -[GIDSignIn initPrivate]
// Type encoding: @16@0:8
// Implementation: 0x100979d34

// -[GIDSignIn signInWithOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a69aa8

// -[GIDSignIn authenticateInteractivelyWithOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a69dc4

// -[GIDSignIn processAuthorizationResponse:error:emmSupport:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a6a28c

// -[GIDSignIn authenticateWithOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6a57c

// -[GIDSignIn maybeFetchToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6a74c

// -[GIDSignIn addSaveAuthCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6ad28

// -[GIDSignIn addDecodeIdTokenCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6af70

// -[GIDSignIn addCompletionCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6b4b4

// -[GIDSignIn startFetchURL:fromAuthState:withComment:withCompletionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a6b7a0

// -[GIDSignIn handleDevicePolicyAppURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a6b8d4

// -[GIDSignIn errorWithString:code:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x104a6bb1c

// -[GIDSignIn assertValidParameters]
// Type encoding: v16@0:8
// Implementation: 0x104a6bc74

// -[GIDSignIn assertValidPresentingViewController]
// Type encoding: v16@0:8
// Implementation: 0x104a6bd00

// -[GIDSignIn isFreshInstall]
// Type encoding: B16@0:8
// Implementation: 0x10097a624

// -[GIDSignIn removeAllKeychainEntries]
// Type encoding: v16@0:8
// Implementation: 0x104a6bd5c

// -[GIDSignIn saveAuthState:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a6bd68

// -[GIDSignIn loadAuthState]
// Type encoding: @16@0:8
// Implementation: 0x104a6bdf0

// -[GIDSignIn profileDataWithIDToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a6be3c

// -[GIDSignIn currentUser]
// Type encoding: @16@0:8
// Implementation: 0x104a6c12c

// -[GIDSignIn setCurrentUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6c134

// -[GIDSignIn configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a6c140

// -[GIDSignIn setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6c148

// -[GIDSignIn .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a6c154

// +[GIDSignIn sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x100979c94

// +[GIDSignIn isOperatingSystemAtLeast9]
// Type encoding: B16@0:8
// Implementation: 0x104a6bbfc

// +[GIDSignIn configValueFromBundle:forKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10097a4a0

// +[GIDSignIn configurationFromBundle:]
// Type encoding: @24@0:8@16
// Implementation: 0x10097a388

@end
