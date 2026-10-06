// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAMetricsListenerAnnouncer
// Superclass: NSObject
// Address: 0x112bf9860

@interface LSAMetricsListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAMetricsListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10adaf168

// -[LSAMetricsListenerAnnouncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adaf348

// -[LSAMetricsListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adaf77c

// -[LSAMetricsListenerAnnouncer metricsComponent:didReceiveMetrics:forLensId:]
// Type encoding: v184@0:8@16{LSAProfilingMetrics=ddddddddddddddddddB}24@176
// Implementation: 0x10adaf9ac

// -[LSAMetricsListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adafb18

// -[LSAMetricsListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adafb40

@end
