// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDAuthorizationService
// Superclass: NSObject
// Address: 0x1129ecb90

@interface OIDAuthorizationService

// Property: configuration; attributes: T@"OIDServiceConfiguration",R,N,V_configuration

// -[OIDAuthorizationService configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a3b498

// -[OIDAuthorizationService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a3b4a0

// +[OIDAuthorizationService presentAuthorizationRequest:presentingViewController:callback:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x104a3e6bc

// +[OIDAuthorizationService presentAuthorizationRequest:presentingViewController:prefersEphemeralSession:callback:]
// Type encoding: @44@0:8@16@24B32@?36
// Implementation: 0x104a3e774

// +[OIDAuthorizationService discoverServiceConfigurationForIssuer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a396fc

// +[OIDAuthorizationService discoverServiceConfigurationForDiscoveryURL:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a3976c

// +[OIDAuthorizationService presentAuthorizationRequest:externalUserAgent:callback:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x104a39c7c

// +[OIDAuthorizationService presentEndSessionRequest:externalUserAgent:callback:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x104a39d10

// +[OIDAuthorizationService performTokenRequest:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a39da4

// +[OIDAuthorizationService performTokenRequest:originalAuthorizationResponse:callback:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a39e08

// +[OIDAuthorizationService performRegistrationRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a3ac64

@end
