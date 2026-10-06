// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBackgroundTaskRegistration
// Superclass: NSObject
// Address: 0x112b301b8

@interface SCBackgroundTaskRegistration


// -[SCBackgroundTaskRegistration initWithGrapheneRegistry:grapheneFlusher:prefetchHandler:circumstanceEngine:perfLogger:backgroundTaskRegistrationSetting:backgroundTaskRegistrationQosSetting:]
// Type encoding: @72@0:8@16@24@32@40@48Q56Q64
// Implementation: 0x1009d1c3c

// -[SCBackgroundTaskRegistration registerBackgroundTaskWithBackgroundTaskRegistrationMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cbdc4c

// -[SCBackgroundTaskRegistration _postBackgroundWakeupNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cbdcfc

// -[SCBackgroundTaskRegistration handleExpiration:instanceKey:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x106cbe0a8

// -[SCBackgroundTaskRegistration submitBGTask]
// Type encoding: v16@0:8
// Implementation: 0x106cbe188

// -[SCBackgroundTaskRegistration _resubmitBGTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cbe2c8

// -[SCBackgroundTaskRegistration _triggerSourceWithBGTask:]
// Type encoding: q24@0:8@16
// Implementation: 0x106cbe448

// -[SCBackgroundTaskRegistration _timeIntervalInMinutesForTaskIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106cbe4c0

// -[SCBackgroundTaskRegistration _submitBackgroundProcessingTask]
// Type encoding: v16@0:8
// Implementation: 0x106cbe560

// -[SCBackgroundTaskRegistration _submitBackgroundAppRefreshTask]
// Type encoding: v16@0:8
// Implementation: 0x106cbe63c

// -[SCBackgroundTaskRegistration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cbe734

// +[SCBackgroundTaskRegistration SCBackgroundTaskRegistrationSettingFromInt:]
// Type encoding: Q20@0:8i16
// Implementation: 0x106cbe718

// +[SCBackgroundTaskRegistration SCBackgroundTaskRegistrationQosSettingFromInt:]
// Type encoding: Q20@0:8i16
// Implementation: 0x106cbe724

@end
