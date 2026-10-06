// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardGeoSignalManager
// Superclass: NSObject
// Address: 0x112b11a88

@interface SCBlizzardGeoSignalManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBlizzardGeoSignalManager initWithPrefs:metrics:timeProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1002643d0

// -[SCBlizzardGeoSignalManager currentGpsS2Token]
// Type encoding: @16@0:8
// Implementation: 0x1003e8d48

// -[SCBlizzardGeoSignalManager currentMcc]
// Type encoding: @16@0:8
// Implementation: 0x1003e9300

// -[SCBlizzardGeoSignalManager onGpsChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad6678

// -[SCBlizzardGeoSignalManager onMccChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad6848

// -[SCBlizzardGeoSignalManager shouldFreshPullGpsWithinIntervalHours:]
// Type encoding: B24@0:8q16
// Implementation: 0x106ad697c

// -[SCBlizzardGeoSignalManager shouldFreshPullMcc]
// Type encoding: B16@0:8
// Implementation: 0x106ad6a0c

// -[SCBlizzardGeoSignalManager clearCache]
// Type encoding: v16@0:8
// Implementation: 0x106ad6a84

// -[SCBlizzardGeoSignalManager _nowMs]
// Type encoding: q16@0:8
// Implementation: 0x106ad6ae0

// -[SCBlizzardGeoSignalManager _isWithin:nowMs:ttlMs:]
// Type encoding: B40@0:8q16q24q32
// Implementation: 0x106ad6b2c

// -[SCBlizzardGeoSignalManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad6b3c

@end
