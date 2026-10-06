// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQueuePerformer
// Superclass: NSObject
// Address: 0xadf8a0

@interface SCQueuePerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCQueuePerformer initWithGlobalQueue:]
// Type encoding: @20@0:8I16
// Implementation: 0x612af0

// -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:]
// Type encoding: @44@0:8@16I24@28Q36
// Implementation: 0x612c90

// -[SCQueuePerformer initQoSFixedPerformerWithLabelName:qualityOfService:queueType:context:reason:]
// Type encoding: @52@0:8@16I24@28Q36@44
// Implementation: 0x612d10

// -[SCQueuePerformer initWithLabelName:qualityOfService:queueType:context:adjustableQoS:]
// Type encoding: @48@0:8@16I24@28Q36B44
// Implementation: 0x612d18

// -[SCQueuePerformer _makeDispatchBlock:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x612f10

// -[SCQueuePerformer perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x61302c

// -[SCQueuePerformer performWithQoS:block:]
// Type encoding: v28@0:8I16@?20
// Implementation: 0x613068

// -[SCQueuePerformer performWithEnforcedInheritedQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x613070

// -[SCQueuePerformer performWithEnforcedBlockQoS:]
// Type encoding: v24@0:8@?16
// Implementation: 0x6130b0

// -[SCQueuePerformer performImmediatelyIfCurrentPerformer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x613130

// -[SCQueuePerformer perform:after:]
// Type encoding: v32@0:8@?16d24
// Implementation: 0x6131a8

// -[SCQueuePerformer performOnGroupNotification_DEPRECATED:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x6132e8

// -[SCQueuePerformer performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x61337c

// -[SCQueuePerformer performWithBarrier:]
// Type encoding: v24@0:8@?16
// Implementation: 0x613434

// -[SCQueuePerformer isCurrentPerformer]
// Type encoding: B16@0:8
// Implementation: 0x61349c

// -[SCQueuePerformer assertQueue]
// Type encoding: v16@0:8
// Implementation: 0x6134e8

// -[SCQueuePerformer assertNotQueue]
// Type encoding: v16@0:8
// Implementation: 0x6134ec

// -[SCQueuePerformer qualityOfService]
// Type encoding: I16@0:8
// Implementation: 0x6134f0

// -[SCQueuePerformer context]
// Type encoding: Q16@0:8
// Implementation: 0x6134f8

// -[SCQueuePerformer applicationContext]
// Type encoding: q16@0:8
// Implementation: 0x613500

// -[SCQueuePerformer stopThrottling]
// Type encoding: v16@0:8
// Implementation: 0x613508

// -[SCQueuePerformer startThrottling]
// Type encoding: v16@0:8
// Implementation: 0x613588

// -[SCQueuePerformer queue]
// Type encoding: @16@0:8
// Implementation: 0x613600

// -[SCQueuePerformer queue_FOR_UNIT_TESTING]
// Type encoding: @16@0:8
// Implementation: 0x6136a0

// -[SCQueuePerformer _setNewQueueWithFixedQoS:]
// Type encoding: v20@0:8I16
// Implementation: 0x613970

// -[SCQueuePerformer _performBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x613ad0

// -[SCQueuePerformer _performWithQoS:block:relativePriority:]
// Type encoding: v32@0:8I16@?20i28
// Implementation: 0x613b18

// -[SCQueuePerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x613b88

// +[SCQueuePerformer globalQueuePerformer:contextState:]
// Type encoding: @28@0:8I16@20
// Implementation: 0x6129ec

// +[SCQueuePerformer _userInteractivePerformer]
// Type encoding: @16@0:8
// Implementation: 0x6136c8

// +[SCQueuePerformer _userInitiatedPerformer]
// Type encoding: @16@0:8
// Implementation: 0x613750

// +[SCQueuePerformer _utilityPerformer]
// Type encoding: @16@0:8
// Implementation: 0x6137d8

// +[SCQueuePerformer _backgroundPerformer]
// Type encoding: @16@0:8
// Implementation: 0x613860

// +[SCQueuePerformer _defaultPerformer]
// Type encoding: @16@0:8
// Implementation: 0x6138e8

@end
