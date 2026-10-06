// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInfoCardHTTPRequestManager
// Superclass: NSObject
// Address: 0x112ad2c48

@interface SCLensInfoCardHTTPRequestManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensInfoCardHTTPRequestManager initWithLensInfoCardNetworkConfig:metadataService:requestModifier:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100bcad64

// -[SCLensInfoCardHTTPRequestManager submitLensInfoCardRequestWithLensIds:contexts:successBlock:failureBlock:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x1061ef434

// -[SCLensInfoCardHTTPRequestManager submitLensInfoCardRequestWithLensId:lensSource:contexts:successBlock:failureBlock:]
// Type encoding: v56@0:8@16Q24Q32@?40@?48
// Implementation: 0x1061ef5b4

// -[SCLensInfoCardHTTPRequestManager _submitRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1061ef798

// -[SCLensInfoCardHTTPRequestManager _unlockablesIdsFromLensIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061efa84

// -[SCLensInfoCardHTTPRequestManager _httpRequestWithUnlockableIds:contexts:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1061efba8

// -[SCLensInfoCardHTTPRequestManager _httpRequestWithUnlockableIds:lensSource:contexts:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x1061efc40

// -[SCLensInfoCardHTTPRequestManager _httpRequestWithInfoCardRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061efd00

// -[SCLensInfoCardHTTPRequestManager _httpContext]
// Type encoding: @16@0:8
// Implementation: 0x1061eff60

// -[SCLensInfoCardHTTPRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061f00fc

// +[SCLensInfoCardHTTPRequestManager _sendError:withFailureBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1061f001c

// +[SCLensInfoCardHTTPRequestManager _serveInfoCardCarouselLensSourceFromLensSource:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1061f0038

// +[SCLensInfoCardHTTPRequestManager _fillContextsEnumArray:contextsArray:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1061f005c

@end
