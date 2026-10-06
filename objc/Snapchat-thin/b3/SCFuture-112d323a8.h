// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFuture
// Superclass: NSObject
// Address: 0x112d323a8

@interface SCFuture


// -[SCFuture map:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcbdcc8

// -[SCFuture flatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcbde98

// -[SCFuture map:performer:]
// Type encoding: @32@0:8@?16@24
// Implementation: 0x10aee9520

// -[SCFuture flatMap:performer:]
// Type encoding: @32@0:8@?16@24
// Implementation: 0x10aee9640

// -[SCFuture mapToResultFutureWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aee9844

// -[SCFuture mapFromResultFutureWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aee9960

// -[SCFuture _performChainedBlock:performer:]
// Type encoding: @32@0:8@?16@24
// Implementation: 0x10aee9b48

// -[SCFuture mapAsync:]
// Type encoding: @24@0:8@?16
// Implementation: 0x105f6fca4

// -[SCFuture _init]
// Type encoding: @16@0:8
// Implementation: 0x1000e6ae4

// -[SCFuture _completeWithItem:tag:assertIfAlreadyCompleted:]
// Type encoding: v32@0:8@16C24B28
// Implementation: 0x1004705fc

// -[SCFuture _completeWithValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004705f0

// -[SCFuture _completeWithValue:ignoreRedundantCompletions:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1005d15f0

// -[SCFuture _completeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcbe528

// -[SCFuture _completeWithError:ignoreRedundantCompletions:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10bcbe534

// -[SCFuture _failIfIncomplete]
// Type encoding: v16@0:8
// Implementation: 0x10060902c

// -[SCFuture copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10bcbe540

// -[SCFuture valueWithCompletion:performer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1004ff2fc

// -[SCFuture valueWithCompletion:performer:preferSynchronous:]
// Type encoding: v36@0:8@?16@24B32
// Implementation: 0x10041fa50

// -[SCFuture .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100638480

// -[SCFuture .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1000e6ad8

// +[SCFuture all:]
// Type encoding: @24@0:8@16
// Implementation: 0x1007704d8

// +[SCFuture _generateInvalidParameterError]
// Type encoding: @16@0:8
// Implementation: 0x10aee9d74

// +[SCFuture _generateNilResultError]
// Type encoding: @16@0:8
// Implementation: 0x10aee9d90

// +[SCFuture immediateFutureWithValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100470578

// +[SCFuture immediateFutureWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bcbe564

@end
