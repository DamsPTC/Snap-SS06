// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GIDSignInInternalOptions
// Superclass: NSObject
// Address: 0x1129eda08

@interface GIDSignInInternalOptions

// Property: interactive; attributes: TB,R,N,V_interactive
// Property: continuation; attributes: TB,R,N,V_continuation
// Property: addScopesFlow; attributes: TB,R,N,V_addScopesFlow
// Property: extraParams; attributes: T@"NSDictionary",R,N,V_extraParams
// Property: configuration; attributes: T@"GIDConfiguration",R,N,V_configuration
// Property: presentingViewController; attributes: T@"UIViewController",R,W,N,V_presentingViewController
// Property: completion; attributes: T@?,R,N,V_completion
// Property: scopes; attributes: T@"NSArray",C,N,V_scopes
// Property: loginHint; attributes: T@"NSString",C,N,V_loginHint

// -[GIDSignInInternalOptions optionsWithExtraParameters:forContinuation:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104a6de54

// -[GIDSignInInternalOptions interactive]
// Type encoding: B16@0:8
// Implementation: 0x104a6df30

// -[GIDSignInInternalOptions continuation]
// Type encoding: B16@0:8
// Implementation: 0x104a6df38

// -[GIDSignInInternalOptions addScopesFlow]
// Type encoding: B16@0:8
// Implementation: 0x104a6df40

// -[GIDSignInInternalOptions extraParams]
// Type encoding: @16@0:8
// Implementation: 0x104a6df48

// -[GIDSignInInternalOptions configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a6df50

// -[GIDSignInInternalOptions presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x104a6df58

// -[GIDSignInInternalOptions completion]
// Type encoding: @?16@0:8
// Implementation: 0x104a6df70

// -[GIDSignInInternalOptions scopes]
// Type encoding: @16@0:8
// Implementation: 0x104a6df78

// -[GIDSignInInternalOptions setScopes:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6df80

// -[GIDSignInInternalOptions loginHint]
// Type encoding: @16@0:8
// Implementation: 0x104a6df88

// -[GIDSignInInternalOptions setLoginHint:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a6df90

// -[GIDSignInInternalOptions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a6df98

// +[GIDSignInInternalOptions defaultOptionsWithConfiguration:presentingViewController:loginHint:addScopesFlow:scopes:completion:]
// Type encoding: @60@0:8@16@24@32B40@44@?52
// Implementation: 0x104a6dcd8

// +[GIDSignInInternalOptions defaultOptionsWithConfiguration:presentingViewController:loginHint:addScopesFlow:completion:]
// Type encoding: @52@0:8@16@24@32B40@?44
// Implementation: 0x104a6de14

// +[GIDSignInInternalOptions silentOptionsWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104a6de24

@end
