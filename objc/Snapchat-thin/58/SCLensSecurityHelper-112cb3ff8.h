// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSecurityHelper
// Superclass: NSObject
// Address: 0x112cb3ff8

@interface SCLensSecurityHelper


// +[SCLensSecurityHelper sha256HashForData:length:]
// Type encoding: @32@0:8r^v16q24
// Implementation: 0x10b735730

// +[SCLensSecurityHelper hashStringForContentAtPath:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10b735800

// +[SCLensSecurityHelper directoryHashStringForContentAtPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b735998

// +[SCLensSecurityHelper verifyHash:forContentPath:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x10b735d74

// +[SCLensSecurityHelper verifyHash:forData:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x10b735ed4

// +[SCLensSecurityHelper checkResourceTypeMatches:resource:failureHandler:]
// Type encoding: B40@0:8q16@24@?32
// Implementation: 0x10b736010

@end
