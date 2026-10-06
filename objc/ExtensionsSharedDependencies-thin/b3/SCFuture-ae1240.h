// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFuture
// Superclass: NSObject
// Address: 0xae1240

@interface SCFuture


// -[SCFuture map:]
// Type encoding: @24@0:8@?16
// Implementation: 0x61fc18

// -[SCFuture flatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x61fde8

// -[SCFuture _init]
// Type encoding: @16@0:8
// Implementation: 0x6205c0

// -[SCFuture _completeWithItem:tag:assertIfAlreadyCompleted:]
// Type encoding: v32@0:8@16C24B28
// Implementation: 0x6205fc

// -[SCFuture _completeWithValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x620910

// -[SCFuture _completeWithValue:ignoreRedundantCompletions:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x62091c

// -[SCFuture _completeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x620928

// -[SCFuture _completeWithError:ignoreRedundantCompletions:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x620934

// -[SCFuture _failIfIncomplete]
// Type encoding: v16@0:8
// Implementation: 0x620940

// -[SCFuture copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x6209b0

// -[SCFuture valueWithCompletion:performer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x620ac4

// -[SCFuture valueWithCompletion:performer:preferSynchronous:]
// Type encoding: v36@0:8@?16@24B32
// Implementation: 0x620acc

// -[SCFuture .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x620da8

// -[SCFuture .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x620dd4

// +[SCFuture all:]
// Type encoding: @24@0:8@16
// Implementation: 0x61f83c

// +[SCFuture immediateFutureWithValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x6209d4

// +[SCFuture immediateFutureWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x620a4c

@end
