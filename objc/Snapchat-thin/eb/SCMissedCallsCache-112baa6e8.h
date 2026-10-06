// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMissedCallsCache
// Superclass: NSObject
// Address: 0x112baa6e8

@interface SCMissedCallsCache

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMissedCallsCache initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x108600c18

// -[SCMissedCallsCache getReasonForCallUuid:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108600ca0

// -[SCMissedCallsCache setReason:forCallUuid:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108600f6c

// -[SCMissedCallsCache _reasonFromSCMissedCallReason:]
// Type encoding: c24@0:8Q16
// Implementation: 0x1086011b8

// -[SCMissedCallsCache _reasonFromSCTalkMissedCallReason:]
// Type encoding: Q20@0:8c16
// Implementation: 0x1086011d0

// -[SCMissedCallsCache _getExpirationDate]
// Type encoding: @16@0:8
// Implementation: 0x1086011e8

// -[SCMissedCallsCache _deleteExpiredMissedCallsWithTransactionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1086012c8

// -[SCMissedCallsCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108601660

@end
