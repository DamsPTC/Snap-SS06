// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppAttestRetrier
// Superclass: NSObject
// Address: 0x112a2c578

@interface SCAppAttestRetrier

// Property: retryTimer; attributes: T@"SCGCDBlockTimer",&,V_retryTimer

// -[SCAppAttestRetrier initWithBackoff:maxRetries:]
// Type encoding: @28@0:8d16I24
// Implementation: 0x105357eb8

// -[SCAppAttestRetrier retryBlock:onQueue:onMaximumRetries:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x105357f10

// -[SCAppAttestRetrier retryTimer]
// Type encoding: @16@0:8
// Implementation: 0x105357fbc

// -[SCAppAttestRetrier setRetryTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105357fc8

// -[SCAppAttestRetrier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105357fd0

@end
