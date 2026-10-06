// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerDuplexClient
// Superclass: NSObject
// Address: 0x112a2e148

@interface SCComposerDuplexClient

// Property: isConnectedObservable; attributes: T@"SCBridgeObservable",&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerDuplexClient isConnectedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1053866cc

// -[SCComposerDuplexClient setIsConnectedObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053866d4

// -[SCComposerDuplexClient initWithDuplexClient:taskManagementServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053866d8

// -[SCComposerDuplexClient registerHandlerWithPath:handler:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105386a80

// -[SCComposerDuplexClient sendWithPath:message:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105386b60

// -[SCComposerDuplexClient callParticipationChangedWithIsCalling:]
// Type encoding: v20@0:8B16
// Implementation: 0x105386c3c

// -[SCComposerDuplexClient pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105386c78

// -[SCComposerDuplexClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105386c84

@end
