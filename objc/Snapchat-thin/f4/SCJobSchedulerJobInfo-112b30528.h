// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCJobSchedulerJobInfo
// Superclass: SCDocObject
// Address: 0x112b30528

@interface SCJobSchedulerJobInfo

// Property: uuid; attributes: T@"NSString",R,C,N,V_uuid
// Property: type; attributes: T@"NSString",R,C,N,V_type
// Property: identifier; attributes: T@"NSString",R,C,N,V_identifier
// Property: state; attributes: TI,R,N,V_state
// Property: submittedTimestamp; attributes: Td,R,N,V_submittedTimestamp
// Property: scheduledTimestamp; attributes: Td,R,N,V_scheduledTimestamp
// Property: config; attributes: T@"NSData",R,C,N,V_config
// Property: input; attributes: T@"NSData",R,C,N,V_input
// Property: attemptCount; attributes: Ti,R,N,V_attemptCount

// -[SCJobSchedulerJobInfo initWithUuid:type:identifier:state:submittedTimestamp:scheduledTimestamp:config:input:attemptCount:]
// Type encoding: @80@0:8@16@24@32I40d44d52@60@68i76
// Implementation: 0x106cc2784

// -[SCJobSchedulerJobInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106cc2920

// -[SCJobSchedulerJobInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x106cc2944

// -[SCJobSchedulerJobInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106cc2a50

// -[SCJobSchedulerJobInfo uuid]
// Type encoding: @16@0:8
// Implementation: 0x106cc2c10

// -[SCJobSchedulerJobInfo type]
// Type encoding: @16@0:8
// Implementation: 0x106cc2c20

// -[SCJobSchedulerJobInfo identifier]
// Type encoding: @16@0:8
// Implementation: 0x106cc2c30

// -[SCJobSchedulerJobInfo state]
// Type encoding: I16@0:8
// Implementation: 0x106cc2c40

// -[SCJobSchedulerJobInfo submittedTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x106cc2c50

// -[SCJobSchedulerJobInfo scheduledTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x106cc2c60

// -[SCJobSchedulerJobInfo config]
// Type encoding: @16@0:8
// Implementation: 0x106cc2c70

// -[SCJobSchedulerJobInfo input]
// Type encoding: @16@0:8
// Implementation: 0x106cc2c80

// -[SCJobSchedulerJobInfo attemptCount]
// Type encoding: i16@0:8
// Implementation: 0x106cc2c90

// -[SCJobSchedulerJobInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cc2ca0

// +[SCJobSchedulerJobInfo table]
// Type encoding: r*16@0:8
// Implementation: 0x106cc3318

// +[SCJobSchedulerJobInfo immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x106cc3324

// +[SCJobSchedulerJobInfo objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x106cc3684

@end
