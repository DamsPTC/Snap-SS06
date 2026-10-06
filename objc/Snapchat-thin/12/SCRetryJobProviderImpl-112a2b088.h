// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRetryJobProviderImpl
// Superclass: NSObject
// Address: 0x112a2b088

@interface SCRetryJobProviderImpl

// Property: retryJobProcessors; attributes: T@"NSMapTable",&,N,V_retryJobProcessors
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRetryJobProviderImpl initWithSystemJobScheduler:]
// Type encoding: @24@0:8@16
// Implementation: 0x105325e78

// -[SCRetryJobProviderImpl processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x105325f50

// -[SCRetryJobProviderImpl submitJob:jobProcessor:jobConfig:autoCancel:retryJobType:]
// Type encoding: @48@0:8@16@24@32B40i44
// Implementation: 0x105326154

// -[SCRetryJobProviderImpl deleteJobWithJobConfig:jobData:jobDeletionReason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105326388

// -[SCRetryJobProviderImpl cancelRetryJob:]
// Type encoding: v24@0:8@16
// Implementation: 0x105326538

// -[SCRetryJobProviderImpl retryJobProcessors]
// Type encoding: @16@0:8
// Implementation: 0x10532660c

// -[SCRetryJobProviderImpl setRetryJobProcessors:]
// Type encoding: v24@0:8@16
// Implementation: 0x105326614

// -[SCRetryJobProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105326644

@end
