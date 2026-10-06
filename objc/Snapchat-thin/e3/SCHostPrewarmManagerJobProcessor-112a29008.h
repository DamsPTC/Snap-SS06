// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCHostPrewarmManagerJobProcessor
// Superclass: NSObject
// Address: 0x112a29008

@interface SCHostPrewarmManagerJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCHostPrewarmManagerJobProcessor initWithCOF:warmupManager:systemJobScheduler:systemNetworkServices:asyncQueue:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100a0d978

// -[SCHostPrewarmManagerJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1052fbb40

// -[SCHostPrewarmManagerJobProcessor triggerPrewarmOperation]
// Type encoding: v16@0:8
// Implementation: 0x100a0de90

// -[SCHostPrewarmManagerJobProcessor triggerPrewarmOnCofUpdates]
// Type encoding: v16@0:8
// Implementation: 0x100a0db18

// -[SCHostPrewarmManagerJobProcessor _submitColdStartJob]
// Type encoding: v16@0:8
// Implementation: 0x1052fbd68

// -[SCHostPrewarmManagerJobProcessor _submitForegroundJob]
// Type encoding: v16@0:8
// Implementation: 0x100a14160

// -[SCHostPrewarmManagerJobProcessor _submitForegroundNotifier]
// Type encoding: v16@0:8
// Implementation: 0x1052fc0c4

// -[SCHostPrewarmManagerJobProcessor _submitBackgroundNotifier]
// Type encoding: v16@0:8
// Implementation: 0x1052fc16c

// -[SCHostPrewarmManagerJobProcessor _submitNetworkReconnectJob]
// Type encoding: v16@0:8
// Implementation: 0x100a14268

// -[SCHostPrewarmManagerJobProcessor _parsePrewarmConfigAndSubmitPrewarmOperation]
// Type encoding: v16@0:8
// Implementation: 0x100a11050

// -[SCHostPrewarmManagerJobProcessor _triggerPrewarmOperationWithHostConfigs:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052fc35c

// -[SCHostPrewarmManagerJobProcessor _submitPingRequest:keySuffix:url:isRecurring:timeIntervalInSec:]
// Type encoding: v44@0:8i16@20@28B36i40
// Implementation: 0x1052fc5b0

// -[SCHostPrewarmManagerJobProcessor warmupManagerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100a13b48

// -[SCHostPrewarmManagerJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052fca04

@end
