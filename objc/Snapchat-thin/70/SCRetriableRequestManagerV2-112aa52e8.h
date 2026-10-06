// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRetriableRequestManagerV2
// Superclass: NSObject
// Address: 0x112aa52e8

@interface SCRetriableRequestManagerV2

// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: jobTypeIdentifier; attributes: T@"NSString",R,N,V_jobTypeIdentifier
// Property: shouldRetryBlock; attributes: T@?,C,N,V_shouldRetryBlock
// Property: shouldPersistBlock; attributes: T@?,C,N,V_shouldPersistBlock
// Property: retryBackoffBlock; attributes: T@?,C,N,V_retryBackoffBlock
// Property: maxRetryRuntimeSeconds; attributes: Td,R,N
// Property: maxRetryRuntimeSecondsBackground; attributes: Td,R,N
// Property: retryIntervalSeconds; attributes: Td,R,N
// Property: maxRetryDelaySeconds; attributes: Td,R,N
// Property: backoffFailureThreshold; attributes: Td,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRetriableRequestManagerV2 initWithCategory:jobScheduler:requestManager:adConfigProvider:adConfigProviderV2:grapheneRegistry:requestPreparer:lifecycleTracker:trackFunnelEventTracker:userAdIdProvider:]
// Type encoding: @96@0:8q16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105e7df90

// -[SCRetriableRequestManagerV2 processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x105e7e23c

// -[SCRetriableRequestManagerV2 prepareRequest:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e7e604

// -[SCRetriableRequestManagerV2 _executeJob:attemptCount:request:onComplete:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x105e7e624

// -[SCRetriableRequestManagerV2 _onJobSuccess:request:networkRequest:response:data:requestStartTimestamp:attemptCount:completion:]
// Type encoding: v80@0:8@16@24@32@40@48d56q64@?72
// Implementation: 0x105e7ea44

// -[SCRetriableRequestManagerV2 _jobProcessResultToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x105e7ebd4

// -[SCRetriableRequestManagerV2 _logRequest:result:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105e7ec00

// -[SCRetriableRequestManagerV2 _onJobError:request:networkRequest:response:error:requestStartTimestamp:attemptCount:completion:]
// Type encoding: v80@0:8@16@24@32@40@48d56q64@?72
// Implementation: 0x105e7ed84

// -[SCRetriableRequestManagerV2 _logFatalFailure:response:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e7f0ec

// -[SCRetriableRequestManagerV2 _logJobTiming:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e7f2b4

// -[SCRetriableRequestManagerV2 _reportAdLifecycleTrackAttemptEventWithRetriableRequest:requestStartTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105e7f380

// -[SCRetriableRequestManagerV2 _reportAdLifecycleTrackEventWithRetriableRequest:withAttempt:success:requestStartTimestamp:retroJob:]
// Type encoding: v52@0:8@16Q24B32d36@44
// Implementation: 0x105e7f70c

// -[SCRetriableRequestManagerV2 deleteJobWithJobConfig:jobData:jobDeletionReason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105e7f968

// -[SCRetriableRequestManagerV2 _onJobDeleted:jobDeletionReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105e7fac4

// -[SCRetriableRequestManagerV2 _onJobCompleted:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105e7fb28

// -[SCRetriableRequestManagerV2 _logJobDeletedWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x105e7fbac

// -[SCRetriableRequestManagerV2 submitRequest:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x105e7fc9c

// -[SCRetriableRequestManagerV2 _submitRequest:callbackInvoker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e7fe88

// -[SCRetriableRequestManagerV2 _submitJob:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e80130

// -[SCRetriableRequestManagerV2 _handleJobSubmission:config:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105e8047c

// -[SCRetriableRequestManagerV2 _logJobSuccessByPersist:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e804ec

// -[SCRetriableRequestManagerV2 _logMissingCallback:]
// Type encoding: v24@0:8q16
// Implementation: 0x105e805b8

// -[SCRetriableRequestManagerV2 _logJobAdded:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e80644

// -[SCRetriableRequestManagerV2 submitRequest:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105e807e8

// -[SCRetriableRequestManagerV2 clearPersistedRequests]
// Type encoding: v16@0:8
// Implementation: 0x105e8097c

// -[SCRetriableRequestManagerV2 shouldRetryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x105e80a00

// -[SCRetriableRequestManagerV2 maxRetryRuntimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x105e80a5c

// -[SCRetriableRequestManagerV2 maxRetryRuntimeSecondsBackground]
// Type encoding: d16@0:8
// Implementation: 0x105e80a78

// -[SCRetriableRequestManagerV2 retryIntervalSeconds]
// Type encoding: d16@0:8
// Implementation: 0x105e80a94

// -[SCRetriableRequestManagerV2 maxRetryDelaySeconds]
// Type encoding: d16@0:8
// Implementation: 0x105e80ab0

// -[SCRetriableRequestManagerV2 backoffFailureThreshold]
// Type encoding: d16@0:8
// Implementation: 0x105e80acc

// -[SCRetriableRequestManagerV2 retryBackoffBlock]
// Type encoding: @?16@0:8
// Implementation: 0x105e80ae8

// -[SCRetriableRequestManagerV2 setRetryBackoffBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e80af0

// -[SCRetriableRequestManagerV2 shouldPersistBlock]
// Type encoding: @?16@0:8
// Implementation: 0x105e80af8

// -[SCRetriableRequestManagerV2 setShouldPersistBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e80b00

// -[SCRetriableRequestManagerV2 setShouldRetryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105e80b08

// -[SCRetriableRequestManagerV2 jobTypeIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e80b10

// -[SCRetriableRequestManagerV2 performer]
// Type encoding: @16@0:8
// Implementation: 0x105e80b18

// -[SCRetriableRequestManagerV2 setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e80b20

// -[SCRetriableRequestManagerV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e80b50

@end
