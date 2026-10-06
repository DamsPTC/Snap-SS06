// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestManagerRunningTaskState
// Superclass: NSObject
// Address: 0x112c723c8

@interface SCRequestManagerRunningTaskState

// Property: totalRequestConcurrencyReceivingData; attributes: Tq,V_totalRequestConcurrencyReceivingData
// Property: downloadRequestConcurrency; attributes: Tq,V_downloadRequestConcurrency
// Property: metadataRequestConcurrency; attributes: Tq,V_metadataRequestConcurrency
// Property: totalRequestConcurrencySendingData; attributes: Tq,V_totalRequestConcurrencySendingData
// Property: uploadRequestConcurrency; attributes: Tq,V_uploadRequestConcurrency
// Property: analyticsRequestConcurrency; attributes: Tq,V_analyticsRequestConcurrency
// Property: analyticsV2RequestConcurrency; attributes: Tq,V_analyticsV2RequestConcurrency
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRequestManagerRunningTaskState init]
// Type encoding: @16@0:8
// Implementation: 0x1000e0994

// -[SCRequestManagerRunningTaskState numOfAnalyticTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275c70

// -[SCRequestManagerRunningTaskState numOfMetadataTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275c78

// -[SCRequestManagerRunningTaskState numOfUploadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275c80

// -[SCRequestManagerRunningTaskState numOfSmallDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275c88

// -[SCRequestManagerRunningTaskState numOfLargeDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275c90

// -[SCRequestManagerRunningTaskState numOfBatchSmallDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275c98

// -[SCRequestManagerRunningTaskState numOfLargeDLTasksInContext:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1005aa7cc

// -[SCRequestManagerRunningTaskState numOfRunningInContextDownloadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275ca0

// -[SCRequestManagerRunningTaskState numOfRunningLargeInContextDownloadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b275ca8

// -[SCRequestManagerRunningTaskState startRunningTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b275cb0

// -[SCRequestManagerRunningTaskState finishRunningTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b275cb8

// -[SCRequestManagerRunningTaskState addContext:toTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b275cc0

// -[SCRequestManagerRunningTaskState removeContext:toTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b275cc8

// -[SCRequestManagerRunningTaskState reset]
// Type encoding: v16@0:8
// Implementation: 0x10b275cd0

// -[SCRequestManagerRunningTaskState startRequest:requestType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10068d788

// -[SCRequestManagerRunningTaskState startReceivingDataForRequest:requestType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008910ac

// -[SCRequestManagerRunningTaskState startSendingDataForRequest:requestType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10078cb08

// -[SCRequestManagerRunningTaskState finishRequest:requestType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1008a0f8c

// -[SCRequestManagerRunningTaskState _calculateAverageConcurrencyForRequest:withFinishTimestamp:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1008a11c8

// -[SCRequestManagerRunningTaskState _calculateAverageTransmitConcurrencyForRequest:withFinishTimestamp:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1008a1800

// -[SCRequestManagerRunningTaskState _calculateAverageConcurrencyForRequest:withFinishTimestamp:includeTTFB:]
// Type encoding: @36@0:8@16d24B32
// Implementation: 0x1008a11d0

// -[SCRequestManagerRunningTaskState _updateRequestConcurrencyWithRequestType:requestStart:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x100891634

// -[SCRequestManagerRunningTaskState totalRequestConcurrencyReceivingData]
// Type encoding: q16@0:8
// Implementation: 0x100891828

// -[SCRequestManagerRunningTaskState setTotalRequestConcurrencyReceivingData:]
// Type encoding: v24@0:8q16
// Implementation: 0x100891830

// -[SCRequestManagerRunningTaskState downloadRequestConcurrency]
// Type encoding: q16@0:8
// Implementation: 0x10b275e78

// -[SCRequestManagerRunningTaskState setDownloadRequestConcurrency:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b275e80

// -[SCRequestManagerRunningTaskState metadataRequestConcurrency]
// Type encoding: q16@0:8
// Implementation: 0x100891838

// -[SCRequestManagerRunningTaskState setMetadataRequestConcurrency:]
// Type encoding: v24@0:8q16
// Implementation: 0x100891840

// -[SCRequestManagerRunningTaskState totalRequestConcurrencySendingData]
// Type encoding: q16@0:8
// Implementation: 0x10b275e88

// -[SCRequestManagerRunningTaskState setTotalRequestConcurrencySendingData:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b275e90

// -[SCRequestManagerRunningTaskState uploadRequestConcurrency]
// Type encoding: q16@0:8
// Implementation: 0x10b275e98

// -[SCRequestManagerRunningTaskState setUploadRequestConcurrency:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b275ea0

// -[SCRequestManagerRunningTaskState analyticsRequestConcurrency]
// Type encoding: q16@0:8
// Implementation: 0x10b275ea8

// -[SCRequestManagerRunningTaskState setAnalyticsRequestConcurrency:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b275eb0

// -[SCRequestManagerRunningTaskState analyticsV2RequestConcurrency]
// Type encoding: q16@0:8
// Implementation: 0x10b275eb8

// -[SCRequestManagerRunningTaskState setAnalyticsV2RequestConcurrency:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b275ec0

// -[SCRequestManagerRunningTaskState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b275ec8

@end
