// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCJobQueue
// Superclass: NSObject
// Address: 0x112b30028

@interface SCJobQueue


// -[SCJobQueue initWithSystemDocObjectContext:enableCacheForJobInfo:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1006f16d0

// -[SCJobQueue setUserDocObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a91cc

// -[SCJobQueue jobExistsWithUUID:scope:]
// Type encoding: B28@0:8@16i24
// Implementation: 0x106cb74b8

// -[SCJobQueue jobExistsWithType:jobSubtypeIdentifier:scope:]
// Type encoding: B36@0:8@16@24i32
// Implementation: 0x106cb74ec

// -[SCJobQueue fetchAllJobs]
// Type encoding: @16@0:8
// Implementation: 0x106cb75a4

// -[SCJobQueue fetchAllJobsForScope:]
// Type encoding: @20@0:8i16
// Implementation: 0x106cb7650

// -[SCJobQueue fetchJobWithUUID:scope:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x106cb76b0

// -[SCJobQueue enqueueJobWithInput:jobConfig:queue:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106cb7730

// -[SCJobQueue deleteJobWithType:jobSubtypeIdentifier:scope:queue:onComplete:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106cb7f14

// -[SCJobQueue deleteJobWithUUID:scope:queue:onComplete:]
// Type encoding: v44@0:8@16i24@28@?36
// Implementation: 0x106cb84b8

// -[SCJobQueue updateJobScheduledTimeWithUUID:scheduledTime:attemptCount:scope:queue:onComplete:]
// Type encoding: v56@0:8@16d24i32i36@40@?48
// Implementation: 0x106cb8960

// -[SCJobQueue _docObjectContextWithScope:]
// Type encoding: @20@0:8i16
// Implementation: 0x106cb8dfc

// -[SCJobQueue _getErrorCodeWhenTransactionFails:scope:]
// Type encoding: Q28@0:8Q16i24
// Implementation: 0x106cb8e48

// -[SCJobQueue _isUserSessionAlive]
// Type encoding: B16@0:8
// Implementation: 0x106cb8e80

// -[SCJobQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cb8eb0

@end
