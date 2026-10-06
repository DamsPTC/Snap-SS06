// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRdcDeltaSyncProcessor
// Superclass: NSObject
// Address: 0x112b2f8f8

@interface SCRdcDeltaSyncProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRdcDeltaSyncProcessor initWithUserSyncListHandler:crashLogger:graphene:syncUploadService:configProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100c07300

// -[SCRdcDeltaSyncProcessor type]
// Type encoding: @16@0:8
// Implementation: 0x106cad1fc

// -[SCRdcDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c13d2c

// -[SCRdcDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x106cad224

// -[SCRdcDeltaSyncProcessor _devicePropertyParseValueFromDeltaSyncValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x106caf034

// -[SCRdcDeltaSyncProcessor _serializeObject:propertyType:becomesStaleAt:value:]
// Type encoding: @48@0:8@16q24Q32@40
// Implementation: 0x106caf410

// -[SCRdcDeltaSyncProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106caf748

@end
