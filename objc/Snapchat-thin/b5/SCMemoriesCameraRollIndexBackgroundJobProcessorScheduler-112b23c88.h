// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler
// Superclass: NSObject
// Address: 0x112b23c88

@interface SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler initWithCoreConfigProvider:photoPermissionCoordinator:applicationLifecycleEvents:grapheneRegistry:transactorProvider:localNotificationScheduler:boltDataUploader:snapIndexClientService:deviceIdentifierProvider:performer:blizzardLogger:modelProvider:memoriesVisualTagAnalyzer:memoriesLogger:fetchLimit:requestHeaderProvider:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x106c1e28c

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler scheduleJob:jobSubtypeIdentifier:completionCallback:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x106c1e67c

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler cancel]
// Type encoding: v16@0:8
// Implementation: 0x106c1e7bc

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _addCommandAndExecuteIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c1e888

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _executeFirstCommandIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106c1e8cc

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _didFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c1e944

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _scheduleIndexJob:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c1e994

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _scheduleUploadJob:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c1f034

// -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c1f5b0

@end
