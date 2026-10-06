// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: sc_async_queue_concrete
// Superclass: sc_async_queue
// Address: 0x112b72ba8

@interface sc_async_queue_concrete

// Property: _unsafeRawQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N
// Property: _queueLabel; attributes: T@"NSString",R,N
// Property: _queueID; attributes: TQ,R,N

// -[sc_async_queue_concrete isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b50e18

// -[sc_async_queue_concrete hash]
// Type encoding: Q16@0:8
// Implementation: 0x107b50e98

// -[sc_async_queue_concrete copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107b50ee8

// -[sc_async_queue_concrete _queueID]
// Type encoding: Q16@0:8
// Implementation: 0x107b50f0c

// -[sc_async_queue_concrete _queueLabel]
// Type encoding: @16@0:8
// Implementation: 0x107b50fc8

// -[sc_async_queue_concrete _unsafeRawQueue]
// Type encoding: @16@0:8
// Implementation: 0x107b51000

// -[sc_async_queue_concrete _initUnsafeWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100113eb0

// -[sc_async_queue_concrete _initWithLabel:qos:parent:mustUseFIFO:]
// Type encoding: @40@0:8@16I24@28B36
// Implementation: 0x100113ae0

// -[sc_async_queue_concrete _assertIsCurrentQueue]
// Type encoding: v16@0:8
// Implementation: 0x107b51030

// -[sc_async_queue_concrete _assertIsNotCurrentQueue]
// Type encoding: v16@0:8
// Implementation: 0x107b51034

// -[sc_async_queue_concrete _isCurrentQueue]
// Type encoding: B16@0:8
// Implementation: 0x107b51038

// -[sc_async_queue_concrete _withoutOverridingQoSAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100905768

// -[sc_async_queue_concrete _afterDelay:async:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x100a138e8

// -[sc_async_queue_concrete _ifCurrentQueueInvokeOtherwiseAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107b51084

// -[sc_async_queue_concrete _queueLocalObjectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b510e8

// -[sc_async_queue_concrete _setQueueLocalObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b51264

// -[sc_async_queue_concrete _removeQueueLocalObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b51334

// -[sc_async_queue_concrete _tracer]
// Type encoding: @16@0:8
// Implementation: 0x107b513e4

// -[sc_async_queue_concrete _setTracer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b51440

// -[sc_async_queue_concrete .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b514ac

// +[sc_async_queue_concrete _main]
// Type encoding: @16@0:8
// Implementation: 0x1004f22b4

@end
