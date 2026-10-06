// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDAuthorizationSession
// Superclass: NSObject
// Address: 0x1129ecac8

@interface OIDAuthorizationSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[OIDAuthorizationSession initWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a384ec

// -[OIDAuthorizationSession presentAuthorizationWithExternalUserAgent:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a38564

// -[OIDAuthorizationSession cancel]
// Type encoding: v16@0:8
// Implementation: 0x104a38624

// -[OIDAuthorizationSession cancelWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a3862c

// -[OIDAuthorizationSession shouldHandleURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a38b58

// -[OIDAuthorizationSession resumeExternalUserAgentFlowWithURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a38bd0

// -[OIDAuthorizationSession failExternalUserAgentFlowWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a38f84

// -[OIDAuthorizationSession didFinishWithResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a38f90

// -[OIDAuthorizationSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a39020

// +[OIDAuthorizationSession URL:matchesRedirectionURL:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104a3871c

@end
