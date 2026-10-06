// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSSignalManager
// Superclass: NSObject
// Address: 0x112b75a38

@interface SCRTUSSignalManager


// -[SCRTUSSignalManager initWithRTUSClientCacheManager:rtusConfigProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107c12510

// -[SCRTUSSignalManager getRTUSSignalForRTUSProduct:mixerEndpointSource:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x107c12738

// -[SCRTUSSignalManager _assertActualProductSameAsExpectedProduct:mixerEndpointSource:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107c1277c

// -[SCRTUSSignalManager purgeRTUSEventsForRTUSProduct:rtusResponse:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107c128e4

// -[SCRTUSSignalManager getRTUSEnabledProductFromFeedTypes:]
// Type encoding: q24@0:8@16
// Implementation: 0x107c1294c

// -[SCRTUSSignalManager shouldIncludeInteractionHistory:]
// Type encoding: B24@0:8q16
// Implementation: 0x107c12b5c

// -[SCRTUSSignalManager _getRTUSForProduct:]
// Type encoding: @24@0:8q16
// Implementation: 0x107c12b64

// -[SCRTUSSignalManager _getRtusProductIntFromFeedTypeNumber:]
// Type encoding: q24@0:8@16
// Implementation: 0x107c12c08

// -[SCRTUSSignalManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c12c48

@end
