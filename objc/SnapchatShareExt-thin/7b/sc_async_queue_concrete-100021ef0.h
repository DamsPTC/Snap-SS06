// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: sc_async_queue_concrete
// Superclass: sc_async_queue
// Address: 0x100021ef0

@interface sc_async_queue_concrete

// Property: _unsafeRawQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N
// Property: _queueLabel; attributes: T@"NSString",R,N
// Property: _queueID; attributes: TQ,R,N

// -[sc_async_queue_concrete isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x100015c34

// -[sc_async_queue_concrete hash]
// Type encoding: Q16@0:8
// Implementation: 0x100015cb4

// -[sc_async_queue_concrete copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x100015d04

// -[sc_async_queue_concrete _queueID]
// Type encoding: Q16@0:8
// Implementation: 0x100015db4

// -[sc_async_queue_concrete _queueLabel]
// Type encoding: @16@0:8
// Implementation: 0x100015e70

// -[sc_async_queue_concrete _unsafeRawQueue]
// Type encoding: @16@0:8
// Implementation: 0x100015ea8

// -[sc_async_queue_concrete _initUnsafeWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100015ed8

// -[sc_async_queue_concrete _initWithLabel:qos:parent:mustUseFIFO:]
// Type encoding: @40@0:8@16I24@28B36
// Implementation: 0x100015f5c

// -[sc_async_queue_concrete _assertIsCurrentQueue]
// Type encoding: v16@0:8
// Implementation: 0x1000160a4

// -[sc_async_queue_concrete _assertIsNotCurrentQueue]
// Type encoding: v16@0:8
// Implementation: 0x1000160a8

// -[sc_async_queue_concrete _isCurrentQueue]
// Type encoding: B16@0:8
// Implementation: 0x1000160ac

// -[sc_async_queue_concrete _withoutOverridingQoSAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1000160f8

// -[sc_async_queue_concrete _afterDelay:async:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x10001610c

// -[sc_async_queue_concrete _ifCurrentQueueInvokeOtherwiseAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100016170

// -[sc_async_queue_concrete _queueLocalObjectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000161d4

// -[sc_async_queue_concrete _setQueueLocalObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100016350

// -[sc_async_queue_concrete _removeQueueLocalObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x100016420

// -[sc_async_queue_concrete _tracer]
// Type encoding: @16@0:8
// Implementation: 0x1000164d0

// -[sc_async_queue_concrete _setTracer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10001652c

// -[sc_async_queue_concrete .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100016598

// +[sc_async_queue_concrete _main]
// Type encoding: @16@0:8
// Implementation: 0x100015d28

@end
