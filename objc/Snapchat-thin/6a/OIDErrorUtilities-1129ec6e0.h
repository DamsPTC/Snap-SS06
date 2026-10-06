// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDErrorUtilities
// Superclass: NSObject
// Address: 0x1129ec6e0

@interface OIDErrorUtilities


// +[OIDErrorUtilities errorWithCode:underlyingError:description:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x104a31224

// +[OIDErrorUtilities isOAuthErrorDomain:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a312fc

// +[OIDErrorUtilities resourceServerAuthorizationErrorWithCode:errorResponse:underlyingError:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x104a31340

// +[OIDErrorUtilities OAuthErrorWithDomain:OAuthResponse:underlyingError:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a31418

// +[OIDErrorUtilities HTTPErrorWithHTTPResponse:data:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a317cc

// +[OIDErrorUtilities OAuthErrorCodeFromString:]
// Type encoding: q24@0:8@16
// Implementation: 0x104a318c4

// +[OIDErrorUtilities raiseException:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a31918

// +[OIDErrorUtilities raiseException:message:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a31958

@end
