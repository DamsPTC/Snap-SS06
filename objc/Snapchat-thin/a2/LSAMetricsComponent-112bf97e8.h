// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAMetricsComponent
// Superclass: LSABaseComponent
// Address: 0x112bf97e8

@interface LSAMetricsComponent

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAMetricsComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adaea00

// -[LSAMetricsComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10adaead4

// -[LSAMetricsComponent addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adaecc8

// -[LSAMetricsComponent removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adaecd8

// -[LSAMetricsComponent didReceiveMetrics:forLensId:]
// Type encoding: v176@0:8{LSAProfilingMetrics=ddddddddddddddddddB}16@168
// Implementation: 0x10adaece8

// -[LSAMetricsComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adaee70

// -[LSAMetricsComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adaeeec

@end
