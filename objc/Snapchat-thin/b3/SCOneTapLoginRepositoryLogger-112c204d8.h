// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginRepositoryLogger
// Superclass: NSObject
// Address: 0x112c204d8

@interface SCOneTapLoginRepositoryLogger


// -[SCOneTapLoginRepositoryLogger initWithUserNotTrackedLogger:grapheneRegistry:installServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10af49c40

// -[SCOneTapLoginRepositoryLogger logRecordLoadAttempt]
// Type encoding: v16@0:8
// Implementation: 0x10af49d0c

// -[SCOneTapLoginRepositoryLogger logRecordLoadErrorWithStatus:]
// Type encoding: v20@0:8i16
// Implementation: 0x10af49d74

// -[SCOneTapLoginRepositoryLogger logRecordLoadSuccessWithNumberOfAccounts:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10af49df0

// -[SCOneTapLoginRepositoryLogger logRecordReadSuccess:experimentId:userId:hasToken:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10af49e6c

// -[SCOneTapLoginRepositoryLogger logRecordCopiedSuccess:experimentId:userId:hasToken:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10af4a018

// -[SCOneTapLoginRepositoryLogger logRecordStoreAttempt:experimentId:userId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10af4a1c4

// -[SCOneTapLoginRepositoryLogger logRecordStoreErrorWithStatus:userId:experimentId:hasToken:]
// Type encoding: v40@0:8i16@20@28B36
// Implementation: 0x10af4a28c

// -[SCOneTapLoginRepositoryLogger logRecordStoreSuccessWithNumberOfAccounts:userId:studyName:experimentId:hasToken:]
// Type encoding: v52@0:8Q16@24@32@40B48
// Implementation: 0x10af4a358

// -[SCOneTapLoginRepositoryLogger _logOtlKeychainWrittenWithExperimentId:hasToken:status:]
// Type encoding: v32@0:8@16B24i28
// Implementation: 0x10af4a45c

// -[SCOneTapLoginRepositoryLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af4a5d4

@end
