// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncBackgroundUploadScheduler
// Superclass: NSObject
// Address: 0x112b89ad8

@interface SCCloudSyncBackgroundUploadScheduler


// -[SCCloudSyncBackgroundUploadScheduler initWithDependencyProvider:dataObjectContext:dataVault:networker:thumbnailFileGenerator:networkConnectivityMonitor:experimentService:timeProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107eaa714

// -[SCCloudSyncBackgroundUploadScheduler scheduleBackgroundMediaUploadForOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eaa8d8

// -[SCCloudSyncBackgroundUploadScheduler _checkAndScheduleUploadForOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x107eaac94

// -[SCCloudSyncBackgroundUploadScheduler _logSchedulingResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x107eab324

// -[SCCloudSyncBackgroundUploadScheduler _scheduleCUPSBackgroundMediaUploadForAddSnapEntities:entry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eab47c

// -[SCCloudSyncBackgroundUploadScheduler _generateStepsWithInitialDBWriteResult:initialStepData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eabb58

// -[SCCloudSyncBackgroundUploadScheduler _startOrchestrationWithStepGenerationResult:initialStepData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107eabe00

// -[SCCloudSyncBackgroundUploadScheduler _processUploadSchedulingResult:analyticsType:snap:entry:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x107eac07c

// -[SCCloudSyncBackgroundUploadScheduler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107eac6b8

@end
