// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdRetriableRequestManager
// Superclass: NSObject
// Address: 0x112aa5248

@interface SCAdRetriableRequestManager

// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: jobTypeIdentifier; attributes: T@"NSString",C,N,V_jobTypeIdentifier
// Property: keyToCallbackInvokerMapping; attributes: T@"NSMutableDictionary",C,N,V_keyToCallbackInvokerMapping
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdRetriableRequestManager initWithAdConfigProvider:adConfigProviderV2:docObjectContext:jobScheduler:performer:requestManager:lifecycleTracker:timProvider:trackFunnelEventTracker:userAdIdProvider:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105e7b88c

// -[SCAdRetriableRequestManager submitRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105e7bad8

// -[SCAdRetriableRequestManager cancelRequests]
// Type encoding: v16@0:8
// Implementation: 0x105e7bc40

// -[SCAdRetriableRequestManager processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x105e7bca4

// -[SCAdRetriableRequestManager deleteJobWithJobConfig:jobData:jobDeletionReason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105e7c05c

// -[SCAdRetriableRequestManager _submitRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105e7c0ec

// -[SCAdRetriableRequestManager _firstAttemptSucceededWithKey:request:attemptCount:response:data:successBlock:]
// Type encoding: v64@0:8@16@24Q32@40@48@?56
// Implementation: 0x105e7c578

// -[SCAdRetriableRequestManager _submitJob:request:attemptCount:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24Q32@?40@?48
// Implementation: 0x105e7c6a8

// -[SCAdRetriableRequestManager _submitNetworkRequest:attemptCount:successBlock:failureBlock:]
// Type encoding: v48@0:8@16q24@?32@?40
// Implementation: 0x105e7cac8

// -[SCAdRetriableRequestManager _submitNetworkRequestWithRetroJob:retriableRequest:attemptCount:onComplete:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x105e7cd10

// -[SCAdRetriableRequestManager _onJobSuccess:request:response:data:requestStartTimestamp:attemptCount:completion:]
// Type encoding: v72@0:8@16@24@32@40d48q56@?64
// Implementation: 0x105e7d004

// -[SCAdRetriableRequestManager _onJobError:request:response:error:requestStartTimestamp:attemptCount:completion:]
// Type encoding: v72@0:8@16@24@32@40d48q56@?64
// Implementation: 0x105e7d170

// -[SCAdRetriableRequestManager _invokerWithKey:deleteKey:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105e7d3c0

// -[SCAdRetriableRequestManager _updateInvokerWithKey:state:]
// Type encoding: v28@0:8@16I24
// Implementation: 0x105e7d464

// -[SCAdRetriableRequestManager _deleteInvokerWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e7d50c

// -[SCAdRetriableRequestManager _deleteAdTrackRetriableMetadataWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e7d56c

// -[SCAdRetriableRequestManager _updateAdTrackRetriableMetadataWithKey:state:]
// Type encoding: v28@0:8@16I24
// Implementation: 0x105e7d65c

// -[SCAdRetriableRequestManager performer]
// Type encoding: @16@0:8
// Implementation: 0x105e7d794

// -[SCAdRetriableRequestManager setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e7d79c

// -[SCAdRetriableRequestManager jobTypeIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e7d7cc

// -[SCAdRetriableRequestManager setJobTypeIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e7d7d4

// -[SCAdRetriableRequestManager keyToCallbackInvokerMapping]
// Type encoding: @16@0:8
// Implementation: 0x105e7d7dc

// -[SCAdRetriableRequestManager setKeyToCallbackInvokerMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e7d7e4

// -[SCAdRetriableRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e7d7ec

@end
