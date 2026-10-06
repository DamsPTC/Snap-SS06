// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapTapToPlayLogger
// Superclass: NSObject
// Address: 0x112aac598

@interface SCMapTapToPlayLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapTapToPlayLogger initWithSession:mapLifecycleInfoProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f25388

// -[SCMapTapToPlayLogger didAttemptTTPAnywhereAtCoordinate:zoomLevel:result:]
// Type encoding: v48@0:8{CLLocationCoordinate2D=dd}16d32q40
// Implementation: 0x105f2541c

// -[SCMapTapToPlayLogger didAttemptPlayMapPoiWithIdentifier:coordinate:zoomLevel:result:initializationTimeTaken:]
// Type encoding: v64@0:8@16{CLLocationCoordinate2D=dd}24d40q48d56
// Implementation: 0x105f255a0

// -[SCMapTapToPlayLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f258a8

@end
