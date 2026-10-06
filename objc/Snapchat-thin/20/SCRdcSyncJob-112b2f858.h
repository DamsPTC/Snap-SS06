// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRdcSyncJob
// Superclass: NSObject
// Address: 0x112b2f858

@interface SCRdcSyncJob

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRdcSyncJob initWithJobScheduler:syncUploadService:graphene:syncListHandler:snapchattersDataFetching:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106cac560

// -[SCRdcSyncJob processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x106cac898

// -[SCRdcSyncJob startSyncJob]
// Type encoding: v16@0:8
// Implementation: 0x106cacbb0

// -[SCRdcSyncJob .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cacc10

// +[SCRdcSyncJob constructJobConfig]
// Type encoding: @16@0:8
// Implementation: 0x106cac720

@end
