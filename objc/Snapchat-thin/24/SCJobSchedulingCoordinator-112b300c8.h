// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCJobSchedulingCoordinator
// Superclass: NSObject
// Address: 0x112b300c8

@interface SCJobSchedulingCoordinator


// -[SCJobSchedulingCoordinator initWithJobQueue:jobExecutor:connectivity:applicationState:batteryState:batteryLevel:queuePerformer:grapheneRegistry:grapheneFlusher:perfLogger:backgroundJobsToBlock:appRefreshJobTypeIdAllowListString:enableJobCompletionGrapheneBgFlush:]
// Type encoding: @116@0:8@16@24q32@40q48f56@60@68@76@84@92@100@108
// Implementation: 0x1006f1914

// -[SCJobSchedulingCoordinator submitJobWithInput:jobConfig:queue:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106cb9f2c

// -[SCJobSchedulingCoordinator cancelJobWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106cba31c

// -[SCJobSchedulingCoordinator jobExistsWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106cba51c

// -[SCJobSchedulingCoordinator runningJobsWithQueue:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106cba600

// -[SCJobSchedulingCoordinator scheduleBatchJob:batchStartedCallback:batchCompletionCallback:backgroundTriggerSource:]
// Type encoding: v48@0:8@?16@?24@?32@40
// Implementation: 0x106cba910

// -[SCJobSchedulingCoordinator networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x1006f4b88

// -[SCJobSchedulingCoordinator appForegrounded]
// Type encoding: v16@0:8
// Implementation: 0x106cbad28

// -[SCJobSchedulingCoordinator appBackgrounded]
// Type encoding: v16@0:8
// Implementation: 0x106cbad4c

// -[SCJobSchedulingCoordinator batteryStateDidChange:batteryLevel:]
// Type encoding: v28@0:8q16f24
// Implementation: 0x106cbad50

// -[SCJobSchedulingCoordinator userJobProvidersDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1008a9898

// -[SCJobSchedulingCoordinator systemJobProvidersDidChange]
// Type encoding: v16@0:8
// Implementation: 0x106cbad5c

// -[SCJobSchedulingCoordinator onCriticalSectionStarted]
// Type encoding: v16@0:8
// Implementation: 0x106cbad60

// -[SCJobSchedulingCoordinator onCriticalSectionEnded]
// Type encoding: v16@0:8
// Implementation: 0x106cbad6c

// -[SCJobSchedulingCoordinator _onEnqueueJobCompleteWithInfo:scope:error:queue:onComplete:]
// Type encoding: v52@0:8@16i24@28@36@?44
// Implementation: 0x106cbad74

// -[SCJobSchedulingCoordinator _scheduleJob:scope:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x106cbaeec

// -[SCJobSchedulingCoordinator _scheduleJobs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cbaf9c

// -[SCJobSchedulingCoordinator _scheduleJobs:jobScheduledCallback:backgroundTriggerSource:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x106cbafa8

// -[SCJobSchedulingCoordinator _scheduleJobs]
// Type encoding: v16@0:8
// Implementation: 0x1006f4b90

// -[SCJobSchedulingCoordinator _scheduleUserJobs]
// Type encoding: v16@0:8
// Implementation: 0x1006f4bb4

// -[SCJobSchedulingCoordinator _scheduleSystemJobs]
// Type encoding: v16@0:8
// Implementation: 0x1006f4c44

// -[SCJobSchedulingCoordinator _shouldExecuteJobWithJobInfo:jobConfig:jobTriggerReason:backgroundTriggerSource:]
// Type encoding: Q48@0:8@16@24^@32@40
// Implementation: 0x106cbb7a0

// -[SCJobSchedulingCoordinator _onJobExecutionCompleteWithJobInfo:jobConfig:jobResult:jobStartedTime:error:perfLoggerInstanceKey:]
// Type encoding: v60@0:8@16@24q32d40@48i56
// Implementation: 0x106cbbc6c

// -[SCJobSchedulingCoordinator _onUpdateJobScheduledTimeFinish:jobConfig:rescheduleDelay:error:jobStateUpdate:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x106cbc608

// -[SCJobSchedulingCoordinator _scheduleFutureJob:scope:delay:]
// Type encoding: v36@0:8@16i24d28
// Implementation: 0x106cbc720

// -[SCJobSchedulingCoordinator _onDeleteJobFinish:jobConfig:deletionReason:error:jobStateUpdate:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x106cbc878

// -[SCJobSchedulingCoordinator _deleteJob:jobConfig:deletionReason:jobStateUpdate:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x106cbc988

// -[SCJobSchedulingCoordinator triggerBackgroundPrefetch:completionHandler:notificaionContext:]
// Type encoding: v40@0:8q16@?24@32
// Implementation: 0x106cbcb84

// -[SCJobSchedulingCoordinator triggerBackgroundTaskExpired:graphene:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106cbd348

// -[SCJobSchedulingCoordinator _handleBachJobFinish:source:completionHandler:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x106cbd50c

// -[SCJobSchedulingCoordinator _shouldWrapJobInBG:]
// Type encoding: B24@0:8@16
// Implementation: 0x106cbd630

// -[SCJobSchedulingCoordinator _getDeprecatedAppState:]
// Type encoding: i20@0:8i16
// Implementation: 0x106cbd670

// -[SCJobSchedulingCoordinator applicationStateToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x106cbd694

// -[SCJobSchedulingCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cbd6c0

@end
