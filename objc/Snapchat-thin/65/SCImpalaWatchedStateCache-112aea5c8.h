// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaWatchedStateCache
// Superclass: NSObject
// Address: 0x112aea5c8

@interface SCImpalaWatchedStateCache

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaWatchedStateCache initWithUserSession:readReceiptCoordinator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10662403c

// -[SCImpalaWatchedStateCache syncItemsWithItems:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106624140

// -[SCImpalaWatchedStateCache _syncItemsFromReadReceiptWatchStatesOnPerformer:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106624274

// -[SCImpalaWatchedStateCache observeWithCallback:]
// Type encoding: @24@0:8@?16
// Implementation: 0x106624da8

// -[SCImpalaWatchedStateCache pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106625044

// -[SCImpalaWatchedStateCache userSession]
// Type encoding: @16@0:8
// Implementation: 0x106625050

// -[SCImpalaWatchedStateCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106625068

@end
