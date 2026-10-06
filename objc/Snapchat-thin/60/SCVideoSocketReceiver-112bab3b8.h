// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoSocketReceiver
// Superclass: NSObject
// Address: 0x112bab3b8

@interface SCVideoSocketReceiver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoSocketReceiver initWithSocketFilename:dispatch:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108613d7c

// -[SCVideoSocketReceiver start:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108613f44

// -[SCVideoSocketReceiver stop]
// Type encoding: v16@0:8
// Implementation: 0x108613f4c

// -[SCVideoSocketReceiver _processIncomingMessage]
// Type encoding: v16@0:8
// Implementation: 0x108613f54

// -[SCVideoSocketReceiver _onDataError]
// Type encoding: v16@0:8
// Implementation: 0x108614124

// -[SCVideoSocketReceiver _sendAck:]
// Type encoding: v24@0:8q16
// Implementation: 0x108614160

// -[SCVideoSocketReceiver videoSocketServer:onData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1086141cc

// -[SCVideoSocketReceiver videoSocketServerConnected:]
// Type encoding: v24@0:8@16
// Implementation: 0x1086142f8

// -[SCVideoSocketReceiver videoSocketServerDisconnected:]
// Type encoding: v24@0:8@16
// Implementation: 0x108614334

// -[SCVideoSocketReceiver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108614370

@end
