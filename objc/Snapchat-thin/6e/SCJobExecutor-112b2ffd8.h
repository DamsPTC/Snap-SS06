// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCJobExecutor
// Superclass: NSObject
// Address: 0x112b2ffd8

@interface SCJobExecutor


// -[SCJobExecutor initWithBackgroundTaskWrapper:qos:]
// Type encoding: @28@0:8@16I24
// Implementation: 0x1006f1804

// -[SCJobExecutor setUserJobProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cb65f4

// -[SCJobExecutor clearUserJobProviders]
// Type encoding: v16@0:8
// Implementation: 0x1008a97cc

// -[SCJobExecutor setSystemJobProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cb6624

// -[SCJobExecutor executeJobWithType:jobInput:jobInfo:wrapInBGProcessor:scope:queuePerformer:onComplete:]
// Type encoding: v64@0:8@16@24@32B40i44@48@?56
// Implementation: 0x106cb6654

// -[SCJobExecutor _executeJobProcessor:jobInput:jobInfo:jobTypeIdentifier:wrapInBGProcessor:scope:queuePerformer:onComplete:]
// Type encoding: v72@0:8@16@24@32@40B48i52@56@?64
// Implementation: 0x106cb695c

// -[SCJobExecutor shouldPostponeJobWithScope:]
// Type encoding: B20@0:8i16
// Implementation: 0x1006f4c14

// -[SCJobExecutor shouldPostponeAnyJob]
// Type encoding: B16@0:8
// Implementation: 0x1008a9920

// -[SCJobExecutor notifyJobProviderJobDeletion:jobInput:jobDeletionReason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106cb711c

// -[SCJobExecutor _jobProvidersWithScope:]
// Type encoding: @20@0:8i16
// Implementation: 0x106cb72a0

// -[SCJobExecutor _jobProviderWithType:scope:jobProviders:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x106cb72e8

// -[SCJobExecutor _jobTimeoutInSecondsWithJobConfig:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106cb7448

// -[SCJobExecutor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cb7470

@end
