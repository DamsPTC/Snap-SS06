// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLDefaultModelProvider
// Superclass: NSObject
// Address: 0x112a55018

@interface SCPercMLDefaultModelProvider

// Property: loggingDisabled; attributes: TB,N,V_loggingDisabled

// -[SCPercMLDefaultModelProvider initWithDeliverableModelHandleProvider:deliverableModelProvider:modelFactory:modelAPICache:perceptionConfigurationServices:logger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10568c6d8

// -[SCPercMLDefaultModelProvider didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x10568c9f8

// -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10568cacc

// -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:loadStrategy:completionQueue:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10568cadc

// -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10568cc90

// -[SCPercMLDefaultModelProvider modelWithKey:cofConfigKey:loadStrategy:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10568cc98

// -[SCPercMLDefaultModelProvider userDataForModelWithKey:cofConfigKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10568cfd4

// -[SCPercMLDefaultModelProvider setLoggingDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10568d14c

// -[SCPercMLDefaultModelProvider _setLoggingDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10568d238

// -[SCPercMLDefaultModelProvider _modelWithKey:cofConfigKey:loadStrategy:completionQueue:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x10568d240

// -[SCPercMLDefaultModelProvider _fetchModelWithModelKey:requestKey:handle:loadStrategy:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10568d468

// -[SCPercMLDefaultModelProvider _didCompleteFetchForDeliverableModelWithModelKey:requestKey:handle:loadStrategy:deliverableModel:error:]
// Type encoding: v64@0:8@16@24@32q40@48@56
// Implementation: 0x10568d6c0

// -[SCPercMLDefaultModelProvider _didCompleteRetrievalForModelWithModelKey:requestKey:modelId:model:error:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10568d920

// -[SCPercMLDefaultModelProvider _handleRetrievalForModelWithModelKey:requestKey:modelId:model:error:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10568dae4

// -[SCPercMLDefaultModelProvider _cachedModelForModelKey:handle:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10568dc00

// -[SCPercMLDefaultModelProvider _referenceCachedModelAPIForModelKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10568dd98

// -[SCPercMLDefaultModelProvider _cacheModelAPI:withModelKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10568deb4

// -[SCPercMLDefaultModelProvider _isModelODINBased:]
// Type encoding: B24@0:8@16
// Implementation: 0x10568df80

// -[SCPercMLDefaultModelProvider _referenceCacheModelAPI:withModelKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10568e0a8

// -[SCPercMLDefaultModelProvider _cacheCostForModelAPI:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10568e124

// -[SCPercMLDefaultModelProvider _clearCache]
// Type encoding: v16@0:8
// Implementation: 0x10568e170

// -[SCPercMLDefaultModelProvider _registerCompletionForModelKey:completion:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10568e178

// -[SCPercMLDefaultModelProvider _invokeCompletionsForRequestKey:modelKey:modelId:model:error:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10568e28c

// -[SCPercMLDefaultModelProvider _executeCompletion:modelKey:modelId:model:error:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10568e41c

// -[SCPercMLDefaultModelProvider loggingDisabled]
// Type encoding: B16@0:8
// Implementation: 0x10568e578

// -[SCPercMLDefaultModelProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10568e580

@end
