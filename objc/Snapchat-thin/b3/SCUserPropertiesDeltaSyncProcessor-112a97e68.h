// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserPropertiesDeltaSyncProcessor
// Superclass: NSObject
// Address: 0x112a97e68

@interface SCUserPropertiesDeltaSyncProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserPropertiesDeltaSyncProcessor initWithRepository:supConfig:userId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c06868

// -[SCUserPropertiesDeltaSyncProcessor type]
// Type encoding: @16@0:8
// Implementation: 0x105c7db1c

// -[SCUserPropertiesDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c13dd0

// -[SCUserPropertiesDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x105c7db48

// -[SCUserPropertiesDeltaSyncProcessor _processDeleteOfItemKeys:transactionContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c7dd54

// -[SCUserPropertiesDeltaSyncProcessor _processInsertUpdateOfKey:withValue:version:transactionContext:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x105c7de2c

// -[SCUserPropertiesDeltaSyncProcessor logInDeltaSyncGroupKeys]
// Type encoding: @16@0:8
// Implementation: 0x105c7e040

// -[SCUserPropertiesDeltaSyncProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c7e150

@end
