// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPageLoadSubMetric
// Superclass: NSObject
// Address: 0x112adc568

@interface SCPageLoadSubMetric


// -[SCPageLoadSubMetric copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1063751a4

// -[SCPageLoadSubMetric hash]
// Type encoding: Q16@0:8
// Implementation: 0x1063751c8

// -[SCPageLoadSubMetric internalInit]
// Type encoding: @16@0:8
// Implementation: 0x106375298

// -[SCPageLoadSubMetric isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063752dc

// -[SCPageLoadSubMetric matchDataLoad:pageInject:viewInitToLoad:viewModelCreation:userActionToRender:section:]
// Type encoding: v64@0:8@?16@?24@?32@?40@?48@?56
// Implementation: 0x10637541c

// -[SCPageLoadSubMetric .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10637558c

// +[SCPageLoadSubMetric dataLoadWithLatencyInMicroseconds:beforeUserAction:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x106374f4c

// +[SCPageLoadSubMetric pageInjectWithLatencyInMicroseconds:beforeUserAction:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x106374fa8

// +[SCPageLoadSubMetric sectionWithSectionName:latencyInMicroseconds:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10637500c

// +[SCPageLoadSubMetric userActionToRenderWithLatencyInMicroseconds:]
// Type encoding: @24@0:8q16
// Implementation: 0x106375080

// +[SCPageLoadSubMetric viewInitToLoadWithLatencyInMicroseconds:beforeUserAction:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x1063750dc

// +[SCPageLoadSubMetric viewModelCreationWithLatencyInMicroseconds:beforeUserAction:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x106375140

@end
