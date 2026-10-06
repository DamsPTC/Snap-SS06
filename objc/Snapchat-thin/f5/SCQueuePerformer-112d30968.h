// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQueuePerformer
// Superclass: NSObject
// Address: 0x112d30968

@interface SCQueuePerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCQueuePerformer initWithGlobalQueue:]
// Type encoding: @20@0:8I16
// Implementation: 0x1000e7100

// -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:]
// Type encoding: @44@0:8@16I24@28Q36
// Implementation: 0x1000730ac

// -[SCQueuePerformer initQoSFixedPerformerWithLabelName:qualityOfService:queueType:context:reason:]
// Type encoding: @52@0:8@16I24@28Q36@44
// Implementation: 0x1000bb604

// -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:adjustableQoS:]
// Type encoding: @48@0:8@16I24@28Q36B44
// Implementation: 0x10007312c

// -[SCQueuePerformer _makeDispatchBlock:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x100073d58

// -[SCQueuePerformer perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100073d1c

// -[SCQueuePerformer performWithQoS:block:]
// Type encoding: v28@0:8I16@?20
// Implementation: 0x1008a8c38

// -[SCQueuePerformer performWithEnforcedInheritedQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10bcb85c4

// -[SCQueuePerformer performWithEnforcedBlockQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10bcb8604

// -[SCQueuePerformer performImmediatelyIfCurrentPerformer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1000e3258

// -[SCQueuePerformer perform:after:]
// Type encoding: v32@0:8@?16d24
// Implementation: 0x10058c42c

// -[SCQueuePerformer performOnGroupNotification_DEPRECATED:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10bcb86c0

// -[SCQueuePerformer performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1004086b4

// -[SCQueuePerformer performWithBarrier:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10010a380

// -[SCQueuePerformer isCurrentPerformer]
// Type encoding: B16@0:8
// Implementation: 0x1000e32d0

// -[SCQueuePerformer assertQueue]
// Type encoding: v16@0:8
// Implementation: 0x1002c4684

// -[SCQueuePerformer assertNotQueue]
// Type encoding: v16@0:8
// Implementation: 0x10bcb8754

// -[SCQueuePerformer qualityOfService]
// Type encoding: I16@0:8
// Implementation: 0x10bcb8758

// -[SCQueuePerformer context]
// Type encoding: Q16@0:8
// Implementation: 0x10bcb8760

// -[SCQueuePerformer applicationContext]
// Type encoding: q16@0:8
// Implementation: 0x100073988

// -[SCQueuePerformer stopThrottling]
// Type encoding: v16@0:8
// Implementation: 0x1000d7bbc

// -[SCQueuePerformer startThrottling]
// Type encoding: v16@0:8
// Implementation: 0x100a01f28

// -[SCQueuePerformer queue]
// Type encoding: @16@0:8
// Implementation: 0x1000d43a0

// -[SCQueuePerformer queue_FOR_UNIT_TESTING]
// Type encoding: @16@0:8
// Implementation: 0x10bcb8768

// -[SCQueuePerformer _setNewQueueWithFixedQoS:]
// Type encoding: v20@0:8I16
// Implementation: 0x100a01fe0

// -[SCQueuePerformer _performBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100073e50

// -[SCQueuePerformer _performWithQoS:block:relativePriority:]
// Type encoding: v32@0:8I16@?20i28
// Implementation: 0x1008a8c40

// -[SCQueuePerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1004e6470

// +[SCQueuePerformer globalQueuePerformer:contextState:]
// Type encoding: @28@0:8I16@20
// Implementation: 0x1000e6f74

// +[SCQueuePerformer _userInteractivePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1000e7078

// +[SCQueuePerformer _userInitiatedPerformer]
// Type encoding: @16@0:8
// Implementation: 0x1003e521c

// +[SCQueuePerformer _utilityPerformer]
// Type encoding: @16@0:8
// Implementation: 0x100262230

// +[SCQueuePerformer _backgroundPerformer]
// Type encoding: @16@0:8
// Implementation: 0x10bcb8790

// +[SCQueuePerformer _defaultPerformer]
// Type encoding: @16@0:8
// Implementation: 0x100c641f4

@end
