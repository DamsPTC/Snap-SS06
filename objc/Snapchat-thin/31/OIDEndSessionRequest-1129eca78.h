// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: OIDEndSessionRequest
// Superclass: NSObject
// Address: 0x1129eca78

@interface OIDEndSessionRequest

// Property: configuration; attributes: T@"OIDServiceConfiguration",R,N,V_configuration
// Property: postLogoutRedirectURL; attributes: T@"NSURL",R,N,V_postLogoutRedirectURL
// Property: idTokenHint; attributes: T@"NSString",R,N,V_idTokenHint
// Property: state; attributes: T@"NSString",R,N,V_state
// Property: additionalParameters; attributes: T@"NSDictionary",R,N,V_additionalParameters

// -[OIDEndSessionRequest init]
// Type encoding: @16@0:8
// Implementation: 0x104a37d68

// -[OIDEndSessionRequest initWithConfiguration:idTokenHint:postLogoutRedirectURL:state:additionalParameters:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104a37e0c

// -[OIDEndSessionRequest initWithConfiguration:idTokenHint:postLogoutRedirectURL:additionalParameters:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104a37f6c

// -[OIDEndSessionRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a38038

// -[OIDEndSessionRequest initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a38044

// -[OIDEndSessionRequest encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a38248

// -[OIDEndSessionRequest description]
// Type encoding: @16@0:8
// Implementation: 0x104a382e0

// -[OIDEndSessionRequest externalUserAgentRequestURL]
// Type encoding: @16@0:8
// Implementation: 0x104a38384

// -[OIDEndSessionRequest redirectScheme]
// Type encoding: @16@0:8
// Implementation: 0x104a38388

// -[OIDEndSessionRequest endSessionRequestURL]
// Type encoding: @16@0:8
// Implementation: 0x104a38390

// -[OIDEndSessionRequest configuration]
// Type encoding: @16@0:8
// Implementation: 0x104a38470

// -[OIDEndSessionRequest postLogoutRedirectURL]
// Type encoding: @16@0:8
// Implementation: 0x104a38478

// -[OIDEndSessionRequest idTokenHint]
// Type encoding: @16@0:8
// Implementation: 0x104a38480

// -[OIDEndSessionRequest state]
// Type encoding: @16@0:8
// Implementation: 0x104a38488

// -[OIDEndSessionRequest additionalParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a38490

// -[OIDEndSessionRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a38498

// +[OIDEndSessionRequest supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a3803c

// +[OIDEndSessionRequest generateState]
// Type encoding: @16@0:8
// Implementation: 0x104a38374

@end
