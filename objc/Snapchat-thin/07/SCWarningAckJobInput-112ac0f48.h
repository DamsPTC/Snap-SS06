// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWarningAckJobInput
// Superclass: NSObject
// Address: 0x112ac0f48

@interface SCWarningAckJobInput

// Property: warningId; attributes: T@"NSString",R,C,N,V_warningId
// Property: warningType; attributes: Ti,R,N,V_warningType
// Property: acknowledgedAtTs; attributes: Tq,R,N,V_acknowledgedAtTs
// Property: createdAtTs; attributes: Tq,R,N,V_createdAtTs
// Property: lastModifiedVersion; attributes: Tq,R,N,V_lastModifiedVersion

// -[SCWarningAckJobInput initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x106054ec8

// -[SCWarningAckJobInput initWithWarningId:warningType:acknowledgedAtTs:createdAtTs:lastModifiedVersion:]
// Type encoding: @52@0:8@16i24q28q36q44
// Implementation: 0x106054fa0

// -[SCWarningAckJobInput copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106055044

// -[SCWarningAckJobInput encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106055068

// -[SCWarningAckJobInput hash]
// Type encoding: Q16@0:8
// Implementation: 0x106055104

// -[SCWarningAckJobInput isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10605518c

// -[SCWarningAckJobInput warningId]
// Type encoding: @16@0:8
// Implementation: 0x10605525c

// -[SCWarningAckJobInput warningType]
// Type encoding: i16@0:8
// Implementation: 0x106055264

// -[SCWarningAckJobInput acknowledgedAtTs]
// Type encoding: q16@0:8
// Implementation: 0x10605526c

// -[SCWarningAckJobInput createdAtTs]
// Type encoding: q16@0:8
// Implementation: 0x106055274

// -[SCWarningAckJobInput lastModifiedVersion]
// Type encoding: q16@0:8
// Implementation: 0x10605527c

// -[SCWarningAckJobInput .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106055284

@end
