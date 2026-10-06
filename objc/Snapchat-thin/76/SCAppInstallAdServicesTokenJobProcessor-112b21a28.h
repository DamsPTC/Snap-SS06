// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppInstallAdServicesTokenJobProcessor
// Superclass: NSObject
// Address: 0x112b21a28

@interface SCAppInstallAdServicesTokenJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAppInstallAdServicesTokenJobProcessor initWithGrapheneRegistry:performer:applicationInstallLogger:preferences:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106bf1a74

// -[SCAppInstallAdServicesTokenJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x106bf1b70

// -[SCAppInstallAdServicesTokenJobProcessor deleteJobWithJobConfig:jobData:jobDeletionReason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106bf1b8c

// -[SCAppInstallAdServicesTokenJobProcessor _logFetchAttributionTokenWithSuccess:jobDeletionReason:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x106bf1bf4

// -[SCAppInstallAdServicesTokenJobProcessor _fetchAppleSearchAttributionTokenIfNeededOnComplete:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bf1d98

// -[SCAppInstallAdServicesTokenJobProcessor _fetchAppleSearchAttributionTokenOnComplete:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bf1dd0

// -[SCAppInstallAdServicesTokenJobProcessor _fetchAppleSearchAttributionTokenWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bf21f8

// -[SCAppInstallAdServicesTokenJobProcessor _logApplicationInstallWithAdServicesToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bf228c

// -[SCAppInstallAdServicesTokenJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bf2480

@end
